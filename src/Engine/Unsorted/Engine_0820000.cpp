// Engine_0820000.cpp: 104 functions
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

struct TConstSetBitIterator_008201f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008201f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008201f0& operator++();
};

TConstSetBitIterator_008201f0::TConstSetBitIterator_008201f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008201f0
TConstSetBitIterator_008201f0& TConstSetBitIterator_008201f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820370& operator++();
};

TConstSetBitIterator_00820370::TConstSetBitIterator_00820370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820370
TConstSetBitIterator_00820370& TConstSetBitIterator_00820370::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820390& operator++();
};

TConstSetBitIterator_00820390::TConstSetBitIterator_00820390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820390
TConstSetBitIterator_00820390& TConstSetBitIterator_00820390::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008203e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008203e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008203e0& operator++();
};

TConstSetBitIterator_008203e0::TConstSetBitIterator_008203e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008203e0
TConstSetBitIterator_008203e0& TConstSetBitIterator_008203e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820430& operator++();
};

TConstSetBitIterator_00820430::TConstSetBitIterator_00820430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820430
TConstSetBitIterator_00820430& TConstSetBitIterator_00820430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820480& operator++();
};

TConstSetBitIterator_00820480::TConstSetBitIterator_00820480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820480
TConstSetBitIterator_00820480& TConstSetBitIterator_00820480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008204d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008204d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008204d0& operator++();
};

TConstSetBitIterator_008204d0::TConstSetBitIterator_008204d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008204d0
TConstSetBitIterator_008204d0& TConstSetBitIterator_008204d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820520& operator++();
};

TConstSetBitIterator_00820520::TConstSetBitIterator_00820520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820520
TConstSetBitIterator_00820520& TConstSetBitIterator_00820520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820570& operator++();
};

TConstSetBitIterator_00820570::TConstSetBitIterator_00820570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820570
TConstSetBitIterator_00820570& TConstSetBitIterator_00820570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008205c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008205c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008205c0& operator++();
};

TConstSetBitIterator_008205c0::TConstSetBitIterator_008205c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008205c0
TConstSetBitIterator_008205c0& TConstSetBitIterator_008205c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820610& operator++();
};

TConstSetBitIterator_00820610::TConstSetBitIterator_00820610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820610
TConstSetBitIterator_00820610& TConstSetBitIterator_00820610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820660 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820660(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820660& operator++();
};

TConstSetBitIterator_00820660::TConstSetBitIterator_00820660(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820660
TConstSetBitIterator_00820660& TConstSetBitIterator_00820660::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008206b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008206b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008206b0& operator++();
};

TConstSetBitIterator_008206b0::TConstSetBitIterator_008206b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008206b0
TConstSetBitIterator_008206b0& TConstSetBitIterator_008206b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820a60& operator++();
};

TConstSetBitIterator_00820a60::TConstSetBitIterator_00820a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820a60
TConstSetBitIterator_00820a60& TConstSetBitIterator_00820a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820b10& operator++();
};

TConstSetBitIterator_00820b10::TConstSetBitIterator_00820b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820b10
TConstSetBitIterator_00820b10& TConstSetBitIterator_00820b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820b60& operator++();
};

TConstSetBitIterator_00820b60::TConstSetBitIterator_00820b60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820b60
TConstSetBitIterator_00820b60& TConstSetBitIterator_00820b60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820bb0& operator++();
};

TConstSetBitIterator_00820bb0::TConstSetBitIterator_00820bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820bb0
TConstSetBitIterator_00820bb0& TConstSetBitIterator_00820bb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820c00& operator++();
};

TConstSetBitIterator_00820c00::TConstSetBitIterator_00820c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820c00
TConstSetBitIterator_00820c00& TConstSetBitIterator_00820c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820c50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820c50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820c50& operator++();
};

TConstSetBitIterator_00820c50::TConstSetBitIterator_00820c50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820c50
TConstSetBitIterator_00820c50& TConstSetBitIterator_00820c50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820ca0& operator++();
};

TConstSetBitIterator_00820ca0::TConstSetBitIterator_00820ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820ca0
TConstSetBitIterator_00820ca0& TConstSetBitIterator_00820ca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00820cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00820cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00820cf0& operator++();
};

TConstSetBitIterator_00820cf0::TConstSetBitIterator_00820cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00820cf0
TConstSetBitIterator_00820cf0& TConstSetBitIterator_00820cf0::operator++()
{
    It.Advance();
    return *this;
}

void sub_0081e7f0();
// @baa 0x00820db0
void sub_00820db0(void) { sub_0081e7f0(); }

