// GFx_19f0000.cpp (part 2 of 3): 69 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct A_019f08a0 { virtual void sub_019f1020(); char pad[12]; };

struct B_019f08a0 { virtual void sub_019f1020(); };

struct C_019f08a0 : A_019f08a0, B_019f08a0 { virtual void sub_019f1020(); C_019f08a0(); };

C_019f08a0::C_019f08a0() {}

// @baa 0x019f08a0
void C_019f08a0::sub_019f1020() {}

struct A_019f0bc0 { virtual void sub_019f0fc0(); char pad[12]; };

struct B_019f0bc0 { virtual void sub_019f0fc0(); };

struct C_019f0bc0 : A_019f0bc0, B_019f0bc0 { virtual void sub_019f0fc0(); C_019f0bc0(); };

C_019f0bc0::C_019f0bc0() {}

// @baa 0x019f0bc0
void C_019f0bc0::sub_019f0fc0() {}

struct C {
    void sub_01973ce0();
    void sub_019f1060();
};

// @baa 0x019f1060
void C::sub_019f1060()
{
    this->sub_01973ce0();
}

struct A_019f1070 { virtual void sub_019f1080(); char pad[12]; };

struct B_019f1070 { virtual void sub_019f1080(); };

struct C_019f1070 : A_019f1070, B_019f1070 { virtual void sub_019f1080(); C_019f1070(); };

C_019f1070::C_019f1070() {}

// @baa 0x019f1070
void C_019f1070::sub_019f1080() {}

struct A_019f1110 { virtual void sub_019f12e0(); char pad[12]; };

struct B_019f1110 { virtual void sub_019f12e0(); };

struct C_019f1110 : A_019f1110, B_019f1110 { virtual void sub_019f12e0(); C_019f1110(); };

C_019f1110::C_019f1110() {}

// @baa 0x019f1110
void C_019f1110::sub_019f12e0() {}

struct C_019f1340 { int a, b; C_019f1340(int, int); };

// @baa 0x019f1340
C_019f1340::C_019f1340(int x, int y) : a(x), b(y) {}

struct C_019f1560 { int a, b; C_019f1560(int, int); };

// @baa 0x019f1560
C_019f1560::C_019f1560(int x, int y) : a(x), b(y) {}

struct C_019f1580 {
    int sub_019f1580(int);
};

// @baa 0x019f1580
int C_019f1580::sub_019f1580(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_019f1590 {
    void sub_019f1590(undefined4 *);
    int sub_018e4700(int);
};

// @baa 0x019f1590
void C_019f1590::sub_019f1590(undefined4 * param_2)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  ((C_019f1590 *)(this))->sub_018e4700(*param_2);
  puVar1 = (undefined4 *)param_2[1];
  *(undefined4 *)(param_1 + 4) = *puVar1;
  *(undefined4 *)(param_1 + 8) = puVar1[1];
  return;
}

struct C_019f16a0 {
    int sub_019f16a0(int);
    int sub_018e4700(int);
};

