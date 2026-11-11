// Engine_0a80000.cpp (part 1 of 3): 195 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

struct TConstSetBitIterator_00a80020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80020& operator++();
};

TConstSetBitIterator_00a80020::TConstSetBitIterator_00a80020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80020
TConstSetBitIterator_00a80020& TConstSetBitIterator_00a80020::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80040& operator++();
};

TConstSetBitIterator_00a80040::TConstSetBitIterator_00a80040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80040
TConstSetBitIterator_00a80040& TConstSetBitIterator_00a80040::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80060& operator++();
};

TConstSetBitIterator_00a80060::TConstSetBitIterator_00a80060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80060
TConstSetBitIterator_00a80060& TConstSetBitIterator_00a80060::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a800b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a800b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a800b0& operator++();
};

TConstSetBitIterator_00a800b0::TConstSetBitIterator_00a800b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a800b0
TConstSetBitIterator_00a800b0& TConstSetBitIterator_00a800b0::operator++()
{
    It.Advance();
    return *this;
}

struct C { void sub_00a793f0(int); C *sub_00a804a0(int); };

// @baa 0x00a804a0
C *C::sub_00a804a0(int a) { sub_00a793f0(a); return this; }

struct C_00a804c0 {
    int sub_00a804c0(int);
    int sub_00a794b0(int, int);
};

// @baa 0x00a804c0
int C_00a804c0::sub_00a804c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a804c0 *)(this))->sub_00a794b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_00a804f0 {
    int sub_00a804f0(int);
    int sub_00a795e0(int, int);
};

// @baa 0x00a804f0
int C_00a804f0::sub_00a804f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a804f0 *)(this))->sub_00a795e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_00a80520 {
    int sub_00a80520(int);
    int sub_00a79710(int, int);
};

// @baa 0x00a80520
int C_00a80520::sub_00a80520(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a80520 *)(this))->sub_00a79710((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_00a80550 {
    int sub_00a80550(int);
    int sub_00a79840(int, int);
};

// @baa 0x00a80550
int C_00a80550::sub_00a80550(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a80550 *)(this))->sub_00a79840((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x5c + *param_1;
  }
  return 0;
}

struct C_00a80580 {
    int sub_00a80580(int);
    int sub_00a79930(int, int);
};

// @baa 0x00a80580
int C_00a80580::sub_00a80580(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a80580 *)(this))->sub_00a79930((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_00a805b0 {
    int sub_00a805b0(int);
    int sub_00a79a20(int, int);
};

// @baa 0x00a805b0
int C_00a805b0::sub_00a805b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a805b0 *)(this))->sub_00a79a20((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_00a805e0 {
    int sub_00a805e0(int);
    int sub_00a79b50(int, int);
};

// @baa 0x00a805e0
int C_00a805e0::sub_00a805e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a805e0 *)(this))->sub_00a79b50((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_00a80790 {
    int sub_00a80790(int);
    int sub_00a79c80(int, int);
};

// @baa 0x00a80790
int C_00a80790::sub_00a80790(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a80790 *)(this))->sub_00a79c80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_00a807c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a807c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a807c0& operator++();
};

TConstSetBitIterator_00a807c0::TConstSetBitIterator_00a807c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a807c0
TConstSetBitIterator_00a807c0& TConstSetBitIterator_00a807c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a807e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a807e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a807e0& operator++();
};

TConstSetBitIterator_00a807e0::TConstSetBitIterator_00a807e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a807e0
TConstSetBitIterator_00a807e0& TConstSetBitIterator_00a807e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80800& operator++();
};

TConstSetBitIterator_00a80800::TConstSetBitIterator_00a80800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80800
TConstSetBitIterator_00a80800& TConstSetBitIterator_00a80800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80820& operator++();
};

TConstSetBitIterator_00a80820::TConstSetBitIterator_00a80820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80820
TConstSetBitIterator_00a80820& TConstSetBitIterator_00a80820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80840& operator++();
};

TConstSetBitIterator_00a80840::TConstSetBitIterator_00a80840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80840
TConstSetBitIterator_00a80840& TConstSetBitIterator_00a80840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80860 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80860(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80860& operator++();
};

TConstSetBitIterator_00a80860::TConstSetBitIterator_00a80860(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80860
TConstSetBitIterator_00a80860& TConstSetBitIterator_00a80860::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80880& operator++();
};

TConstSetBitIterator_00a80880::TConstSetBitIterator_00a80880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80880
TConstSetBitIterator_00a80880& TConstSetBitIterator_00a80880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a808a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a808a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a808a0& operator++();
};

TConstSetBitIterator_00a808a0::TConstSetBitIterator_00a808a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a808a0
TConstSetBitIterator_00a808a0& TConstSetBitIterator_00a808a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a808c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a808c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a808c0& operator++();
};

TConstSetBitIterator_00a808c0::TConstSetBitIterator_00a808c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a808c0
TConstSetBitIterator_00a808c0& TConstSetBitIterator_00a808c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80910& operator++();
};

TConstSetBitIterator_00a80910::TConstSetBitIterator_00a80910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80910
TConstSetBitIterator_00a80910& TConstSetBitIterator_00a80910::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80960& operator++();
};

TConstSetBitIterator_00a80960::TConstSetBitIterator_00a80960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80960
TConstSetBitIterator_00a80960& TConstSetBitIterator_00a80960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a809b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a809b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a809b0& operator++();
};

TConstSetBitIterator_00a809b0::TConstSetBitIterator_00a809b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a809b0
TConstSetBitIterator_00a809b0& TConstSetBitIterator_00a809b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80a00& operator++();
};

TConstSetBitIterator_00a80a00::TConstSetBitIterator_00a80a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80a00
TConstSetBitIterator_00a80a00& TConstSetBitIterator_00a80a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80a50& operator++();
};

TConstSetBitIterator_00a80a50::TConstSetBitIterator_00a80a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80a50
TConstSetBitIterator_00a80a50& TConstSetBitIterator_00a80a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80aa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80aa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80aa0& operator++();
};

TConstSetBitIterator_00a80aa0::TConstSetBitIterator_00a80aa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80aa0
TConstSetBitIterator_00a80aa0& TConstSetBitIterator_00a80aa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a80af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a80af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a80af0& operator++();
};

TConstSetBitIterator_00a80af0::TConstSetBitIterator_00a80af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a80af0
TConstSetBitIterator_00a80af0& TConstSetBitIterator_00a80af0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00a818d0 { C_00a818d0* sub_00a818d0(void); };

// @baa 0x00a818d0
C_00a818d0* C_00a818d0::sub_00a818d0(void) { return this; }

struct C_00a818e0 {
    undefined4 sub_00a818e0(byte);
    int sub_00a75b10();
};

int sub_0053dfa0(...);
// @baa 0x00a818e0
undefined4 C_00a818e0::sub_00a818e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00a818e0 *)(((char *)this + 0x60)))->sub_00a75b10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a81910 {
    undefined4 sub_00a81910(byte);
};

int sub_00895470(void);
// @baa 0x00a81910
undefined4 C_00a81910::sub_00a81910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00895470();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a821e0 { int a, b, c; C_00a821e0(); };

// @baa 0x00a821e0
C_00a821e0::C_00a821e0() : a(0), b(0), c(0) {}

struct C_view {
    int sub_0073f030(int);
};

int sub_00a49bb0(...);
// @baa 0x00a82370
undefined4 UMorphWeightSequence::sub_00a82370(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  return uVar1;
}

struct A_00a823a0 { virtual void sub_00a8adf0(); char pad[16]; };

struct B_00a823a0 { virtual void sub_00a8adf0(); };

struct C_00a823a0 : A_00a823a0, B_00a823a0 { virtual void sub_00a8adf0(); C_00a823a0(); };

C_00a823a0::C_00a823a0() {}

// @baa 0x00a823a0
void C_00a823a0::sub_00a8adf0() {}

