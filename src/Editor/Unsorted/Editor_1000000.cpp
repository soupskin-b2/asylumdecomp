// Editor_1000000.cpp: 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_01001680(byte);
    int sub_00ffbdd0();
};

int sub_0053dfa0(...);
// @baa 0x01001680
undefined4 C::sub_01001680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(((char *)this + 8)))->sub_00ffbdd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00fff610();
// @baa 0x01002910
void sub_01002910(void) { sub_00fff610(); }

struct C_01002c90 { void sub_00fffde0(int); C_01002c90 *sub_01002c90(int); };

// @baa 0x01002c90
C_01002c90 *C_01002c90::sub_01002c90(int a) { sub_00fffde0(a); return this; }

int sub_00ffc580(void);
// @baa 0x01003010
int UTexture2D::sub_01003010(void)
{
    int param_1 = (int)this;

  sub_00ffc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01003200 { void sub_00fffde0(int); C_01003200 *sub_01003200(int); };

// @baa 0x01003200
C_01003200 *C_01003200::sub_01003200(int a) { sub_00fffde0(a); return this; }

struct C_view {
    int sub_01002cb0(int, int);
};

// @baa 0x01003280
void UTexture2D::sub_01003280(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01002cb0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01003510 {
    int sub_01002eb0(int, int);
};

// @baa 0x01003510
undefined4 UTexture2D::sub_01003510(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01003510 *)(this))->sub_01002eb0(param_2, param_3);
  return param_1;
}

struct C_view_01003530 {
    int sub_01002f10(int, int);
};

// @baa 0x01003530
int UTexture2D::sub_01003530(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01003530 *)(this))->sub_01002f10(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01003550 {
    int sub_01002f90(int, int);
};

// @baa 0x01003550
int UTexture2D::sub_01003550(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01003550 *)(this))->sub_01002f90(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01003570 {
    int sub_01002d70(int);
};

// @baa 0x01003570
void UTexture2D::sub_01003570(void)
{
    int param_1 = (int)this;
  ((C_view_01003570 *)((*(char **)((char *)this + 0x10))))->sub_01002d70(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x01003590
int UTexture2D::sub_01003590(void)
{
    int param_1 = (int)this;

  sub_00ffc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00ffc5e0(void);
// @baa 0x010035b0
int UTexture2D::sub_010035b0(void)
{
    int param_1 = (int)this;

  sub_00ffc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01003190();
// @baa 0x010045e0
void sub_010045e0(void) { sub_01003190(); }

void sub_01003220();
// @baa 0x010045f0
void sub_010045f0(void) { sub_01003220(); }

void sub_01003480();
// @baa 0x01004680
void sub_01004680(void) { sub_01003480(); }

struct C_view_01004690 {
    int sub_01002eb0(int, int);
};

// @baa 0x01004690
int UTexture2D::sub_01004690(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01004690 *)(this))->sub_01002eb0(param_2, param_4);
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
    void sub_01002cb0(int, int);
};

struct C_010046c0 {
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
    void sub_010046c0(void);
};

// @baa 0x010046c0
void C_010046c0::sub_010046c0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01002cb0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x010046e0
int UTexture2D::sub_010046e0(void)
{
    int param_1 = (int)this;

  sub_00ffc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01004700
int UTexture2D::sub_01004700(void)
{
    int param_1 = (int)this;

  sub_00ffc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01004d90
void sub_01004d90(void) { sub_01003190(); }

// @baa 0x010054a0
int UTexture2D::sub_010054a0(void)
{
    int param_1 = (int)this;

  sub_00ffc580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010054c0
int UTexture2D::sub_010054c0(void)
{
    int param_1 = (int)this;

  sub_00ffc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0100beb0
void sub_0100beb0(void) { sub_01003190(); }

// @baa 0x0100bec0
int UTexture2D::sub_0100bec0(void)
{
    int param_1 = (int)this;

  sub_00ffc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct M_0100e6b0 { void sub_00ee0a70(); };

struct C_0100e6b0 { char pad[8]; M_0100e6b0 m; void sub_0100e6b0(); };

// @baa 0x0100e6b0
void C_0100e6b0::sub_0100e6b0() { m.sub_00ee0a70(); }

struct M_0100e6c0 { void sub_00825d60(); };

struct C_0100e6c0 { char pad[8]; M_0100e6c0 m; void sub_0100e6c0(); };

// @baa 0x0100e6c0
void C_0100e6c0::sub_0100e6c0() { m.sub_00825d60(); }

struct C_0100e760 {
    undefined4 sub_0100e760(byte);
};

int sub_0100e6d0(void);
// @baa 0x0100e760
undefined4 C_0100e760::sub_0100e760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0100e6d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0100e780 {
    undefined4 sub_0100e780(byte);
    int sub_00ee0a70();
};

// @baa 0x0100e780
undefined4 C_0100e780::sub_0100e780(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0100e780 *)(((char *)this + 8)))->sub_00ee0a70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0100e7b0 {
    undefined4 sub_0100e7b0(byte);
    int sub_00825d60();
};

// @baa 0x0100e7b0
undefined4 C_0100e7b0::sub_0100e7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0100e7b0 *)(((char *)this + 8)))->sub_00825d60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
