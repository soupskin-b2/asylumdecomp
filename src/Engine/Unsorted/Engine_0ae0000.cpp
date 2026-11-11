// Engine_0ae0000.cpp (part 1 of 2): 69 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_00adb940(int);
};

// @baa 0x00ae0790
void UFracturedStaticMeshComponent::sub_00ae0790(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x10))))->sub_00adb940(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
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

struct TConstSetBitIterator_00ae0ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ae0ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ae0ab0& operator++();
};

TConstSetBitIterator_00ae0ab0::TConstSetBitIterator_00ae0ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ae0ab0
TConstSetBitIterator_00ae0ab0& TConstSetBitIterator_00ae0ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ae0d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ae0d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ae0d70& operator++();
};

TConstSetBitIterator_00ae0d70::TConstSetBitIterator_00ae0d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ae0d70
TConstSetBitIterator_00ae0d70& TConstSetBitIterator_00ae0d70::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_00ae0e80(byte);
    int sub_00ad8c00();
};

int sub_0053dfa0(...);
// @baa 0x00ae0e80
undefined4 C::sub_00ae0e80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(((char *)this + 4)))->sub_00ad8c00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ae0f80 {
    int sub_00ae0f80();
};

int sub_00adc460(void);
// @baa 0x00ae0f80
int C_00ae0f80::sub_00ae0f80(void)
{
    int param_1 = (int)this;

  sub_00adc460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00adc580(void);
// @baa 0x00ae1140
int UFracturedStaticMeshComponent::sub_00ae1140(void)
{
    int param_1 = (int)this;

  sub_00adc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ae12e0 {
    int sub_00ae12e0();
};

int sub_00adc640(void);
// @baa 0x00ae12e0
int C_00ae12e0::sub_00ae12e0(void)
{
    int param_1 = (int)this;

  sub_00adc640();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ae1410 {
    undefined4 * sub_00ae1410(undefined4 *);
    int sub_00ae0e20(int);
};

// @baa 0x00ae1410
undefined4 * C_00ae1410::sub_00ae1410(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00ae1410 *)(((char *)this + 4)))->sub_00ae0e20((int)(param_2 + 1));
  return param_1;
}

void sub_00adf9b0();
// @baa 0x00ae1d10
void sub_00ae1d10(void) { sub_00adf9b0(); }

struct C_00ae2a40 {
    undefined4 sub_00ae2a40(byte);
};

int sub_00adee50(void);
// @baa 0x00ae2a40
undefined4 C_00ae2a40::sub_00ae2a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00adee50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ae4f20 {
    int sub_00ae4f20();
};

int sub_00ada250(void);
// @baa 0x00ae4f20
int C_00ae4f20::sub_00ae4f20(void)
{
    int param_1 = (int)this;

  sub_00ada250();
  *(undefined4 *)(param_1 + 0x4030) = 0;
  *(undefined4 *)(param_1 + 0x4034) = 0;
  return param_1;
}

int sub_00ada3b0(void);
// @baa 0x00ae52b0
int UFracturedStaticMeshComponent::sub_00ae52b0(void)
{
    int param_1 = (int)this;

  sub_00ada3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00ada4d0(void);
// @baa 0x00ae5450
int UFracturedStaticMeshComponent::sub_00ae5450(void)
{
    int param_1 = (int)this;

  sub_00ada4d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00ae0690();
// @baa 0x00ae5600
void sub_00ae5600(void) { sub_00ae0690(); }

struct C_view_00ae5680 {
    int sub_00ae07b0(int, int);
};

// @baa 0x00ae5680
void UFracturedStaticMeshComponent::sub_00ae5680(void)
{
    int param_1 = (int)this;
  ((C_view_00ae5680 *)(this))->sub_00ae07b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct TConstSetBitIterator_00ae59b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ae59b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ae59b0& operator++();
};

TConstSetBitIterator_00ae59b0::TConstSetBitIterator_00ae59b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ae59b0
TConstSetBitIterator_00ae59b0& TConstSetBitIterator_00ae59b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00ae5a00 {
    undefined4 sub_00ae5a00(undefined4, undefined4);
    int sub_00ae0b00(int, int);
};

// @baa 0x00ae5a00
undefined4 C_00ae5a00::sub_00ae5a00(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00ae5a00 *)(this))->sub_00ae0b00(param_2, param_3);
  return param_1;
}

struct C_00ae5a20 {
    int sub_00ae5a20(undefined4, undefined4);
    int sub_00ae0b60(int, int);
};

// @baa 0x00ae5a20
int C_00ae5a20::sub_00ae5a20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00ae5a20 *)(this))->sub_00ae0b60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00ae5a40 {
    int sub_00ae5a40(undefined4, undefined4);
    int sub_00ae0bf0(int, int);
};