struct C_00a85510 {
    undefined4 sub_00a85510(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
// @baa 0x00a85510
undefined4 C_00a85510::sub_00a85510(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a85510 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xca);
  return uVar1;
}

struct A_00a85570 { virtual void sub_00a86aa0(); char pad[16]; };

struct B_00a85570 { virtual void sub_00a86aa0(); };

struct C_00a85570 : A_00a85570, B_00a85570 { virtual void sub_00a86aa0(); C_00a85570(); };

C_00a85570::C_00a85570() {}

// @baa 0x00a85570
void C_00a85570::sub_00a86aa0() {}

struct C_00a85780 {
    undefined4 sub_00a85780(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a85780
undefined4 C_00a85780::sub_00a85780(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a85780 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xca);
  return uVar1;
}

struct A_00a857e0 { virtual void sub_00a86ac0(); char pad[16]; };

struct B_00a857e0 { virtual void sub_00a86ac0(); };

struct C_00a857e0 : A_00a857e0, B_00a857e0 { virtual void sub_00a86ac0(); C_00a857e0(); };

C_00a857e0::C_00a857e0() {}

// @baa 0x00a857e0
void C_00a857e0::sub_00a86ac0() {}

struct C_00a859f0 {
    undefined4 sub_00a859f0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a859f0
undefined4 C_00a859f0::sub_00a859f0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a859f0 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xca);
  return uVar1;
}

struct A_00a85a50 { virtual void sub_00a86ae0(); char pad[16]; };

struct B_00a85a50 { virtual void sub_00a86ae0(); };

struct C_00a85a50 : A_00a85a50, B_00a85a50 { virtual void sub_00a86ae0(); C_00a85a50(); };

C_00a85a50::C_00a85a50() {}

// @baa 0x00a85a50
void C_00a85a50::sub_00a86ae0() {}

struct C_00a85ca0 {
    void sub_00a85ca0(undefined4);
};

int sub_007161b0(...);
// @baa 0x00a85ca0
void C_00a85ca0::sub_00a85ca0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_007161b0(param_2,param_1);
  sub_00716170(param_2,param_1 + 6);
  return;
}

struct A_00a85d40 { virtual void sub_00a86b00(); char pad[16]; };

struct B_00a85d40 { virtual void sub_00a86b00(); };

struct C_00a85d40 : A_00a85d40, B_00a85d40 { virtual void sub_00a86b00(); C_00a85d40(); };

C_00a85d40::C_00a85d40() {}

// @baa 0x00a85d40
void C_00a85d40::sub_00a86b00() {}

struct A_00a86010 { virtual void sub_00a86b20(); char pad[16]; };

struct B_00a86010 { virtual void sub_00a86b20(); };

struct C_00a86010 : A_00a86010, B_00a86010 { virtual void sub_00a86b20(); C_00a86010(); };

C_00a86010::C_00a86010() {}

// @baa 0x00a86010
void C_00a86010::sub_00a86b20() {}

struct C_00a86250 {
    void sub_00a86250(undefined4);
};

// @baa 0x00a86250
void C_00a86250::sub_00a86250(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00716170(param_2,param_1);
  return;
}

struct C_00a86270 {
    undefined4 sub_00a86270(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a86270
undefined4 C_00a86270::sub_00a86270(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a86270 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00a49bb0(param_2,param_1 + 0x54);
  sub_00716170(param_2,param_1 + 0xc0);
  sub_00716170(param_2,param_1 + 0xc6);
  sub_00716170(param_2,param_1 + 0xcc);
  sub_00716170(param_2,param_1 + 0xd2);
  return uVar1;
}

struct A_00a862e0 { virtual void sub_00a86b40(); char pad[16]; };

struct B_00a862e0 { virtual void sub_00a86b40(); };

struct C_00a862e0 : A_00a862e0, B_00a862e0 { virtual void sub_00a86b40(); C_00a862e0(); };

C_00a862e0::C_00a862e0() {}

// @baa 0x00a862e0
void C_00a862e0::sub_00a86b40() {}

struct C_00a86560 {
    void sub_00a86560(undefined4);
};

// @baa 0x00a86560
void C_00a86560::sub_00a86560(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1);
  sub_00716170(param_2,param_1 + 6);
  sub_007161b0(param_2,param_1 + 0xc);
  return;
}

struct A_00a86610 { virtual void sub_00a86b60(); char pad[16]; };

struct B_00a86610 { virtual void sub_00a86b60(); };

struct C_00a86610 : A_00a86610, B_00a86610 { virtual void sub_00a86b60(); C_00a86610(); };

C_00a86610::C_00a86610() {}

// @baa 0x00a86610
void C_00a86610::sub_00a86b60() {}

struct C_00a86880 {
    void sub_00a86880(undefined4);
};

// @baa 0x00a86880
void C_00a86880::sub_00a86880(undefined4 param_2)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  sub_00716170(param_2,param_1);
  sub_007161b0(param_2,param_1 + 6);
  iVar2 = param_1 + 0xc;
  iVar1 = 2;
  do {
    sub_007161b0(param_2,iVar2);
    iVar2 = iVar2 + 6;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  sub_00716170(param_2,param_1 + 0x18);
  sub_00716170(param_2,param_1 + 0x2a);
  sub_00716170(param_2,param_1 + 0x1e);
  sub_00716170(param_2,param_1 + 0x24);
  sub_00716170(param_2,param_1 + 0x30);
  return;
}

struct C_00a86900 {
    undefined4 sub_00a86900(undefined4);
    int sub_0073f030(int);
    int sub_00a86880(int);
};

// @baa 0x00a86900
undefined4 C_00a86900::sub_00a86900(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a86900 *)(this))->sub_0073f030(param_2);
  ((C_00a86900 *)(((char *)this + 0x4c)))->sub_00a86880(param_2);
  sub_00a49bb0(param_2,param_1 + 0x84);
  sub_00716170(param_2,param_1 + 0xf0);
  sub_00716170(param_2,param_1 + 0xf6);
  sub_00716170(param_2,param_1 + 0xfc);
  sub_00716170(param_2,param_1 + 0x102);
  return uVar1;
}

struct A_00a86970 { virtual void sub_00a86b80(); char pad[16]; };

struct B_00a86970 { virtual void sub_00a86b80(); };

struct C_00a86970 : A_00a86970, B_00a86970 { virtual void sub_00a86b80(); C_00a86970(); };

C_00a86970::C_00a86970() {}

// @baa 0x00a86970
void C_00a86970::sub_00a86b80() {}

struct C_00a86aa0 {
    undefined4 sub_00a86aa0(byte);
};

int sub_00a850e0(void);
// @baa 0x00a86aa0
undefined4 C_00a86aa0::sub_00a86aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a850e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a86ac0 {
    undefined4 sub_00a86ac0(byte);
};

int sub_00a85140(void);
// @baa 0x00a86ac0
undefined4 C_00a86ac0::sub_00a86ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a85140();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a86ae0 {
    undefined4 sub_00a86ae0(byte);
};

int sub_00a851a0(void);
// @baa 0x00a86ae0
undefined4 C_00a86ae0::sub_00a86ae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a851a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a86b00 {
    undefined4 sub_00a86b00(byte);
};

int sub_00a85200(void);
// @baa 0x00a86b00
undefined4 C_00a86b00::sub_00a86b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a85200();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a86b20 {
    undefined4 sub_00a86b20(byte);
};

int sub_00a85260(void);
// @baa 0x00a86b20
undefined4 C_00a86b20::sub_00a86b20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a85260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a86b40 {
    undefined4 sub_00a86b40(byte);
};

int sub_00a852c0(void);
// @baa 0x00a86b40
undefined4 C_00a86b40::sub_00a86b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a852c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a86b60 {
    undefined4 sub_00a86b60(byte);
};

int sub_00a85320(void);
// @baa 0x00a86b60
undefined4 C_00a86b60::sub_00a86b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a85320();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a86b80 {
    undefined4 sub_00a86b80(byte);
};

