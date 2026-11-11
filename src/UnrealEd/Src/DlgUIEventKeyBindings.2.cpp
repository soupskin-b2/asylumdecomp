// DlgUIEventKeyBindings.cpp (part 2 of 2): 106 functions
// Placed here by: neighbours 103, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x013af060
int UPackageMap::sub_013af060(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x013af160
int UPackageMap::sub_013af160(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x013af200
int UPackageMap::sub_013af200(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x013af210
int UPackageMap::sub_013af210(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x013af2a0
int UPackageMap::sub_013af2a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C {
    int sub_013af320(int);
};

// @baa 0x013af320
int C::sub_013af320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_view {
    int sub_013b7380(int, int);
};

// @baa 0x013bd900
int UPackageMap::sub_013bd900(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_013b7380((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
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

struct TConstSetBitIterator_013bd930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bd930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bd930& operator++();
};

TConstSetBitIterator_013bd930::TConstSetBitIterator_013bd930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bd930
TConstSetBitIterator_013bd930& TConstSetBitIterator_013bd930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013bd950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bd950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bd950& operator++();
};

TConstSetBitIterator_013bd950::TConstSetBitIterator_013bd950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bd950
TConstSetBitIterator_013bd950& TConstSetBitIterator_013bd950::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013bd970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bd970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bd970& operator++();
};

TConstSetBitIterator_013bd970::TConstSetBitIterator_013bd970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bd970
TConstSetBitIterator_013bd970& TConstSetBitIterator_013bd970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013bd990 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bd990(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bd990& operator++();
};

TConstSetBitIterator_013bd990::TConstSetBitIterator_013bd990(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bd990
TConstSetBitIterator_013bd990& TConstSetBitIterator_013bd990::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013bd9b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bd9b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bd9b0& operator++();
};

TConstSetBitIterator_013bd9b0::TConstSetBitIterator_013bd9b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bd9b0
TConstSetBitIterator_013bd9b0& TConstSetBitIterator_013bd9b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_013bd9d0 {
    int sub_013b7470(int, int);
};

// @baa 0x013bd9d0
int UPackageMap::sub_013bd9d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_013bd9d0 *)(this))->sub_013b7470((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct C_view_013bda00 {
    int sub_013b74e0(int, int);
};

// @baa 0x013bda00
int UPackageMap::sub_013bda00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_013bda00 *)(this))->sub_013b74e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct TConstSetBitIterator_013bda30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bda30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bda30& operator++();
};

TConstSetBitIterator_013bda30::TConstSetBitIterator_013bda30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bda30
TConstSetBitIterator_013bda30& TConstSetBitIterator_013bda30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013bda50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bda50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bda50& operator++();
};

TConstSetBitIterator_013bda50::TConstSetBitIterator_013bda50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bda50
TConstSetBitIterator_013bda50& TConstSetBitIterator_013bda50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013bda70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013bda70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013bda70& operator++();
};

TConstSetBitIterator_013bda70::TConstSetBitIterator_013bda70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013bda70
TConstSetBitIterator_013bda70& TConstSetBitIterator_013bda70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be5d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be5d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be5d0& operator++();
};

TConstSetBitIterator_013be5d0::TConstSetBitIterator_013be5d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be5d0
TConstSetBitIterator_013be5d0& TConstSetBitIterator_013be5d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be620& operator++();
};

TConstSetBitIterator_013be620::TConstSetBitIterator_013be620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be620
TConstSetBitIterator_013be620& TConstSetBitIterator_013be620::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be670& operator++();
};

TConstSetBitIterator_013be670::TConstSetBitIterator_013be670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be670
TConstSetBitIterator_013be670& TConstSetBitIterator_013be670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be6c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be6c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be6c0& operator++();
};

TConstSetBitIterator_013be6c0::TConstSetBitIterator_013be6c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be6c0
TConstSetBitIterator_013be6c0& TConstSetBitIterator_013be6c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be710& operator++();
};

TConstSetBitIterator_013be710::TConstSetBitIterator_013be710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be710
TConstSetBitIterator_013be710& TConstSetBitIterator_013be710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be760& operator++();
};

TConstSetBitIterator_013be760::TConstSetBitIterator_013be760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be760
TConstSetBitIterator_013be760& TConstSetBitIterator_013be760::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be7b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be7b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be7b0& operator++();
};

TConstSetBitIterator_013be7b0::TConstSetBitIterator_013be7b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be7b0
TConstSetBitIterator_013be7b0& TConstSetBitIterator_013be7b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be800& operator++();
};