// @baa 0x019f16a0
int C_019f16a0::sub_019f16a0(int param_2)
{
    int param_1 = (int)this;
  ((C_019f16a0 *)(this))->sub_018e4700(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}

struct C_019f1a60 {
    void sub_01973ce0();
};

struct D : C_019f1a60 {
    void sub_019f1a60();
};

// @baa 0x019f1a60
void D::sub_019f1a60()
{
    this->sub_01973ce0();
}

struct A_019f1a70 { virtual void sub_019f1a80(); char pad[12]; };

struct B_019f1a70 { virtual void sub_019f1a80(); };

struct C_019f1a70 : A_019f1a70, B_019f1a70 { virtual void sub_019f1a80(); C_019f1a70(); };

C_019f1a70::C_019f1a70() {}

// @baa 0x019f1a70
void C_019f1a70::sub_019f1a80() {}

struct A_019f2b30 { virtual void sub_019f3280(); char pad[12]; };

struct B_019f2b30 { virtual void sub_019f3280(); };

struct C_019f2b30 : A_019f2b30, B_019f2b30 { virtual void sub_019f3280(); C_019f2b30(); };

C_019f2b30::C_019f2b30() {}

// @baa 0x019f2b30
void C_019f2b30::sub_019f3280() {}

struct A_019f2e20 { virtual void sub_019f3220(); char pad[12]; };

struct B_019f2e20 { virtual void sub_019f3220(); };

struct C_019f2e20 : A_019f2e20, B_019f2e20 { virtual void sub_019f3220(); C_019f2e20(); };

C_019f2e20::C_019f2e20() {}

// @baa 0x019f2e20
void C_019f2e20::sub_019f3220() {}

struct A_019f3310 { virtual void sub_019f34d0(); char pad[12]; };

struct B_019f3310 { virtual void sub_019f34d0(); };

struct C_019f3310 : A_019f3310, B_019f3310 { virtual void sub_019f34d0(); C_019f3310(); };

C_019f3310::C_019f3310() {}

// @baa 0x019f3310
void C_019f3310::sub_019f34d0() {}

struct C_019f5a20 {
    undefined4 * sub_019f5a20(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_02401864;
extern undefined4 g_024018bc;
// @baa 0x019f5a20
undefined4 * C_019f5a20::sub_019f5a20(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019f5a20 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_024018bc));
  param_1[4] = (undefined4)((&g_02401864));
  ((C_019f5a20 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019f5a60 { virtual void sub_019f63f0(); char pad[12]; };

struct B_019f5a60 { virtual void sub_019f63f0(); };

struct C_019f5a60 : A_019f5a60, B_019f5a60 { virtual void sub_019f63f0(); C_019f5a60(); };

C_019f5a60::C_019f5a60() {}

// @baa 0x019f5a60
void C_019f5a60::sub_019f63f0() {}

struct C_019f5ac0 {
    undefined4 * sub_019f5ac0(undefined4);
    int sub_019924d0(int);
    int sub_019f5430(int);
};

// @baa 0x019f5ac0
undefined4 * C_019f5ac0::sub_019f5ac0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019f5ac0 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_024018bc));
  param_1[4] = (undefined4)((&g_02401864));
  ((C_019f5ac0 *)(this))->sub_019f5430(param_2);
  return param_1;
}

struct C_019f5af0 {
    undefined4 * sub_019f5af0(undefined4, undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019f5430(int);
    int sub_019f54a0(int, int);
};

// @baa 0x019f5af0
undefined4 * C_019f5af0::sub_019f5af0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019f5af0 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_024018bc));
  param_1[4] = (undefined4)((&g_02401864));
  ((C_019f5af0 *)(this))->sub_019f5430(param_2);
  ((C_019f5af0 *)(this))->sub_019f54a0(param_3, param_4);
  return param_1;
}

struct A_019f5f90 { virtual void sub_019f63d0(); char pad[12]; };

struct B_019f5f90 { virtual void sub_019f63d0(); };

struct C_019f5f90 : A_019f5f90, B_019f5f90 { virtual void sub_019f63d0(); C_019f5f90(); };

C_019f5f90::C_019f5f90() {}

// @baa 0x019f5f90
void C_019f5f90::sub_019f63d0() {}

struct A_019f6490 { virtual void sub_019f6730(); char pad[12]; };

struct B_019f6490 { virtual void sub_019f6730(); };

struct C_019f6490 : A_019f6490, B_019f6490 { virtual void sub_019f6730(); C_019f6490(); };

C_019f6490::C_019f6490() {}

// @baa 0x019f6490
void C_019f6490::sub_019f6730() {}

struct A_019f6570 { virtual void sub_019f6580(); char pad[12]; };

struct B_019f6570 { virtual void sub_019f6580(); };

struct C_019f6570 : A_019f6570, B_019f6570 { virtual void sub_019f6580(); C_019f6570(); };

C_019f6570::C_019f6570() {}

