// Engine_0b20000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_00b23310(undefined4);
    int sub_00b14be0(int);
};

// @baa 0x00b23310
int C::sub_00b23310(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_00b14be0(param_2);
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return param_1;
}

struct C_view {
    int sub_00ae0870(int, int);
};

// @baa 0x00b269e0
void UFracturedStaticMeshComponent::sub_00b269e0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00ae0870(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00b269f0 {
    int sub_00b23050(int, int);
};

// @baa 0x00b269f0
undefined4 UTexture2D::sub_00b269f0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00b269f0 *)(this))->sub_00b23050(param_2, param_3);
  return param_1;
}

struct C_view_00b26a10 {
    int sub_00b230b0(int, int);
};

// @baa 0x00b26a10
int UTexture2D::sub_00b26a10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00b26a10 *)(this))->sub_00b230b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

void sub_00b26820();
// @baa 0x00b274f0
void sub_00b274f0(void) { sub_00b26820(); }

struct C_view_00b27810 {
    int sub_00b23050(int, int);
};

// @baa 0x00b27810
int UTexture2D::sub_00b27810(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00b27810 *)(this))->sub_00b23050(param_2, param_4);
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
    void sub_00ae0870(int, int);
};

struct C_00b27840 {
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
    void sub_00b27840(void);
};

// @baa 0x00b27840
void C_00b27840::sub_00b27840(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00ae0870(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00b27ed0
int sub_00b27ed0(void) { return 0; }

struct C_00b27ee0 {
    uint sub_00b27ee0();
};

// @baa 0x00b27ee0
uint C_00b27ee0::sub_00b27ee0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00b27ef0
int __stdcall sub_00b27ef0(int a0) { return 0; }

// @baa 0x00b27f00
void __stdcall sub_00b27f00(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00b27f10
void __stdcall sub_00b27f10(int a0, int a1, int a2, int a3) {  }

// @baa 0x00b27f20
void __stdcall sub_00b27f20(int a0, int a1, int a2, int a3) {  }

struct C_00b28230 {
    uint sub_00b28230();
};

// @baa 0x00b28230
uint C_00b28230::sub_00b28230(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00b28250
void __stdcall sub_00b28250(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00b28260
void __stdcall sub_00b28260(int a0, int a1, int a2, int a3) {  }

// @baa 0x00b28270
void __stdcall sub_00b28270(int a0, int a1, int a2, int a3) {  }

struct D { void sub_00b26820(int a); };

struct C_00b29320 { void sub_00b29320(); };

// @baa 0x00b29320
void C_00b29320::sub_00b29320()
{
    ((D *)((char *)this + 0x14))->sub_00b26820(0);
}

int sub_00b116e0(void);
// @baa 0x00b29a10
int UTexture2D::sub_00b29a10(void)
{
    int param_1 = (int)this;

  sub_00b116e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// The callee takes one argument; this wrapper hands back what it returns.
INT sub_00afaf90(UObject* Object);
// @baa 0x00b28240
INT __stdcall sub_00b28240(UObject* Object)
{
    return sub_00afaf90(Object);
}
