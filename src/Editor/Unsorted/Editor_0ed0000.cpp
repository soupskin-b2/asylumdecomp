// Editor_0ed0000.cpp: 65 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_00ed0da0(int);
};

int sub_0053df70(...);
// @baa 0x00ed0da0
void C::sub_00ed0da0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ed0de0 {
    void sub_00ed0de0(int);
};

// @baa 0x00ed0de0
void C_00ed0de0::sub_00ed0de0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ed0e20 {
    int sub_00ed0e20(int);
};

// @baa 0x00ed0e20
int C_00ed0e20::sub_00ed0e20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ed1220 {
    int sub_00ed1220(int);
};

// @baa 0x00ed1220
int C_00ed1220::sub_00ed1220(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00ed1230 {
    uint sub_00ed1230();
};

// @baa 0x00ed1230
uint C_00ed1230::sub_00ed1230(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x20) | -(uint)(*(uint *)(param_1 + 0x20) == 0) & param_1;
}

struct C_00ed12c0 {
    int sub_00ed12c0(int);
};

// @baa 0x00ed12c0
int C_00ed12c0::sub_00ed12c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ed12d0 {
    undefined4 * sub_00ed12d0(int);
    int sub_00ec87c0(int, int, int);
};

// @baa 0x00ed12d0
undefined4 * C_00ed12d0::sub_00ed12d0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_00ed12d0 *)(this))->sub_00ec87c0(0, *(undefined4 *)(param_2 + 8), *(undefined4 *)(param_2 + 4));
  return param_1;
}

struct C_00ed1340 {
    void sub_00ed1340();
};

int sub_0053dfa0(...);
// @baa 0x00ed1340
void C_00ed1340::sub_00ed1340(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x60) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

struct C_00ed1360 {
    uint sub_00ed1360();
};

// @baa 0x00ed1360
uint C_00ed1360::sub_00ed1360(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct C_00ed1380 {
    int sub_00ed1380(int);
};

// @baa 0x00ed1380
int C_00ed1380::sub_00ed1380(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x20 +
         (-(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1 | *(uint *)(param_1 + 0x80));
}

struct C_00ed1420 {
    int sub_00ed1420(int);
};

// @baa 0x00ed1420
int C_00ed1420::sub_00ed1420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ed14a0 {
    uint sub_00ed14a0();
};

// @baa 0x00ed14a0
uint C_00ed14a0::sub_00ed14a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ed14c0 {
    uint sub_00ed14c0();
};

// @baa 0x00ed14c0
uint C_00ed14c0::sub_00ed14c0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ed1560 {
    int sub_00ed1560(int);
};

// @baa 0x00ed1560
int C_00ed1560::sub_00ed1560(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00ed15d0 {
    int sub_00ed15d0(int);
};

// @baa 0x00ed15d0
int C_00ed15d0::sub_00ed15d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_00ed1640 {
    int sub_00ed1640(int);
};

// @baa 0x00ed1640
int C_00ed1640::sub_00ed1640(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ed1650 {
    int sub_00ed1650(int);
};

// @baa 0x00ed1650
int C_00ed1650::sub_00ed1650(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ed1660 {
    int sub_00ed1660(int);
};

// @baa 0x00ed1660
int C_00ed1660::sub_00ed1660(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ed1670 {
    int sub_00ed1670(int);
};

// @baa 0x00ed1670
int C_00ed1670::sub_00ed1670(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ed1680 {
    uint sub_00ed1680();
};

// @baa 0x00ed1680
uint C_00ed1680::sub_00ed1680(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x20) | -(uint)(*(uint *)(param_1 + 0x20) == 0) & param_1;
}

struct C_00ed1710 {
    int sub_00ed1710(int);
};

// @baa 0x00ed1710
int C_00ed1710::sub_00ed1710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ed1a40 {
    int sub_00ed1a40();
};

// @baa 0x00ed1a40
int C_00ed1a40::sub_00ed1a40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ed1a60 {
    int sub_00ed1a60();
};

// @baa 0x00ed1a60
int C_00ed1a60::sub_00ed1a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ed1a70 {
    int sub_00ed1a70();
};

// @baa 0x00ed1a70
int C_00ed1a70::sub_00ed1a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00ed1c10 {
    int sub_00ed1c10(int);
};

// @baa 0x00ed1c10
int C_00ed1c10::sub_00ed1c10(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1 | *(uint *)(param_1 + 0x40));
}

// @baa 0x00ed1c30
void __stdcall sub_00ed1c30(int a0, int a1) {  }

int sub_00549160(void);
// @baa 0x00ed1d20
undefined4 UObject::sub_00ed1d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

typedef uint size_t;

struct C_00ed2b20 {
    undefined4 * sub_00ed2b20(undefined4 *);
    int sub_00ec7a20(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00ed2b20
undefined4 * C_00ed2b20::sub_00ed2b20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_00ed2b20 *)(this))->sub_00ec7a20(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1] * 2);
  }
  return param_1;
}

struct C_00ed2b80 {
    undefined4 sub_00ed2b80(byte);
};

int sub_00ecfa00(void);
// @baa 0x00ed2b80
undefined4 C_00ed2b80::sub_00ed2b80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ecfa00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ed34f0 {
    int sub_00ed34f0();
};

// @baa 0x00ed34f0
int C_00ed34f0::sub_00ed34f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ed3640 {
    int sub_00ed3640(int);
};

// @baa 0x00ed3640
int C_00ed3640::sub_00ed3640(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1 | *(uint *)(param_1 + 0x18c0));
}

// @baa 0x00ed3660
void __stdcall sub_00ed3660(int a0, int a1) {  }

struct C_00ed3670 { int a, b, c; C_00ed3670(); };

// @baa 0x00ed3670
C_00ed3670::C_00ed3670() : a(0), b(0), c(0) {}

struct C_00ed3680 {
    int sub_00ed3680(int);
};

// @baa 0x00ed3680
int C_00ed3680::sub_00ed3680(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0x20) == 0) & param_1 | *(uint *)(param_1 + 0x20)) +
         param_2 * 4;
}

