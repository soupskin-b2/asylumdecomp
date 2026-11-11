// UnrealEd_1380000.cpp: 93 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_013848c0(byte);
};

int sub_0053dfa0(...);
int sub_0137c7c0(void);
// @baa 0x013848c0
undefined4 C::sub_013848c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0137c7c0();
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

struct TConstSetBitIterator_01385aa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385aa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385aa0& operator++();
};

TConstSetBitIterator_01385aa0::TConstSetBitIterator_01385aa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385aa0
TConstSetBitIterator_01385aa0& TConstSetBitIterator_01385aa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385af0& operator++();
};

TConstSetBitIterator_01385af0::TConstSetBitIterator_01385af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385af0
TConstSetBitIterator_01385af0& TConstSetBitIterator_01385af0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385b40& operator++();
};

TConstSetBitIterator_01385b40::TConstSetBitIterator_01385b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385b40
TConstSetBitIterator_01385b40& TConstSetBitIterator_01385b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385b90& operator++();
};

TConstSetBitIterator_01385b90::TConstSetBitIterator_01385b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385b90
TConstSetBitIterator_01385b90& TConstSetBitIterator_01385b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385be0& operator++();
};

TConstSetBitIterator_01385be0::TConstSetBitIterator_01385be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385be0
TConstSetBitIterator_01385be0& TConstSetBitIterator_01385be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385c30& operator++();
};

TConstSetBitIterator_01385c30::TConstSetBitIterator_01385c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385c30
TConstSetBitIterator_01385c30& TConstSetBitIterator_01385c30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385d40& operator++();
};

TConstSetBitIterator_01385d40::TConstSetBitIterator_01385d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385d40
TConstSetBitIterator_01385d40& TConstSetBitIterator_01385d40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385df0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385df0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385df0& operator++();
};

TConstSetBitIterator_01385df0::TConstSetBitIterator_01385df0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385df0
TConstSetBitIterator_01385df0& TConstSetBitIterator_01385df0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385ea0& operator++();
};

TConstSetBitIterator_01385ea0::TConstSetBitIterator_01385ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385ea0
TConstSetBitIterator_01385ea0& TConstSetBitIterator_01385ea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385f50& operator++();
};

TConstSetBitIterator_01385f50::TConstSetBitIterator_01385f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385f50
TConstSetBitIterator_01385f50& TConstSetBitIterator_01385f50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01386000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01386000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01386000& operator++();
};

TConstSetBitIterator_01386000::TConstSetBitIterator_01386000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01386000
TConstSetBitIterator_01386000& TConstSetBitIterator_01386000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01386050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01386050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01386050& operator++();
};

TConstSetBitIterator_01386050::TConstSetBitIterator_01386050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01386050
TConstSetBitIterator_01386050& TConstSetBitIterator_01386050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013860a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013860a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013860a0& operator++();
};

TConstSetBitIterator_013860a0::TConstSetBitIterator_013860a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013860a0
TConstSetBitIterator_013860a0& TConstSetBitIterator_013860a0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0137e800(void);
// @baa 0x01387400
undefined4 UUnrealEdEngine::sub_01387400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0137e800();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_01389240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01389240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01389240& operator++();
};

TConstSetBitIterator_01389240::TConstSetBitIterator_01389240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01389240
TConstSetBitIterator_01389240& TConstSetBitIterator_01389240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01389260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01389260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01389260& operator++();
};

TConstSetBitIterator_01389260::TConstSetBitIterator_01389260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01389260
TConstSetBitIterator_01389260& TConstSetBitIterator_01389260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01389280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01389280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01389280& operator++();
};

TConstSetBitIterator_01389280::TConstSetBitIterator_01389280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01389280
TConstSetBitIterator_01389280& TConstSetBitIterator_01389280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013892a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013892a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013892a0& operator++();
};

TConstSetBitIterator_013892a0::TConstSetBitIterator_013892a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013892a0
TConstSetBitIterator_013892a0& TConstSetBitIterator_013892a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01389390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01389390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01389390& operator++();
};