int sub_00a85380(void);
// @baa 0x00a86b80
undefined4 C_00a86b80::sub_00a86b80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a85380();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a883e0 {
    int sub_00a883e0(int);
    int sub_00a7feb0(int, int);
};

// @baa 0x00a883e0
int C_00a883e0::sub_00a883e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a883e0 *)(this))->sub_00a7feb0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x44;
  }
  return 0;
}

struct TConstSetBitIterator_00a88790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a88790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a88790& operator++();
};

TConstSetBitIterator_00a88790::TConstSetBitIterator_00a88790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a88790
TConstSetBitIterator_00a88790& TConstSetBitIterator_00a88790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a887e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a887e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a887e0& operator++();
};

TConstSetBitIterator_00a887e0::TConstSetBitIterator_00a887e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a887e0
TConstSetBitIterator_00a887e0& TConstSetBitIterator_00a887e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00a88a30 {
    undefined4 * sub_00a88a30(undefined4 *);
    int sub_00a80440(int);
};

// @baa 0x00a88a30
undefined4 * C_00a88a30::sub_00a88a30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00a88a30 *)(((char *)this + 4)))->sub_00a80440((int)(param_2 + 1));
  return param_1;
}

struct C_00a88a50 {
    undefined4 * sub_00a88a50(undefined4 *);
    int sub_00a793f0(int);
};

// @baa 0x00a88a50
undefined4 * C_00a88a50::sub_00a88a50(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00a88a50 *)(((char *)this + 4)))->sub_00a793f0((int)(param_2 + 1));
  return param_1;
}

struct TConstSetBitIterator_00a897f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a897f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a897f0& operator++();
};

TConstSetBitIterator_00a897f0::TConstSetBitIterator_00a897f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a897f0
TConstSetBitIterator_00a897f0& TConstSetBitIterator_00a897f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a89840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a89840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a89840& operator++();
};

TConstSetBitIterator_00a89840::TConstSetBitIterator_00a89840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a89840
TConstSetBitIterator_00a89840& TConstSetBitIterator_00a89840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a89890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a89890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a89890& operator++();
};

TConstSetBitIterator_00a89890::TConstSetBitIterator_00a89890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a89890
TConstSetBitIterator_00a89890& TConstSetBitIterator_00a89890::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a898e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a898e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a898e0& operator++();
};

TConstSetBitIterator_00a898e0::TConstSetBitIterator_00a898e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a898e0
TConstSetBitIterator_00a898e0& TConstSetBitIterator_00a898e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a89930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a89930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a89930& operator++();
};

TConstSetBitIterator_00a89930::TConstSetBitIterator_00a89930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a89930
TConstSetBitIterator_00a89930& TConstSetBitIterator_00a89930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a89980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a89980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a89980& operator++();
};

TConstSetBitIterator_00a89980::TConstSetBitIterator_00a89980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a89980
TConstSetBitIterator_00a89980& TConstSetBitIterator_00a89980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a899d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a899d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a899d0& operator++();
};

TConstSetBitIterator_00a899d0::TConstSetBitIterator_00a899d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a899d0
TConstSetBitIterator_00a899d0& TConstSetBitIterator_00a899d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a89a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a89a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a89a20& operator++();
};

TConstSetBitIterator_00a89a20::TConstSetBitIterator_00a89a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a89a20
TConstSetBitIterator_00a89a20& TConstSetBitIterator_00a89a20::operator++()
{
    It.Advance();
    return *this;
}

struct C_00a8a3a0 {
    undefined4 sub_00a8a3a0(byte);
};

int sub_00a8a330(void);
// @baa 0x00a8a3a0
undefined4 C_00a8a3a0::sub_00a8a3a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8a330();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_00a81c40();
};

// @baa 0x00a8a5c0
FGameplayObject * sub_00a8a5c0()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0x6c, 8);
    if (pObject)
        return pObject->sub_00a81c40();
    return 0;
}

struct FGameplayObject_00a8a700
{
    FGameplayObject_00a8a700 * sub_00a81d90();
};