// @baa 0x00ae5a40
int C_00ae5a40::sub_00ae5a40(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00ae5a40 *)(this))->sub_00ae0bf0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00ae5a60 {
    int sub_00ae5a60(undefined4, undefined4);
    int sub_00ae0c70(int, int);
};

// @baa 0x00ae5a60
int C_00ae5a60::sub_00ae5a60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00ae5a60 *)(this))->sub_00ae0c70(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00ae5a80 {
    int sub_00ae5a80(undefined4, undefined4);
    int sub_00ae0cf0(int, int);
};

// @baa 0x00ae5a80
int C_00ae5a80::sub_00ae5a80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00ae5a80 *)(this))->sub_00ae0cf0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00ae5bc0
int UTexture2D::sub_00ae5bc0(void)
{
    int param_1 = (int)this;

  sub_00adc460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ae5c40
int UFracturedStaticMeshComponent::sub_00ae5c40(void)
{
    int param_1 = (int)this;

  sub_00adc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00ae5cf0 {
    int sub_00ae0e20(int);
};

// @baa 0x00ae5cf0
undefined4 * UFracturedStaticMeshComponent::sub_00ae5cf0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00ae5cf0 *)(((char *)this + 4)))->sub_00ae0e20(param_2[1]);
  return param_1;
}

struct C_00ae5e00 {
    undefined4 * sub_00ae5e00(undefined4 *);
    int sub_00ae0e20(int);
};

// @baa 0x00ae5e00
undefined4 * C_00ae5e00::sub_00ae5e00(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00ae5e00 *)(((char *)this + 4)))->sub_00ae0e20(param_2[1]);
  param_1[10] = 0xffffffff;
  return param_1;
}

struct C_00ae5e30 {
    int sub_00ae5e30();
};

// @baa 0x00ae5e30
int C_00ae5e30::sub_00ae5e30(void)
{
    int param_1 = (int)this;

  sub_00adc640();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00ae5240();
// @baa 0x00ae6200
void sub_00ae6200(void) { sub_00ae5240(); }

void sub_00ae5590();
// @baa 0x00ae6210
void sub_00ae6210(void) { sub_00ae5590(); }

void sub_00ae5610();
// @baa 0x00ae6220
void sub_00ae6220(void) { sub_00ae5610(); }

struct C_00ae6c00 {
    int sub_00ae6c00(int);
    int sub_00acced0(int, int);
};

// @baa 0x00ae6c00
int C_00ae6c00::sub_00ae6c00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00ae6c00 *)(this))->sub_00acced0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0xc;
  }
  return 0;
}

struct TConstSetBitIterator_00ae6d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ae6d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ae6d90& operator++();
};

TConstSetBitIterator_00ae6d90::TConstSetBitIterator_00ae6d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ae6d90
TConstSetBitIterator_00ae6d90& TConstSetBitIterator_00ae6d90::operator++()
{
    It.Advance();
    return *this;
}

struct C_00ae8eb0 {
    int sub_00ae8eb0(undefined4, undefined4, undefined4);
    int sub_00ae0b00(int, int);
};

// @baa 0x00ae8eb0
int C_00ae8eb0::sub_00ae8eb0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00ae8eb0 *)(this))->sub_00ae0b00(param_2, param_4);
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
    void sub_00ae07b0(int, int);
};

struct C_00ae8ee0 {
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
    void sub_00ae8ee0(void);
};

// @baa 0x00ae8ee0
void C_00ae8ee0::sub_00ae8ee0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00ae07b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00ae8fe0 {
    int sub_00ae8fe0();
};

