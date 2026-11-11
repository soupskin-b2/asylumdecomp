// FMod_1030000.cpp: 37 functions
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

struct TConstSetBitIterator_010312d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010312d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010312d0& operator++();
};

TConstSetBitIterator_010312d0::TConstSetBitIterator_010312d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010312d0
TConstSetBitIterator_010312d0& TConstSetBitIterator_010312d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031320& operator++();
};

TConstSetBitIterator_01031320::TConstSetBitIterator_01031320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031320
TConstSetBitIterator_01031320& TConstSetBitIterator_01031320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010315f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010315f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010315f0& operator++();
};

TConstSetBitIterator_010315f0::TConstSetBitIterator_010315f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010315f0
TConstSetBitIterator_010315f0& TConstSetBitIterator_010315f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010317f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010317f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010317f0& operator++();
};

TConstSetBitIterator_010317f0::TConstSetBitIterator_010317f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010317f0
TConstSetBitIterator_010317f0& TConstSetBitIterator_010317f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031ac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031ac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031ac0& operator++();
};

TConstSetBitIterator_01031ac0::TConstSetBitIterator_01031ac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031ac0
TConstSetBitIterator_01031ac0& TConstSetBitIterator_01031ac0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031ae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031ae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031ae0& operator++();
};

TConstSetBitIterator_01031ae0::TConstSetBitIterator_01031ae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031ae0
TConstSetBitIterator_01031ae0& TConstSetBitIterator_01031ae0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031b00& operator++();
};

TConstSetBitIterator_01031b00::TConstSetBitIterator_01031b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031b00
TConstSetBitIterator_01031b00& TConstSetBitIterator_01031b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031b20& operator++();
};

TConstSetBitIterator_01031b20::TConstSetBitIterator_01031b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031b20
TConstSetBitIterator_01031b20& TConstSetBitIterator_01031b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031b40& operator++();
};

TConstSetBitIterator_01031b40::TConstSetBitIterator_01031b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031b40
TConstSetBitIterator_01031b40& TConstSetBitIterator_01031b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031b60& operator++();
};

TConstSetBitIterator_01031b60::TConstSetBitIterator_01031b60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031b60
TConstSetBitIterator_01031b60& TConstSetBitIterator_01031b60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031bb0& operator++();
};

TConstSetBitIterator_01031bb0::TConstSetBitIterator_01031bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031bb0
TConstSetBitIterator_01031bb0& TConstSetBitIterator_01031bb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031c00& operator++();
};

TConstSetBitIterator_01031c00::TConstSetBitIterator_01031c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031c00
TConstSetBitIterator_01031c00& TConstSetBitIterator_01031c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031c50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031c50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031c50& operator++();
};

TConstSetBitIterator_01031c50::TConstSetBitIterator_01031c50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031c50
TConstSetBitIterator_01031c50& TConstSetBitIterator_01031c50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031ca0& operator++();
};

TConstSetBitIterator_01031ca0::TConstSetBitIterator_01031ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031ca0
TConstSetBitIterator_01031ca0& TConstSetBitIterator_01031ca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031cf0& operator++();
};

TConstSetBitIterator_01031cf0::TConstSetBitIterator_01031cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031cf0
TConstSetBitIterator_01031cf0& TConstSetBitIterator_01031cf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031d40& operator++();
};

TConstSetBitIterator_01031d40::TConstSetBitIterator_01031d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031d40
TConstSetBitIterator_01031d40& TConstSetBitIterator_01031d40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031d90& operator++();
};

TConstSetBitIterator_01031d90::TConstSetBitIterator_01031d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031d90
TConstSetBitIterator_01031d90& TConstSetBitIterator_01031d90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031de0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031de0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031de0& operator++();
};

TConstSetBitIterator_01031de0::TConstSetBitIterator_01031de0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031de0
TConstSetBitIterator_01031de0& TConstSetBitIterator_01031de0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031e30& operator++();
};