TConstSetBitIterator_01389390::TConstSetBitIterator_01389390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01389390
TConstSetBitIterator_01389390& TConstSetBitIterator_01389390::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013893b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013893b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013893b0& operator++();
};

TConstSetBitIterator_013893b0::TConstSetBitIterator_013893b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013893b0
TConstSetBitIterator_013893b0& TConstSetBitIterator_013893b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_013894e0 {
    void sub_013894e0();
    int sub_01385300(int);
};

// @baa 0x013894e0
void C_013894e0::sub_013894e0(void)
{
    int param_1 = (int)this;
  ((C_013894e0 *)((*(char **)((char *)this + 0x10))))->sub_01385300(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01389500 {
    void sub_01389500();
    int sub_01385460(int);
};

// @baa 0x01389500
void C_01389500::sub_01389500(void)
{
    int param_1 = (int)this;
  ((C_01389500 *)((*(char **)((char *)this + 0x10))))->sub_01385460(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01389520 {
    void sub_01389520();
    int sub_013855c0(int);
};

// @baa 0x01389520
void C_01389520::sub_01389520(void)
{
    int param_1 = (int)this;
  ((C_01389520 *)((*(char **)((char *)this + 0x10))))->sub_013855c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01389540 {
    void sub_01389540();
    int sub_01385720(int);
};

// @baa 0x01389540
void C_01389540::sub_01389540(void)
{
    int param_1 = (int)this;
  ((C_01389540 *)((*(char **)((char *)this + 0x10))))->sub_01385720(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01389560 {
    void sub_01389560();
    int sub_01385880(int);
};

// @baa 0x01389560
void C_01389560::sub_01389560(void)
{
    int param_1 = (int)this;
  ((C_01389560 *)((*(char **)((char *)this + 0x10))))->sub_01385880(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_01389c20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01389c20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01389c20& operator++();
};

TConstSetBitIterator_01389c20::TConstSetBitIterator_01389c20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01389c20
TConstSetBitIterator_01389c20& TConstSetBitIterator_01389c20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01389e10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01389e10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01389e10& operator++();
};

TConstSetBitIterator_01389e10::TConstSetBitIterator_01389e10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01389e10
TConstSetBitIterator_01389e10& TConstSetBitIterator_01389e10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138a000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138a000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138a000& operator++();
};

TConstSetBitIterator_0138a000::TConstSetBitIterator_0138a000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138a000
TConstSetBitIterator_0138a000& TConstSetBitIterator_0138a000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138a050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138a050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138a050& operator++();
};

TConstSetBitIterator_0138a050::TConstSetBitIterator_0138a050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138a050
TConstSetBitIterator_0138a050& TConstSetBitIterator_0138a050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138a0a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138a0a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138a0a0& operator++();
};

TConstSetBitIterator_0138a0a0::TConstSetBitIterator_0138a0a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138a0a0
TConstSetBitIterator_0138a0a0& TConstSetBitIterator_0138a0a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138a1f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138a1f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138a1f0& operator++();
};

TConstSetBitIterator_0138a1f0::TConstSetBitIterator_0138a1f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138a1f0
TConstSetBitIterator_0138a1f0& TConstSetBitIterator_0138a1f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138a240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138a240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138a240& operator++();
};

TConstSetBitIterator_0138a240::TConstSetBitIterator_0138a240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138a240
TConstSetBitIterator_0138a240& TConstSetBitIterator_0138a240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138a290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138a290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138a290& operator++();
};

TConstSetBitIterator_0138a290::TConstSetBitIterator_0138a290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138a290
TConstSetBitIterator_0138a290& TConstSetBitIterator_0138a290::operator++()
{
    It.Advance();
    return *this;
}

void sub_01386550();
// @baa 0x0138a4a0
void sub_0138a4a0(void) { sub_01386550(); }

struct C_0138a4b0 { C_0138a4b0* sub_0138a4b0(void); };

// @baa 0x0138a4b0
C_0138a4b0* C_0138a4b0::sub_0138a4b0(void) { return this; }

void sub_013893d0();
// @baa 0x0138b770
void sub_0138b770(void) { sub_013893d0(); }

void sub_01389460();
// @baa 0x0138b780
void sub_0138b780(void) { sub_01389460(); }

struct TConstSetBitIterator_0138bcd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138bcd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138bcd0& operator++();
};