int sub_0081f340(void);
// @baa 0x00825980
int UTexture2D::sub_00825980(void)
{
    int param_1 = (int)this;

  sub_0081f340();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C {
    void sub_00825e30();
    int sub_008242a0(int, int);
};

// @baa 0x00825e30
void C::sub_00825e30(void)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_008242a0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00825f40 {
    undefined4 sub_00825f40(undefined4, undefined4);
    int sub_00824360(int, int);
};

// @baa 0x00825f40
undefined4 C_00825f40::sub_00825f40(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00825f40 *)(this))->sub_00824360(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_008263d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008263d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008263d0& operator++();
};

TConstSetBitIterator_008263d0::TConstSetBitIterator_008263d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008263d0
TConstSetBitIterator_008263d0& TConstSetBitIterator_008263d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00826540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00826540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00826540& operator++();
};

TConstSetBitIterator_00826540::TConstSetBitIterator_00826540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00826540
TConstSetBitIterator_00826540& TConstSetBitIterator_00826540::operator++()
{
    It.Advance();
    return *this;
}

struct C_008265f0 {
    int sub_008265f0(undefined4, undefined4);
    int sub_008249a0(int, int);
};

// @baa 0x008265f0
int C_008265f0::sub_008265f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_008265f0 *)(this))->sub_008249a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00826610 {
    int sub_00826610(undefined4, undefined4);
    int sub_00824a20(int, int);
};

// @baa 0x00826610
int C_00826610::sub_00826610(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00826610 *)(this))->sub_00824a20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00826630 {
    int sub_00826630(undefined4, undefined4);
    int sub_00824aa0(int, int);
};

// @baa 0x00826630
int C_00826630::sub_00826630(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00826630 *)(this))->sub_00824aa0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00826650 {
    int sub_00826650(undefined4, undefined4);
    int sub_00824b20(int, int);
};

// @baa 0x00826650
int C_00826650::sub_00826650(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00826650 *)(this))->sub_00824b20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00826670 {
    int sub_00826670(undefined4, undefined4);
    int sub_00824ba0(int, int);
};

// @baa 0x00826670
int C_00826670::sub_00826670(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00826670 *)(this))->sub_00824ba0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00826690 {
    undefined4 sub_00826690(undefined4, undefined4);
    int sub_00824c20(int, int);
};

// @baa 0x00826690
undefined4 C_00826690::sub_00826690(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00826690 *)(this))->sub_00824c20(param_2, param_3);
  return param_1;
}

struct C_008266b0 {
    int sub_008266b0(undefined4, undefined4);
    int sub_00824c90(int, int);
};

// @baa 0x008266b0
int C_008266b0::sub_008266b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_008266b0 *)(this))->sub_00824c90(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_008266d0 {
    int sub_008266d0(undefined4, undefined4);
    int sub_00824d00(int, int);
};

// @baa 0x008266d0
int C_008266d0::sub_008266d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_008266d0 *)(this))->sub_00824d00(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_008266f0 {
    int sub_008266f0(undefined4, undefined4);
    int sub_00824d80(int, int);
};

// @baa 0x008266f0
int C_008266f0::sub_008266f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_008266f0 *)(this))->sub_00824d80(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00826710 {
    int sub_00826710(undefined4, undefined4);
    int sub_00824df0(int, int);
};

// @baa 0x00826710
int C_00826710::sub_00826710(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00826710 *)(this))->sub_00824df0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00826730 {
    int sub_00826730();
};

