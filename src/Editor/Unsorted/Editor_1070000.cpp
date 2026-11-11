// Editor_1070000.cpp (part 1 of 2): 69 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x010727b0
UTestCompressionCommandlet::UTestCompressionCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072810
int sub_01072810(void);
int sub_005c7a70(...);
// @baa 0x01072870
undefined4 UTestCompressionCommandlet::sub_01072870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072810();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01072890
UMergePackagesCommandlet::UMergePackagesCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x010728f0
int sub_010728f0(void);
// @baa 0x01072950
undefined4 UMergePackagesCommandlet::sub_01072950(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010728f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01072a50
UCreateDefaultStyleCommandlet::UCreateDefaultStyleCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072ab0
int sub_01072ab0(void);
// @baa 0x01072b10
undefined4 UCreateDefaultStyleCommandlet::sub_01072b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072ab0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x74);
  }
  return param_1;
}

// @baa 0x01072b30
UExamineOutersCommandlet::UExamineOutersCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072b90
int sub_01072b90(void);
// @baa 0x01072bf0
undefined4 UExamineOutersCommandlet::sub_01072bf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072b90();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01072c10
UFindDuplicateKismetObjectsCommandlet::UFindDuplicateKismetObjectsCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072c70
int sub_01072c70(void);
// @baa 0x01072cd0
undefined4 UFindDuplicateKismetObjectsCommandlet::sub_01072cd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072c70();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

struct C_view {
    int sub_01073ef0(int, int);
};

// @baa 0x010768f0
void UContentTagIndex::sub_010768f0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01073ef0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076a30 {
    int sub_01073fb0(int, int);
};

// @baa 0x01076a30
undefined4 UContentTagIndex::sub_01076a30(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076a30 *)(this))->sub_01073fb0(param_2, param_3);
  return param_1;
}

struct C_view_01076a50 {
    int sub_01074010(int, int);
};

// @baa 0x01076a50
void UContentTagIndex::sub_01076a50(void)
{
    int param_1 = (int)this;
  ((C_view_01076a50 *)(this))->sub_01074010(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076a60 {
    int sub_010740d0(int, int);
};

// @baa 0x01076a60
void UContentTagIndex::sub_01076a60(void)
{
    int param_1 = (int)this;
  ((C_view_01076a60 *)(this))->sub_010740d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076a70 {
    int sub_01074190(int, int);
};

// @baa 0x01076a70
undefined4 UContentTagIndex::sub_01076a70(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076a70 *)(this))->sub_01074190(param_2, param_3);
  return param_1;
}

struct C_view_01076a90 {
    int sub_010741f0(int, int);
};

// @baa 0x01076a90
undefined4 UContentTagIndex::sub_01076a90(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076a90 *)(this))->sub_010741f0(param_2, param_3);
  return param_1;
}

struct C_view_01076ab0 {
    int sub_00fbc7c0(int, int);
};

// @baa 0x01076ab0
void UContentTagIndex::sub_01076ab0(void)
{
    int param_1 = (int)this;
  ((C_view_01076ab0 *)(this))->sub_00fbc7c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076ac0 {
    int sub_01074250(int, int);
};

// @baa 0x01076ac0
undefined4 UContentTagIndex::sub_01076ac0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076ac0 *)(this))->sub_01074250(param_2, param_3);
  return param_1;
}

struct C_view_01076ae0 {
    int sub_010742b0(int, int);
};

// @baa 0x01076ae0
void UContentTagIndex::sub_01076ae0(void)
{
    int param_1 = (int)this;
  ((C_view_01076ae0 *)(this))->sub_010742b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076bb0 {
    int sub_01074370(int, int);
};

// @baa 0x01076bb0
undefined4 UContentTagIndex::sub_01076bb0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076bb0 *)(this))->sub_01074370(param_2, param_3);
  return param_1;
}

struct C_view_01076bd0 {
    int sub_010743d0(int, int);
};

// @baa 0x01076bd0
int UContentTagIndex::sub_01076bd0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076bd0 *)(this))->sub_010743d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01076bf0 {
    int sub_01074450(int, int);
};

// @baa 0x01076bf0
int UContentTagIndex::sub_01076bf0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076bf0 *)(this))->sub_01074450(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01076c10 {
    int sub_010744d0(int, int);
};

// @baa 0x01076c10
int UContentTagIndex::sub_01076c10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076c10 *)(this))->sub_010744d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01076c30 {
    int sub_01074550(int, int);
};

// @baa 0x01076c30
int UContentTagIndex::sub_01076c30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076c30 *)(this))->sub_01074550(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_010695f0(void);
// @baa 0x01076c50
int UContentTagIndex::sub_01076c50(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01069770(void);
// @baa 0x01076c70
int UContentTagIndex::sub_01076c70(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_010697d0(void);
// @baa 0x01076c90
int UContentTagIndex::sub_01076c90(void)
{
    int param_1 = (int)this;

  sub_010697d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_010767a0();
// @baa 0x01076d40
void sub_01076d40(void) { sub_010767a0(); }

void sub_01076810();
// @baa 0x01076d50
void sub_01076d50(void) { sub_01076810(); }

void sub_01076880();
// @baa 0x01076d60
void sub_01076d60(void) { sub_01076880(); }

struct C_view_01076db0 {
    int sub_01073fb0(int, int);
};

// @baa 0x01076db0
int UContentTagIndex::sub_01076db0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076db0 *)(this))->sub_01073fb0(param_2, param_4);
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
    void sub_01073ef0(int, int);
};

struct C {
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
    void sub_01076de0(void);
};

// @baa 0x01076de0
void C::sub_01076de0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01073ef0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076e00 {
    int sub_01074190(int, int);
};

// @baa 0x01076e00
int UContentTagIndex::sub_01076e00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076e00 *)(this))->sub_01074190(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076e30 {
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
    void sub_01074010(int, int);
};

struct C_01076e30 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076e30* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076e30(void);
};

