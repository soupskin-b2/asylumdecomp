// Editor_1020000.cpp (part 1 of 2): 168 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_01021350();
};

// @baa 0x01021350
int C::sub_01021350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01021370 {
    int sub_01021370();
};

// @baa 0x01021370
int C_01021370::sub_01021370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_view {
    int sub_00faa3c0(int, int);
};

// @baa 0x01021380
int UTexture2D::sub_01021380(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00faa3c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_010213b0 {
    int sub_010213b0();
};

// @baa 0x010213b0
int C_010213b0::sub_010213b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
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

struct TConstSetBitIterator_01021420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01021420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01021420& operator++();
};

TConstSetBitIterator_01021420::TConstSetBitIterator_01021420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01021420
TConstSetBitIterator_01021420& TConstSetBitIterator_01021420::operator++()
{
    It.Advance();
    return *this;
}

struct C_010214f0 {
    int sub_010214f0(int);
    int sub_0101cfe0(int, int);
};

// @baa 0x010214f0
int C_010214f0::sub_010214f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010214f0 *)(this))->sub_0101cfe0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_01021970 {
    int sub_01021970();
};

// @baa 0x01021970
int C_01021970::sub_01021970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x14;
}

struct C_01021a00 {
    undefined4 sub_01021a00(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x01021a00
undefined4 C_01021a00::sub_01021a00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01021a00 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_01021a30 { void sub_0054eec0(); };

struct C_01021a30 { char pad[32]; M_01021a30 m; void sub_01021a30(); };

// @baa 0x01021a30
void C_01021a30::sub_01021a30() { m.sub_0054eec0(); }

struct TConstSetBitIterator_01022180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022180& operator++();
};

TConstSetBitIterator_01022180::TConstSetBitIterator_01022180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022180
TConstSetBitIterator_01022180& TConstSetBitIterator_01022180::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010221a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010221a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010221a0& operator++();
};

TConstSetBitIterator_010221a0::TConstSetBitIterator_010221a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010221a0
TConstSetBitIterator_010221a0& TConstSetBitIterator_010221a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022220& operator++();
};

TConstSetBitIterator_01022220::TConstSetBitIterator_01022220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022220
TConstSetBitIterator_01022220& TConstSetBitIterator_01022220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022240& operator++();
};

TConstSetBitIterator_01022240::TConstSetBitIterator_01022240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022240
TConstSetBitIterator_01022240& TConstSetBitIterator_01022240::operator++()
{
    It.Advance();
    return *this;
}

struct C_01022260 {
    undefined4 sub_01022260(byte);
    int sub_0040fcc0();
};

// @baa 0x01022260
undefined4 C_01022260::sub_01022260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01022260 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01022290 {
    undefined4 * sub_01022290(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01022290
undefined4 * C_01022290::sub_01022290(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  ((C_01022290 *)(((char *)this + 0x1c)))->sub_00555160((int)(param_2 + 7));
  return param_1;
}

struct C_010222e0 {
    undefined4 sub_010222e0(byte);
    int sub_005a9220();
};

// @baa 0x010222e0
undefined4 C_010222e0::sub_010222e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010222e0 *)(((char *)this + 4)))->sub_005a9220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_01022310 { void sub_0054eec0(); };

struct C_01022310 { char pad[32]; M_01022310 m; void sub_01022310(); };

// @baa 0x01022310
void C_01022310::sub_01022310() { m.sub_0054eec0(); }

struct TConstSetBitIterator_01023980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023980& operator++();
};

TConstSetBitIterator_01023980::TConstSetBitIterator_01023980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023980
TConstSetBitIterator_01023980& TConstSetBitIterator_01023980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010239d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010239d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010239d0& operator++();
};

TConstSetBitIterator_010239d0::TConstSetBitIterator_010239d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010239d0
TConstSetBitIterator_010239d0& TConstSetBitIterator_010239d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023a20& operator++();
};

TConstSetBitIterator_01023a20::TConstSetBitIterator_01023a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023a20
TConstSetBitIterator_01023a20& TConstSetBitIterator_01023a20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023a70& operator++();
};

TConstSetBitIterator_01023a70::TConstSetBitIterator_01023a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023a70
TConstSetBitIterator_01023a70& TConstSetBitIterator_01023a70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023ac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023ac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023ac0& operator++();
};