TConstSetBitIterator_0138bcd0::TConstSetBitIterator_0138bcd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138bcd0
TConstSetBitIterator_0138bcd0& TConstSetBitIterator_0138bcd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138bde0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138bde0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138bde0& operator++();
};

TConstSetBitIterator_0138bde0::TConstSetBitIterator_0138bde0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138bde0
TConstSetBitIterator_0138bde0& TConstSetBitIterator_0138bde0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138bf50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138bf50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138bf50& operator++();
};

TConstSetBitIterator_0138bf50::TConstSetBitIterator_0138bf50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138bf50
TConstSetBitIterator_0138bf50& TConstSetBitIterator_0138bf50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138bfa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138bfa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138bfa0& operator++();
};

TConstSetBitIterator_0138bfa0::TConstSetBitIterator_0138bfa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138bfa0
TConstSetBitIterator_0138bfa0& TConstSetBitIterator_0138bfa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138c0b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138c0b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138c0b0& operator++();
};

TConstSetBitIterator_0138c0b0::TConstSetBitIterator_0138c0b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138c0b0
TConstSetBitIterator_0138c0b0& TConstSetBitIterator_0138c0b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138c100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138c100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138c100& operator++();
};

TConstSetBitIterator_0138c100::TConstSetBitIterator_0138c100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138c100
TConstSetBitIterator_0138c100& TConstSetBitIterator_0138c100::operator++()
{
    It.Advance();
    return *this;
}

struct C_0138c3d0 {
    int sub_0138c3d0();
};