// @baa 0x00ae8fe0
int C_00ae8fe0::sub_00ae8fe0(void)
{
    int param_1 = (int)this;

  sub_00adc460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00ae5be0();
// @baa 0x00ae9000
void sub_00ae9000(void) { sub_00ae5be0(); }

// @baa 0x00ae9010
int UFracturedStaticMeshComponent::sub_00ae9010(void)
{
    int param_1 = (int)this;

  sub_00adc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ae9250 {
    int sub_00ae9250();
};

// @baa 0x00ae9250
int C_00ae9250::sub_00ae9250(void)
{
    int param_1 = (int)this;

  sub_00adc640();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ae9270 {
    void sub_00ae9270();
    int sub_00ae5c60(int);
};

// @baa 0x00ae9270
void C_00ae9270::sub_00ae9270(void)
{
    int param_1 = (int)this;
  ((C_00ae9270 *)((*(char **)((char *)this + 0x10))))->sub_00ae5c60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00ae5e50();
// @baa 0x00ae9290
void sub_00ae9290(void) { sub_00ae5e50(); }

void sub_00ae5ed0();
// @baa 0x00ae92a0
void sub_00ae92a0(void) { sub_00ae5ed0(); }

void sub_00ae5f50();
// @baa 0x00ae92b0
void sub_00ae92b0(void) { sub_00ae5f50(); }

struct C_00ae9320 {
    int sub_00ae9320();
};

int sub_00adc5e0(void);
// @baa 0x00ae9320
int C_00ae9320::sub_00ae9320(void)
{
    int param_1 = (int)this;

  sub_00adc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ae9570
void sub_00ae9570(void) { sub_00ae5240(); }

// @baa 0x00ae9580
void sub_00ae9580(void) { sub_00ae5590(); }

// @baa 0x00ae9590
void sub_00ae9590(void) { sub_00ae5610(); }

struct C_00ae9670 {
    undefined4 sub_00ae9670(byte);
};

int sub_009c76f0(void);
// @baa 0x00ae9670
undefined4 C_00ae9670::sub_00ae9670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009c76f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00aec020 {
    undefined4 sub_00aec020(byte);
};

int sub_00ae6c80(void);
// @baa 0x00aec020
undefined4 C_00aec020::sub_00aec020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ae6c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ae8f80(void);
// @baa 0x00aec100
void UTexture2D::sub_00aec100(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x38) = 0;
  sub_00ae8f80();
  return;
}

// @baa 0x00aec110
int UTexture2D::sub_00aec110(void)
{
    int param_1 = (int)this;

  sub_00adc460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00aec130 {
    int sub_00ae5be0(int);
};

// @baa 0x00aec130
void UFracturedStaticMeshComponent::sub_00aec130(void)
{
    int param_1 = (int)this;
  ((C_view_00aec130 *)(this))->sub_00ae5be0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

// @baa 0x00aec140
int UFracturedStaticMeshComponent::sub_00aec140(void)
{
    int param_1 = (int)this;

  sub_00adc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

extern "C" INT sub_00ae9150(INT a);
// @baa 0x00aec1a0
extern "C" INT sub_00aec1a0(INT a) {
    return sub_00ae9150(a);
}

struct C_00aec220 {
    int sub_00aec220();
};

// @baa 0x00aec220
int C_00aec220::sub_00aec220(void)
{
    int param_1 = (int)this;

  sub_00adc640();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00aec2a0 {
    int sub_00aec2a0();
};

// @baa 0x00aec2a0
int C_00aec2a0::sub_00aec2a0(void)
{
    int param_1 = (int)this;

  sub_00adc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00aec760
void sub_00aec760(void) { sub_00ae5240(); }

// @baa 0x00aec770
void sub_00aec770(void) { sub_00ae5590(); }

// @baa 0x00aec780
void sub_00aec780(void) { sub_00ae5610(); }

void sub_00aec1b0();
// @baa 0x00aec790
void sub_00aec790(void) { sub_00aec1b0(); }

void sub_00699540();
// @baa 0x00aec7a0
void sub_00aec7a0(void) { sub_00699540(); }

struct C_00aef040 {
    void sub_00aef040();
};

// @baa 0x00aef040
void C_00aef040::sub_00aef040(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x38) = 0;
  sub_00ae8f80();
  return;
}

struct C_00aef6e0 {
    uint sub_00aef6e0();
};

// @baa 0x00aef6e0
uint C_00aef6e0::sub_00aef6e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00aef800
void __stdcall sub_00aef800(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00aef810
void __stdcall sub_00aef810(int a0, int a1, int a2, int a3) {  }

// @baa 0x00aef820
void __stdcall sub_00aef820(int a0, int a1, int a2, int a3) {  }

struct C_00aef9a0 {
    uint sub_00aef9a0();
};

// @baa 0x00aef9a0
uint C_00aef9a0::sub_00aef9a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00aefaa0
void __stdcall sub_00aefaa0(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00aefab0
void __stdcall sub_00aefab0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00aefac0
void __stdcall sub_00aefac0(int a0, int a1, int a2, int a3) {  }

struct C_00aefc20 {
    int sub_00aefc20();
};

// @baa 0x00aefc20
int C_00aefc20::sub_00aefc20(void)
{
    int param_1 = (int)this;

  sub_00adc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