TConstSetBitIterator_01023ac0::TConstSetBitIterator_01023ac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023ac0
TConstSetBitIterator_01023ac0& TConstSetBitIterator_01023ac0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023ba0 {
    undefined4 * sub_01023ba0(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01023ba0
undefined4 * C_01023ba0::sub_01023ba0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  ((C_01023ba0 *)(((char *)this + 0x20)))->sub_00555160((int)(param_2 + 8));
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  return param_1;
}

int sub_01023c40(...);
// @baa 0x01023cd0
bool sub_01023cd0(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01023c40(param_1,param_2);
  return iVar1 == 0;
}

struct TConstSetBitIterator_01023cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023cf0& operator++();
};

TConstSetBitIterator_01023cf0::TConstSetBitIterator_01023cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023cf0
TConstSetBitIterator_01023cf0& TConstSetBitIterator_01023cf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023d40& operator++();
};

TConstSetBitIterator_01023d40::TConstSetBitIterator_01023d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023d40
TConstSetBitIterator_01023d40& TConstSetBitIterator_01023d40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023d90& operator++();
};

TConstSetBitIterator_01023d90::TConstSetBitIterator_01023d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023d90
TConstSetBitIterator_01023d90& TConstSetBitIterator_01023d90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023de0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023de0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023de0& operator++();
};

TConstSetBitIterator_01023de0::TConstSetBitIterator_01023de0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023de0
TConstSetBitIterator_01023de0& TConstSetBitIterator_01023de0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023e30& operator++();
};

TConstSetBitIterator_01023e30::TConstSetBitIterator_01023e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023e30
TConstSetBitIterator_01023e30& TConstSetBitIterator_01023e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023e80& operator++();
};

TConstSetBitIterator_01023e80::TConstSetBitIterator_01023e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023e80
TConstSetBitIterator_01023e80& TConstSetBitIterator_01023e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023ed0& operator++();
};

TConstSetBitIterator_01023ed0::TConstSetBitIterator_01023ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023ed0
TConstSetBitIterator_01023ed0& TConstSetBitIterator_01023ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023f20& operator++();
};

TConstSetBitIterator_01023f20::TConstSetBitIterator_01023f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023f20
TConstSetBitIterator_01023f20& TConstSetBitIterator_01023f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023f70& operator++();
};

TConstSetBitIterator_01023f70::TConstSetBitIterator_01023f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023f70
TConstSetBitIterator_01023f70& TConstSetBitIterator_01023f70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023fc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023fc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023fc0& operator++();
};

TConstSetBitIterator_01023fc0::TConstSetBitIterator_01023fc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023fc0
TConstSetBitIterator_01023fc0& TConstSetBitIterator_01023fc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01024010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01024010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01024010& operator++();
};

TConstSetBitIterator_01024010::TConstSetBitIterator_01024010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01024010
TConstSetBitIterator_01024010& TConstSetBitIterator_01024010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01024060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01024060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01024060& operator++();
};

TConstSetBitIterator_01024060::TConstSetBitIterator_01024060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01024060
TConstSetBitIterator_01024060& TConstSetBitIterator_01024060::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010240b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010240b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010240b0& operator++();
};

TConstSetBitIterator_010240b0::TConstSetBitIterator_010240b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010240b0
TConstSetBitIterator_010240b0& TConstSetBitIterator_010240b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01024100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01024100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01024100& operator++();
};

TConstSetBitIterator_01024100::TConstSetBitIterator_01024100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01024100
TConstSetBitIterator_01024100& TConstSetBitIterator_01024100::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01024150 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01024150(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01024150& operator++();
};

TConstSetBitIterator_01024150::TConstSetBitIterator_01024150(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01024150
TConstSetBitIterator_01024150& TConstSetBitIterator_01024150::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010247b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010247b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010247b0& operator++();
};

TConstSetBitIterator_010247b0::TConstSetBitIterator_010247b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010247b0
TConstSetBitIterator_010247b0& TConstSetBitIterator_010247b0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0101b440(void);
// @baa 0x01024800
undefined4 UObject::sub_01024800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0101b440();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_01024820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01024820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01024820& operator++();
};

TConstSetBitIterator_01024820::TConstSetBitIterator_01024820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01024820
TConstSetBitIterator_01024820& TConstSetBitIterator_01024820::operator++()
{
    It.Advance();
    return *this;
}

struct C_01027240 {
    undefined4 sub_01027240(byte);
};