int sub_01385c80(void);
// @baa 0x0138c3d0
int C_0138c3d0::sub_0138c3d0(void)
{
    int param_1 = (int)this;

  sub_01385c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138c3f0 {
    int sub_0138c3f0();
};

int sub_01385ce0(void);
// @baa 0x0138c3f0
int C_0138c3f0::sub_0138c3f0(void)
{
    int param_1 = (int)this;

  sub_01385ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138c410 {
    int sub_0138c410();
};

int sub_01385d90(void);
// @baa 0x0138c410
int C_0138c410::sub_0138c410(void)
{
    int param_1 = (int)this;

  sub_01385d90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138c430 {
    int sub_0138c430();
};

int sub_01385e40(void);
// @baa 0x0138c430
int C_0138c430::sub_0138c430(void)
{
    int param_1 = (int)this;

  sub_01385e40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138c450 {
    int sub_0138c450();
};

int sub_01385ef0(void);
// @baa 0x0138c450
int C_0138c450::sub_0138c450(void)
{
    int param_1 = (int)this;

  sub_01385ef0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138c470 {
    int sub_0138c470();
};

int sub_01385fa0(void);
// @baa 0x0138c470
int C_0138c470::sub_0138c470(void)
{
    int param_1 = (int)this;

  sub_01385fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view {
    int sub_0138a420(int, int);
};

// @baa 0x0138c5f0
int UObject::sub_0138c5f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_0138a420(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0138c610 {
    int sub_0138a2e0(int);
};

// @baa 0x0138c610
void UObject::sub_0138c610(void)
{
    int param_1 = (int)this;
  ((C_view_0138c610 *)((*(char **)((char *)this + 0x10))))->sub_0138a2e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_005c7a20(void);
extern undefined * g_02263488;
// @baa 0x0138c630
undefined4 * UObject::sub_0138c630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02263488);
  return param_1;
}

struct TConstSetBitIterator_0138cd90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138cd90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138cd90& operator++();
};

TConstSetBitIterator_0138cd90::TConstSetBitIterator_0138cd90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138cd90
TConstSetBitIterator_0138cd90& TConstSetBitIterator_0138cd90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138cea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138cea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138cea0& operator++();
};

TConstSetBitIterator_0138cea0::TConstSetBitIterator_0138cea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138cea0
TConstSetBitIterator_0138cea0& TConstSetBitIterator_0138cea0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0138cef0 {
    void sub_0138cef0();
    int sub_0138be30(int, int);
};

// @baa 0x0138cef0
void C_0138cef0::sub_0138cef0(void)
{
    int param_1 = (int)this;
  ((C_0138cef0 *)(this))->sub_0138be30(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_0138cfc0 {
    undefined4 sub_0138cfc0(undefined4, undefined4);
    int sub_0138bef0(int, int);
};

// @baa 0x0138cfc0
undefined4 C_0138cfc0::sub_0138cfc0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0138cfc0 *)(this))->sub_0138bef0(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_0138cfe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138cfe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138cfe0& operator++();
};

TConstSetBitIterator_0138cfe0::TConstSetBitIterator_0138cfe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138cfe0
TConstSetBitIterator_0138cfe0& TConstSetBitIterator_0138cfe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138d030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d030& operator++();
};

TConstSetBitIterator_0138d030::TConstSetBitIterator_0138d030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d030
TConstSetBitIterator_0138d030& TConstSetBitIterator_0138d030::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138d180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d180& operator++();
};

TConstSetBitIterator_0138d180::TConstSetBitIterator_0138d180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d180
TConstSetBitIterator_0138d180& TConstSetBitIterator_0138d180::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138d1d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d1d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d1d0& operator++();
};

TConstSetBitIterator_0138d1d0::TConstSetBitIterator_0138d1d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d1d0
TConstSetBitIterator_0138d1d0& TConstSetBitIterator_0138d1d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0138d220 {
    int sub_0138d220(undefined4, undefined4);
    int sub_0138c150(int, int);
};

// @baa 0x0138d220
int C_0138d220::sub_0138d220(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0138d220 *)(this))->sub_0138c150(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0138d240 {
    int sub_0138d240(undefined4, undefined4);
    int sub_0138c1d0(int, int);
};

// @baa 0x0138d240
int C_0138d240::sub_0138d240(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0138d240 *)(this))->sub_0138c1d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0138d260 {
    int sub_0138d260(undefined4, undefined4);
    int sub_0138c250(int, int);
};

// @baa 0x0138d260
int C_0138d260::sub_0138d260(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0138d260 *)(this))->sub_0138c250(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0138d280 {
    int sub_0138d280(undefined4, undefined4);
    int sub_0138c2d0(int, int);
};

// @baa 0x0138d280
int C_0138d280::sub_0138d280(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0138d280 *)(this))->sub_0138c2d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0138d2a0 {
    int sub_0138d2a0(undefined4, undefined4);
    int sub_0138c350(int, int);
};

