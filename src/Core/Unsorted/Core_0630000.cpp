// Core_0630000.cpp (part 1 of 2): 31 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct Obj {
    int x;
};

struct Sub {
    void sub_00546020(Obj* p);
};

struct C {
    char pad[0x38];
    Sub s;
    void sub_00630a90(Obj a1, int a2);
};

// @baa 0x00630a90
void C::sub_00630a90(Obj a1, int a2)
{
    s.sub_00546020(&a1);
}

struct C_00630d90 {
    int sub_00630d90(int);
};

// @baa 0x00630d90
int C_00630d90::sub_00630d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00630da0 {
    int sub_00630da0();
};

// @baa 0x00630da0
int C_00630da0::sub_00630da0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00630dc0 {
    int sub_00630dc0(int);
};

// @baa 0x00630dc0
int C_00630dc0::sub_00630dc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00630dd0 {
    int sub_00630dd0(int);
};

// @baa 0x00630dd0
int C_00630dd0::sub_00630dd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00630de0 {
    int sub_00630de0();
};

// @baa 0x00630de0
int C_00630de0::sub_00630de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00630df0 {
    int sub_00630df0();
};

// @baa 0x00630df0
int C_00630df0::sub_00630df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct T_00632830 { BYTE b[2]; };

// @baa 0x00632830
template T_00632830& TArray<T_00632830>::Last(INT);

struct S {
    TArray<BYTE> Items; // 0x00
    BYTE* sub_00632890(INT Index);
};

// @baa 0x00632890
BYTE* S::sub_00632890(INT Index)
{
    return &Items(Index);
}

struct C_006328d0 {
    int sub_006328d0();
};

// @baa 0x006328d0
int C_006328d0::sub_006328d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + 0xc + param_1[5] * 0x24;
}

struct S_006328e0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_006328e0(INT Index);
};

// @baa 0x006328e0
QWORD* S_006328e0::sub_006328e0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[24]; };

struct S_00632930 {
    TArray<E> Items; // 0x00
    E* sub_00632930(INT Index);
};

// @baa 0x00632930
E* S_00632930::sub_00632930(INT Index)
{
    return &Items(Index);
}

// @baa 0x00632980
void __stdcall sub_00632980(int a0, int a1) {  }

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

struct TConstSetBitIterator_00632990 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00632990(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00632990& operator++();
};

TConstSetBitIterator_00632990::TConstSetBitIterator_00632990(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00632990
TConstSetBitIterator_00632990& TConstSetBitIterator_00632990::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00632a20
void __stdcall sub_00632a20(int a0, int a1) {  }

struct TConstSetBitIterator_00632b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00632b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00632b10& operator++();
};

TConstSetBitIterator_00632b10::TConstSetBitIterator_00632b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00632b10
TConstSetBitIterator_00632b10& TConstSetBitIterator_00632b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00632b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00632b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00632b60& operator++();
};

TConstSetBitIterator_00632b60::TConstSetBitIterator_00632b60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00632b60
TConstSetBitIterator_00632b60& TConstSetBitIterator_00632b60::operator++()
{
    It.Advance();
    return *this;
}

struct S_00632c50 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00632c50(INT Index);
};

// @baa 0x00632c50
DWORD* S_00632c50::sub_00632c50(INT Index)
{
    return &Items(Index);
}

extern TArray<int> g_026a1ca4;
struct C_00639900 {
    int sub_00639900();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00639900
int C_00639900::sub_00639900()
{
    return g_026a1ca4(Index);
}

struct C_view {
    int sub_0054d220(int, int);
};

// @baa 0x00639960
int UPackageMap::sub_00639960(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_0054d220((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_00639990 {
    int sub_00639990(int);
    int sub_006373c0(int, int);
};

// @baa 0x00639990
int C_00639990::sub_00639990(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00639990 *)(this))->sub_006373c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct C_view_006399c0 {
    int sub_006375d0(int, int);
};

// @baa 0x006399c0
undefined4 UObject::sub_006399c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_006399c0 *)(this))->sub_006375d0(param_2, param_3);
  return param_1;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x006399e0
undefined4 UObject::sub_006399e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0063b7e0 {
    undefined4 sub_0063b7e0(byte);
};

int sub_00638850(void);
// @baa 0x0063b7e0
undefined4 C_0063b7e0::sub_0063b7e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00638850();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0063f010 {
    int m_00;
    void sub_006373c0(int *, int);
    int sub_0063f010(int);
};

// @baa 0x0063f010
int C_0063f010::sub_0063f010(int i)
{
    sub_006373c0(&i, i);
    if (i != -1)
    {
        int p = i * 36 + m_00;
        if (p != 0)
            return p + 12;
    }
    return 0;
}

struct C_view_0063f050 {
    int sub_006375d0(int, int);
};

// @baa 0x0063f050
int UObject::sub_0063f050(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_0063f050 *)(this))->sub_006375d0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_0063f130 {
    void sub_0063f130();
    int sub_00639a00(int, int);
};

// @baa 0x0063f130
void C_0063f130::sub_0063f130(void)
{
    int param_1 = (int)this;
  ((C_0063f130 *)(this))->sub_00639a00(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_0063f1e0 {
    int sub_00639b70(int, int);
};

// @baa 0x0063f1e0
int UObject::sub_0063f1e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0063f1e0 *)(this))->sub_00639b70(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0063f240 {
    int sub_00639ac0(int);
};

// @baa 0x0063f240
int UObject::sub_0063f240(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_0063f240 *)(this))->sub_00639ac0(param_2);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return param_1;
}

int sub_00639e10(void);
// @baa 0x0063f260
undefined4 UObject::sub_0063f260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00639e10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00639d50();
// @baa 0x0063f280
void sub_0063f280(void) { sub_00639d50(); }