// @baa 0x00a8a700
FGameplayObject_00a8a700 * sub_00a8a700()
{
    FGameplayObject_00a8a700 * pObject = (FGameplayObject_00a8a700 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a81d90();
    return 0;
}

struct FGameplayObject_00a8aa70
{
    FGameplayObject_00a8aa70 * sub_00a82030();
};

// @baa 0x00a8aa70
FGameplayObject_00a8aa70 * sub_00a8aa70()
{
    FGameplayObject_00a8aa70 * pObject = (FGameplayObject_00a8aa70 *)sub_0053df40(0x58, 8);
    if (pObject)
        return pObject->sub_00a82030();
    return 0;
}

struct FGameplayObject_00a8aa90
{
    FGameplayObject_00a8aa90 * sub_00a82080();
};

// @baa 0x00a8aa90
FGameplayObject_00a8aa90 * sub_00a8aa90()
{
    FGameplayObject_00a8aa90 * pObject = (FGameplayObject_00a8aa90 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_00a82080();
    return 0;
}

struct FGameplayObject_00a8aab0
{
    FGameplayObject_00a8aab0 * sub_00a820e0();
};

// @baa 0x00a8aab0
FGameplayObject_00a8aab0 * sub_00a8aab0()
{
    FGameplayObject_00a8aab0 * pObject = (FGameplayObject_00a8aab0 *)sub_0053df40(0x68, 8);
    if (pObject)
        return pObject->sub_00a820e0();
    return 0;
}

struct FGameplayObject_00a8ad60
{
    FGameplayObject_00a8ad60 * sub_00a823b0();
};

// @baa 0x00a8ad60
FGameplayObject_00a8ad60 * sub_00a8ad60()
{
    FGameplayObject_00a8ad60 * pObject = (FGameplayObject_00a8ad60 *)sub_0053df40(0xb8, 8);
    if (pObject)
        return pObject->sub_00a823b0();
    return 0;
}

struct C_00a8adf0 {
    undefined4 sub_00a8adf0(byte);
};

int sub_00a82460(void);
// @baa 0x00a8adf0
undefined4 C_00a8adf0::sub_00a8adf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a82460();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_00a8af70 { int sub_00a875a0(); };

struct C_00a8af70 { int a; C_00a8af70(S_00a8af70 *); };

// @baa 0x00a8af70
C_00a8af70::C_00a8af70(S_00a8af70 *s) : a(s->sub_00a875a0()) {}

struct S_00a8af90 { int sub_00a87600(); };

struct C_00a8af90 { int a; C_00a8af90(S_00a8af90 *); };

// @baa 0x00a8af90
C_00a8af90::C_00a8af90(S_00a8af90 *s) : a(s->sub_00a87600()) {}

struct S_00a8afb0 { int sub_00a87660(); };

struct C_00a8afb0 { int a; C_00a8afb0(S_00a8afb0 *); };

// @baa 0x00a8afb0
C_00a8afb0::C_00a8afb0(S_00a8afb0 *s) : a(s->sub_00a87660()) {}

struct S_00a8afd0 { int sub_00a876c0(); };

struct C_00a8afd0 { int a; C_00a8afd0(S_00a8afd0 *); };

// @baa 0x00a8afd0
C_00a8afd0::C_00a8afd0(S_00a8afd0 *s) : a(s->sub_00a876c0()) {}

struct FGameplayObject_00a8aff0
{
    FGameplayObject_00a8aff0 * sub_00a82750();
};

// @baa 0x00a8aff0
FGameplayObject_00a8aff0 * sub_00a8aff0()
{
    FGameplayObject_00a8aff0 * pObject = (FGameplayObject_00a8aff0 *)sub_0053df40(0xc0, 8);
    if (pObject)
        return pObject->sub_00a82750();
    return 0;
}

struct FGameplayObject_00a8b010
{
    FGameplayObject_00a8b010 * sub_00a82810();
};

// @baa 0x00a8b010
FGameplayObject_00a8b010 * sub_00a8b010()
{
    FGameplayObject_00a8b010 * pObject = (FGameplayObject_00a8b010 *)sub_0053df40(0xc0, 8);
    if (pObject)
        return pObject->sub_00a82810();
    return 0;
}

struct S_00a8b030 { int sub_00a87720(); };

struct C_00a8b030 { int a; C_00a8b030(S_00a8b030 *); };

// @baa 0x00a8b030
C_00a8b030::C_00a8b030(S_00a8b030 *s) : a(s->sub_00a87720()) {}

struct S_00a8b050 { int sub_00a87780(); };

struct C_00a8b050 { int a; C_00a8b050(S_00a8b050 *); };

// @baa 0x00a8b050
C_00a8b050::C_00a8b050(S_00a8b050 *s) : a(s->sub_00a87780()) {}

struct S_00a8b070 { int sub_00a877e0(); };

struct C_00a8b070 { int a; C_00a8b070(S_00a8b070 *); };

// @baa 0x00a8b070
C_00a8b070::C_00a8b070(S_00a8b070 *s) : a(s->sub_00a877e0()) {}

struct FGameplayObject_00a8b090
{
    FGameplayObject_00a8b090 * sub_00a828d0();
};

// @baa 0x00a8b090
FGameplayObject_00a8b090 * sub_00a8b090()
{
    FGameplayObject_00a8b090 * pObject = (FGameplayObject_00a8b090 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a828d0();
    return 0;
}

struct FGameplayObject_00a8b0b0
{
    FGameplayObject_00a8b0b0 * sub_00a82960();
};

// @baa 0x00a8b0b0
FGameplayObject_00a8b0b0 * sub_00a8b0b0()
{
    FGameplayObject_00a8b0b0 * pObject = (FGameplayObject_00a8b0b0 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82960();
    return 0;
}

struct FGameplayObject_00a8b0d0
{
    FGameplayObject_00a8b0d0 * sub_00a829f0();
};

// @baa 0x00a8b0d0
FGameplayObject_00a8b0d0 * sub_00a8b0d0()
{
    FGameplayObject_00a8b0d0 * pObject = (FGameplayObject_00a8b0d0 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a829f0();
    return 0;
}

struct FGameplayObject_00a8b0f0
{
    FGameplayObject_00a8b0f0 * sub_00a82a80();
};

// @baa 0x00a8b0f0
FGameplayObject_00a8b0f0 * sub_00a8b0f0()
{
    FGameplayObject_00a8b0f0 * pObject = (FGameplayObject_00a8b0f0 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82a80();
    return 0;
}

struct FGameplayObject_00a8b110
{
    FGameplayObject_00a8b110 * sub_00a82b10();
};

// @baa 0x00a8b110
FGameplayObject_00a8b110 * sub_00a8b110()
{
    FGameplayObject_00a8b110 * pObject = (FGameplayObject_00a8b110 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82b10();
    return 0;
}

struct FGameplayObject_00a8b130
{
    FGameplayObject_00a8b130 * sub_00a82ba0();
};

// @baa 0x00a8b130
FGameplayObject_00a8b130 * sub_00a8b130()
{
    FGameplayObject_00a8b130 * pObject = (FGameplayObject_00a8b130 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82ba0();
    return 0;
}

struct FGameplayObject_00a8b150
{
    FGameplayObject_00a8b150 * sub_00a82c30();
};

// @baa 0x00a8b150
FGameplayObject_00a8b150 * sub_00a8b150()
{
    FGameplayObject_00a8b150 * pObject = (FGameplayObject_00a8b150 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82c30();
    return 0;
}

struct FGameplayObject_00a8b170
{
    FGameplayObject_00a8b170 * sub_00a82cc0();
};

// @baa 0x00a8b170
FGameplayObject_00a8b170 * sub_00a8b170()
{
    FGameplayObject_00a8b170 * pObject = (FGameplayObject_00a8b170 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82cc0();
    return 0;
}

struct FGameplayObject_00a8b190
{
    FGameplayObject_00a8b190 * sub_00a82d50();
};

// @baa 0x00a8b190
FGameplayObject_00a8b190 * sub_00a8b190()
{
    FGameplayObject_00a8b190 * pObject = (FGameplayObject_00a8b190 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82d50();
    return 0;
}

struct FGameplayObject_00a8b1b0
{
    FGameplayObject_00a8b1b0 * sub_00a82de0();
};

// @baa 0x00a8b1b0
FGameplayObject_00a8b1b0 * sub_00a8b1b0()
{
    FGameplayObject_00a8b1b0 * pObject = (FGameplayObject_00a8b1b0 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82de0();
    return 0;
}

struct FGameplayObject_00a8b1d0
{
    FGameplayObject_00a8b1d0 * sub_00a82e70();
};

// @baa 0x00a8b1d0
FGameplayObject_00a8b1d0 * sub_00a8b1d0()
{
    FGameplayObject_00a8b1d0 * pObject = (FGameplayObject_00a8b1d0 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82e70();
    return 0;
}

struct FGameplayObject_00a8b1f0
{
    FGameplayObject_00a8b1f0 * sub_00a82f00();
};

// @baa 0x00a8b1f0
FGameplayObject_00a8b1f0 * sub_00a8b1f0()
{
    FGameplayObject_00a8b1f0 * pObject = (FGameplayObject_00a8b1f0 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82f00();
    return 0;
}

struct FGameplayObject_00a8b210
{
    FGameplayObject_00a8b210 * sub_00a82f90();
};

// @baa 0x00a8b210
FGameplayObject_00a8b210 * sub_00a8b210()
{
    FGameplayObject_00a8b210 * pObject = (FGameplayObject_00a8b210 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a82f90();
    return 0;
}

struct FGameplayObject_00a8b230
{
    FGameplayObject_00a8b230 * sub_00a83020();
};

// @baa 0x00a8b230
FGameplayObject_00a8b230 * sub_00a8b230()
{
    FGameplayObject_00a8b230 * pObject = (FGameplayObject_00a8b230 *)sub_0053df40(0x90, 8);
    if (pObject)
        return pObject->sub_00a83020();
    return 0;
}

struct S_00a8b270 { int sub_00a87840(); };

struct C_00a8b270 { int a; C_00a8b270(S_00a8b270 *); };

// @baa 0x00a8b270
C_00a8b270::C_00a8b270(S_00a8b270 *s) : a(s->sub_00a87840()) {}

struct S_00a8b290 { int sub_00a878a0(); };

struct C_00a8b290 { int a; C_00a8b290(S_00a8b290 *); };

// @baa 0x00a8b290
C_00a8b290::C_00a8b290(S_00a8b290 *s) : a(s->sub_00a878a0()) {}

struct S_00a8b2b0 { int sub_00a87900(); };

struct C_00a8b2b0 { int a; C_00a8b2b0(S_00a8b2b0 *); };

// @baa 0x00a8b2b0
C_00a8b2b0::C_00a8b2b0(S_00a8b2b0 *s) : a(s->sub_00a87900()) {}

struct S_00a8b2d0 { int sub_00a87960(); };

struct C_00a8b2d0 { int a; C_00a8b2d0(S_00a8b2d0 *); };

// @baa 0x00a8b2d0
C_00a8b2d0::C_00a8b2d0(S_00a8b2d0 *s) : a(s->sub_00a87960()) {}

struct S_00a8b2f0 { int sub_00a879c0(); };

struct C_00a8b2f0 { int a; C_00a8b2f0(S_00a8b2f0 *); };

// @baa 0x00a8b2f0
C_00a8b2f0::C_00a8b2f0(S_00a8b2f0 *s) : a(s->sub_00a879c0()) {}

struct S_00a8b310 { int sub_00a87a20(); };

struct C_00a8b310 { int a; C_00a8b310(S_00a8b310 *); };

// @baa 0x00a8b310
C_00a8b310::C_00a8b310(S_00a8b310 *s) : a(s->sub_00a87a20()) {}

struct S_00a8b330 { int sub_00a87a80(); };

struct C_00a8b330 { int a; C_00a8b330(S_00a8b330 *); };

// @baa 0x00a8b330
C_00a8b330::C_00a8b330(S_00a8b330 *s) : a(s->sub_00a87a80()) {}

struct S_00a8b350 { int sub_00a87ae0(); };

struct C_00a8b350 { int a; C_00a8b350(S_00a8b350 *); };

// @baa 0x00a8b350
C_00a8b350::C_00a8b350(S_00a8b350 *s) : a(s->sub_00a87ae0()) {}

struct S_00a8b370 { int sub_00a87b40(); };

struct C_00a8b370 { int a; C_00a8b370(S_00a8b370 *); };

// @baa 0x00a8b370
C_00a8b370::C_00a8b370(S_00a8b370 *s) : a(s->sub_00a87b40()) {}

struct S_00a8b390 { int sub_00a87ba0(); };

struct C_00a8b390 { int a; C_00a8b390(S_00a8b390 *); };

// @baa 0x00a8b390
C_00a8b390::C_00a8b390(S_00a8b390 *s) : a(s->sub_00a87ba0()) {}

struct S_00a8b3b0 { int sub_00a87c00(); };

struct C_00a8b3b0 { int a; C_00a8b3b0(S_00a8b3b0 *); };

// @baa 0x00a8b3b0
C_00a8b3b0::C_00a8b3b0(S_00a8b3b0 *s) : a(s->sub_00a87c00()) {}

struct S_00a8b3d0 { int sub_00a87c60(); };

struct C_00a8b3d0 { int a; C_00a8b3d0(S_00a8b3d0 *); };

// @baa 0x00a8b3d0
C_00a8b3d0::C_00a8b3d0(S_00a8b3d0 *s) : a(s->sub_00a87c60()) {}

struct S_00a8b3f0 { int sub_00a87cc0(); };

struct C_00a8b3f0 { int a; C_00a8b3f0(S_00a8b3f0 *); };

// @baa 0x00a8b3f0
C_00a8b3f0::C_00a8b3f0(S_00a8b3f0 *s) : a(s->sub_00a87cc0()) {}

struct S_00a8b410 { int sub_00a87d20(); };

struct C_00a8b410 { int a; C_00a8b410(S_00a8b410 *); };

// @baa 0x00a8b410
C_00a8b410::C_00a8b410(S_00a8b410 *s) : a(s->sub_00a87d20()) {}

struct S_00a8b430 { int sub_00a87d80(); };

struct C_00a8b430 { int a; C_00a8b430(S_00a8b430 *); };

// @baa 0x00a8b430
C_00a8b430::C_00a8b430(S_00a8b430 *s) : a(s->sub_00a87d80()) {}

struct S_00a8b450 { int sub_00a87de0(); };

struct C_00a8b450 { int a; C_00a8b450(S_00a8b450 *); };

// @baa 0x00a8b450
C_00a8b450::C_00a8b450(S_00a8b450 *s) : a(s->sub_00a87de0()) {}

struct FGameplayObject_00a8b470
{
    FGameplayObject_00a8b470 * sub_00a83140();
};

// @baa 0x00a8b470
FGameplayObject_00a8b470 * sub_00a8b470()
{
    FGameplayObject_00a8b470 * pObject = (FGameplayObject_00a8b470 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_00a83140();
    return 0;
}

struct FGameplayObject_00a8b490
{
    FGameplayObject_00a8b490 * sub_00a831a0();
};

// @baa 0x00a8b490
FGameplayObject_00a8b490 * sub_00a8b490()
{
    FGameplayObject_00a8b490 * pObject = (FGameplayObject_00a8b490 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_00a831a0();
    return 0;
}

struct S_00a8b550 { int sub_00a87e40(); };

struct C_00a8b550 { int a; C_00a8b550(S_00a8b550 *); };

// @baa 0x00a8b550
C_00a8b550::C_00a8b550(S_00a8b550 *s) : a(s->sub_00a87e40()) {}

struct S_00a8b570 { int sub_00a87ea0(); };

struct C_00a8b570 { int a; C_00a8b570(S_00a8b570 *); };

// @baa 0x00a8b570
C_00a8b570::C_00a8b570(S_00a8b570 *s) : a(s->sub_00a87ea0()) {}

struct S_00a8b610 { int sub_00a87f00(); };

struct C_00a8b610 { int a; C_00a8b610(S_00a8b610 *); };

// @baa 0x00a8b610
C_00a8b610::C_00a8b610(S_00a8b610 *s) : a(s->sub_00a87f00()) {}

struct S_00a8b630 { int sub_00a87f60(); };

struct C_00a8b630 { int a; C_00a8b630(S_00a8b630 *); };

// @baa 0x00a8b630
C_00a8b630::C_00a8b630(S_00a8b630 *s) : a(s->sub_00a87f60()) {}

struct S_00a8b650 { int sub_00a87fc0(); };

struct C_00a8b650 { int a; C_00a8b650(S_00a8b650 *); };

// @baa 0x00a8b650
C_00a8b650::C_00a8b650(S_00a8b650 *s) : a(s->sub_00a87fc0()) {}

struct S_00a8b670 { int sub_00a88020(); };

struct C_00a8b670 { int a; C_00a8b670(S_00a8b670 *); };

// @baa 0x00a8b670
C_00a8b670::C_00a8b670(S_00a8b670 *s) : a(s->sub_00a88020()) {}

struct S_00a8bb90 { int sub_00a88080(); };

struct C_00a8bb90 { int a; C_00a8bb90(S_00a8bb90 *); };

// @baa 0x00a8bb90
C_00a8bb90::C_00a8bb90(S_00a8bb90 *s) : a(s->sub_00a88080()) {}

struct S_00a8bbb0 { int sub_00a880e0(); };

struct C_00a8bbb0 { int a; C_00a8bbb0(S_00a8bbb0 *); };

// @baa 0x00a8bbb0
C_00a8bbb0::C_00a8bbb0(S_00a8bbb0 *s) : a(s->sub_00a880e0()) {}

struct S_00a8bbd0 { int sub_00a88140(); };

struct C_00a8bbd0 { int a; C_00a8bbd0(S_00a8bbd0 *); };

// @baa 0x00a8bbd0
C_00a8bbd0::C_00a8bbd0(S_00a8bbd0 *s) : a(s->sub_00a88140()) {}

struct S_00a8bbf0 { int sub_00a881a0(); };

struct C_00a8bbf0 { int a; C_00a8bbf0(S_00a8bbf0 *); };

// @baa 0x00a8bbf0
C_00a8bbf0::C_00a8bbf0(S_00a8bbf0 *s) : a(s->sub_00a881a0()) {}

struct S_00a8bc10 { int sub_00a88200(); };

struct C_00a8bc10 { int a; C_00a8bc10(S_00a8bc10 *); };

// @baa 0x00a8bc10
C_00a8bc10::C_00a8bc10(S_00a8bc10 *s) : a(s->sub_00a88200()) {}

struct S_00a8bd10 { int sub_00a88260(); };

struct C_00a8bd10 { int a; C_00a8bd10(S_00a8bd10 *); };

// @baa 0x00a8bd10
C_00a8bd10::C_00a8bd10(S_00a8bd10 *s) : a(s->sub_00a88260()) {}

struct S_00a8bd30 { int sub_00a882c0(); };

struct C_00a8bd30 { int a; C_00a8bd30(S_00a8bd30 *); };

// @baa 0x00a8bd30
C_00a8bd30::C_00a8bd30(S_00a8bd30 *s) : a(s->sub_00a882c0()) {}

struct S_00a8bd50 { int sub_00a88320(); };

struct C_00a8bd50 { int a; C_00a8bd50(S_00a8bd50 *); };

// @baa 0x00a8bd50
C_00a8bd50::C_00a8bd50(S_00a8bd50 *s) : a(s->sub_00a88320()) {}

struct S_00a8bd70 { int sub_00a88380(); };

struct C_00a8bd70 { int a; C_00a8bd70(S_00a8bd70 *); };

// @baa 0x00a8bd70
C_00a8bd70::C_00a8bd70(S_00a8bd70 *s) : a(s->sub_00a88380()) {}

struct C_00a8bd90 {
    undefined4 * sub_00a8bd90(undefined4);
    int sub_00a853e0(int);
};

extern undefined4 g_01fd0ac8;
extern undefined * g_01fd0ad0;
// @baa 0x00a8bd90
undefined4 * C_00a8bd90::sub_00a8bd90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8bd90 *)(this))->sub_00a853e0(param_2);
  *param_1 = (undefined4)(&g_01fd0ad0);
  param_1[5] = (undefined4)(&g_01fd0ac8);
  return param_1;
}

struct A_00a8bdb0 { virtual void sub_00a8c390(); char pad[16]; };

struct B_00a8bdb0 { virtual void sub_00a8c390(); };

struct C_00a8bdb0 : A_00a8bdb0, B_00a8bdb0 { virtual void sub_00a8c390(); C_00a8bdb0(); };

C_00a8bdb0::C_00a8bdb0() {}

// @baa 0x00a8bdb0
void C_00a8bdb0::sub_00a8c390() {}

struct C_00a8bdd0 {
    undefined4 * sub_00a8bdd0();
};

int sub_00a85580(void);
// @baa 0x00a8bdd0
undefined4 * C_00a8bdd0::sub_00a8bdd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a85580();
  *param_1 = (undefined4)(&g_01fd0ad0);
  param_1[5] = (undefined4)(&g_01fd0ac8);
  return param_1;
}

struct C_00a8bdf0 {
    undefined4 * sub_00a8bdf0(undefined4);
    int sub_00a853e0(int);
};

extern undefined4 g_01fd0af8;
extern undefined * g_01fd0b00;
// @baa 0x00a8bdf0
undefined4 * C_00a8bdf0::sub_00a8bdf0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8bdf0 *)(this))->sub_00a853e0(param_2);
  *param_1 = (undefined4)(&g_01fd0b00);
  param_1[5] = (undefined4)(&g_01fd0af8);
  return param_1;
}

struct A_00a8be10 { virtual void sub_00a8c3b0(); char pad[16]; };

struct B_00a8be10 { virtual void sub_00a8c3b0(); };

struct C_00a8be10 : A_00a8be10, B_00a8be10 { virtual void sub_00a8c3b0(); C_00a8be10(); };

C_00a8be10::C_00a8be10() {}

// @baa 0x00a8be10
void C_00a8be10::sub_00a8c3b0() {}

struct C_00a8be30 {
    undefined4 * sub_00a8be30();
};

// @baa 0x00a8be30
undefined4 * C_00a8be30::sub_00a8be30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a85580();
  *param_1 = (undefined4)(&g_01fd0b00);
  param_1[5] = (undefined4)(&g_01fd0af8);
  return param_1;
}

struct C_00a8be50 {
    undefined4 * sub_00a8be50(undefined4);
    int sub_00a85650(int);
};

extern undefined4 g_01fd0b28;
extern undefined * g_01fd0b30;
// @baa 0x00a8be50
undefined4 * C_00a8be50::sub_00a8be50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8be50 *)(this))->sub_00a85650(param_2);
  *param_1 = (undefined4)(&g_01fd0b30);
  param_1[5] = (undefined4)(&g_01fd0b28);
  return param_1;
}

struct A_00a8be70 { virtual void sub_00a8c3d0(); char pad[16]; };

struct B_00a8be70 { virtual void sub_00a8c3d0(); };

struct C_00a8be70 : A_00a8be70, B_00a8be70 { virtual void sub_00a8c3d0(); C_00a8be70(); };

C_00a8be70::C_00a8be70() {}

// @baa 0x00a8be70
void C_00a8be70::sub_00a8c3d0() {}

struct C_00a8be90 {
    undefined4 * sub_00a8be90();
};

int sub_00a857f0(void);
// @baa 0x00a8be90
undefined4 * C_00a8be90::sub_00a8be90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a857f0();
  *param_1 = (undefined4)(&g_01fd0b30);
  param_1[5] = (undefined4)(&g_01fd0b28);
  return param_1;
}

struct C_00a8beb0 {
    undefined4 * sub_00a8beb0(undefined4);
    int sub_00a85650(int);
};

extern undefined4 g_01fd0b58;
extern undefined * g_01fd0b60;
// @baa 0x00a8beb0
undefined4 * C_00a8beb0::sub_00a8beb0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8beb0 *)(this))->sub_00a85650(param_2);
  *param_1 = (undefined4)(&g_01fd0b60);
  param_1[5] = (undefined4)(&g_01fd0b58);
  return param_1;
}

struct A_00a8bed0 { virtual void sub_00a8c3f0(); char pad[16]; };

struct B_00a8bed0 { virtual void sub_00a8c3f0(); };

struct C_00a8bed0 : A_00a8bed0, B_00a8bed0 { virtual void sub_00a8c3f0(); C_00a8bed0(); };

C_00a8bed0::C_00a8bed0() {}

// @baa 0x00a8bed0
void C_00a8bed0::sub_00a8c3f0() {}

struct C_00a8bef0 {
    undefined4 * sub_00a8bef0();
};

// @baa 0x00a8bef0
undefined4 * C_00a8bef0::sub_00a8bef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a857f0();
  *param_1 = (undefined4)(&g_01fd0b60);
  param_1[5] = (undefined4)(&g_01fd0b58);
  return param_1;
}

struct C_00a8bf10 {
    undefined4 * sub_00a8bf10(undefined4);
    int sub_00a858c0(int);
};

extern undefined4 g_01fd0b88;
extern undefined * g_01fd0b90;
// @baa 0x00a8bf10
undefined4 * C_00a8bf10::sub_00a8bf10(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8bf10 *)(this))->sub_00a858c0(param_2);
  *param_1 = (undefined4)(&g_01fd0b90);
  param_1[5] = (undefined4)(&g_01fd0b88);
  return param_1;
}