// @baa 0x0138d2a0
int C_0138d2a0::sub_0138d2a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0138d2a0 *)(this))->sub_0138c350(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0138d2c0 {
    int sub_0138d2c0();
};

// @baa 0x0138d2c0
int C_0138d2c0::sub_0138d2c0(void)
{
    int param_1 = (int)this;

  sub_01385c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d2e0 {
    int sub_0138d2e0();
};

// @baa 0x0138d2e0
int C_0138d2e0::sub_0138d2e0(void)
{
    int param_1 = (int)this;

  sub_01385ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d300 {
    int sub_0138d300();
};

// @baa 0x0138d300
int C_0138d300::sub_0138d300(void)
{
    int param_1 = (int)this;

  sub_01385d90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d320 {
    int sub_0138d320();
};

// @baa 0x0138d320
int C_0138d320::sub_0138d320(void)
{
    int param_1 = (int)this;

  sub_01385e40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d340 {
    int sub_0138d340();
};

// @baa 0x0138d340
int C_0138d340::sub_0138d340(void)
{
    int param_1 = (int)this;

  sub_01385ef0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d360 {
    int sub_0138d360();
};

// @baa 0x0138d360
int C_0138d360::sub_0138d360(void)
{
    int param_1 = (int)this;

  sub_01385fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0138c980();
// @baa 0x0138d530
void sub_0138d530(void) { sub_0138c980(); }

void sub_0138c910();
// @baa 0x0138d540
void sub_0138d540(void) { sub_0138c910(); }

void sub_0138c9f0();
// @baa 0x0138d550
void sub_0138d550(void) { sub_0138c9f0(); }

void sub_0138ca60();
// @baa 0x0138d560
void sub_0138d560(void) { sub_0138ca60(); }

void sub_0138cad0();
// @baa 0x0138d570
void sub_0138d570(void) { sub_0138cad0(); }

void sub_0138cb40();
// @baa 0x0138d580
void sub_0138d580(void) { sub_0138cb40(); }

void sub_0138cc70();
// @baa 0x0138d5d0
void sub_0138d5d0(void) { sub_0138cc70(); }

struct TConstSetBitIterator_0138d620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d620& operator++();
};

TConstSetBitIterator_0138d620::TConstSetBitIterator_0138d620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d620
TConstSetBitIterator_0138d620& TConstSetBitIterator_0138d620::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138d6b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d6b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d6b0& operator++();
};

TConstSetBitIterator_0138d6b0::TConstSetBitIterator_0138d6b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d6b0
TConstSetBitIterator_0138d6b0& TConstSetBitIterator_0138d6b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0138d740 {
    int sub_0138d740(undefined4, undefined4, undefined4);
    int sub_0138bef0(int, int);
};

// @baa 0x0138d740
int C_0138d740::sub_0138d740(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_0138d740 *)(this))->sub_0138bef0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct TConstSetBitIterator_0138d790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d790& operator++();
};

TConstSetBitIterator_0138d790::TConstSetBitIterator_0138d790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d790
TConstSetBitIterator_0138d790& TConstSetBitIterator_0138d790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138d7e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d7e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d7e0& operator++();
};

TConstSetBitIterator_0138d7e0::TConstSetBitIterator_0138d7e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d7e0
TConstSetBitIterator_0138d7e0& TConstSetBitIterator_0138d7e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138d870 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d870(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d870& operator++();
};

TConstSetBitIterator_0138d870::TConstSetBitIterator_0138d870(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d870
TConstSetBitIterator_0138d870& TConstSetBitIterator_0138d870::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0138d8c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0138d8c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0138d8c0& operator++();
};

TConstSetBitIterator_0138d8c0::TConstSetBitIterator_0138d8c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0138d8c0
TConstSetBitIterator_0138d8c0& TConstSetBitIterator_0138d8c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0138d910 {
    int sub_0138d910();
};

// @baa 0x0138d910
int C_0138d910::sub_0138d910(void)
{
    int param_1 = (int)this;

  sub_01385c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d930 {
    int sub_0138d930();
};

// @baa 0x0138d930
int C_0138d930::sub_0138d930(void)
{
    int param_1 = (int)this;

  sub_01385ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d950 {
    int sub_0138d950();
};

// @baa 0x0138d950
int C_0138d950::sub_0138d950(void)
{
    int param_1 = (int)this;

  sub_01385d90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d970 {
    int sub_0138d970();
};

// @baa 0x0138d970
int C_0138d970::sub_0138d970(void)
{
    int param_1 = (int)this;

  sub_01385e40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d990 {
    int sub_0138d990();
};

// @baa 0x0138d990
int C_0138d990::sub_0138d990(void)
{
    int param_1 = (int)this;

  sub_01385ef0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138d9b0 {
    int sub_0138d9b0();
};

// @baa 0x0138d9b0
int C_0138d9b0::sub_0138d9b0(void)
{
    int param_1 = (int)this;

  sub_01385fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0138e1b0
void sub_0138e1b0(void) { sub_0138c980(); }