int sub_01027190(void);
// @baa 0x01027240
undefined4 C_01027240::sub_01027240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01027190();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x010274d0
int UTexture2D::sub_010274d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_00faa3c0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_01027510 {
    int sub_01027510();
};

// @baa 0x01027510
int C_01027510::sub_01027510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01027520 {
    int sub_01027520();
};

// @baa 0x01027520
int C_01027520::sub_01027520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 8 + *(int *)*param_1;
}

struct TConstSetBitIterator_01027600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01027600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01027600& operator++();
};

TConstSetBitIterator_01027600::TConstSetBitIterator_01027600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01027600
TConstSetBitIterator_01027600& TConstSetBitIterator_01027600::operator++()
{
    It.Advance();
    return *this;
}

struct C_010276f0 {
    int sub_010276f0(int);
    int sub_0101cfe0(int, int);
};

// @baa 0x010276f0
int C_010276f0::sub_010276f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_010276f0 *)(this))->sub_0101cfe0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_01027730 {
    int sub_01027730(int);
    int sub_01021a40(int, int);
};

// @baa 0x01027730
int C_01027730::sub_01027730(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027730 *)(this))->sub_01021a40((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xac + *param_1;
  }
  return 0;
}

struct C_01027760 {
    int sub_01027760(int);
    int sub_01021ad0(int, int);
};

// @baa 0x01027760
int C_01027760::sub_01027760(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027760 *)(this))->sub_01021ad0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xb0 + *param_1;
  }
  return 0;
}

struct C_01027790 {
    int sub_01027790(int);
    int sub_01021b60(int, int);
};

// @baa 0x01027790
int C_01027790::sub_01027790(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027790 *)(this))->sub_01021b60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xcc + *param_1;
  }
  return 0;
}

struct C_010277c0 {
    int sub_010277c0(int);
    int sub_01021bf0(int, int);
};

// @baa 0x010277c0
int C_010277c0::sub_010277c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010277c0 *)(this))->sub_01021bf0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 300 + *param_1;
  }
  return 0;
}

struct C_010277f0 {
    int sub_010277f0(int);
    int sub_01021c80(int, int);
};

// @baa 0x010277f0
int C_010277f0::sub_010277f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010277f0 *)(this))->sub_01021c80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 200 + *param_1;
  }
  return 0;
}

struct C_01027820 {
    int sub_01027820(int);
    int sub_01021d10(int, int);
};

// @baa 0x01027820
int C_01027820::sub_01027820(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027820 *)(this))->sub_01021d10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x8c + *param_1;
  }
  return 0;
}

struct C_01027850 {
    int sub_01027850(int);
    int sub_01021da0(int, int);
};

// @baa 0x01027850
int C_01027850::sub_01027850(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027850 *)(this))->sub_01021da0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xc4 + *param_1;
  }
  return 0;
}

struct C_01027880 {
    int sub_01027880(int);
    int sub_01021e30(int, int);
};

// @baa 0x01027880
int C_01027880::sub_01027880(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027880 *)(this))->sub_01021e30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x8c + *param_1;
  }
  return 0;
}

struct C_010278b0 {
    int sub_010278b0(int);
    int sub_01021ec0(int, int);
};

// @baa 0x010278b0
int C_010278b0::sub_010278b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010278b0 *)(this))->sub_01021ec0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xa0 + *param_1;
  }
  return 0;
}

struct C_010278e0 {
    int sub_010278e0(int);
    int sub_01021f50(int, int);
};

// @baa 0x010278e0
int C_010278e0::sub_010278e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010278e0 *)(this))->sub_01021f50((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x94 + *param_1;
  }
  return 0;
}

struct C_01027910 {
    int sub_01027910(int);
    int sub_01021fe0(int, int);
};

// @baa 0x01027910
int C_01027910::sub_01027910(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027910 *)(this))->sub_01021fe0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x88 + *param_1;
  }
  return 0;
}

struct C_01027940 {
    int sub_01027940(int);
    int sub_01022070(int, int);
};

// @baa 0x01027940
int C_01027940::sub_01027940(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027940 *)(this))->sub_01022070((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xa0 + *param_1;
  }
  return 0;
}

struct C_010279d0 {
    int sub_010279d0(int);
    int sub_01022100(int, int);
};

// @baa 0x010279d0
int C_010279d0::sub_010279d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010279d0 *)(this))->sub_01022100((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct TConstSetBitIterator_01027a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01027a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01027a00& operator++();
};

TConstSetBitIterator_01027a00::TConstSetBitIterator_01027a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01027a00
TConstSetBitIterator_01027a00& TConstSetBitIterator_01027a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01027a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01027a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01027a20& operator++();
};