struct A_00a8bf30 { virtual void sub_00a8c410(); char pad[16]; };

struct B_00a8bf30 { virtual void sub_00a8c410(); };

struct C_00a8bf30 : A_00a8bf30, B_00a8bf30 { virtual void sub_00a8c410(); C_00a8bf30(); };

C_00a8bf30::C_00a8bf30() {}

// @baa 0x00a8bf30
void C_00a8bf30::sub_00a8c410() {}

struct C_00a8bf50 {
    undefined4 * sub_00a8bf50();
};

int sub_00a85a60(void);
// @baa 0x00a8bf50
undefined4 * C_00a8bf50::sub_00a8bf50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a85a60();
  *param_1 = (undefined4)(&g_01fd0b90);
  param_1[5] = (undefined4)(&g_01fd0b88);
  return param_1;
}

struct C_00a8bf70 {
    undefined4 * sub_00a8bf70(undefined4);
    int sub_00a858c0(int);
};

extern undefined4 g_01fd0bb8;
extern undefined * g_01fd0bc0;
// @baa 0x00a8bf70
undefined4 * C_00a8bf70::sub_00a8bf70(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8bf70 *)(this))->sub_00a858c0(param_2);
  *param_1 = (undefined4)(&g_01fd0bc0);
  param_1[5] = (undefined4)(&g_01fd0bb8);
  return param_1;
}