TConstSetBitIterator_013be800::TConstSetBitIterator_013be800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be800
TConstSetBitIterator_013be800& TConstSetBitIterator_013be800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013be850 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013be850(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013be850& operator++();
};

TConstSetBitIterator_013be850::TConstSetBitIterator_013be850(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013be850
TConstSetBitIterator_013be850& TConstSetBitIterator_013be850::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c4b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c4b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c4b40& operator++();
};

TConstSetBitIterator_013c4b40::TConstSetBitIterator_013c4b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c4b40
TConstSetBitIterator_013c4b40& TConstSetBitIterator_013c4b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c4ee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c4ee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c4ee0& operator++();
};

TConstSetBitIterator_013c4ee0::TConstSetBitIterator_013c4ee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c4ee0
TConstSetBitIterator_013c4ee0& TConstSetBitIterator_013c4ee0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c4f30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c4f30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c4f30& operator++();
};

TConstSetBitIterator_013c4f30::TConstSetBitIterator_013c4f30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c4f30
TConstSetBitIterator_013c4f30& TConstSetBitIterator_013c4f30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c5280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c5280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c5280& operator++();
};

TConstSetBitIterator_013c5280::TConstSetBitIterator_013c5280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c5280
TConstSetBitIterator_013c5280& TConstSetBitIterator_013c5280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c5420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c5420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c5420& operator++();
};

TConstSetBitIterator_013c5420::TConstSetBitIterator_013c5420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c5420
TConstSetBitIterator_013c5420& TConstSetBitIterator_013c5420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c5470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c5470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c5470& operator++();
};

TConstSetBitIterator_013c5470::TConstSetBitIterator_013c5470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c5470
TConstSetBitIterator_013c5470& TConstSetBitIterator_013c5470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c5970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c5970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c5970& operator++();
};

TConstSetBitIterator_013c5970::TConstSetBitIterator_013c5970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c5970
TConstSetBitIterator_013c5970& TConstSetBitIterator_013c5970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c59c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c59c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c59c0& operator++();
};

TConstSetBitIterator_013c59c0::TConstSetBitIterator_013c59c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c59c0
TConstSetBitIterator_013c59c0& TConstSetBitIterator_013c59c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c5a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c5a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c5a10& operator++();
};

TConstSetBitIterator_013c5a10::TConstSetBitIterator_013c5a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c5a10
TConstSetBitIterator_013c5a10& TConstSetBitIterator_013c5a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013c5a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013c5a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013c5a60& operator++();
};

TConstSetBitIterator_013c5a60::TConstSetBitIterator_013c5a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013c5a60
TConstSetBitIterator_013c5a60& TConstSetBitIterator_013c5a60::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_013c97d0 {
    int sub_013c7ce0(int, int);
};

// @baa 0x013c97d0
void UPackageMap::sub_013c97d0(void)
{
    int param_1 = (int)this;
  ((C_view_013c97d0 *)(this))->sub_013c7ce0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_013c98e0 {
    int sub_013c7da0(int, int);
};

// @baa 0x013c98e0
undefined4 UPackageMap::sub_013c98e0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_013c98e0 *)(this))->sub_013c7da0(param_2, param_3);
  return param_1;
}

struct C_view_013c9900 {
    int sub_013c7e00(int, int);
};

// @baa 0x013c9900
undefined4 UPackageMap::sub_013c9900(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_013c9900 *)(this))->sub_013c7e00(param_2, param_3);
  return param_1;
}

struct C_013c99b0 {
    void sub_013c99b0();
    int sub_013c7f20(int, int);
};

// @baa 0x013c99b0
void C_013c99b0::sub_013c99b0(void)
{
    int param_1 = (int)this;
  ((C_013c99b0 *)(this))->sub_013c7f20(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_013c99c0 {
    void sub_013c99c0();
    int sub_013c7fe0(int, int);
};

// @baa 0x013c99c0
void C_013c99c0::sub_013c99c0(void)
{
    int param_1 = (int)this;
  ((C_013c99c0 *)(this))->sub_013c7fe0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_013c99d0 {
    undefined4 sub_013c99d0(undefined4, undefined4);
    int sub_013c80a0(int, int);
};

// @baa 0x013c99d0
undefined4 C_013c99d0::sub_013c99d0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013c99d0 *)(this))->sub_013c80a0(param_2, param_3);
  return param_1;
}

struct C_013c99f0 {
    undefined4 sub_013c99f0(undefined4, undefined4);
    int sub_013c8100(int, int);
};

// @baa 0x013c99f0
undefined4 C_013c99f0::sub_013c99f0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013c99f0 *)(this))->sub_013c8100(param_2, param_3);
  return param_1;
}