TConstSetBitIterator_01027a20::TConstSetBitIterator_01027a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01027a20
TConstSetBitIterator_01027a20& TConstSetBitIterator_01027a20::operator++()
{
    It.Advance();
    return *this;
}

struct C_01027a40 {
    int sub_01027a40(int);
    int sub_010221c0(int, int);
};

// @baa 0x01027a40
int C_01027a40::sub_01027a40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027a40 *)(this))->sub_010221c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x34 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_01027a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01027a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01027a70& operator++();
};

TConstSetBitIterator_01027a70::TConstSetBitIterator_01027a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01027a70
TConstSetBitIterator_01027a70& TConstSetBitIterator_01027a70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01027a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01027a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01027a90& operator++();
};

TConstSetBitIterator_01027a90::TConstSetBitIterator_01027a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01027a90
TConstSetBitIterator_01027a90& TConstSetBitIterator_01027a90::operator++()
{
    It.Advance();
    return *this;
}

struct C_01028930 {
    undefined4 * sub_01028930(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01028930
undefined4 * C_01028930::sub_01028930(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  param_1[3] = puVar1[2];
  param_1[4] = puVar1[3];
  param_1[5] = puVar1[4];
  param_1[6] = puVar1[5];
  param_1[7] = puVar1[6];
  ((C_01028930 *)(((char *)this + 0x20)))->sub_00555160((int)(puVar1 + 7));
  return param_1;
}

struct C_01028a60 {
    undefined4 * sub_01028a60(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01028a60
undefined4 * C_01028a60::sub_01028a60(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  param_1[3] = puVar1[2];
  param_1[4] = puVar1[3];
  param_1[5] = puVar1[4];
  param_1[6] = puVar1[5];
  param_1[7] = puVar1[6];
  ((C_01028a60 *)(((char *)this + 0x20)))->sub_00555160((int)(puVar1 + 7));
  param_1[0xb] = 0xffffffff;
  return param_1;
}

struct C_01028b30 {
    undefined4 * sub_01028b30(undefined4 *);
    int sub_01022460(int);
};

// @baa 0x01028b30
undefined4 * C_01028b30::sub_01028b30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01028b30 *)(((char *)this + 4)))->sub_01022460(param_2[1]);
  return param_1;
}

struct C_01028c40 {
    undefined4 * sub_01028c40(undefined4 *);
    int sub_01022460(int);
};

// @baa 0x01028c40
undefined4 * C_01028c40::sub_01028c40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01028c40 *)(((char *)this + 4)))->sub_01022460(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct C_01028c70 {
    undefined4 sub_01028c70(byte);
    int sub_0054eec0();
};

// @baa 0x01028c70
undefined4 C_01028c70::sub_01028c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01028c70 *)(((char *)this + 0x20)))->sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_01028ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01028ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01028ca0& operator++();
};

TConstSetBitIterator_01028ca0::TConstSetBitIterator_01028ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01028ca0
TConstSetBitIterator_01028ca0& TConstSetBitIterator_01028ca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01028e20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01028e20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01028e20& operator++();
};

TConstSetBitIterator_01028e20::TConstSetBitIterator_01028e20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01028e20
TConstSetBitIterator_01028e20& TConstSetBitIterator_01028e20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01028e70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01028e70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01028e70& operator++();
};

TConstSetBitIterator_01028e70::TConstSetBitIterator_01028e70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01028e70
TConstSetBitIterator_01028e70& TConstSetBitIterator_01028e70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01028ec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01028ec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01028ec0& operator++();
};

TConstSetBitIterator_01028ec0::TConstSetBitIterator_01028ec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01028ec0
TConstSetBitIterator_01028ec0& TConstSetBitIterator_01028ec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01028f10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01028f10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01028f10& operator++();
};

TConstSetBitIterator_01028f10::TConstSetBitIterator_01028f10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01028f10
TConstSetBitIterator_01028f10& TConstSetBitIterator_01028f10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01028fc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01028fc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01028fc0& operator++();
};

TConstSetBitIterator_01028fc0::TConstSetBitIterator_01028fc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01028fc0
TConstSetBitIterator_01028fc0& TConstSetBitIterator_01028fc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029130 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029130(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029130& operator++();
};