// @baa 0x00ed36a0
void __stdcall sub_00ed36a0(int a0, int a1) {  }

struct C_00ed3720 {
    int sub_00ed3720();
};

// @baa 0x00ed3720
int C_00ed3720::sub_00ed3720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x18;
}

struct C_00ed3770 {
    int sub_00ed3770();
};

// @baa 0x00ed3770
int C_00ed3770::sub_00ed3770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x14;
}

struct C_00ed3780 {
    int sub_00ed3780(int);
    int sub_00ed16a0(int, int);
};

// @baa 0x00ed3780
int C_00ed3780::sub_00ed3780(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00ed3780 *)(this))->sub_00ed16a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0xc;
  }
  return 0;
}

struct C_00ed38a0 {
    int sub_00ed38a0();
};

// @baa 0x00ed38a0
int C_00ed38a0::sub_00ed38a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x18;
}

struct C_00ed38f0 {
    int sub_00ed38f0(byte);
};

// @baa 0x00ed38f0
int C_00ed38f0::sub_00ed38f0(byte param_2)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x60) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00ed3920
void __stdcall sub_00ed3920(void *a, void *b)
{
    return;
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

struct TConstSetBitIterator_00ed3c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3c90& operator++();
};

TConstSetBitIterator_00ed3c90::TConstSetBitIterator_00ed3c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3c90
TConstSetBitIterator_00ed3c90& TConstSetBitIterator_00ed3c90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3cb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3cb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3cb0& operator++();
};

TConstSetBitIterator_00ed3cb0::TConstSetBitIterator_00ed3cb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3cb0
TConstSetBitIterator_00ed3cb0& TConstSetBitIterator_00ed3cb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3cd0& operator++();
};

TConstSetBitIterator_00ed3cd0::TConstSetBitIterator_00ed3cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3cd0
TConstSetBitIterator_00ed3cd0& TConstSetBitIterator_00ed3cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3cf0& operator++();
};

TConstSetBitIterator_00ed3cf0::TConstSetBitIterator_00ed3cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3cf0
TConstSetBitIterator_00ed3cf0& TConstSetBitIterator_00ed3cf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3d10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3d10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3d10& operator++();
};

TConstSetBitIterator_00ed3d10::TConstSetBitIterator_00ed3d10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3d10
TConstSetBitIterator_00ed3d10& TConstSetBitIterator_00ed3d10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3d60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3d60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3d60& operator++();
};

TConstSetBitIterator_00ed3d60::TConstSetBitIterator_00ed3d60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3d60
TConstSetBitIterator_00ed3d60& TConstSetBitIterator_00ed3d60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3db0& operator++();
};