struct A_00a8bf90 { virtual void sub_00a8c430(); char pad[16]; };

struct B_00a8bf90 { virtual void sub_00a8c430(); };

struct C_00a8bf90 : A_00a8bf90, B_00a8bf90 { virtual void sub_00a8c430(); C_00a8bf90(); };

C_00a8bf90::C_00a8bf90() {}

// @baa 0x00a8bf90
void C_00a8bf90::sub_00a8c430() {}

struct C_00a8bfb0 {
    undefined4 * sub_00a8bfb0();
};

// @baa 0x00a8bfb0
undefined4 * C_00a8bfb0::sub_00a8bfb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a85a60();
  *param_1 = (undefined4)(&g_01fd0bc0);
  param_1[5] = (undefined4)(&g_01fd0bb8);
  return param_1;
}

struct C_00a8bfd0 {
    undefined4 * sub_00a8bfd0(undefined4);
    int sub_00a85b30(int);
};

extern undefined4 g_01fd0be8;
extern undefined * g_01fd0bf0;
// @baa 0x00a8bfd0
undefined4 * C_00a8bfd0::sub_00a8bfd0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8bfd0 *)(this))->sub_00a85b30(param_2);
  *param_1 = (undefined4)(&g_01fd0bf0);
  param_1[5] = (undefined4)(&g_01fd0be8);
  return param_1;
}