TConstSetBitIterator_01031e30::TConstSetBitIterator_01031e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031e30
TConstSetBitIterator_01031e30& TConstSetBitIterator_01031e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031e80& operator++();
};

TConstSetBitIterator_01031e80::TConstSetBitIterator_01031e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031e80
TConstSetBitIterator_01031e80& TConstSetBitIterator_01031e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031ed0& operator++();
};

TConstSetBitIterator_01031ed0::TConstSetBitIterator_01031ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031ed0
TConstSetBitIterator_01031ed0& TConstSetBitIterator_01031ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031f20& operator++();
};

TConstSetBitIterator_01031f20::TConstSetBitIterator_01031f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031f20
TConstSetBitIterator_01031f20& TConstSetBitIterator_01031f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01032070 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01032070(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01032070& operator++();
};

TConstSetBitIterator_01032070::TConstSetBitIterator_01032070(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01032070
TConstSetBitIterator_01032070& TConstSetBitIterator_01032070::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010321c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010321c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010321c0& operator++();
};

TConstSetBitIterator_010321c0::TConstSetBitIterator_010321c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010321c0
TConstSetBitIterator_010321c0& TConstSetBitIterator_010321c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01032310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01032310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01032310& operator++();
};

TConstSetBitIterator_01032310::TConstSetBitIterator_01032310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01032310
TConstSetBitIterator_01032310& TConstSetBitIterator_01032310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01037d80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01037d80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01037d80& operator++();
};

TConstSetBitIterator_01037d80::TConstSetBitIterator_01037d80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01037d80
TConstSetBitIterator_01037d80& TConstSetBitIterator_01037d80::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_01037dd0(undefined4, undefined4);
    int sub_01034fb0(int, int);
};

// @baa 0x01037dd0
undefined4 C::sub_01037dd0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(this))->sub_01034fb0(param_2, param_3);
  return param_1;
}

struct C_01037e80 {
    void sub_01037e80();
    int sub_010350d0(int, int);
};

// @baa 0x01037e80
void C_01037e80::sub_01037e80(void)
{
    int param_1 = (int)this;
  ((C_01037e80 *)(this))->sub_010350d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_01037f90 {
    undefined4 sub_01037f90(undefined4, undefined4);
    int sub_01035190(int, int);
};

// @baa 0x01037f90
undefined4 C_01037f90::sub_01037f90(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01037f90 *)(this))->sub_01035190(param_2, param_3);
  return param_1;
}

struct C_0103d830 {
    int sub_0103d830();
};

int sub_01029010(void);
// @baa 0x0103d830
int C_0103d830::sub_0103d830(void)
{
    int param_1 = (int)this;

  sub_01029010();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0103d850 {
    int sub_0103d850();
};

int sub_01029070(void);
// @baa 0x0103d850
int C_0103d850::sub_0103d850(void)
{
    int param_1 = (int)this;

  sub_01029070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0103d870 {
    int sub_0103d870();
};

int sub_010290d0(void);
// @baa 0x0103d870
int C_0103d870::sub_0103d870(void)
{
    int param_1 = (int)this;

  sub_010290d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0103d8b0 { void sub_01039420(int); C_0103d8b0 *sub_0103d8b0(int); };

// @baa 0x0103d8b0
C_0103d8b0 *C_0103d8b0::sub_0103d8b0(int a) { sub_01039420(a); return this; }

void sub_01037b20();
// @baa 0x0103e520
void sub_0103e520(void) { sub_01037b20(); }

struct C_0103e550 { void sub_01039420(int); C_0103e550 *sub_0103e550(int); };

// @baa 0x0103e550
C_0103e550 *C_0103e550::sub_0103e550(int a) { sub_01039420(a); return this; }

int sub_01024750(void);
// @baa 0x0103e570
int UTexture2D::sub_0103e570(void)
{
    int param_1 = (int)this;

  sub_01024750();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01036ac0();
// @baa 0x0103e590
void sub_0103e590(void) { sub_01036ac0(); }