TConstSetBitIterator_01029130::TConstSetBitIterator_01029130(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029130
TConstSetBitIterator_01029130& TConstSetBitIterator_01029130::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029180& operator++();
};

TConstSetBitIterator_01029180::TConstSetBitIterator_01029180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029180
TConstSetBitIterator_01029180& TConstSetBitIterator_01029180::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010291d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010291d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010291d0& operator++();
};

TConstSetBitIterator_010291d0::TConstSetBitIterator_010291d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010291d0
TConstSetBitIterator_010291d0& TConstSetBitIterator_010291d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029220& operator++();
};

TConstSetBitIterator_01029220::TConstSetBitIterator_01029220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029220
TConstSetBitIterator_01029220& TConstSetBitIterator_01029220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029270& operator++();
};

TConstSetBitIterator_01029270::TConstSetBitIterator_01029270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029270
TConstSetBitIterator_01029270& TConstSetBitIterator_01029270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010292c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010292c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010292c0& operator++();
};

TConstSetBitIterator_010292c0::TConstSetBitIterator_010292c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010292c0
TConstSetBitIterator_010292c0& TConstSetBitIterator_010292c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029310& operator++();
};

TConstSetBitIterator_01029310::TConstSetBitIterator_01029310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029310
TConstSetBitIterator_01029310& TConstSetBitIterator_01029310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029360& operator++();
};

TConstSetBitIterator_01029360::TConstSetBitIterator_01029360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029360
TConstSetBitIterator_01029360& TConstSetBitIterator_01029360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010293b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010293b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010293b0& operator++();
};

TConstSetBitIterator_010293b0::TConstSetBitIterator_010293b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010293b0
TConstSetBitIterator_010293b0& TConstSetBitIterator_010293b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029400& operator++();
};

TConstSetBitIterator_01029400::TConstSetBitIterator_01029400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029400
TConstSetBitIterator_01029400& TConstSetBitIterator_01029400::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029450& operator++();
};

TConstSetBitIterator_01029450::TConstSetBitIterator_01029450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029450
TConstSetBitIterator_01029450& TConstSetBitIterator_01029450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010294a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010294a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010294a0& operator++();
};

TConstSetBitIterator_010294a0::TConstSetBitIterator_010294a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010294a0
TConstSetBitIterator_010294a0& TConstSetBitIterator_010294a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010294f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010294f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010294f0& operator++();
};

TConstSetBitIterator_010294f0::TConstSetBitIterator_010294f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010294f0
TConstSetBitIterator_010294f0& TConstSetBitIterator_010294f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029540& operator++();
};

TConstSetBitIterator_01029540::TConstSetBitIterator_01029540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029540
TConstSetBitIterator_01029540& TConstSetBitIterator_01029540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029590& operator++();
};

TConstSetBitIterator_01029590::TConstSetBitIterator_01029590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029590
TConstSetBitIterator_01029590& TConstSetBitIterator_01029590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010295e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010295e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010295e0& operator++();
};

TConstSetBitIterator_010295e0::TConstSetBitIterator_010295e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010295e0
TConstSetBitIterator_010295e0& TConstSetBitIterator_010295e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029630& operator++();
};

TConstSetBitIterator_01029630::TConstSetBitIterator_01029630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029630
TConstSetBitIterator_01029630& TConstSetBitIterator_01029630::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029680& operator++();
};

TConstSetBitIterator_01029680::TConstSetBitIterator_01029680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029680
TConstSetBitIterator_01029680& TConstSetBitIterator_01029680::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029890& operator++();
};

TConstSetBitIterator_01029890::TConstSetBitIterator_01029890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029890
TConstSetBitIterator_01029890& TConstSetBitIterator_01029890::operator++()
{
    It.Advance();
    return *this;
}

struct C_010298b0 {
    int sub_010298b0();
};

// @baa 0x010298b0
int C_010298b0::sub_010298b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xac + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_010298d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010298d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010298d0& operator++();
};

TConstSetBitIterator_010298d0::TConstSetBitIterator_010298d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010298d0
TConstSetBitIterator_010298d0& TConstSetBitIterator_010298d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_010298f0 {
    int sub_010298f0();
};

// @baa 0x010298f0
int C_010298f0::sub_010298f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xb0 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029910& operator++();
};

TConstSetBitIterator_01029910::TConstSetBitIterator_01029910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029910
TConstSetBitIterator_01029910& TConstSetBitIterator_01029910::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029930 {
    int sub_01029930();
};

