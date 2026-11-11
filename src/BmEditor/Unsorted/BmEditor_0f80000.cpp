// BmEditor_0f80000.cpp: 33 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern TArray<int> g_026a1ca4;
struct C {
    int sub_00f81cf0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81cf0
int C::sub_00f81cf0()
{
    return g_026a1ca4(Index);
}

struct C_00f81d50 {
    int sub_00f81d50();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81d50
int C_00f81d50::sub_00f81d50()
{
    return g_026a1ca4(Index);
}

struct C_00f81db0 {
    int sub_00f81db0();
};

// @baa 0x00f81db0
int C_00f81db0::sub_00f81db0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f81dd0 {
    int sub_00f81dd0();
};

// @baa 0x00f81dd0
int C_00f81dd0::sub_00f81dd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00f81de0 {
    int sub_00f81de0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81de0
int C_00f81de0::sub_00f81de0()
{
    return g_026a1ca4(Index);
}

struct C_view {
    int sub_00f7dca0(int, int);
};

// @baa 0x00f81f10
int UState::sub_00f81f10(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00f7dca0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00f81f40 {
    int sub_009b74e0(int, int);
};

// @baa 0x00f81f40
int UState::sub_00f81f40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00f81f40 *)(this))->sub_009b74e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00f81f70 {
    int sub_00f7de30(int, int);
};

// @baa 0x00f81f70
int UState::sub_00f81f70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00f81f70 *)(this))->sub_00f7de30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00f81fa0 {
    int sub_00f7dfc0(int, int);
};

// @baa 0x00f81fa0
int UState::sub_00f81fa0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00f81fa0 *)(this))->sub_00f7dfc0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00f81fd0 {
    int sub_00f81fd0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81fd0
int C_00f81fd0::sub_00f81fd0()
{
    return g_026a1ca4(Index);
}

struct C_00f82270 {
    int sub_00f82270();
};

// @baa 0x00f82270
int C_00f82270::sub_00f82270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x1c;
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

struct TConstSetBitIterator_00f82300 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82300(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82300& operator++();
};

TConstSetBitIterator_00f82300::TConstSetBitIterator_00f82300(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82300
TConstSetBitIterator_00f82300& TConstSetBitIterator_00f82300::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82840& operator++();
};

TConstSetBitIterator_00f82840::TConstSetBitIterator_00f82840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82840
TConstSetBitIterator_00f82840& TConstSetBitIterator_00f82840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82860 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82860(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82860& operator++();
};

TConstSetBitIterator_00f82860::TConstSetBitIterator_00f82860(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82860
TConstSetBitIterator_00f82860& TConstSetBitIterator_00f82860::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82880& operator++();
};

TConstSetBitIterator_00f82880::TConstSetBitIterator_00f82880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82880
TConstSetBitIterator_00f82880& TConstSetBitIterator_00f82880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f828a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f828a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f828a0& operator++();
};

TConstSetBitIterator_00f828a0::TConstSetBitIterator_00f828a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f828a0
TConstSetBitIterator_00f828a0& TConstSetBitIterator_00f828a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f828c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f828c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f828c0& operator++();
};

TConstSetBitIterator_00f828c0::TConstSetBitIterator_00f828c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f828c0
TConstSetBitIterator_00f828c0& TConstSetBitIterator_00f828c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82910& operator++();
};

TConstSetBitIterator_00f82910::TConstSetBitIterator_00f82910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82910
TConstSetBitIterator_00f82910& TConstSetBitIterator_00f82910::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82960& operator++();
};

TConstSetBitIterator_00f82960::TConstSetBitIterator_00f82960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82960
TConstSetBitIterator_00f82960& TConstSetBitIterator_00f82960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f829b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f829b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f829b0& operator++();
};

TConstSetBitIterator_00f829b0::TConstSetBitIterator_00f829b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f829b0
TConstSetBitIterator_00f829b0& TConstSetBitIterator_00f829b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82a00& operator++();
};

TConstSetBitIterator_00f82a00::TConstSetBitIterator_00f82a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82a00
TConstSetBitIterator_00f82a00& TConstSetBitIterator_00f82a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82a50& operator++();
};

TConstSetBitIterator_00f82a50::TConstSetBitIterator_00f82a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82a50
TConstSetBitIterator_00f82a50& TConstSetBitIterator_00f82a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82a70& operator++();
};

TConstSetBitIterator_00f82a70::TConstSetBitIterator_00f82a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82a70
TConstSetBitIterator_00f82a70& TConstSetBitIterator_00f82a70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82a90& operator++();
};

TConstSetBitIterator_00f82a90::TConstSetBitIterator_00f82a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82a90
TConstSetBitIterator_00f82a90& TConstSetBitIterator_00f82a90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82ab0& operator++();
};

TConstSetBitIterator_00f82ab0::TConstSetBitIterator_00f82ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82ab0
TConstSetBitIterator_00f82ab0& TConstSetBitIterator_00f82ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82ad0& operator++();
};

TConstSetBitIterator_00f82ad0::TConstSetBitIterator_00f82ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82ad0
TConstSetBitIterator_00f82ad0& TConstSetBitIterator_00f82ad0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82af0& operator++();
};

TConstSetBitIterator_00f82af0::TConstSetBitIterator_00f82af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82af0
TConstSetBitIterator_00f82af0& TConstSetBitIterator_00f82af0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82b40& operator++();
};

TConstSetBitIterator_00f82b40::TConstSetBitIterator_00f82b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82b40
TConstSetBitIterator_00f82b40& TConstSetBitIterator_00f82b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82b90& operator++();
};

TConstSetBitIterator_00f82b90::TConstSetBitIterator_00f82b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82b90
TConstSetBitIterator_00f82b90& TConstSetBitIterator_00f82b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82be0& operator++();
};

TConstSetBitIterator_00f82be0::TConstSetBitIterator_00f82be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82be0
TConstSetBitIterator_00f82be0& TConstSetBitIterator_00f82be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f82c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f82c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f82c30& operator++();
};

TConstSetBitIterator_00f82c30::TConstSetBitIterator_00f82c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f82c30
TConstSetBitIterator_00f82c30& TConstSetBitIterator_00f82c30::operator++()
{
    It.Advance();
    return *this;
}

struct C_00f836b0 {
    undefined4 sub_00f836b0(byte);
};

int sub_0053dfa0(...);
int sub_00f7f330(void);
// @baa 0x00f836b0
undefined4 C_00f836b0::sub_00f836b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f7f330();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00f884b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f884b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f884b0& operator++();
};

TConstSetBitIterator_00f884b0::TConstSetBitIterator_00f884b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f884b0
TConstSetBitIterator_00f884b0& TConstSetBitIterator_00f884b0::operator++()
{
    It.Advance();
    return *this;
}