struct A_00a8bff0 { virtual void sub_00a8c450(); char pad[16]; };

struct B_00a8bff0 { virtual void sub_00a8c450(); };

struct C_00a8bff0 : A_00a8bff0, B_00a8bff0 { virtual void sub_00a8c450(); C_00a8bff0(); };

C_00a8bff0::C_00a8bff0() {}

// @baa 0x00a8bff0
void C_00a8bff0::sub_00a8c450() {}

struct C_00a8c010 {
    undefined4 * sub_00a8c010();
};

int sub_00a85d50(void);
// @baa 0x00a8c010
undefined4 * C_00a8c010::sub_00a8c010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a85d50();
  *param_1 = (undefined4)(&g_01fd0bf0);
  param_1[5] = (undefined4)(&g_01fd0be8);
  return param_1;
}

struct C_00a8c030 {
    undefined4 * sub_00a8c030(undefined4);
    int sub_00a85b30(int);
};

extern undefined4 g_01fd0c18;
extern undefined * g_01fd0c20;
// @baa 0x00a8c030
undefined4 * C_00a8c030::sub_00a8c030(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c030 *)(this))->sub_00a85b30(param_2);
  *param_1 = (undefined4)(&g_01fd0c20);
  param_1[5] = (undefined4)(&g_01fd0c18);
  return param_1;
}

struct A_00a8c050 { virtual void sub_00a8c470(); char pad[16]; };

struct B_00a8c050 { virtual void sub_00a8c470(); };

struct C_00a8c050 : A_00a8c050, B_00a8c050 { virtual void sub_00a8c470(); C_00a8c050(); };

C_00a8c050::C_00a8c050() {}

// @baa 0x00a8c050
void C_00a8c050::sub_00a8c470() {}

struct C_00a8c070 {
    undefined4 * sub_00a8c070();
};

// @baa 0x00a8c070
undefined4 * C_00a8c070::sub_00a8c070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a85d50();
  *param_1 = (undefined4)(&g_01fd0c20);
  param_1[5] = (undefined4)(&g_01fd0c18);
  return param_1;
}

struct C_00a8c090 {
    undefined4 * sub_00a8c090(undefined4);
    int sub_00a85e30(int);
};

extern undefined4 g_01fd0c48;
extern undefined * g_01fd0c50;
// @baa 0x00a8c090
undefined4 * C_00a8c090::sub_00a8c090(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c090 *)(this))->sub_00a85e30(param_2);
  *param_1 = (undefined4)(&g_01fd0c50);
  param_1[5] = (undefined4)(&g_01fd0c48);
  return param_1;
}

struct A_00a8c0b0 { virtual void sub_00a8c490(); char pad[16]; };

struct B_00a8c0b0 { virtual void sub_00a8c490(); };

struct C_00a8c0b0 : A_00a8c0b0, B_00a8c0b0 { virtual void sub_00a8c490(); C_00a8c0b0(); };

C_00a8c0b0::C_00a8c0b0() {}

// @baa 0x00a8c0b0
void C_00a8c0b0::sub_00a8c490() {}

struct C_00a8c0d0 {
    undefined4 * sub_00a8c0d0();
};

int sub_00a86020(void);
// @baa 0x00a8c0d0
undefined4 * C_00a8c0d0::sub_00a8c0d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a86020();
  *param_1 = (undefined4)(&g_01fd0c50);
  param_1[5] = (undefined4)(&g_01fd0c48);
  return param_1;
}

struct C_00a8c0f0 {
    undefined4 * sub_00a8c0f0(undefined4);
    int sub_00a85e30(int);
};

extern undefined4 g_01fd0c78;
extern undefined * g_01fd0c80;
// @baa 0x00a8c0f0
undefined4 * C_00a8c0f0::sub_00a8c0f0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c0f0 *)(this))->sub_00a85e30(param_2);
  *param_1 = (undefined4)(&g_01fd0c80);
  param_1[5] = (undefined4)(&g_01fd0c78);
  return param_1;
}

struct A_00a8c110 { virtual void sub_00a8c4b0(); char pad[16]; };

struct B_00a8c110 { virtual void sub_00a8c4b0(); };

struct C_00a8c110 : A_00a8c110, B_00a8c110 { virtual void sub_00a8c4b0(); C_00a8c110(); };

C_00a8c110::C_00a8c110() {}

// @baa 0x00a8c110
void C_00a8c110::sub_00a8c4b0() {}

struct C_00a8c130 {
    undefined4 * sub_00a8c130();
};

// @baa 0x00a8c130
undefined4 * C_00a8c130::sub_00a8c130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a86020();
  *param_1 = (undefined4)(&g_01fd0c80);
  param_1[5] = (undefined4)(&g_01fd0c78);
  return param_1;
}

struct C_00a8c150 {
    undefined4 * sub_00a8c150(undefined4);
    int sub_00a86100(int);
};

extern undefined4 g_01fd0ca8;
extern undefined * g_01fd0cb0;
// @baa 0x00a8c150
undefined4 * C_00a8c150::sub_00a8c150(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c150 *)(this))->sub_00a86100(param_2);
  *param_1 = (undefined4)(&g_01fd0cb0);
  param_1[5] = (undefined4)(&g_01fd0ca8);
  return param_1;
}

struct A_00a8c170 { virtual void sub_00a8c4d0(); char pad[16]; };

struct B_00a8c170 { virtual void sub_00a8c4d0(); };

struct C_00a8c170 : A_00a8c170, B_00a8c170 { virtual void sub_00a8c4d0(); C_00a8c170(); };

C_00a8c170::C_00a8c170() {}

// @baa 0x00a8c170
void C_00a8c170::sub_00a8c4d0() {}

struct C_00a8c190 {
    undefined4 * sub_00a8c190();
};

int sub_00a862f0(void);
// @baa 0x00a8c190
undefined4 * C_00a8c190::sub_00a8c190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a862f0();
  *param_1 = (undefined4)(&g_01fd0cb0);
  param_1[5] = (undefined4)(&g_01fd0ca8);
  return param_1;
}

struct C_00a8c1b0 {
    undefined4 * sub_00a8c1b0(undefined4);
    int sub_00a86100(int);
};

extern undefined4 g_01fd0cd8;
extern undefined * g_01fd0ce0;
// @baa 0x00a8c1b0
undefined4 * C_00a8c1b0::sub_00a8c1b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c1b0 *)(this))->sub_00a86100(param_2);
  *param_1 = (undefined4)(&g_01fd0ce0);
  param_1[5] = (undefined4)(&g_01fd0cd8);
  return param_1;
}

struct A_00a8c1d0 { virtual void sub_00a8c4f0(); char pad[16]; };

struct B_00a8c1d0 { virtual void sub_00a8c4f0(); };