// @baa 0x01029930
int C_01029930::sub_01029930(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xcc + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029950& operator++();
};

TConstSetBitIterator_01029950::TConstSetBitIterator_01029950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029950
TConstSetBitIterator_01029950& TConstSetBitIterator_01029950::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029970 {
    int sub_01029970();
};

// @baa 0x01029970
int C_01029970::sub_01029970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 300 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029990 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029990(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029990& operator++();
};

TConstSetBitIterator_01029990::TConstSetBitIterator_01029990(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029990
TConstSetBitIterator_01029990& TConstSetBitIterator_01029990::operator++()
{
    It.Advance();
    return *this;
}

struct C_010299b0 {
    int sub_010299b0();
};

// @baa 0x010299b0
int C_010299b0::sub_010299b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 200 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_010299d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010299d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010299d0& operator++();
};

TConstSetBitIterator_010299d0::TConstSetBitIterator_010299d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010299d0
TConstSetBitIterator_010299d0& TConstSetBitIterator_010299d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_010299f0 {
    int sub_010299f0();
};

// @baa 0x010299f0
int C_010299f0::sub_010299f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xc4 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029a10& operator++();
};

TConstSetBitIterator_01029a10::TConstSetBitIterator_01029a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029a10
TConstSetBitIterator_01029a10& TConstSetBitIterator_01029a10::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029a30 {
    int sub_01029a30();
};

// @baa 0x01029a30
int C_01029a30::sub_01029a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029a50& operator++();
};

TConstSetBitIterator_01029a50::TConstSetBitIterator_01029a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029a50
TConstSetBitIterator_01029a50& TConstSetBitIterator_01029a50::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029a70 {
    int sub_01029a70();
};

// @baa 0x01029a70
int C_01029a70::sub_01029a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029a90& operator++();
};

TConstSetBitIterator_01029a90::TConstSetBitIterator_01029a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029a90
TConstSetBitIterator_01029a90& TConstSetBitIterator_01029a90::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029ab0 {
    int sub_01029ab0();
};

// @baa 0x01029ab0
int C_01029ab0::sub_01029ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029ad0& operator++();
};

TConstSetBitIterator_01029ad0::TConstSetBitIterator_01029ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029ad0
TConstSetBitIterator_01029ad0& TConstSetBitIterator_01029ad0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029af0 {
    int sub_01029af0();
};

// @baa 0x01029af0
int C_01029af0::sub_01029af0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x94 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029b10& operator++();
};

TConstSetBitIterator_01029b10::TConstSetBitIterator_01029b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029b10
TConstSetBitIterator_01029b10& TConstSetBitIterator_01029b10::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029b30 {
    int sub_01029b30();
};

// @baa 0x01029b30
int C_01029b30::sub_01029b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x88 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029b50& operator++();
};

TConstSetBitIterator_01029b50::TConstSetBitIterator_01029b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029b50
TConstSetBitIterator_01029b50& TConstSetBitIterator_01029b50::operator++()
{
    It.Advance();
    return *this;
}

struct C_01029b70 {
    int sub_01029b70();
};

// @baa 0x01029b70
int C_01029b70::sub_01029b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + 0xc + *(int *)*param_1;
}

struct C_01029bd0 {
    int sub_01029bd0();
};

// @baa 0x01029bd0
int C_01029bd0::sub_01029bd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029be0 {
    int sub_01029be0();
};

// @baa 0x01029be0
int C_01029be0::sub_01029be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029c30 {
    int sub_01029c30();
};

// @baa 0x01029c30
int C_01029c30::sub_01029c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029c40 {
    int sub_01029c40();
};

// @baa 0x01029c40
int C_01029c40::sub_01029c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029c90 {
    int sub_01029c90();
};

// @baa 0x01029c90
int C_01029c90::sub_01029c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029ca0 {
    int sub_01029ca0();
};

// @baa 0x01029ca0
int C_01029ca0::sub_01029ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029cf0 {
    int sub_01029cf0();
};

// @baa 0x01029cf0
int C_01029cf0::sub_01029cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029d00 {
    int sub_01029d00();
};

// @baa 0x01029d00
int C_01029d00::sub_01029d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029d50 {
    int sub_01029d50();
};

// @baa 0x01029d50
int C_01029d50::sub_01029d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029d60 {
    int sub_01029d60();
};