int sub_00820700(void);
// @baa 0x00826730
int C_00826730::sub_00826730(void)
{
    int param_1 = (int)this;

  sub_00820700();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00826750 {
    int sub_00826750();
};

int sub_00820760(void);
// @baa 0x00826750
int C_00826750::sub_00826750(void)
{
    int param_1 = (int)this;

  sub_00820760();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00826770 {
    int sub_00826770();
};

int sub_008207c0(void);
// @baa 0x00826770
int C_00826770::sub_00826770(void)
{
    int param_1 = (int)this;

  sub_008207c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00826790 {
    int sub_00826790();
};

int sub_00820820(void);
// @baa 0x00826790
int C_00826790::sub_00826790(void)
{
    int param_1 = (int)this;

  sub_00820820();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008267b0 {
    int sub_008267b0();
};

int sub_00820880(void);
// @baa 0x008267b0
int C_008267b0::sub_008267b0(void)
{
    int param_1 = (int)this;

  sub_00820880();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008267d0 {
    int sub_008267d0();
};

int sub_008208e0(void);
// @baa 0x008267d0
int C_008267d0::sub_008267d0(void)
{
    int param_1 = (int)this;

  sub_008208e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008267f0 {
    int sub_008267f0();
};

int sub_00820940(void);
// @baa 0x008267f0
int C_008267f0::sub_008267f0(void)
{
    int param_1 = (int)this;

  sub_00820940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00826810 {
    int sub_00826810();
};

int sub_008209a0(void);
// @baa 0x00826810
int C_00826810::sub_00826810(void)
{
    int param_1 = (int)this;

  sub_008209a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00826830 {
    int sub_00826830();
};

int sub_00820a00(void);
// @baa 0x00826830
int C_00826830::sub_00826830(void)
{
    int param_1 = (int)this;

  sub_00820a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00826850 {
    int sub_00826850();
};

int sub_00820ab0(void);
// @baa 0x00826850
int C_00826850::sub_00826850(void)
{
    int param_1 = (int)this;

  sub_00820ab0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00825c10();
// @baa 0x00826c90
void sub_00826c90(void) { sub_00825c10(); }

void sub_00825c80();
// @baa 0x00826ca0
void sub_00826ca0(void) { sub_00825c80(); }

void sub_00825cf0();
// @baa 0x00826cb0
void sub_00826cb0(void) { sub_00825cf0(); }

void sub_00825d60();
// @baa 0x00826cc0
void sub_00826cc0(void) { sub_00825d60(); }

void sub_00825830();
// @baa 0x00826cd0
void sub_00826cd0(void) { sub_00825830(); }

void sub_00825dd0();
// @baa 0x00827a90
void sub_00827a90(void) { sub_00825dd0(); }

struct C_00827af0 {
    int sub_00827af0(undefined4, undefined4, undefined4);
    int sub_00824360(int, int);
};

// @baa 0x00827af0
int C_00827af0::sub_00827af0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00827af0 *)(this))->sub_00824360(param_2, param_4);
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
    void sub_008242a0(int, int);
};

struct C_00827b20 {
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
    void sub_00827b20(void);
};

// @baa 0x00827b20
void C_00827b20::sub_00827b20(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_008242a0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00828010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00828010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00828010& operator++();
};

TConstSetBitIterator_00828010::TConstSetBitIterator_00828010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00828010
TConstSetBitIterator_00828010& TConstSetBitIterator_00828010::operator++()
{
    It.Advance();
    return *this;
}

void sub_00826420();
// @baa 0x00828060
void sub_00828060(void) { sub_00826420(); }

struct TConstSetBitIterator_008280b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008280b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008280b0& operator++();
};

TConstSetBitIterator_008280b0::TConstSetBitIterator_008280b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008280b0
TConstSetBitIterator_008280b0& TConstSetBitIterator_008280b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_008281d0 {
    int sub_008281d0();
};

// @baa 0x008281d0
int C_008281d0::sub_008281d0(void)
{
    int param_1 = (int)this;

  sub_00820700();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008281f0 {
    int sub_008281f0();
};

// @baa 0x008281f0
int C_008281f0::sub_008281f0(void)
{
    int param_1 = (int)this;

  sub_00820760();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00828320 {
    int sub_00828320();
};

// @baa 0x00828320
int C_00828320::sub_00828320(void)
{
    int param_1 = (int)this;

  sub_008207c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00828340 {
    int sub_00828340();
};

// @baa 0x00828340
int C_00828340::sub_00828340(void)
{
    int param_1 = (int)this;

  sub_00820820();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00828360 {
    int sub_00828360();
};

// @baa 0x00828360
int C_00828360::sub_00828360(void)
{
    int param_1 = (int)this;

  sub_00820880();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00828380 {
    int sub_00828380();
};

// @baa 0x00828380
int C_00828380::sub_00828380(void)
{
    int param_1 = (int)this;

  sub_008208e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008283a0 {
    int sub_008283a0();
};

// @baa 0x008283a0
int C_008283a0::sub_008283a0(void)
{
    int param_1 = (int)this;

  sub_00820940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008283c0 {
    int sub_008283c0();
};

// @baa 0x008283c0
int C_008283c0::sub_008283c0(void)
{
    int param_1 = (int)this;

  sub_008209a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008283e0 {
    int sub_008283e0();
};

// @baa 0x008283e0
int C_008283e0::sub_008283e0(void)
{
    int param_1 = (int)this;

  sub_00820a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00828400 {
    int sub_00828400();
};

// @baa 0x00828400
int C_00828400::sub_00828400(void)
{
    int param_1 = (int)this;

  sub_00820ab0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00828420 { void sub_00826870(int); C_00828420 *sub_00828420(int); };

// @baa 0x00828420
C_00828420 *C_00828420::sub_00828420(int a) { sub_00826870(a); return this; }

void sub_008258a0();
// @baa 0x00828440
void sub_00828440(void) { sub_008258a0(); }

void sub_00825910();
// @baa 0x00828450
void sub_00828450(void) { sub_00825910(); }

struct C_00828510 { void sub_00825dd0(int); void sub_00828510(); };

// @baa 0x00828510
void C_00828510::sub_00828510() { sub_00825dd0(0); }

void sub_00825ac0();
// @baa 0x00828880
void sub_00828880(void) { sub_00825ac0(); }

void sub_00825b30();
// @baa 0x00828890
void sub_00828890(void) { sub_00825b30(); }

void sub_00825ba0();
// @baa 0x008288a0
void sub_008288a0(void) { sub_00825ba0(); }

struct C_00828970 {
    void sub_00828970(undefined4);
    int sub_008288b0(int, int);
};

// @baa 0x00828970
void C_00828970::sub_00828970(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      ((C_00828970 *)(this))->sub_008288b0(iVar1, param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x78));
  }
  return;
}

// @baa 0x00828c10
void sub_00828c10(void) { sub_00825c10(); }

// @baa 0x00828c20
void sub_00828c20(void) { sub_00825c80(); }

// @baa 0x00828c30
void sub_00828c30(void) { sub_00825cf0(); }

// @baa 0x00828dd0
void sub_00828dd0(void) { sub_00825d60(); }

// @baa 0x00828eb0
void sub_00828eb0(void) { sub_00825830(); }

struct C_00828ec0 {
    int sub_00828ec0();
};

// @baa 0x00828ec0
int C_00828ec0::sub_00828ec0(void)
{
    int param_1 = (int)this;

  sub_00820700();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00828ff0 {
    int sub_00828ff0();
};

// @baa 0x00828ff0
int C_00828ff0::sub_00828ff0(void)
{
    int param_1 = (int)this;

  sub_00820760();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00829050 {
    int sub_00829050();
};

// @baa 0x00829050
int C_00829050::sub_00829050(void)
{
    int param_1 = (int)this;

  sub_008207c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00829070 {
    int sub_00829070();
};

// @baa 0x00829070
int C_00829070::sub_00829070(void)
{
    int param_1 = (int)this;

  sub_00820820();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00829090 {
    int sub_00829090();
};

// @baa 0x00829090
int C_00829090::sub_00829090(void)
{
    int param_1 = (int)this;

  sub_00820880();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008290b0 {
    int sub_008290b0();
};

// @baa 0x008290b0
int C_008290b0::sub_008290b0(void)
{
    int param_1 = (int)this;

  sub_008208e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008290d0 {
    int sub_008290d0();
};

// @baa 0x008290d0
int C_008290d0::sub_008290d0(void)
{
    int param_1 = (int)this;

  sub_00820940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_008290f0 {
    int sub_008290f0();
};

// @baa 0x008290f0
int C_008290f0::sub_008290f0(void)
{
    int param_1 = (int)this;

  sub_008209a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00829110 {
    int sub_00829110();
};

// @baa 0x00829110
int C_00829110::sub_00829110(void)
{
    int param_1 = (int)this;

  sub_00820a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00829130 {
    int sub_00829130();
};

// @baa 0x00829130
int C_00829130::sub_00829130(void)
{
    int param_1 = (int)this;

  sub_00820ab0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00829150 { void sub_00826870(int); C_00829150 *sub_00829150(int); };

// @baa 0x00829150
C_00829150 *C_00829150::sub_00829150(int a) { sub_00826870(a); return this; }

// @baa 0x00829170
void sub_00829170(void) { sub_008258a0(); }

// @baa 0x00829180
void sub_00829180(void) { sub_00825910(); }

// @baa 0x00829190
void sub_00829190(void) { sub_00825ac0(); }

// @baa 0x008291a0
void sub_008291a0(void) { sub_00825b30(); }

// @baa 0x008291b0
void sub_008291b0(void) { sub_00825ba0(); }

// @baa 0x00829690
void sub_00829690(void) { sub_00825c10(); }

// @baa 0x00829730
void sub_00829730(void) { sub_00825c80(); }

// @baa 0x00829740
void sub_00829740(void) { sub_00825cf0(); }

// @baa 0x0082a030
void sub_0082a030(void) { sub_00825d60(); }

// @baa 0x0082a950
void sub_0082a950(void) { sub_00825830(); }

struct C_0082aaf0 { void sub_00826870(int); C_0082aaf0 *sub_0082aaf0(int); };

// @baa 0x0082aaf0
C_0082aaf0 *C_0082aaf0::sub_0082aaf0(int a) { sub_00826870(a); return this; }

struct S {
    void sub_0082a160();
    void sub_005c1a90();
    void sub_0082dab0();
};

// @baa 0x0082dab0
void S::sub_0082dab0() {
    sub_0082a160();
    sub_005c1a90();
}
