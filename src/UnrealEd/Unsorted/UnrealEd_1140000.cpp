// UnrealEd_1140000.cpp: 25 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_021c1d7c[];
// @baa 0x01140a50
int sub_01140a50(void) { return (int)g_021c1d7c; }

struct A_01140a60 { virtual void sub_0114a280(); char pad[320]; };

struct B_01140a60 { virtual void sub_0114a280(); };

struct C_01140a60 : A_01140a60, B_01140a60 { virtual void sub_0114a280(); C_01140a60(); };

C_01140a60::C_01140a60() {}

// @baa 0x01140a60
void C_01140a60::sub_0114a280() {}

struct A_01140a70 { virtual void sub_0114a280(); char pad[324]; };

struct B_01140a70 { virtual void sub_0114a280(); };

struct C_01140a70 : A_01140a70, B_01140a70 { virtual void sub_0114a280(); C_01140a70(); };

C_01140a70::C_01140a70() {}

// @baa 0x01140a70
void C_01140a70::sub_0114a280() {}

struct C {
    undefined4 sub_01141230(byte);
};

int sub_0053dfa0(...);
int sub_01137c20(void);
// @baa 0x01141230
undefined4 C::sub_01141230(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01137c20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01141910 { void sub_011412b0(); void sub_01141910(int); };

// @baa 0x01141910
void C_01141910::sub_01141910(int) { sub_011412b0(); }

struct C_01145d80 {
    int sub_01145d80(int);
    int sub_0112f9c0(int, int);
};

// @baa 0x01145d80
int C_01145d80::sub_01145d80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_01145d80 *)(this))->sub_0112f9c0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_01145e40 { void sub_00f681d0(int); C_01145e40 *sub_01145e40(int); };

// @baa 0x01145e40
C_01145e40 *C_01145e40::sub_01145e40(int a) { sub_00f681d0(a); return this; }

int sub_01142fd0(void);
// @baa 0x01145f70
undefined4 UObject::sub_01145f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01142fd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x011463e0
undefined4 UObject::sub_011463e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_0040fcc0();
};

// @baa 0x01146400
undefined4 UObject::sub_01146400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
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

struct TConstSetBitIterator_01146430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01146430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01146430& operator++();
};

TConstSetBitIterator_01146430::TConstSetBitIterator_01146430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01146430
TConstSetBitIterator_01146430& TConstSetBitIterator_01146430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01146480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01146480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01146480& operator++();
};

TConstSetBitIterator_01146480::TConstSetBitIterator_01146480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01146480
TConstSetBitIterator_01146480& TConstSetBitIterator_01146480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011464d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011464d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011464d0& operator++();
};

TConstSetBitIterator_011464d0::TConstSetBitIterator_011464d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011464d0
TConstSetBitIterator_011464d0& TConstSetBitIterator_011464d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01146520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01146520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01146520& operator++();
};

TConstSetBitIterator_01146520::TConstSetBitIterator_01146520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01146520
TConstSetBitIterator_01146520& TConstSetBitIterator_01146520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01146570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01146570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01146570& operator++();
};

TConstSetBitIterator_01146570::TConstSetBitIterator_01146570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01146570
TConstSetBitIterator_01146570& TConstSetBitIterator_01146570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011466e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011466e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011466e0& operator++();
};

TConstSetBitIterator_011466e0::TConstSetBitIterator_011466e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011466e0
TConstSetBitIterator_011466e0& TConstSetBitIterator_011466e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01146730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01146730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01146730& operator++();
};

TConstSetBitIterator_01146730::TConstSetBitIterator_01146730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01146730
TConstSetBitIterator_01146730& TConstSetBitIterator_01146730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01146780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01146780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01146780& operator++();
};

TConstSetBitIterator_01146780::TConstSetBitIterator_01146780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01146780
TConstSetBitIterator_01146780& TConstSetBitIterator_01146780::operator++()
{
    It.Advance();
    return *this;
}

struct B {
  int f();
};

struct T {
  char pad[0x328];
  B* m;
  int sub_01147c80();
};

// @baa 0x01147c80
int T::sub_01147c80()
{
  return m->f();
}

struct C_01149090 { void sub_0113f0d0(); void sub_01149090(int); };

// @baa 0x01149090
void C_01149090::sub_01149090(int) { sub_0113f0d0(); }

int sub_01140a80(void);
// @baa 0x0114a280
undefined4 UUnrealEdEngine::sub_0114a280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01140a80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_01145e60();
// @baa 0x0114af60
void sub_0114af60(void) { sub_01145e60(); }

struct C_0114b190 {
    void sub_0114b190();
    int sub_01145f90(int);
};

// @baa 0x0114b190
void C_0114b190::sub_0114b190(void)
{
    int param_1 = (int)this;
  ((C_0114b190 *)((*(char **)((char *)this + 0x10))))->sub_01145f90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0114b1b0 {
    void sub_0114b1b0();
    int sub_01146120(int);
};

// @baa 0x0114b1b0
void C_0114b1b0::sub_0114b1b0(void)
{
    int param_1 = (int)this;
  ((C_0114b1b0 *)((*(char **)((char *)this + 0x10))))->sub_01146120(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0114b1d0 {
    void sub_0114b1d0();
    int sub_01146280(int);
};

// @baa 0x0114b1d0
void C_0114b1d0::sub_0114b1d0(void)
{
    int param_1 = (int)this;
  ((C_0114b1d0 *)((*(char **)((char *)this + 0x10))))->sub_01146280(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