// @baa 0x01029d60
int C_01029d60::sub_01029d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_01029d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029d70& operator++();
};

TConstSetBitIterator_01029d70::TConstSetBitIterator_01029d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029d70
TConstSetBitIterator_01029d70& TConstSetBitIterator_01029d70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029d90& operator++();
};

TConstSetBitIterator_01029d90::TConstSetBitIterator_01029d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029d90
TConstSetBitIterator_01029d90& TConstSetBitIterator_01029d90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029db0& operator++();
};

TConstSetBitIterator_01029db0::TConstSetBitIterator_01029db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029db0
TConstSetBitIterator_01029db0& TConstSetBitIterator_01029db0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029dd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029dd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029dd0& operator++();
};

TConstSetBitIterator_01029dd0::TConstSetBitIterator_01029dd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029dd0
TConstSetBitIterator_01029dd0& TConstSetBitIterator_01029dd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01029df0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01029df0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01029df0& operator++();
};

TConstSetBitIterator_01029df0::TConstSetBitIterator_01029df0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01029df0
TConstSetBitIterator_01029df0& TConstSetBitIterator_01029df0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a270& operator++();
};

TConstSetBitIterator_0102a270::TConstSetBitIterator_0102a270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a270
TConstSetBitIterator_0102a270& TConstSetBitIterator_0102a270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a2c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a2c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a2c0& operator++();
};

TConstSetBitIterator_0102a2c0::TConstSetBitIterator_0102a2c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a2c0
TConstSetBitIterator_0102a2c0& TConstSetBitIterator_0102a2c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a310& operator++();
};

TConstSetBitIterator_0102a310::TConstSetBitIterator_0102a310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a310
TConstSetBitIterator_0102a310& TConstSetBitIterator_0102a310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a360& operator++();
};

TConstSetBitIterator_0102a360::TConstSetBitIterator_0102a360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a360
TConstSetBitIterator_0102a360& TConstSetBitIterator_0102a360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a3b0& operator++();
};

TConstSetBitIterator_0102a3b0::TConstSetBitIterator_0102a3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a3b0
TConstSetBitIterator_0102a3b0& TConstSetBitIterator_0102a3b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a400& operator++();
};

TConstSetBitIterator_0102a400::TConstSetBitIterator_0102a400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a400
TConstSetBitIterator_0102a400& TConstSetBitIterator_0102a400::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a450& operator++();
};

TConstSetBitIterator_0102a450::TConstSetBitIterator_0102a450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a450
TConstSetBitIterator_0102a450& TConstSetBitIterator_0102a450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a4a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a4a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a4a0& operator++();
};

TConstSetBitIterator_0102a4a0::TConstSetBitIterator_0102a4a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a4a0
TConstSetBitIterator_0102a4a0& TConstSetBitIterator_0102a4a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a4f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a4f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a4f0& operator++();
};

TConstSetBitIterator_0102a4f0::TConstSetBitIterator_0102a4f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a4f0
TConstSetBitIterator_0102a4f0& TConstSetBitIterator_0102a4f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a540& operator++();
};

TConstSetBitIterator_0102a540::TConstSetBitIterator_0102a540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a540
TConstSetBitIterator_0102a540& TConstSetBitIterator_0102a540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a590& operator++();
};

TConstSetBitIterator_0102a590::TConstSetBitIterator_0102a590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a590
TConstSetBitIterator_0102a590& TConstSetBitIterator_0102a590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a5e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a5e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a5e0& operator++();
};

TConstSetBitIterator_0102a5e0::TConstSetBitIterator_0102a5e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a5e0
TConstSetBitIterator_0102a5e0& TConstSetBitIterator_0102a5e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a630& operator++();
};

TConstSetBitIterator_0102a630::TConstSetBitIterator_0102a630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a630
TConstSetBitIterator_0102a630& TConstSetBitIterator_0102a630::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a680& operator++();
};

TConstSetBitIterator_0102a680::TConstSetBitIterator_0102a680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a680
TConstSetBitIterator_0102a680& TConstSetBitIterator_0102a680::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a6d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a6d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a6d0& operator++();
};

TConstSetBitIterator_0102a6d0::TConstSetBitIterator_0102a6d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a6d0
TConstSetBitIterator_0102a6d0& TConstSetBitIterator_0102a6d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a720& operator++();
};