struct C_013c9a10 {
    int sub_013c9a10(undefined4, undefined4);
    int sub_013c8160(int, int);
};

// @baa 0x013c9a10
int C_013c9a10::sub_013c9a10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013c9a10 *)(this))->sub_013c8160(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_013c9a30 {
    int sub_013c9a30(undefined4, undefined4);
    int sub_013c81e0(int, int);
};

// @baa 0x013c9a30
int C_013c9a30::sub_013c9a30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013c9a30 *)(this))->sub_013c81e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_013c9a50 {
    int sub_013c9a50(undefined4, undefined4);
    int sub_013c8260(int, int);
};

// @baa 0x013c9a50
int C_013c9a50::sub_013c9a50(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013c9a50 *)(this))->sub_013c8260(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_013c9a70 {
    int sub_013c9a70(undefined4, undefined4);
    int sub_013c82e0(int, int);
};

// @baa 0x013c9a70
int C_013c9a70::sub_013c9a70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013c9a70 *)(this))->sub_013c82e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_013c9a90 {
    int sub_013c9a90(undefined4, undefined4);
    int sub_013c8360(int, int);
};

// @baa 0x013c9a90
int C_013c9a90::sub_013c9a90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013c9a90 *)(this))->sub_013c8360(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_013c9ab0 {
    int sub_013c9ab0(undefined4, undefined4);
    int sub_013c83e0(int, int);
};

// @baa 0x013c9ab0
int C_013c9ab0::sub_013c9ab0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013c9ab0 *)(this))->sub_013c83e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_013c9ad0 {
    int sub_013c9ad0(undefined4, undefined4);
    int sub_013c8460(int, int);
};

// @baa 0x013c9ad0
int C_013c9ad0::sub_013c9ad0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013c9ad0 *)(this))->sub_013c8460(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_013c9af0 {
    undefined4 sub_013c9af0(undefined4, undefined4);
    int sub_013c84e0(int, int);
};

// @baa 0x013c9af0
undefined4 C_013c9af0::sub_013c9af0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013c9af0 *)(this))->sub_013c84e0(param_2, param_3);
  return param_1;
}

struct C_013c9b10 {
    int sub_013c9b10();
};

int sub_013be8a0(void);
// @baa 0x013c9b10
int C_013c9b10::sub_013c9b10(void)
{
    int param_1 = (int)this;

  sub_013be8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_013c9b30 {
    int sub_0055ab10(int, int);
};

// @baa 0x013c9b30
void UPackageMap::sub_013c9b30(void)
{
    int param_1 = (int)this;
  ((C_view_013c9b30 *)(this))->sub_0055ab10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_013c9b40 {
    int sub_013c9b40();
};

int sub_013be900(void);
// @baa 0x013c9b40
int C_013c9b40::sub_013c9b40(void)
{
    int param_1 = (int)this;

  sub_013be900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013c9b60 {
    int sub_013c9b60();
};

int sub_013be9c0(void);
// @baa 0x013c9b60
int C_013c9b60::sub_013c9b60(void)
{
    int param_1 = (int)this;

  sub_013be9c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_013bea20(void);
// @baa 0x013c9b80
int UPackageMap::sub_013c9b80(void)
{
    int param_1 = (int)this;

  sub_013bea20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_013bea80(void);
// @baa 0x013c9ba0
int UPackageMap::sub_013c9ba0(void)
{
    int param_1 = (int)this;

  sub_013bea80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013c9d00 { void sub_013c8760(int); C_013c9d00 *sub_013c9d00(int); };

// @baa 0x013c9d00
C_013c9d00 *C_013c9d00::sub_013c9d00(int a) { sub_013c8760(a); return this; }

struct C_013c9d50 { C_013c9d50* sub_013c9d50(void); };

// @baa 0x013c9d50
C_013c9d50* C_013c9d50::sub_013c9d50(void) { return this; }

void sub_013c8e40();
// @baa 0x013c9d60
void sub_013c9d60(void) { sub_013c8e40(); }

void sub_013c8eb0();
// @baa 0x013c9d70
void sub_013c9d70(void) { sub_013c8eb0(); }

void sub_013c9060();
// @baa 0x013c9d80
void sub_013c9d80(void) { sub_013c9060(); }

void sub_013c90d0();
// @baa 0x013c9d90
void sub_013c9d90(void) { sub_013c90d0(); }

struct C_013d4fa0 {
    undefined4 * sub_013d4fa0(undefined4 *);
    int sub_013d3450(int);
};

// @baa 0x013d4fa0
undefined4 * C_013d4fa0::sub_013d4fa0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d4fa0 *)(((char *)this + 4)))->sub_013d3450(param_2[1]);
  return param_1;
}

struct C_013d4fc0 {
    undefined4 * sub_013d4fc0(undefined4 *);
    int sub_013d3450(int);
};

// @baa 0x013d4fc0
undefined4 * C_013d4fc0::sub_013d4fc0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d4fc0 *)(((char *)this + 4)))->sub_013d3450(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct C_013d4ff0 {
    undefined4 * sub_013d4ff0(undefined4 *);
    int sub_013c9ca0(int);
};

// @baa 0x013d4ff0
undefined4 * C_013d4ff0::sub_013d4ff0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d4ff0 *)(((char *)this + 4)))->sub_013c9ca0(param_2[1]);
  return param_1;
}

