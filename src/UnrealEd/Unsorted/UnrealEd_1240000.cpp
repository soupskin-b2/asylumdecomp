// UnrealEd_1240000.cpp (part 1 of 2): 23 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_01240310(int);
    int sub_00d52420(int);
};

// @baa 0x01240310
int C::sub_01240310(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  ((C *)(((char *)this + 4)))->sub_00d52420(param_2 + 4);
  return param_1;
}

void sub_0123f440();
// @baa 0x01240330
void sub_01240330(void) { sub_0123f440(); }

struct A_01240b00 { virtual void sub_01242c50(); char pad[408]; };

struct B_01240b00 { virtual void sub_01242c50(); };

struct C_01240b00 : A_01240b00, B_01240b00 { virtual void sub_01242c50(); C_01240b00(); };

C_01240b00::C_01240b00() {}

// @baa 0x01240b00
void C_01240b00::sub_01242c50() {}

struct A_01240b10 { virtual void sub_01242c50(); char pad[412]; };

struct B_01240b10 { virtual void sub_01242c50(); };

struct C_01240b10 : A_01240b10, B_01240b10 { virtual void sub_01242c50(); C_01240b10(); };

C_01240b10::C_01240b10() {}

// @baa 0x01240b10
void C_01240b10::sub_01242c50() {}

struct A_01240b20 { virtual void sub_01242c50(); char pad[416]; };

struct B_01240b20 { virtual void sub_01242c50(); };

struct C_01240b20 : A_01240b20, B_01240b20 { virtual void sub_01242c50(); C_01240b20(); };

C_01240b20::C_01240b20() {}

// @baa 0x01240b20
void C_01240b20::sub_01242c50() {}

struct C_01240d10 { void sub_0123f730(); void sub_01240d10(int); };

// @baa 0x01240d10
void C_01240d10::sub_01240d10(int) { sub_0123f730(); }

int sub_0053dfa0(...);
int sub_0123fd30(void);
// @baa 0x01241200
undefined4 UUnrealEdEngine::sub_01241200(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0123fd30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01241220 {
    void sub_01241220(undefined4);
};

int sub_012404c0(...);
// @baa 0x01241220
void C_01241220::sub_01241220(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_012404c0(param_2,param_1 + 0x34);
  return;
}

struct A_01242500 { virtual void sub_01242510(); char pad[332]; };

struct B_01242500 { virtual void sub_01242510(); };

struct C_01242500 : A_01242500, B_01242500 { virtual void sub_01242510(); C_01242500(); };

C_01242500::C_01242500() {}

// @baa 0x01242500
void C_01242500::sub_01242510() {}

struct C_view {
    int sub_01240760(int, int);
};

// @baa 0x012426e0
void UUnrealEdEngine::sub_012426e0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01240760(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01242820 {
    int sub_01240820(int, int);
};

// @baa 0x01242820
undefined4 UUnrealEdEngine::sub_01242820(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01242820 *)(this))->sub_01240820(param_2, param_3);
  return param_1;
}

struct C_view_01242840 {
    int sub_01240880(int, int);
};

// @baa 0x01242840
int UUnrealEdEngine::sub_01242840(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01242840 *)(this))->sub_01240880(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

void sub_01240690();
// @baa 0x01242860
void sub_01242860(void) { sub_01240690(); }

int sub_012362e0(void);
// @baa 0x01242870
int UUnrealEdEngine::sub_01242870(void)
{
    int param_1 = (int)this;

  sub_012362e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01242670();
// @baa 0x012430c0
void sub_012430c0(void) { sub_01242670(); }

struct C_view_01243110 {
    int sub_01240820(int, int);
};

// @baa 0x01243110
int UUnrealEdEngine::sub_01243110(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01243110 *)(this))->sub_01240820(param_2, param_4);
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
    void sub_01240760(int, int);
};

struct C_01243140 {
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
    void sub_01243140(void);
};

// @baa 0x01243140
void C_01243140::sub_01243140(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01240760(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x01243160
int UUnrealEdEngine::sub_01243160(void)
{
    int param_1 = (int)this;

  sub_012362e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01243920 { void sub_01243230(); void sub_01243920(int); };

// @baa 0x01243920
void C_01243920::sub_01243920(int) { sub_01243230(); }

// @baa 0x012449e0
void sub_012449e0(void) { sub_01242670(); }

// @baa 0x012449f0
int UUnrealEdEngine::sub_012449f0(void)
{
    int param_1 = (int)this;

  sub_012362e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01244aa0
void sub_01244aa0(void) { sub_01242670(); }

struct C_0124aec0 {
    undefined4 sub_0124aec0(float *);
};

// @baa 0x0124aec0
undefined4 C_0124aec0::sub_0124aec0(float * param_2)
{
    float * param_1 = (float *)this;
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}