TConstSetBitIterator_0102a720::TConstSetBitIterator_0102a720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a720
TConstSetBitIterator_0102a720& TConstSetBitIterator_0102a720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a770& operator++();
};

TConstSetBitIterator_0102a770::TConstSetBitIterator_0102a770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a770
TConstSetBitIterator_0102a770& TConstSetBitIterator_0102a770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a820& operator++();
};

TConstSetBitIterator_0102a820::TConstSetBitIterator_0102a820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a820
TConstSetBitIterator_0102a820& TConstSetBitIterator_0102a820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a8d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a8d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a8d0& operator++();
};

TConstSetBitIterator_0102a8d0::TConstSetBitIterator_0102a8d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a8d0
TConstSetBitIterator_0102a8d0& TConstSetBitIterator_0102a8d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102a980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102a980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102a980& operator++();
};

TConstSetBitIterator_0102a980::TConstSetBitIterator_0102a980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102a980
TConstSetBitIterator_0102a980& TConstSetBitIterator_0102a980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102aa30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102aa30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102aa30& operator++();
};

TConstSetBitIterator_0102aa30::TConstSetBitIterator_0102aa30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102aa30
TConstSetBitIterator_0102aa30& TConstSetBitIterator_0102aa30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102aae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102aae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102aae0& operator++();
};

TConstSetBitIterator_0102aae0::TConstSetBitIterator_0102aae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102aae0
TConstSetBitIterator_0102aae0& TConstSetBitIterator_0102aae0::operator++()
{
    It.Advance();
    return *this;
}

void sub_01023b10();
// @baa 0x0102ab30
void sub_0102ab30(void) { sub_01023b10(); }

struct C_0102ab40 { void sub_01029730(int); C_0102ab40 *sub_0102ab40(int); };

// @baa 0x0102ab40
C_0102ab40 *C_0102ab40::sub_0102ab40(int a) { sub_01029730(a); return this; }

// @baa 0x0102ab90
bool sub_0102ab90(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01023c40(param_1,param_2);
  return iVar1 == 0;
}

struct C_0102fca0 {
    int sub_0102fca0(int);
    int sub_01021ec0(int, int);
};

// @baa 0x0102fca0
int C_0102fca0::sub_0102fca0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0102fca0 *)(this))->sub_01021ec0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0xa0 + *param_1, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0102fd60 {
    int sub_0102fd60(int);
    int sub_01022070(int, int);
};

// @baa 0x0102fd60
int C_0102fd60::sub_0102fd60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0102fd60 *)(this))->sub_01022070((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0xa0 + *param_1, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0102fe70 {
    int sub_0102fe70(int);
    int sub_01022100(int, int);
};

// @baa 0x0102fe70
int C_0102fe70::sub_0102fe70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0102fe70 *)(this))->sub_01022100((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct TConstSetBitIterator_0102feb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102feb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102feb0& operator++();
};

TConstSetBitIterator_0102feb0::TConstSetBitIterator_0102feb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102feb0
TConstSetBitIterator_0102feb0& TConstSetBitIterator_0102feb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102fed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102fed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102fed0& operator++();
};

TConstSetBitIterator_0102fed0::TConstSetBitIterator_0102fed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102fed0
TConstSetBitIterator_0102fed0& TConstSetBitIterator_0102fed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102ff30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102ff30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102ff30& operator++();
};

TConstSetBitIterator_0102ff30::TConstSetBitIterator_0102ff30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102ff30
TConstSetBitIterator_0102ff30& TConstSetBitIterator_0102ff30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0102ff50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0102ff50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0102ff50& operator++();
};

TConstSetBitIterator_0102ff50::TConstSetBitIterator_0102ff50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0102ff50
TConstSetBitIterator_0102ff50& TConstSetBitIterator_0102ff50::operator++()
{
    It.Advance();
    return *this;
}

struct C_0102ffd0 {
    void sub_0102ffd0();
    int sub_010286d0(int);
};

// @baa 0x0102ffd0
void C_0102ffd0::sub_0102ffd0(void)
{
    int param_1 = (int)this;
  ((C_0102ffd0 *)((*(char **)((char *)this + 0x10))))->sub_010286d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0102fff0 {
    void sub_0102fff0();
    int sub_01028ab0(int);
};

// @baa 0x0102fff0
void C_0102fff0::sub_0102fff0(void)
{
    int param_1 = (int)this;
  ((C_0102fff0 *)((*(char **)((char *)this + 0x10))))->sub_01028ab0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