struct C_013d5010 {
    undefined4 * sub_013d5010(undefined4 *);
    int sub_013c9ca0(int);
};

// @baa 0x013d5010
undefined4 * C_013d5010::sub_013d5010(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d5010 *)(((char *)this + 4)))->sub_013c9ca0(param_2[1]);
  param_1[0x10] = 0xffffffff;
  return param_1;
}

struct C_013d5040 {
    undefined4 sub_013d5040(byte);
    int sub_00d8bc10();
};

int sub_0053dfa0(...);
// @baa 0x013d5040
undefined4 C_013d5040::sub_013d5040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013d5040 *)(((char *)this + 4)))->sub_00d8bc10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013d5070 {
    undefined4 sub_013d5070(byte);
    int sub_013c9140();
};

// @baa 0x013d5070
undefined4 C_013d5070::sub_013d5070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013d5070 *)(((char *)this + 4)))->sub_013c9140();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_013d79f0 {
    int sub_013d7060(int);
};

// @baa 0x013d79f0
void UPackageMap::sub_013d79f0(void)
{
    int param_1 = (int)this;
  ((C_view_013d79f0 *)((*(char **)((char *)this + 0x10))))->sub_013d7060(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_013d7a10 {
    int sub_013d7190(int);
};

// @baa 0x013d7a10
void UPackageMap::sub_013d7a10(void)
{
    int param_1 = (int)this;
  ((C_view_013d7a10 *)((*(char **)((char *)this + 0x10))))->sub_013d7190(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_013d7a30 {
    int sub_013d7a30();
};

int sub_013be960(void);
// @baa 0x013d7a30
int C_013d7a30::sub_013d7a30(void)
{
    int param_1 = (int)this;

  sub_013be960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d7a50 {
    int sub_013d7a50();
};

int sub_013beae0(void);
// @baa 0x013d7a50
int C_013d7a50::sub_013d7a50(void)
{
    int param_1 = (int)this;

  sub_013beae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_013d7890();
// @baa 0x013d7b00
void sub_013d7b00(void) { sub_013d7890(); }

struct C_013d7c70 {
    int sub_013d7c70();
};

// @baa 0x013d7c70
int C_013d7c70::sub_013d7c70(void)
{
    int param_1 = (int)this;

  sub_013be960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d7c90 {
    int sub_013d7c90();
};

// @baa 0x013d7c90
int C_013d7c90::sub_013d7c90(void)
{
    int param_1 = (int)this;

  sub_013beae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_013d7b50();
// @baa 0x013d7d10
void sub_013d7d10(void) { sub_013d7b50(); }

void sub_013d7c00();
// @baa 0x013d8130
void sub_013d8130(void) { sub_013d7c00(); }

struct C_013d8140 {
    int sub_013d8140();
};

// @baa 0x013d8140
int C_013d8140::sub_013d8140(void)
{
    int param_1 = (int)this;

  sub_013be960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d8160 {
    int sub_013d8160();
};

// @baa 0x013d8160
int C_013d8160::sub_013d8160(void)
{
    int param_1 = (int)this;

  sub_013beae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d8180 { void sub_013d7cb0(int); C_013d8180 *sub_013d8180(int); };

// @baa 0x013d8180
C_013d8180 *C_013d8180::sub_013d8180(int a) { sub_013d7cb0(a); return this; }

// @baa 0x013d81a0
void sub_013d81a0(void) { sub_013d7b50(); }

// @baa 0x013d84e0
void sub_013d84e0(void) { sub_013d7c00(); }

struct C_013d84f0 {
    int sub_013d84f0();
};

// @baa 0x013d84f0
int C_013d84f0::sub_013d84f0(void)
{
    int param_1 = (int)this;

  sub_013be960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d8510 {
    int sub_013d8510();
};

// @baa 0x013d8510
int C_013d8510::sub_013d8510(void)
{
    int param_1 = (int)this;

  sub_013beae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d8530 { void sub_013d7cb0(int); C_013d8530 *sub_013d8530(int); };

// @baa 0x013d8530
C_013d8530 *C_013d8530::sub_013d8530(int a) { sub_013d7cb0(a); return this; }

// @baa 0x013d8550
void sub_013d8550(void) { sub_013d7b50(); }

struct A_013d87f0 { virtual void sub_013d8a00(); char pad[412]; };

struct B_013d87f0 { virtual void sub_013d8a00(); };

struct C_013d87f0 : A_013d87f0, B_013d87f0 { virtual void sub_013d8a00(); C_013d87f0(); };

C_013d87f0::C_013d87f0() {}

// @baa 0x013d87f0
void C_013d87f0::sub_013d8a00() {}

// @baa 0x013d8800
void sub_013d8800(void) { sub_013d7c00(); }

struct M_013d8810 { void sub_013d7c00(); };

struct C_013d8810 { char pad[4]; M_013d8810 m; void sub_013d8810(); };

// @baa 0x013d8810
void C_013d8810::sub_013d8810() { m.sub_013d7c00(); }

struct M_013d8820 { void sub_013d7c00(); };

struct C_013d8820 { char pad[4]; M_013d8820 m; void sub_013d8820(); };

// @baa 0x013d8820
void C_013d8820::sub_013d8820() { m.sub_013d7c00(); }

struct C_013d8830 { void sub_013d7cb0(int); C_013d8830 *sub_013d8830(int); };

// @baa 0x013d8830
C_013d8830 *C_013d8830::sub_013d8830(int a) { sub_013d7cb0(a); return this; }

struct C_013d8850 {
    undefined4 sub_013d8850(byte);
    int sub_013d7c00();
};

// @baa 0x013d8850
undefined4 C_013d8850::sub_013d8850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013d8850 *)(((char *)this + 4)))->sub_013d7c00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013d8880 {
    undefined4 * sub_013d8880(undefined4 *);
    int sub_013d7cb0(int);
};

// @baa 0x013d8880
undefined4 * C_013d8880::sub_013d8880(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d8880 *)(((char *)this + 4)))->sub_013d7cb0((int)(param_2 + 1));
  return param_1;
}

struct C_013d8a00 {
    undefined4 sub_013d8a00(byte);
};

int sub_013d86d0(void);
// @baa 0x013d8a00
undefined4 C_013d8a00::sub_013d8a00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013d86d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013d8b90 {
    undefined4 * sub_013d8b90(undefined4 *);
    int sub_013d7cb0(int);
};

// @baa 0x013d8b90
undefined4 * C_013d8b90::sub_013d8b90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d8b90 *)(((char *)this + 4)))->sub_013d7cb0(param_2[1]);
  return param_1;
}

struct C_013d8bb0 {
    undefined4 * sub_013d8bb0(undefined4 *);
    int sub_013d7cb0(int);
};

// @baa 0x013d8bb0
undefined4 * C_013d8bb0::sub_013d8bb0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d8bb0 *)(((char *)this + 4)))->sub_013d7cb0(param_2[1]);
  param_1[0x10] = 0xffffffff;
  return param_1;
}

struct C_013d8be0 {
    undefined4 sub_013d8be0(byte);
    int sub_013d7c00();
};

// @baa 0x013d8be0
undefined4 C_013d8be0::sub_013d8be0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013d8be0 *)(((char *)this + 4)))->sub_013d7c00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_013d9090 {
    int sub_013d8ee0(int);
};

// @baa 0x013d9090
void UPackageMap::sub_013d9090(void)
{
    int param_1 = (int)this;
  ((C_view_013d9090 *)((*(char **)((char *)this + 0x10))))->sub_013d8ee0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_013beb40(void);
// @baa 0x013d90b0
int UPackageMap::sub_013d90b0(void)
{
    int param_1 = (int)this;

  sub_013beb40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x013d9210
int UPackageMap::sub_013d9210(void)
{
    int param_1 = (int)this;

  sub_013beb40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_013d91a0();
// @baa 0x013d9230
void sub_013d9230(void) { sub_013d91a0(); }

// @baa 0x013d9d10
int UPackageMap::sub_013d9d10(void)
{
    int param_1 = (int)this;

  sub_013beb40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x013d9d30
void sub_013d9d30(void) { sub_013d91a0(); }

// @baa 0x013d9d40
int UPackageMap::sub_013d9d40(void)
{
    int param_1 = (int)this;

  sub_013beb40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x013d9d60
void sub_013d9d60(void) { sub_013d91a0(); }
