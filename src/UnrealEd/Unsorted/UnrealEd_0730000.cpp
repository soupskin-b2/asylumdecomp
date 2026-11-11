// UnrealEd_0730000.cpp: 18 functions
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

struct TConstSetBitIterator_00736e50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00736e50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00736e50& operator++();
};

TConstSetBitIterator_00736e50::TConstSetBitIterator_00736e50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00736e50
TConstSetBitIterator_00736e50& TConstSetBitIterator_00736e50::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_00735650(int, int);
};

// @baa 0x00737090
void UTexture2D::sub_00737090(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00735650(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct TConstSetBitIterator_007372d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007372d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007372d0& operator++();
};

TConstSetBitIterator_007372d0::TConstSetBitIterator_007372d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007372d0
TConstSetBitIterator_007372d0& TConstSetBitIterator_007372d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00737320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00737320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00737320& operator++();
};

TConstSetBitIterator_00737320::TConstSetBitIterator_00737320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00737320
TConstSetBitIterator_00737320& TConstSetBitIterator_00737320::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00737370 {
    int sub_00735870(int, int);
};

// @baa 0x00737370
undefined4 UTexture2D::sub_00737370(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00737370 *)(this))->sub_00735870(param_2, param_3);
  return param_1;
}

struct C_view_00737680 {
    int sub_00735a50(int, int);
};

// @baa 0x00737680
int UTexture2D::sub_00737680(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737680 *)(this))->sub_00735a50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_007376a0 {
    int sub_00735ad0(int, int);
};

// @baa 0x007376a0
int UTexture2D::sub_007376a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_007376a0 *)(this))->sub_00735ad0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_007376c0 {
    int sub_00735b40(int, int);
};

// @baa 0x007376c0
int UTexture2D::sub_007376c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_007376c0 *)(this))->sub_00735b40(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_007376e0 {
    int sub_00735bb0(int, int);
};

// @baa 0x007376e0
int UTexture2D::sub_007376e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_007376e0 *)(this))->sub_00735bb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00737700 {
    int sub_00735c30(int, int);
};

// @baa 0x00737700
int UTexture2D::sub_00737700(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737700 *)(this))->sub_00735c30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00737720 {
    int sub_00735cb0(int, int);
};

// @baa 0x00737720
int UTexture2D::sub_00737720(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737720 *)(this))->sub_00735cb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00737740 {
    int sub_00735d30(int, int);
};

// @baa 0x00737740
int UTexture2D::sub_00737740(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737740 *)(this))->sub_00735d30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0072e7e0(void);
// @baa 0x00737760
int UTexture2D::sub_00737760(void)
{
    int param_1 = (int)this;

  sub_0072e7e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e840(void);
// @baa 0x00737780
int UTexture2D::sub_00737780(void)
{
    int param_1 = (int)this;

  sub_0072e840();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e8a0(void);
// @baa 0x007377a0
int UTexture2D::sub_007377a0(void)
{
    int param_1 = (int)this;

  sub_0072e8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e900(void);
// @baa 0x007377c0
int UTexture2D::sub_007377c0(void)
{
    int param_1 = (int)this;

  sub_0072e900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e960(void);
// @baa 0x007377e0
int UTexture2D::sub_007377e0(void)
{
    int param_1 = (int)this;

  sub_0072e960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00736370();
// @baa 0x00739510
void sub_00739510(void) { sub_00736370(); }