TConstSetBitIterator_00ed3db0::TConstSetBitIterator_00ed3db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3db0
TConstSetBitIterator_00ed3db0& TConstSetBitIterator_00ed3db0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3e00& operator++();
};

TConstSetBitIterator_00ed3e00::TConstSetBitIterator_00ed3e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3e00
TConstSetBitIterator_00ed3e00& TConstSetBitIterator_00ed3e00::operator++()
{
    It.Advance();
    return *this;
}

struct C_00ed3e50 {
    int sub_00ed3e50();
};

// @baa 0x00ed3e50
int C_00ed3e50::sub_00ed3e50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct TConstSetBitIterator_00ed3e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3e60& operator++();
};

TConstSetBitIterator_00ed3e60::TConstSetBitIterator_00ed3e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3e60
TConstSetBitIterator_00ed3e60& TConstSetBitIterator_00ed3e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3e80& operator++();
};

TConstSetBitIterator_00ed3e80::TConstSetBitIterator_00ed3e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3e80
TConstSetBitIterator_00ed3e80& TConstSetBitIterator_00ed3e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3ea0& operator++();
};

TConstSetBitIterator_00ed3ea0::TConstSetBitIterator_00ed3ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3ea0
TConstSetBitIterator_00ed3ea0& TConstSetBitIterator_00ed3ea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3ef0& operator++();
};

TConstSetBitIterator_00ed3ef0::TConstSetBitIterator_00ed3ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3ef0
TConstSetBitIterator_00ed3ef0& TConstSetBitIterator_00ed3ef0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3f40& operator++();
};

TConstSetBitIterator_00ed3f40::TConstSetBitIterator_00ed3f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3f40
TConstSetBitIterator_00ed3f40& TConstSetBitIterator_00ed3f40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed3f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed3f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed3f60& operator++();
};

TConstSetBitIterator_00ed3f60::TConstSetBitIterator_00ed3f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed3f60
TConstSetBitIterator_00ed3f60& TConstSetBitIterator_00ed3f60::operator++()
{
    It.Advance();
    return *this;
}

struct C_00ed61f0 {
    undefined4 sub_00ed61f0();
    int sub_005538b0(int, int);
};

// @baa 0x00ed61f0
undefined4 C_00ed61f0::sub_00ed61f0(void)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00ed61f0 *)(((char *)this + 0x50)))->sub_005538b0(0, 0);
  return param_1;
}

struct C_00ed6aa0 {
    undefined4 sub_00ed6aa0(byte);
};

int sub_00ed6830(void);
// @baa 0x00ed6aa0
undefined4 C_00ed6aa0::sub_00ed6aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ed6830();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ed70c0 {
    undefined4 sub_00ed70c0();
};

int sub_00ed36b0(void);
// @baa 0x00ed70c0
undefined4 C_00ed70c0::sub_00ed70c0(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ed36b0();
  return param_1;
}

struct C_00ed70d0 {
    int sub_00ed70d0();
};

// @baa 0x00ed70d0
int C_00ed70d0::sub_00ed70d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[2] * 0x18;
}

struct C_00ed70e0 {
    undefined4 sub_00ed70e0();
};

int sub_00ed3730(void);
// @baa 0x00ed70e0
undefined4 C_00ed70e0::sub_00ed70e0(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ed3730();
  return param_1;
}

struct C_00ed70f0 {
    int sub_00ed70f0();
};

// @baa 0x00ed70f0
int C_00ed70f0::sub_00ed70f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[2] * 0x14;
}

struct C_00ed7100 {
    int sub_00ed7100(int);
    int sub_00ed16a0(int, int);
};

// @baa 0x00ed7100
int C_00ed7100::sub_00ed7100(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00ed7100 *)(this))->sub_00ed16a0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0xc, iVar1 != 0)) {
    return iVar1 + 2;
  }
  return 0;
}

struct M_00ed9c40 { void sub_00ed6e50(); };

struct C_00ed9c40 { char pad[64]; M_00ed9c40 m; void sub_00ed9c40(); };

// @baa 0x00ed9c40
void C_00ed9c40::sub_00ed9c40() { m.sub_00ed6e50(); }

void sub_00edc5c0();
// @baa 0x00eddf00
void sub_00eddf00(void) { sub_00edc5c0(); }
