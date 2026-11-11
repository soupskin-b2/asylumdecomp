// UnTerrainFoliage.cpp: 23 functions
// Placed here by: neighbours 22, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00bbd520(); };

// @baa 0x00bbd520
void C::sub_00bbd520() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bcc7c0 {
    int sub_00bcc7c0();
};

// @baa 0x00bcc7c0
int C_00bcc7c0::sub_00bcc7c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bcc7e0 {
    int sub_00bcc7e0();
};

// @baa 0x00bcc7e0
int C_00bcc7e0::sub_00bcc7e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00bcc7f0 {
    int sub_00bcc7f0();
};

// @baa 0x00bcc7f0
int C_00bcc7f0::sub_00bcc7f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bcc810 {
    int sub_00bcc810();
};

// @baa 0x00bcc810
int C_00bcc810::sub_00bcc810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00bcc890 {
    int sub_00bcc890(int);
    int sub_00bc88e0(int, int);
};

// @baa 0x00bcc890
int C_00bcc890::sub_00bcc890(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00bcc890 *)(this))->sub_00bc88e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view {
    int sub_009b73e0(int, int);
};

// @baa 0x00bcc8c0
int UState::sub_00bcc8c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_009b73e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00bccae0 {
    undefined4 sub_00bccae0(byte);
};

int sub_0053dfa0(...);
int sub_00bcc1e0(void);
// @baa 0x00bccae0
undefined4 C_00bccae0::sub_00bccae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bcc1e0();
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

struct TConstSetBitIterator_00bccb00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bccb00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bccb00& operator++();
};

TConstSetBitIterator_00bccb00::TConstSetBitIterator_00bccb00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bccb00
TConstSetBitIterator_00bccb00& TConstSetBitIterator_00bccb00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bccc80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bccc80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bccc80& operator++();
};

TConstSetBitIterator_00bccc80::TConstSetBitIterator_00bccc80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bccc80
TConstSetBitIterator_00bccc80& TConstSetBitIterator_00bccc80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bd0b80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd0b80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd0b80& operator++();
};

TConstSetBitIterator_00bd0b80::TConstSetBitIterator_00bd0b80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd0b80
TConstSetBitIterator_00bd0b80& TConstSetBitIterator_00bd0b80::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bd0c00 {
    void sub_00bd0c00();
    int sub_00bccca0(int);
};

// @baa 0x00bd0c00
void C_00bd0c00::sub_00bd0c00(void)
{
    int param_1 = (int)this;
  ((C_00bd0c00 *)((*(char **)((char *)this + 0x1c))))->sub_00bccca0(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct TConstSetBitIterator_00bd0c10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd0c10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd0c10& operator++();
};

TConstSetBitIterator_00bd0c10::TConstSetBitIterator_00bd0c10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd0c10
TConstSetBitIterator_00bd0c10& TConstSetBitIterator_00bd0c10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bd0c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd0c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd0c30& operator++();
};

TConstSetBitIterator_00bd0c30::TConstSetBitIterator_00bd0c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd0c30
TConstSetBitIterator_00bd0c30& TConstSetBitIterator_00bd0c30::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bd0c50 {
    void sub_00bd0c50();
    int sub_00bccb20(int);
};

// @baa 0x00bd0c50
void C_00bd0c50::sub_00bd0c50(void)
{
    int param_1 = (int)this;
  ((C_00bd0c50 *)((*(char **)((char *)this + 0x10))))->sub_00bccb20(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00bd0c70 {
    void sub_00bd0c70();
    int sub_00bccca0(int);
};

// @baa 0x00bd0c70
void C_00bd0c70::sub_00bd0c70(void)
{
    int param_1 = (int)this;
  ((C_00bd0c70 *)((*(char **)((char *)this + 0x10))))->sub_00bccca0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00bd0c90 {
    undefined4 sub_00bd0c90(byte);
};

int sub_00bcd5b0(void);
// @baa 0x00bd0c90
undefined4 C_00bd0c90::sub_00bd0c90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bcd5b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00bd0fd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd0fd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd0fd0& operator++();
};

TConstSetBitIterator_00bd0fd0::TConstSetBitIterator_00bd0fd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd0fd0
TConstSetBitIterator_00bd0fd0& TConstSetBitIterator_00bd0fd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bd11c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd11c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd11c0& operator++();
};

TConstSetBitIterator_00bd11c0::TConstSetBitIterator_00bd11c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd11c0
TConstSetBitIterator_00bd11c0& TConstSetBitIterator_00bd11c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bd1210 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd1210(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd1210& operator++();
};

TConstSetBitIterator_00bd1210::TConstSetBitIterator_00bd1210(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd1210
TConstSetBitIterator_00bd1210& TConstSetBitIterator_00bd1210::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bd7240 {
    int sub_00bd7240(undefined4, undefined4, undefined4);
    int sub_00bd3230(int, int);
};

// @baa 0x00bd7240
int C_00bd7240::sub_00bd7240(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00bd7240 *)(this))->sub_00bd3230(param_2, param_4);
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
    void sub_00bd3170(int, int);
};

struct C_00bd7270 {
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
    void sub_00bd7270(void);
};

// @baa 0x00bd7270
void C_00bd7270::sub_00bd7270(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00bd3170(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00bd7290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bd7290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bd7290& operator++();
};

TConstSetBitIterator_00bd7290::TConstSetBitIterator_00bd7290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bd7290
TConstSetBitIterator_00bd7290& TConstSetBitIterator_00bd7290::operator++()
{
    It.Advance();
    return *this;
}
