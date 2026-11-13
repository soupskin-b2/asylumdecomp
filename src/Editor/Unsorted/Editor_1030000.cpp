// Editor_1030000.cpp: 37 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_0102f3d0(void);
// @baa 0x01030010
undefined4 UObject::sub_01030010(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0102f3d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0102fda0();
// @baa 0x01030030
void sub_01030030(void) { sub_0102fda0(); }

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

struct TConstSetBitIterator_01032460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01032460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01032460& operator++();
};

TConstSetBitIterator_01032460::TConstSetBitIterator_01032460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01032460
TConstSetBitIterator_01032460& TConstSetBitIterator_01032460::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010325b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010325b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010325b0& operator++();
};

TConstSetBitIterator_010325b0::TConstSetBitIterator_010325b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010325b0
TConstSetBitIterator_010325b0& TConstSetBitIterator_010325b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_00547da0(int);
    int sub_01029730(int);
};

// @baa 0x01032600
int URFMODSound::sub_01032600(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  ((C_view *)(((char *)this + 0x18)))->sub_01029730(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return param_1;
}

// @baa 0x01032c60
UAnalyzeScriptCommandlet::UAnalyzeScriptCommandlet()
{
    if (!(ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01032cc0
int sub_01032cc0(void);
int sub_005c7a70(...);
// @baa 0x01032d20
undefined4 UAnalyzeScriptCommandlet::sub_01032d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01032cc0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01032d40
UExportLocCommandlet::UExportLocCommandlet()
{
    if (!(ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01032da0
int sub_01032da0(void);
// @baa 0x01032e00
undefined4 UExportLocCommandlet::sub_01032e00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01032da0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

struct C_view_01037970 {
    int sub_01030280(int, int);
};

// @baa 0x01037970
int UObject::sub_01037970(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01037970 *)(this))->sub_01030280(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C {
    void sub_01037b90();
    int sub_007f2450(int, int);
};

// @baa 0x01037b90
void C::sub_01037b90(void)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_007f2450(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_01037c40 {
    void sub_01037c40();
    int sub_01034ea0(int, int);
};

// @baa 0x01037c40
void C_01037c40::sub_01037c40(void)
{
    int param_1 = (int)this;
  ((C_01037c40 *)(this))->sub_01034ea0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct TConstSetBitIterator_0103c410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0103c410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0103c410& operator++();
};

TConstSetBitIterator_0103c410::TConstSetBitIterator_0103c410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0103c410
TConstSetBitIterator_0103c410& TConstSetBitIterator_0103c410::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0103c460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0103c460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0103c460& operator++();
};

TConstSetBitIterator_0103c460::TConstSetBitIterator_0103c460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0103c460
TConstSetBitIterator_0103c460& TConstSetBitIterator_0103c460::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0103c4b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0103c4b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0103c4b0& operator++();
};

TConstSetBitIterator_0103c4b0::TConstSetBitIterator_0103c4b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0103c4b0
TConstSetBitIterator_0103c4b0& TConstSetBitIterator_0103c4b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0103c500 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0103c500(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0103c500& operator++();
};

TConstSetBitIterator_0103c500::TConstSetBitIterator_0103c500(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0103c500
TConstSetBitIterator_0103c500& TConstSetBitIterator_0103c500::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0103c550 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0103c550(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0103c550& operator++();
};

TConstSetBitIterator_0103c550::TConstSetBitIterator_0103c550(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0103c550
TConstSetBitIterator_0103c550& TConstSetBitIterator_0103c550::operator++()
{
    It.Advance();
    return *this;
}

void sub_01036ac0();
// @baa 0x0103c5d0
void sub_0103c5d0(void) { sub_01036ac0(); }

int sub_0103c660(void);
// @baa 0x0103c6e0
undefined4 UTexture2D::sub_0103c6e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0103c660();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x88);
  }
  return param_1;
}

int sub_01024750(void);
// @baa 0x0103c710
int UTexture2D::sub_0103c710(void)
{
    int param_1 = (int)this;

  sub_01024750();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01036c00();
// @baa 0x0103c820
void sub_0103c820(void) { sub_01036c00(); }

void sub_01037820();
// @baa 0x0103c9b0
void sub_0103c9b0(void) { sub_01037820(); }

void sub_01037890();
// @baa 0x0103c9c0
void sub_0103c9c0(void) { sub_01037890(); }

void sub_01037900();
// @baa 0x0103c9d0
void sub_0103c9d0(void) { sub_01037900(); }

void sub_01037b20();
// @baa 0x0103d800
void sub_0103d800(void) { sub_01037b20(); }

struct C_0103d810 {
    int sub_0103d810();
};

int sub_01028f60(void);
// @baa 0x0103d810
int C_0103d810::sub_0103d810(void)
{
    int param_1 = (int)this;

  sub_01028f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0103d900
void sub_0103d900(void) { sub_01036ac0(); }

int sub_01024270(void);
// @baa 0x0103d9a0
int UTexture2D::sub_0103d9a0(void)
{
    int param_1 = (int)this;

  sub_01024270();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0103d9c0
void sub_0103d9c0(void) { sub_01036c00(); }

// @baa 0x0103d9d0
void sub_0103d9d0(void) { sub_01037820(); }

// @baa 0x0103d9e0
void sub_0103d9e0(void) { sub_01037890(); }

// @baa 0x0103d9f0
void sub_0103d9f0(void) { sub_01037900(); }

int sub_00fb7190(void);
// @baa 0x0103da00
int UTexture2D::sub_0103da00(void)
{
    int param_1 = (int)this;

  sub_00fb7190();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct M_0103e610 { void sub_01036ac0(); };

struct C_0103e610 { char pad[16]; M_0103e610 m; void sub_0103e610(); };

// @baa 0x0103e610
void C_0103e610::sub_0103e610() { m.sub_01036ac0(); }

// @baa 0x0103e620
int UTexture2D::sub_0103e620(void)
{
    int param_1 = (int)this;

  sub_01024270();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