// @baa 0x019f6570
void C_019f6570::sub_019f6580() {}

struct C_019f7310 {
    undefined4 * sub_019f7310(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_02401ae4;
extern undefined4 g_02401b3c;
// @baa 0x019f7310
undefined4 * C_019f7310::sub_019f7310(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019f7310 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02401b3c));
  param_1[4] = (undefined4)((&g_02401ae4));
  ((C_019f7310 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019f7350 { virtual void sub_019f8110(); char pad[12]; };

struct B_019f7350 { virtual void sub_019f8110(); };

struct C_019f7350 : A_019f7350, B_019f7350 { virtual void sub_019f8110(); C_019f7350(); };

C_019f7350::C_019f7350() {}

// @baa 0x019f7350
void C_019f7350::sub_019f8110() {}

struct A_019f7cb0 { virtual void sub_019f80f0(); char pad[12]; };

struct B_019f7cb0 { virtual void sub_019f80f0(); };

struct C_019f7cb0 : A_019f7cb0, B_019f7cb0 { virtual void sub_019f80f0(); C_019f7cb0(); };

C_019f7cb0::C_019f7cb0() {}

// @baa 0x019f7cb0
void C_019f7cb0::sub_019f80f0() {}

struct A_019f8330 { virtual void sub_019f85d0(); char pad[12]; };

struct B_019f8330 { virtual void sub_019f85d0(); };

struct C_019f8330 : A_019f8330, B_019f8330 { virtual void sub_019f85d0(); C_019f8330(); };

C_019f8330::C_019f8330() {}

// @baa 0x019f8330
void C_019f8330::sub_019f85d0() {}

struct A_019f8410 { virtual void sub_019f8420(); char pad[12]; };

struct B_019f8410 { virtual void sub_019f8420(); };

struct C_019f8410 : A_019f8410, B_019f8410 { virtual void sub_019f8420(); C_019f8410(); };

C_019f8410::C_019f8410() {}

// @baa 0x019f8410
void C_019f8410::sub_019f8420() {}

struct C_019f9210 {
    void sub_01973ce0();
    void sub_019f9210();
};

// @baa 0x019f9210
void C_019f9210::sub_019f9210() { sub_01973ce0(); }

struct A_019f9220 { virtual void sub_019f9230(); char pad[12]; };

struct B_019f9220 { virtual void sub_019f9230(); };

struct C_019f9220 : A_019f9220, B_019f9220 { virtual void sub_019f9230(); C_019f9220(); };

C_019f9220::C_019f9220() {}

// @baa 0x019f9220
void C_019f9220::sub_019f9230() {}

struct A_019f92a0 { virtual void sub_019f9910(); char pad[12]; };

struct B_019f92a0 { virtual void sub_019f9910(); };

struct C_019f92a0 : A_019f92a0, B_019f92a0 { virtual void sub_019f9910(); C_019f92a0(); };

C_019f92a0::C_019f92a0() {}

// @baa 0x019f92a0
void C_019f92a0::sub_019f9910() {}

struct A_019f94b0 { virtual void sub_019f98f0(); char pad[12]; };

struct B_019f94b0 { virtual void sub_019f98f0(); };

struct C_019f94b0 : A_019f94b0, B_019f94b0 { virtual void sub_019f98f0(); C_019f94b0(); };

C_019f94b0::C_019f94b0() {}

// @baa 0x019f94b0
void C_019f94b0::sub_019f98f0() {}

struct A_019f9f60 { virtual void sub_019fa0f0(); char pad[12]; };

struct B_019f9f60 { virtual void sub_019fa0f0(); };

struct C_019f9f60 : A_019f9f60, B_019f9f60 { virtual void sub_019fa0f0(); C_019f9f60(); };

C_019f9f60::C_019f9f60() {}

// @baa 0x019f9f60
void C_019f9f60::sub_019fa0f0() {}

struct C_019facc0 {
    byte sub_019facc0(DWORD a, DWORD b, DWORD c, DWORD d);
};

// @baa 0x019facc0
byte C_019facc0::sub_019facc0(DWORD a, DWORD b, DWORD c, DWORD d) {
    return 0;
}

struct A_019facf0 { virtual void sub_019fb1e0(); char pad[12]; };

struct B_019facf0 { virtual void sub_019fb1e0(); };

struct C_019facf0 : A_019facf0, B_019facf0 { virtual void sub_019fb1e0(); C_019facf0(); };

C_019facf0::C_019facf0() {}

// @baa 0x019facf0
void C_019facf0::sub_019fb1e0() {}

struct C_019fb760 { int a; C_019fb760(int); };

// @baa 0x019fb760
C_019fb760::C_019fb760(int x) : a(x) {}

struct A_019fba00 { virtual void sub_019fba10(); char pad[12]; };

struct B_019fba00 { virtual void sub_019fba10(); };

struct C_019fba00 : A_019fba00, B_019fba00 { virtual void sub_019fba10(); C_019fba00(); };

C_019fba00::C_019fba00() {}

// @baa 0x019fba00
void C_019fba00::sub_019fba10() {}

struct C_019fcab0 {
    undefined4 * sub_019fcab0(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_0240261c;
extern undefined4 g_02402674;
// @baa 0x019fcab0
undefined4 * C_019fcab0::sub_019fcab0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019fcab0 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02402674));
  param_1[4] = (undefined4)((&g_0240261c));
  ((C_019fcab0 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019fcae0 { virtual void sub_019fd160(); char pad[12]; };

struct B_019fcae0 { virtual void sub_019fd160(); };

struct C_019fcae0 : A_019fcae0, B_019fcae0 { virtual void sub_019fd160(); C_019fcae0(); };

C_019fcae0::C_019fcae0() {}

// @baa 0x019fcae0
void C_019fcae0::sub_019fd160() {}

struct C_019fcb40 {
    undefined4 * sub_019fcb40(undefined4);
    int sub_019924d0(int);
    int sub_019fb810(int);
};

// @baa 0x019fcb40
undefined4 * C_019fcb40::sub_019fcb40(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019fcb40 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02402674));
  param_1[4] = (undefined4)((&g_0240261c));
  ((C_019fcb40 *)(this))->sub_019fb810(param_2);
  return param_1;
}

struct A_019fcd00 { virtual void sub_019fd140(); char pad[12]; };

struct B_019fcd00 { virtual void sub_019fd140(); };

struct C_019fcd00 : A_019fcd00, B_019fcd00 { virtual void sub_019fd140(); C_019fcd00(); };

C_019fcd00::C_019fcd00() {}

// @baa 0x019fcd00
void C_019fcd00::sub_019fd140() {}

struct A_019fd200 { virtual void sub_019fd380(); char pad[12]; };

struct B_019fd200 { virtual void sub_019fd380(); };

struct C_019fd200 : A_019fd200, B_019fd200 { virtual void sub_019fd380(); C_019fd200(); };

C_019fd200::C_019fd200() {}

// @baa 0x019fd200
void C_019fd200::sub_019fd380() {}

struct C_019fd580 {
    virtual void v0();
    virtual void v1();
    void sub_019fd580();
};

void C_019fd580::v0() {}

void C_019fd580::v1() {}

// @baa 0x019fd580
void C_019fd580::sub_019fd580()
{
    return this->v1();
}

struct A_019fd670 { virtual void sub_019fd680(); char pad[12]; };

struct B_019fd670 { virtual void sub_019fd680(); };

struct C_019fd670 : A_019fd670, B_019fd670 { virtual void sub_019fd680(); C_019fd670(); };

C_019fd670::C_019fd670() {}

// @baa 0x019fd670
void C_019fd670::sub_019fd680() {}

struct C_019fda40 {
    undefined4 * sub_019fda40(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_02402884;
extern undefined4 g_024028dc;
// @baa 0x019fda40
undefined4 * C_019fda40::sub_019fda40(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019fda40 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_024028dc));
  param_1[4] = (undefined4)((&g_02402884));
  ((C_019fda40 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019fda80 { virtual void sub_019fe0e0(); char pad[12]; };

struct B_019fda80 { virtual void sub_019fe0e0(); };

struct C_019fda80 : A_019fda80, B_019fda80 { virtual void sub_019fe0e0(); C_019fda80(); };

C_019fda80::C_019fda80() {}

// @baa 0x019fda80
void C_019fda80::sub_019fe0e0() {}

struct A_019fdc80 { virtual void sub_019fe0c0(); char pad[12]; };

struct B_019fdc80 { virtual void sub_019fe0c0(); };

struct C_019fdc80 : A_019fdc80, B_019fdc80 { virtual void sub_019fe0c0(); C_019fdc80(); };

C_019fdc80::C_019fdc80() {}

// @baa 0x019fdc80
void C_019fdc80::sub_019fe0c0() {}

struct A_019fe1b0 { virtual void sub_019fe330(); char pad[12]; };

struct B_019fe1b0 { virtual void sub_019fe330(); };

struct C_019fe1b0 : A_019fe1b0, B_019fe1b0 { virtual void sub_019fe330(); C_019fe1b0(); };

C_019fe1b0::C_019fe1b0() {}

// @baa 0x019fe1b0
void C_019fe1b0::sub_019fe330() {}

// @baa 0x019fe600
DWORD __stdcall sub_019fe600(DWORD *param_1)
{
    return param_1[1];
}

// @baa 0x019fe6d0
DWORD __stdcall sub_019fe6d0(DWORD *param_1)
{
    return param_1[1];
}

// @baa 0x019fe6f0
INT __stdcall sub_019fe6f0(INT *param_1)
{
    return param_1[2];
}

struct C_019fe950 {
    undefined4 * sub_019fe950(int);
    int sub_019fe8b0(int);
};

// @baa 0x019fe950
undefined4 * C_019fe950::sub_019fe950(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  ((C_019fe950 *)(this))->sub_019fe8b0(param_2);
  return param_1;
}

struct C_019feb20 {
    undefined4 * sub_019feb20(undefined4, undefined4);
    int sub_019fe7a0(int);
};

int __stdcall sub_019fea00(int);
// @baa 0x019feb20
undefined4 * C_019feb20::sub_019feb20(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  uVar1 = sub_019fea00(param_2);
  param_1[3] = uVar1;
  ((C_019feb20 *)(this))->sub_019fe7a0(param_3);
  return param_1;
}

struct C_019fec20 { int a; C_019fec20(int); };

// @baa 0x019fec20
C_019fec20::C_019fec20(int x) : a(x) {}

// @baa 0x019fec60
undefined4 sub_019fec60(int param_1, int param_2)
{
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

// @baa 0x019fec80
bool sub_019fec80(int param_1, int param_2)
{
  return *(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10);
}

// @baa 0x019fece0
undefined4 sub_019fece0(int param_1, int param_2)
{
  if (*(float *)(param_1 + 8) < *(float *)(param_2 + 8)) {
    return 1;
  }
  return 0;
}

struct C_019ff0f0 {
    int sub_019ff0f0(int);
};

// @baa 0x019ff0f0
int C_019ff0f0::sub_019ff0f0(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 8) + param_2 * 0xc;
}

struct C_019ff100 {
    int sub_019ff100(int);
};

// @baa 0x019ff100
int C_019ff100::sub_019ff100(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 8) + param_2 * 0xc;
}

struct C_019ff110 {
    void sub_019ff110();
};

// @baa 0x019ff110
void C_019ff110::sub_019ff110(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  return;
}

int __stdcall sub_018d7150(int);
// @baa 0x019ff380
void sub_019ff380(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

struct C_019ffa60 {
    undefined4 sub_019ffa60(uint, uint);
};

// @baa 0x019ffa60
undefined4 C_019ffa60::sub_019ffa60(uint param_2, uint param_3)
{
    int * param_1 = (int *)this;

  if (*(float *)(*(int *)(*(int *)(*param_1 + 0xc) + (param_2 >> 10) * 4) + 4 +
                (param_2 & 0x3ff) * 8) <
      *(float *)(*(int *)(*(int *)(*param_1 + 0xc) + (param_3 >> 10) * 4) + 4 +
                (param_3 & 0x3ff) * 8)) {
    return 1;
  }
  return 0;
}

struct C_019729b0
{
    int sub_019729b0(int* Value, int Flag);
};

struct C_019f2e00
{
    char Prefix[0x34];
    int Member; // at 0x34

    C_019729b0* sub_019f2e00(C_019729b0* Object);
};

// @baa 0x019f2e00
C_019729b0* C_019f2e00::sub_019f2e00(C_019729b0* Object)
{
    Object->sub_019729b0(&Member, 0);
    return Object;
}

struct Sub_019729b0
{
    int sub_019729b0(Sub_019729b0* State, int Flags);
};

struct Sub_019f7c90
{
    char Prefix[0x30];
    Sub_019729b0 Member;

    Sub_019729b0* sub_019f7c90(Sub_019729b0* Obj);
};

// @baa 0x019f7c90
Sub_019729b0* Sub_019f7c90::sub_019f7c90(Sub_019729b0* Obj)
{
    Obj->sub_019729b0(&Member, 0);
    return Obj;
}

// The original calls a method of its argument, passing (this + 0x60) and 0.
struct C_019f5f70 {
    int sub_019729b0(C_019f5f70* Sub, int bIn);
    C_019f5f70* sub_019f5f70(C_019f5f70* In);
};

// @baa 0x019f5f70
C_019f5f70* C_019f5f70::sub_019f5f70(C_019f5f70* In)
{
    In->sub_019729b0((C_019f5f70*)((char*)this + 0x60), 0);
    return In;
}

struct C_019f9490 {
    int sub_019729b0(int, int);
    int sub_019f9490(int Arg);
};

// @baa 0x019f9490
int C_019f9490::sub_019f9490(int Arg)
{
    ((C_019f9490*)Arg)->sub_019729b0((int)((char*)this + 0x50), 0);
    return Arg;
}

struct C_019fcce0 {
    int sub_019fcce0(int Arg);
    int sub_019729b0(int Arg0, int Arg1);
};

// @baa 0x019fcce0
int C_019fcce0::sub_019fcce0(int Arg)
{
    ((C_019fcce0*)Arg)->sub_019729b0((int)((char*)this + 0x30), 0);
    return Arg;
}

// The original calls a method of its argument, passing (this + 0x30) and 0.
struct C_019fdc60 {
    int sub_019729b0(C_019fdc60* Sub, int bIn);
    C_019fdc60* sub_019fdc60(C_019fdc60* In);
};

// @baa 0x019fdc60
C_019fdc60* C_019fdc60::sub_019fdc60(C_019fdc60* In)
{
    In->sub_019729b0((C_019fdc60*)((char*)this + 0x30), 0);
    return In;
}

class GFxVertexInterface_XY32f
{
public:
	virtual ~GFxVertexInterface_XY32f() {}
	virtual void sub_019fe520(const float* Verts, float* OutX, float* OutY);
};

// @baa 0x019fe520
void GFxVertexInterface_XY32f::sub_019fe520(const float* Verts, float* OutX, float* OutY)
{
	*OutX = Verts[0];
	*OutY = Verts[1];
}

struct Vec2_
{
	double X;
	double Y;

	Vec2_* sub_019f6c40(const Vec2_* Other);
};

// @baa 0x019f6c40
Vec2_* Vec2_::sub_019f6c40(const Vec2_* Other)
{
	const double OtherY = Other->Y;
	const double OtherX = Other->X;
	X += OtherX;
	Y += OtherY;
	return this;
}