struct C_00a8c1d0 : A_00a8c1d0, B_00a8c1d0 { virtual void sub_00a8c4f0(); C_00a8c1d0(); };

C_00a8c1d0::C_00a8c1d0() {}

// @baa 0x00a8c1d0
void C_00a8c1d0::sub_00a8c4f0() {}

struct C_00a8c1f0 {
    undefined4 * sub_00a8c1f0();
};

// @baa 0x00a8c1f0
undefined4 * C_00a8c1f0::sub_00a8c1f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a862f0();
  *param_1 = (undefined4)(&g_01fd0ce0);
  param_1[5] = (undefined4)(&g_01fd0cd8);
  return param_1;
}

struct C_00a8c210 {
    undefined4 * sub_00a8c210(undefined4);
    int sub_00a863d0(int);
};

extern undefined4 g_01fd0d08;
extern undefined * g_01fd0d10;
// @baa 0x00a8c210
undefined4 * C_00a8c210::sub_00a8c210(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c210 *)(this))->sub_00a863d0(param_2);
  *param_1 = (undefined4)(&g_01fd0d10);
  param_1[5] = (undefined4)(&g_01fd0d08);
  return param_1;
}

struct A_00a8c230 { virtual void sub_00a8c510(); char pad[16]; };

struct B_00a8c230 { virtual void sub_00a8c510(); };

struct C_00a8c230 : A_00a8c230, B_00a8c230 { virtual void sub_00a8c510(); C_00a8c230(); };

C_00a8c230::C_00a8c230() {}

// @baa 0x00a8c230
void C_00a8c230::sub_00a8c510() {}

struct C_00a8c250 {
    undefined4 * sub_00a8c250();
};

int sub_00a86620(void);
// @baa 0x00a8c250
undefined4 * C_00a8c250::sub_00a8c250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a86620();
  *param_1 = (undefined4)(&g_01fd0d10);
  param_1[5] = (undefined4)(&g_01fd0d08);
  return param_1;
}

struct C_00a8c270 {
    undefined4 * sub_00a8c270(undefined4);
    int sub_00a863d0(int);
};

extern undefined4 g_01fd0d38;
extern undefined * g_01fd0d40;
// @baa 0x00a8c270
undefined4 * C_00a8c270::sub_00a8c270(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c270 *)(this))->sub_00a863d0(param_2);
  *param_1 = (undefined4)(&g_01fd0d40);
  param_1[5] = (undefined4)(&g_01fd0d38);
  return param_1;
}

struct A_00a8c290 { virtual void sub_00a8c530(); char pad[16]; };

struct B_00a8c290 { virtual void sub_00a8c530(); };

struct C_00a8c290 : A_00a8c290, B_00a8c290 { virtual void sub_00a8c530(); C_00a8c290(); };

C_00a8c290::C_00a8c290() {}

// @baa 0x00a8c290
void C_00a8c290::sub_00a8c530() {}

struct C_00a8c2b0 {
    undefined4 * sub_00a8c2b0();
};

// @baa 0x00a8c2b0
undefined4 * C_00a8c2b0::sub_00a8c2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a86620();
  *param_1 = (undefined4)(&g_01fd0d40);
  param_1[5] = (undefined4)(&g_01fd0d38);
  return param_1;
}

struct C_00a8c2d0 {
    undefined4 * sub_00a8c2d0(undefined4);
    int sub_00a86710(int);
};

extern undefined4 g_01fd0d68;
extern undefined * g_01fd0d70;
// @baa 0x00a8c2d0
undefined4 * C_00a8c2d0::sub_00a8c2d0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c2d0 *)(this))->sub_00a86710(param_2);
  *param_1 = (undefined4)(&g_01fd0d70);
  param_1[5] = (undefined4)(&g_01fd0d68);
  return param_1;
}

struct A_00a8c2f0 { virtual void sub_00a8c550(); char pad[16]; };

struct B_00a8c2f0 { virtual void sub_00a8c550(); };

struct C_00a8c2f0 : A_00a8c2f0, B_00a8c2f0 { virtual void sub_00a8c550(); C_00a8c2f0(); };

C_00a8c2f0::C_00a8c2f0() {}

// @baa 0x00a8c2f0
void C_00a8c2f0::sub_00a8c550() {}

struct C_00a8c310 {
    undefined4 * sub_00a8c310();
};

int sub_00a86980(void);
// @baa 0x00a8c310
undefined4 * C_00a8c310::sub_00a8c310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a86980();
  *param_1 = (undefined4)(&g_01fd0d70);
  param_1[5] = (undefined4)(&g_01fd0d68);
  return param_1;
}

struct C_00a8c330 {
    undefined4 * sub_00a8c330(undefined4);
    int sub_00a86710(int);
};

extern undefined4 g_01fd0d98;
extern undefined * g_01fd0da0;
// @baa 0x00a8c330
undefined4 * C_00a8c330::sub_00a8c330(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a8c330 *)(this))->sub_00a86710(param_2);
  *param_1 = (undefined4)(&g_01fd0da0);
  param_1[5] = (undefined4)(&g_01fd0d98);
  return param_1;
}

struct A_00a8c350 { virtual void sub_00a8c570(); char pad[16]; };

struct B_00a8c350 { virtual void sub_00a8c570(); };

struct C_00a8c350 : A_00a8c350, B_00a8c350 { virtual void sub_00a8c570(); C_00a8c350(); };

C_00a8c350::C_00a8c350() {}

// @baa 0x00a8c350
void C_00a8c350::sub_00a8c570() {}

struct C_00a8c370 {
    undefined4 * sub_00a8c370();
};

// @baa 0x00a8c370
undefined4 * C_00a8c370::sub_00a8c370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00a86980();
  *param_1 = (undefined4)(&g_01fd0da0);
  param_1[5] = (undefined4)(&g_01fd0d98);
  return param_1;
}

struct C_00a8cea0 {
    undefined4 sub_00a8cea0(byte);
};

int sub_00a8c590(void);
// @baa 0x00a8cea0
undefined4 C_00a8cea0::sub_00a8cea0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c590();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8cec0 {
    undefined4 sub_00a8cec0(byte);
};

int sub_00a8c610(void);
// @baa 0x00a8cec0
undefined4 C_00a8cec0::sub_00a8cec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c610();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f050 {
    undefined4 sub_00a8f050(byte);
};

int sub_00a8c690(void);
// @baa 0x00a8f050
undefined4 C_00a8f050::sub_00a8f050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c690();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f070 {
    undefined4 sub_00a8f070(byte);
};

int sub_00a8c710(void);
// @baa 0x00a8f070
undefined4 C_00a8f070::sub_00a8f070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c710();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f090 {
    undefined4 sub_00a8f090(byte);
};

int sub_00a8c790(void);
// @baa 0x00a8f090
undefined4 C_00a8f090::sub_00a8f090(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f0b0 {
    undefined4 sub_00a8f0b0(byte);
};

int sub_00a8c810(void);
// @baa 0x00a8f0b0
undefined4 C_00a8f0b0::sub_00a8f0b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c810();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f0d0 {
    undefined4 sub_00a8f0d0(byte);
};

int sub_00a8c890(void);
// @baa 0x00a8f0d0
undefined4 C_00a8f0d0::sub_00a8f0d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c890();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f0f0 {
    undefined4 sub_00a8f0f0(byte);
};

int sub_00a8c910(void);
// @baa 0x00a8f0f0
undefined4 C_00a8f0f0::sub_00a8f0f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c910();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f110 {
    undefined4 sub_00a8f110(byte);
};

int sub_00a8c990(void);
// @baa 0x00a8f110
undefined4 C_00a8f110::sub_00a8f110(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8c990();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a8f130 {
    undefined4 sub_00a8f130(byte);
};

int sub_00a8ca10(void);
// @baa 0x00a8f130
undefined4 C_00a8f130::sub_00a8f130(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a8ca10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