// @baa 0x01076e30
void C_01076e30::sub_01076e30(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01074010(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076e50 {
    int sub_010741f0(int, int);
};

// @baa 0x01076e50
int UContentTagIndex::sub_01076e50(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076e50 *)(this))->sub_010741f0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076e80 {
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
    void sub_010740d0(int, int);
};

struct C_01076e80 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076e80* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076e80(void);
};

// @baa 0x01076e80
void C_01076e80::sub_01076e80(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010740d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076ea0 {
    int sub_01074250(int, int);
};

// @baa 0x01076ea0
int UContentTagIndex::sub_01076ea0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076ea0 *)(this))->sub_01074250(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076ed0 {
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
    void sub_00fbc7c0(int, int);
};

struct C_01076ed0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076ed0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076ed0(void);
};

// @baa 0x01076ed0
void C_01076ed0::sub_01076ed0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00fbc7c0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076f30 {
    int sub_01074370(int, int);
};

// @baa 0x01076f30
int UContentTagIndex::sub_01076f30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076f30 *)(this))->sub_01074370(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076f60 {
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
    void sub_010742b0(int, int);
};

struct C_01076f60 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076f60* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076f60(void);
};

// @baa 0x01076f60
void C_01076f60::sub_01076f60(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010742b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x01076f80
int UContentTagIndex::sub_01076f80(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_01076fa0 {
    int sub_01068fb0();
    int sub_00fbc640(int, int);
};

// @baa 0x01076fa0
void UContentTagIndex::sub_01076fa0(void)
{
    int param_1 = (int)this;
  ((C_view_01076fa0 *)(this))->sub_01068fb0();
  ((C_view_01076fa0 *)(this))->sub_00fbc640(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076fc0 {
    int sub_010690b0();
    int sub_00fbc700(int, int);
};

// @baa 0x01076fc0
void UContentTagIndex::sub_01076fc0(void)
{
    int param_1 = (int)this;
  ((C_view_01076fc0 *)(this))->sub_010690b0();
  ((C_view_01076fc0 *)(this))->sub_00fbc700(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076fe0 {
    int sub_010691b0();
    int sub_00fbc7c0(int, int);
};

// @baa 0x01076fe0
void UContentTagIndex::sub_01076fe0(void)
{
    int param_1 = (int)this;
  ((C_view_01076fe0 *)(this))->sub_010691b0();
  ((C_view_01076fe0 *)(this))->sub_00fbc7c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x01077000
int UContentTagIndex::sub_01077000(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01077020
int UContentTagIndex::sub_01077020(void)
{
    int param_1 = (int)this;

  sub_010697d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01078d20
void sub_01078d20(void) { sub_010767a0(); }

// @baa 0x010792d0
void sub_010792d0(void) { sub_01076810(); }

// @baa 0x01079a40
void sub_01079a40(void) { sub_01076880(); }

// @baa 0x01079e10
int UContentTagIndex::sub_01079e10(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_01079e30 {
    int sub_01068fb0();
    int sub_00fbc640(int, int);
};

// @baa 0x01079e30
void UContentTagIndex::sub_01079e30(void)
{
    int param_1 = (int)this;
  ((C_view_01079e30 *)(this))->sub_01068fb0();
  ((C_view_01079e30 *)(this))->sub_00fbc640(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01079e50 {
    int sub_010690b0();
    int sub_00fbc700(int, int);
};

// @baa 0x01079e50
void UContentTagIndex::sub_01079e50(void)
{
    int param_1 = (int)this;
  ((C_view_01079e50 *)(this))->sub_010690b0();
  ((C_view_01079e50 *)(this))->sub_00fbc700(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01079e70 {
    int sub_010691b0();
    int sub_00fbc7c0(int, int);
};

// @baa 0x01079e70
void UContentTagIndex::sub_01079e70(void)
{
    int param_1 = (int)this;
  ((C_view_01079e70 *)(this))->sub_010691b0();
  ((C_view_01079e70 *)(this))->sub_00fbc7c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x01079e90
int UContentTagIndex::sub_01079e90(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01079eb0
int UContentTagIndex::sub_01079eb0(void)
{
    int param_1 = (int)this;

  sub_010697d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01079ef0 { void sub_01077040(int); C_01079ef0 *sub_01079ef0(int); };

// @baa 0x01079ef0
C_01079ef0 *C_01079ef0::sub_01079ef0(int a) { sub_01077040(a); return this; }

// @baa 0x0107a130
void sub_0107a130(void) { sub_010767a0(); }

// @baa 0x0107a140
void sub_0107a140(void) { sub_010767a0(); }

// @baa 0x0107a2f0
void sub_0107a2f0(void) { sub_01076810(); }

// @baa 0x0107ea60
int UContentTagIndex::sub_0107ea60(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0107ea80();
// @baa 0x0107eb40
void sub_0107eb40(void) { sub_0107ea80(); }

void sub_0107eae0();
// @baa 0x0107eb50
void sub_0107eb50(void) { sub_0107eae0(); }

struct C_0107eb80 { void sub_01077040(int); C_0107eb80 *sub_0107eb80(int); };

// @baa 0x0107eb80
C_0107eb80 *C_0107eb80::sub_0107eb80(int a) { sub_01077040(a); return this; }

// @baa 0x0107ed80
int UContentTagIndex::sub_0107ed80(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}
