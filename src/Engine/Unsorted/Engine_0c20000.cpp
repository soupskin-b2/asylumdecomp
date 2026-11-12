// Engine_0c20000.cpp (part 1 of 3): 241 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c20040
void sub_00c20040(void) {  }

struct C { C* sub_00c20070(void); };

// @baa 0x00c20070
C* C::sub_00c20070(void) { return this; }

struct C_00c20080 { C_00c20080* sub_00c20080(void); };

// @baa 0x00c20080
C_00c20080* C_00c20080::sub_00c20080(void) { return this; }

struct C_00c20090 { C_00c20090* sub_00c20090(void); };

// @baa 0x00c20090
C_00c20090* C_00c20090::sub_00c20090(void) { return this; }

struct C_00c200e0 { C_00c200e0* sub_00c200e0(void); };

// @baa 0x00c200e0
C_00c200e0* C_00c200e0::sub_00c200e0(void) { return this; }

struct C_00c200f0 { C_00c200f0* sub_00c200f0(void); };

// @baa 0x00c200f0
C_00c200f0* C_00c200f0::sub_00c200f0(void) { return this; }

struct C_00c20100 { C_00c20100* sub_00c20100(void); };

// @baa 0x00c20100
C_00c20100* C_00c20100::sub_00c20100(void) { return this; }

struct C_00c20110 { C_00c20110* sub_00c20110(void); };

// @baa 0x00c20110
C_00c20110* C_00c20110::sub_00c20110(void) { return this; }

struct C_00c20120 { C_00c20120* sub_00c20120(void); };

// @baa 0x00c20120
C_00c20120* C_00c20120::sub_00c20120(void) { return this; }

struct E { BYTE Bytes[20]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00c21660(INT Index) const;
};

// @baa 0x00c21660
const E* S::sub_00c21660(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00c216b0
void sub_00c216b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct A_00c21730 { virtual void sub_00c21ba0(); char pad[16]; };

struct B_00c21730 { virtual void sub_00c21ba0(); };

struct C_00c21730 : A_00c21730, B_00c21730 { virtual void sub_00c21ba0(); C_00c21730(); };

C_00c21730::C_00c21730() {}

// @baa 0x00c21730
void C_00c21730::sub_00c21ba0() {}

struct A_00c21740 { virtual void sub_00c21b10(); char pad[16]; };

struct B_00c21740 { virtual void sub_00c21b10(); };

struct C_00c21740 : A_00c21740, B_00c21740 { virtual void sub_00c21b10(); C_00c21740(); };

C_00c21740::C_00c21740() {}

// @baa 0x00c21740
void C_00c21740::sub_00c21b10() {}

struct C_00c21750 { int sub_00c21750(void); };

// @baa 0x00c21750
int C_00c21750::sub_00c21750(void) { return *(int*)((char*)this + 60); }

struct C_00c21760 {
    int sub_00c21760();
};

// @baa 0x00c21760
int C_00c21760::sub_00c21760(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10) + *(int *)(param_1 + 4);
}

struct C_00c21770 {
    int sub_00c21770();
};

// @baa 0x00c21770
int C_00c21770::sub_00c21770(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x38) +
         (*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) * 0x1c;
}

struct C_00c21790 {
    undefined4 * sub_00c21790(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_0204467c;
// @baa 0x00c21790
undefined4 * C_00c21790::sub_00c21790(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0204467c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c21b10 {
    undefined4 sub_00c21b10(byte);
};

int sub_007249d0(void);
// @baa 0x00c21b10
undefined4 C_00c21b10::sub_00c21b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c21ba0 {
    undefined4 sub_00c21ba0(byte);
};

// @baa 0x00c21ba0
undefined4 C_00c21ba0::sub_00c21ba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_02044750[];
struct C_00c22300 { C_00c22300* sub_00c22300(void); };

// @baa 0x00c22300
C_00c22300* C_00c22300::sub_00c22300(void) { *(int*)((char*)this + 0) = (int)g_02044750; return this; }

// @baa 0x00c22310
void __stdcall sub_00c22310(int a0) {  }

// @baa 0x00c22320
void __stdcall sub_00c22320(int a0) {  }

// @baa 0x00c22330
int __stdcall sub_00c22330(int a0, int a1) { return 0; }

// @baa 0x00c22340
void __stdcall sub_00c22340(int a0, int a1, int a2) {  }

// @baa 0x00c22350
int __stdcall sub_00c22350(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return 0; }

// @baa 0x00c22360
int __stdcall sub_00c22360(int a0, int a1) { return 0; }

// @baa 0x00c22370
DWORD __stdcall sub_00c22370(DWORD param)
{
    return 0xffffffff;
}

// @baa 0x00c22380
void __stdcall sub_00c22380(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00c22390
void __stdcall sub_00c22390(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00c223c0
void __stdcall sub_00c223c0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00c223d0
void __stdcall sub_00c223d0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00c223e0
void __stdcall sub_00c223e0(int a0, int a1, int a2) {  }

// @baa 0x00c223f0
void __stdcall sub_00c223f0(int a0) {  }

// @baa 0x00c22400
void __stdcall sub_00c22400(int a0) {  }

// @baa 0x00c22410
void __stdcall sub_00c22410(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x00c22420
void __stdcall sub_00c22420(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {  }

// @baa 0x00c22430
void __stdcall sub_00c22430(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {  }

// @baa 0x00c22440
void __stdcall sub_00c22440(int a0) {  }

// @baa 0x00c22450
int __stdcall sub_00c22450(int a0, int a1, int a2) { return 1; }

// @baa 0x00c22460
void __stdcall sub_00c22460(int a0) {  }

// @baa 0x00c22470
void __stdcall sub_00c22470(int a0, int a1, int a2) {  }

// @baa 0x00c22480
void sub_00c22480(void) {  }

// @baa 0x00c22490
void sub_00c22490(void) {  }

// @baa 0x00c224a0
int sub_00c224a0(void) { return 0; }

// @baa 0x00c224b0
int sub_00c224b0(void) { return 0; }

// @baa 0x00c224c0
void __stdcall sub_00c224c0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00c224d0
void __stdcall sub_00c224d0(int a0) {  }

// @baa 0x00c224e0
void __stdcall sub_00c224e0(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00c224f0
void __stdcall sub_00c224f0(int a0) {  }

// @baa 0x00c22500
void __stdcall sub_00c22500(int a0) {  }

// @baa 0x00c22510
void __stdcall sub_00c22510(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00c22520
void __stdcall sub_00c22520(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x00c22530
void __stdcall sub_00c22530(int a0, int a1, int a2) {  }

// @baa 0x00c22540
void __stdcall sub_00c22540(int a0) {  }

// @baa 0x00c22550
void __stdcall sub_00c22550(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00c22560
void sub_00c22560(void) {  }

// @baa 0x00c22570
void __stdcall sub_00c22570(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x00c22580
void __stdcall sub_00c22580(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x00c22590
void __stdcall sub_00c22590(int a0, int a1, int a2) {  }

// @baa 0x00c225a0
void __stdcall sub_00c225a0(int a0) {  }

// @baa 0x00c225b0
void __stdcall sub_00c225b0(int a0, int a1, int a2) {  }

// @baa 0x00c225c0
void __stdcall sub_00c225c0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00c225d0
void __stdcall sub_00c225d0(int a0, int a1) {  }

// @baa 0x00c225e0
void __stdcall sub_00c225e0(int a0) {  }

// @baa 0x00c225f0
void __stdcall sub_00c225f0(int a0) {  }

// @baa 0x00c22600
void __stdcall sub_00c22600(int a0) {  }

// @baa 0x00c22610
void __stdcall sub_00c22610(int a0) {  }

// @baa 0x00c22620
void __stdcall sub_00c22620(int a0, int a1) {  }

// @baa 0x00c22630
void __stdcall sub_00c22630(int a0, int a1) {  }

// @baa 0x00c22640
void __stdcall sub_00c22640(int a0) {  }

// @baa 0x00c22650
void __stdcall sub_00c22650(int a0) {  }

// @baa 0x00c22660
void __stdcall sub_00c22660(int a0, int a1) {  }

// @baa 0x00c22670
void __stdcall sub_00c22670(int a0) {  }

// @baa 0x00c22680
void sub_00c22680(void) {  }

// @baa 0x00c22690
void __stdcall sub_00c22690(int a0) {  }

// @baa 0x00c226a0
void __stdcall sub_00c226a0(int a0) {  }

// @baa 0x00c226b0
void __stdcall sub_00c226b0(int a0, int a1, int a2) {  }

// @baa 0x00c226c0
void __stdcall sub_00c226c0(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {  }

// @baa 0x00c226d0
void __stdcall sub_00c226d0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {  }

// @baa 0x00c226e0
void sub_00c226e0(void) {  }

// @baa 0x00c226f0
void __stdcall sub_00c226f0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00c22700
void sub_00c22700(void) {  }

// @baa 0x00c22710
void __stdcall sub_00c22710(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {  }

// @baa 0x00c22720
void __stdcall sub_00c22720(int a0, int a1) {  }

// @baa 0x00c22730
void __stdcall sub_00c22730(int a0, int a1) {  }

// @baa 0x00c22740
void __stdcall sub_00c22740(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00c22750
void sub_00c22750(void) {  }

// @baa 0x00c22760
void sub_00c22760(void) {  }

// @baa 0x00c22770
void sub_00c22770(void) {  }

// @baa 0x00c22780
void sub_00c22780(void) {  }

// @baa 0x00c22790
int sub_00c22790(void) { return 0; }

// @baa 0x00c227a0
void sub_00c227a0(void) {  }

// @baa 0x00c227b0
void sub_00c227b0(void) {  }

// @baa 0x00c227c0
void __stdcall sub_00c227c0(int a0) {  }

// @baa 0x00c227d0
void __stdcall sub_00c227d0(int a0, int a1, int a2) {  }

// @baa 0x00c227e0
void __stdcall sub_00c227e0(int a0, int a1) {  }

// @baa 0x00c227f0
void __stdcall sub_00c227f0(int a0, int a1, int a2) {  }

// @baa 0x00c22800
int __stdcall sub_00c22800(int a0, int a1) { return 0; }

// @baa 0x00c22810
void __stdcall sub_00c22810(int a0, int a1) {  }

// @baa 0x00c22820
void __stdcall sub_00c22820(int a0, int a1) {  }

// @baa 0x00c22830
void __stdcall sub_00c22830(int a0, int a1) {  }

// @baa 0x00c22840
int __stdcall sub_00c22840(int a0, int a1) { return 0; }

// @baa 0x00c22850
int __stdcall sub_00c22850(int a0) { return 0; }

struct C_00c231e0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c231e0* sub_00c231e0();
};

extern INT g_020449fc;
// @baa 0x00c231e0
C_00c231e0* C_00c231e0::sub_00c231e0()
{
    Value04 = 0;
    Unk00 = &g_020449fc;
    return this;
}

struct C_00c231f0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c231f0* sub_00c231f0();
};

extern INT g_02044a00;
// @baa 0x00c231f0
C_00c231f0* C_00c231f0::sub_00c231f0()
{
    Value04 = 0;
    Unk00 = &g_02044a00;
    return this;
}

struct C_00c23200 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23200* sub_00c23200();
};

extern INT g_02044a04;
// @baa 0x00c23200
C_00c23200* C_00c23200::sub_00c23200()
{
    Value04 = 0;
    Unk00 = &g_02044a04;
    return this;
}

struct C_00c23210 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23210* sub_00c23210();
};

extern INT g_02044a08;
// @baa 0x00c23210
C_00c23210* C_00c23210::sub_00c23210()
{
    Value04 = 0;
    Unk00 = &g_02044a08;
    return this;
}

struct C_00c23220 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23220* sub_00c23220();
};

extern INT g_02044a0c;
// @baa 0x00c23220
C_00c23220* C_00c23220::sub_00c23220()
{
    Value04 = 0;
    Unk00 = &g_02044a0c;
    return this;
}

struct C_00c23230 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23230* sub_00c23230();
};

extern INT g_02044a10;
// @baa 0x00c23230
C_00c23230* C_00c23230::sub_00c23230()
{
    Value04 = 0;
    Unk00 = &g_02044a10;
    return this;
}

struct C_00c23240 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23240* sub_00c23240();
};

extern INT g_02044a14;
// @baa 0x00c23240
C_00c23240* C_00c23240::sub_00c23240()
{
    Value04 = 0;
    Unk00 = &g_02044a14;
    return this;
}

struct C_00c23250 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23250* sub_00c23250();
};

extern INT g_02044a18;
// @baa 0x00c23250
C_00c23250* C_00c23250::sub_00c23250()
{
    Value04 = 0;
    Unk00 = &g_02044a18;
    return this;
}

struct C_00c23260 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23260* sub_00c23260();
};

extern INT g_02044a1c;
// @baa 0x00c23260
C_00c23260* C_00c23260::sub_00c23260()
{
    Value04 = 0;
    Unk00 = &g_02044a1c;
    return this;
}

struct C_00c23270 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23270* sub_00c23270();
};

extern INT g_02044a20;
// @baa 0x00c23270
C_00c23270* C_00c23270::sub_00c23270()
{
    Value04 = 0;
    Unk00 = &g_02044a20;
    return this;
}

struct C_00c23280 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23280* sub_00c23280();
};

extern INT g_02044a24;
// @baa 0x00c23280
C_00c23280* C_00c23280::sub_00c23280()
{
    Value04 = 0;
    Unk00 = &g_02044a24;
    return this;
}

struct C_00c23290 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c23290* sub_00c23290();
};

extern INT g_02044a28;
// @baa 0x00c23290
C_00c23290* C_00c23290::sub_00c23290()
{
    Value04 = 0;
    Unk00 = &g_02044a28;
    return this;
}

struct C_00c232a0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c232a0* sub_00c232a0();
};

extern INT g_02044a2c;
// @baa 0x00c232a0
C_00c232a0* C_00c232a0::sub_00c232a0()
{
    Value04 = 0;
    Unk00 = &g_02044a2c;
    return this;
}

struct C_00c232b0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c232b0* sub_00c232b0();
};

extern INT g_02044a30;
// @baa 0x00c232b0
C_00c232b0* C_00c232b0::sub_00c232b0()
{
    Value04 = 0;
    Unk00 = &g_02044a30;
    return this;
}

struct C_00c232c0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c232c0* sub_00c232c0();
};

extern INT g_02044a34;
// @baa 0x00c232c0
C_00c232c0* C_00c232c0::sub_00c232c0()
{
    Value04 = 0;
    Unk00 = &g_02044a34;
    return this;
}

struct C_00c232d0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c232d0* sub_00c232d0();
};

extern INT g_02044a38;
// @baa 0x00c232d0
C_00c232d0* C_00c232d0::sub_00c232d0()
{
    Value04 = 0;
    Unk00 = &g_02044a38;
    return this;
}

struct C_00c232e0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c232e0* sub_00c232e0();
};

extern INT g_02044a3c;
// @baa 0x00c232e0
C_00c232e0* C_00c232e0::sub_00c232e0()
{
    Value04 = 0;
    Unk00 = &g_02044a3c;
    return this;
}

struct C_00c232f0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00c232f0* sub_00c232f0();
};

extern INT g_02044a40;
// @baa 0x00c232f0
C_00c232f0* C_00c232f0::sub_00c232f0()
{
    Value04 = 0;
    Unk00 = &g_02044a40;
    return this;
}

struct C_00c23300 {
    void sub_00c23300();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00c23300
void C_00c23300::sub_00c23300(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23330 {
    void sub_00c23330();
};

// @baa 0x00c23330
void C_00c23330::sub_00c23330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23360 {
    void sub_00c23360();
};

// @baa 0x00c23360
void C_00c23360::sub_00c23360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23390 {
    void sub_00c23390();
};

// @baa 0x00c23390
void C_00c23390::sub_00c23390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c233c0 {
    void sub_00c233c0();
};

// @baa 0x00c233c0
void C_00c233c0::sub_00c233c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c233f0 {
    void sub_00c233f0();
};

// @baa 0x00c233f0
void C_00c233f0::sub_00c233f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23420 {
    void sub_00c23420();
};

// @baa 0x00c23420
void C_00c23420::sub_00c23420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23450 {
    void sub_00c23450();
};

// @baa 0x00c23450
void C_00c23450::sub_00c23450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23480 {
    void sub_00c23480();
};

// @baa 0x00c23480
void C_00c23480::sub_00c23480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c234b0 {
    void sub_00c234b0();
};

// @baa 0x00c234b0
void C_00c234b0::sub_00c234b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c234e0 {
    void sub_00c234e0();
};

// @baa 0x00c234e0
void C_00c234e0::sub_00c234e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23510 {
    void sub_00c23510();
};

// @baa 0x00c23510
void C_00c23510::sub_00c23510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23540 {
    void sub_00c23540();
};

// @baa 0x00c23540
void C_00c23540::sub_00c23540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23570 {
    void sub_00c23570();
};

// @baa 0x00c23570
void C_00c23570::sub_00c23570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c235a0 {
    void sub_00c235a0();
};

// @baa 0x00c235a0
void C_00c235a0::sub_00c235a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c235d0 {
    void sub_00c235d0();
};

// @baa 0x00c235d0
void C_00c235d0::sub_00c235d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23600 {
    void sub_00c23600();
};

// @baa 0x00c23600
void C_00c23600::sub_00c23600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00c23630 {
    void sub_00c23630();
};

// @baa 0x00c23630
void C_00c23630::sub_00c23630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

extern char g_02044338[];
struct C_00c23660 { void sub_00c23660(void); };

// @baa 0x00c23660
void C_00c23660::sub_00c23660(void) { *(int*)((char*)this + 0) = (int)g_02044338; }

struct C_00c23670{
int*sub_00c23670(int);
};

extern undefined4*g_026b0d94;
// @baa 0x00c23670
int*C_00c23670::sub_00c23670(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x210))((int)(param_2));
}
return param_1;
}

struct C_00c236a0{
int*sub_00c236a0(int);
};

// @baa 0x00c236a0
int*C_00c236a0::sub_00c236a0(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(0!=param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x20c))((int)(param_2));
}
return param_1;
}

struct C_00c236d0{
int*sub_00c236d0(int);
};

// @baa 0x00c236d0
int*C_00c236d0::sub_00c236d0(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(0!=param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x208))((int)(param_2));
}
return param_1;
}

struct C_00c23700{
int*sub_00c23700(int);
};

// @baa 0x00c23700
int*C_00c23700::sub_00c23700(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(0!=param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x204))((int)(param_2));
}
return param_1;
}

struct C_00c23730{
int*sub_00c23730(int);
};

// @baa 0x00c23730
int*C_00c23730::sub_00c23730(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x200))((int)(param_2));
}
return param_1;
}

struct C_00c23760{
int*sub_00c23760(int);
};

// @baa 0x00c23760
int*C_00c23760::sub_00c23760(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(0!=param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(param_2));
}
return param_1;
}

struct C_00c23790{
int*sub_00c23790(int);
};

// @baa 0x00c23790
int*C_00c23790::sub_00c23790(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+500))((int)(param_2));
}
return param_1;
}

struct C_00c237c0{
int*sub_00c237c0(int);
};

// @baa 0x00c237c0
int*C_00c237c0::sub_00c237c0(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1f8))((int)(param_2));
}
return param_1;
}

struct C_00c237f0{
int*sub_00c237f0(int);
};

// @baa 0x00c237f0
int*C_00c237f0::sub_00c237f0(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(0!=param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1f0))((int)(param_2));
}
return param_1;
}

struct C_00c23850{
int*sub_00c23850(int);
};

// @baa 0x00c23850
int*C_00c23850::sub_00c23850(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(DWORD(__stdcall**)(int))(*g_026b0d94+0x1e8))((int)(param_2));
}
return param_1;
}

struct C_00c23880{
int*sub_00c23880(int);
};

// @baa 0x00c23880
int*C_00c23880::sub_00c23880(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(undefined4(__stdcall**)(int))(*g_026b0d94+0x1dc))((int)(param_2));
}
return param_1;
}

struct C_00c238b0{
int*sub_00c238b0(int);
};

// @baa 0x00c238b0
int*C_00c238b0::sub_00c238b0(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1d4))((param_2));
}
return param_1;
}

struct C_00c238e0{
int*sub_00c238e0(int);
};

// @baa 0x00c238e0
int*C_00c238e0::sub_00c238e0(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1d8))((int)(param_2));
}
return param_1;
}

struct C_00c23910{
int*sub_00c23910(int);
};

// @baa 0x00c23910
int*C_00c23910::sub_00c23910(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1c8))((int)(param_2));
}
return param_1;
}

struct C_00c24170 {
    undefined4 * sub_00c24170(byte);
};

// @baa 0x00c24170
undefined4 * C_00c24170::sub_00c24170(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c241b0 {
    undefined4 * sub_00c241b0(byte);
};

// @baa 0x00c241b0
undefined4 * C_00c241b0::sub_00c241b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c241f0 {
    undefined4 * sub_00c241f0(byte);
};

// @baa 0x00c241f0
undefined4 * C_00c241f0::sub_00c241f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24230 {
    undefined4 * sub_00c24230(byte);
};

// @baa 0x00c24230
undefined4 * C_00c24230::sub_00c24230(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24270 {
    undefined4 * sub_00c24270(byte);
};

// @baa 0x00c24270
undefined4 * C_00c24270::sub_00c24270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c242b0 {
    undefined4 * sub_00c242b0(byte);
};

// @baa 0x00c242b0
undefined4 * C_00c242b0::sub_00c242b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c242f0 {
    undefined4 * sub_00c242f0(byte);
};

// @baa 0x00c242f0
undefined4 * C_00c242f0::sub_00c242f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24330 {
    undefined4 * sub_00c24330(byte);
};

// @baa 0x00c24330
undefined4 * C_00c24330::sub_00c24330(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24370 {
    undefined4 * sub_00c24370(byte);
};

// @baa 0x00c24370
undefined4 * C_00c24370::sub_00c24370(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c243b0 {
    undefined4 * sub_00c243b0(byte);
};

// @baa 0x00c243b0
undefined4 * C_00c243b0::sub_00c243b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c243f0 {
    undefined4 * sub_00c243f0(byte);
};

// @baa 0x00c243f0
undefined4 * C_00c243f0::sub_00c243f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24430 {
    undefined4 * sub_00c24430(byte);
};

// @baa 0x00c24430
undefined4 * C_00c24430::sub_00c24430(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24470 {
    undefined4 * sub_00c24470(byte);
};

// @baa 0x00c24470
undefined4 * C_00c24470::sub_00c24470(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c244b0 {
    undefined4 * sub_00c244b0(byte);
};

// @baa 0x00c244b0
undefined4 * C_00c244b0::sub_00c244b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c244f0 {
    undefined4 * sub_00c244f0(byte);
};

// @baa 0x00c244f0
undefined4 * C_00c244f0::sub_00c244f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24530 {
    undefined4 * sub_00c24530(byte);
};

// @baa 0x00c24530
undefined4 * C_00c24530::sub_00c24530(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24570 {
    undefined4 * sub_00c24570(byte);
};

// @baa 0x00c24570
undefined4 * C_00c24570::sub_00c24570(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c245b0 {
    undefined4 * sub_00c245b0(byte);
};

// @baa 0x00c245b0
undefined4 * C_00c245b0::sub_00c245b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c245f0 {
    undefined4 * sub_00c245f0(byte);
};

// @baa 0x00c245f0
undefined4 * C_00c245f0::sub_00c245f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02044338);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c24910 {
    undefined4 sub_00c24910();
};

int sub_00c200a0(void);
// @baa 0x00c24910
undefined4 C_00c24910::sub_00c24910(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c200a0();
  return param_1;
}

// @baa 0x00c24920
void sub_00c24920(void) {  }

struct E_00c24d30 { BYTE Bytes[36]; };

struct S_00c24d30 {
    TArray<E_00c24d30> Items; // 0x00
    const E_00c24d30* sub_00c24d30(INT Index) const;
};

// @baa 0x00c24d30
const E_00c24d30* S_00c24d30::sub_00c24d30(INT Index) const
{
    return &Items(Index);
}

struct E_00c24e80 { BYTE Bytes[72]; };

struct S_00c24e80 {
    TArray<E_00c24e80> Items; // 0x00
    E_00c24e80* sub_00c24e80(INT Index);
};

// @baa 0x00c24e80
E_00c24e80* S_00c24e80::sub_00c24e80(INT Index)
{
    return &Items(Index);
}

struct S_00c24ed0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00c24ed0(INT Index) const;
};

// @baa 0x00c24ed0
const DWORD* S_00c24ed0::sub_00c24ed0(INT Index) const
{
    return &Items(Index);
}

struct E_00c24f20 { BYTE Bytes[36]; };

struct S_00c24f20 {
    TArray<E_00c24f20> Items; // 0x00
    E_00c24f20* sub_00c24f20(INT Index);
};

// @baa 0x00c24f20
E_00c24f20* S_00c24f20::sub_00c24f20(INT Index)
{
    return &Items(Index);
}

struct C_00c24f70 { int sub_00c24f70(void); };

// @baa 0x00c24f70
int C_00c24f70::sub_00c24f70(void) { return *(int*)((char*)this + 4); }

struct E_00c24fe0 { BYTE Bytes[32]; };

struct S_00c24fe0 {
    TArray<E_00c24fe0> Items; // 0x00
    E_00c24fe0* sub_00c24fe0(INT Index);
};

// @baa 0x00c24fe0
E_00c24fe0* S_00c24fe0::sub_00c24fe0(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00c25030(INT Index);
};

// @baa 0x00c25030
FFaceFXElement* UFxRenderWidget::sub_00c25030(INT Index)
{
	return &BoneArray(Index);
}

struct E_00c25080 { BYTE Bytes[32]; };

struct S_00c25080 {
    TArray<E_00c25080> Items; // 0x00
    E_00c25080* sub_00c25080(INT Index);
};

// @baa 0x00c25080
E_00c25080* S_00c25080::sub_00c25080(INT Index)
{
    return &Items(Index);
}

int sub_00c24f80(void);
// @baa 0x00c250d0
undefined4 ULensFlare::sub_00c250d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c24f80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c25a50 {
    FString sub_00c25a50();
};

// @baa 0x00c25a50
FString C_00c25a50::sub_00c25a50()
{
    return TEXT("");
}

struct C_00c26150{
void sub_00c26150();
};

// @baa 0x00c26150
void C_00c26150::sub_00c26150(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

int sub_00c21be0(void);
// @baa 0x00c261d0
undefined4 ULensFlare::sub_00c261d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c21be0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c26560{
void sub_00c26560();
};

// @baa 0x00c26560
void C_00c26560::sub_00c26560(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(iVar1));
}
return;
}

// @baa 0x00c28960
FString UMaterialExpressionAddNormalMap::vf_128()
{
    return TEXT("Add Normal Map");
}

// @baa 0x00c290c0
int sub_00c290c0(void) { return 1; }

// @baa 0x00c290d0
void sub_00c290d0(void) {  }

// @baa 0x00c290e0
void sub_00c290e0(void) {  }

struct C_00c29380 { int a, b, c; C_00c29380(); };

// @baa 0x00c29380
C_00c29380::C_00c29380() : a(0), b(0), c(0) {}

struct C_00c296b0 {
    undefined4 sub_00c296b0();
};

// @baa 0x00c296b0
undefined4 C_00c296b0::sub_00c296b0(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c200a0();
  return param_1;
}

struct C_00c296c0 {
    undefined4 sub_00c296c0();
    int sub_00c200a0();
};

// @baa 0x00c296c0
undefined4 C_00c296c0::sub_00c296c0(void)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00c296c0 *)(((char *)this + 0x6c)))->sub_00c200a0();
  return param_1;
}

struct C_00c29840 {
    void sub_00c29840(int);
};

int sub_0053df70(...);
// @baa 0x00c29840
void C_00c29840::sub_00c29840(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00c29e70{
void sub_00c29e70();
};

// @baa 0x00c29e70
void C_00c29e70::sub_00c29e70(void)
{
int param_1=(int)this;
int iVar1;
iVar1=*(uint*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

extern TArray<int> g_026a1ca4;
struct C_00c29e90 {
    int sub_00c29e90();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00c29e90
int C_00c29e90::sub_00c29e90()
{
    return g_026a1ca4(Index);
}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00c29ef0
undefined4 * UObject::sub_00c29ef0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x00c29f30
undefined4 UObject::sub_00c29f30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00c29f60
int UObject::sub_00c29f60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00c29f80
int UObject::sub_00c29f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00c29fa0
int UObject::sub_00c29fa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c29fc0 {
    int sub_00c29fc0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00c29fc0
int C_00c29fc0::sub_00c29fc0()
{
    return g_026a1ca4(Index);
}

// @baa 0x00c2a020
int UObject::sub_00c2a020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00c2a040
int UObject::sub_00c2a040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00c2a050
int UObject::sub_00c2a050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

int sub_005c7a20(void);
extern undefined * g_02044a80;
// @baa 0x00c2a410
undefined4 * UObject::sub_00c2a410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02044a80);
  return param_1;
}

// @baa 0x00c2a470
int sub_00c2a470(void) { return 1; }

// @baa 0x00c2a480
int sub_00c2a480(void) { return 0; }

struct C_00c2a490 {
    void sub_00c2a490();
};

int sub_006be4d0(void);
extern undefined * g_02044bb8;
extern undefined * g_02044c18;
// @baa 0x00c2a490
void C_00c2a490::sub_00c2a490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02044c18);
  param_1[1] = (undefined4)(&g_02044bb8);
  sub_006be4d0();
  return;
}

struct C_00c2a4b0 {
    undefined4 * sub_00c2a4b0(byte);
};

// @baa 0x00c2a4b0
undefined4 * C_00c2a4b0::sub_00c2a4b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02044c18);
  param_1[1] = (undefined4)(&g_02044bb8);
  sub_006be4d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_02044cb8;
// @baa 0x00c2baf0
undefined4 * UObject::sub_00c2baf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02044cb8);
  return param_1;
}

// @baa 0x00c2bb10
IMPLEMENT_CLASS_AT(UMaterialExpressionAbs, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 41);

// @baa 0x00c2bbb0
IMPLEMENT_CLASS_AT(UMaterialExpressionAdd, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 16);

// @baa 0x00c2bc60
int UMaterialExpressionAddNormalMap::vf_12c(void) { return 8; }

// @baa 0x00c2bc70
IMPLEMENT_CLASS_AT(UMaterialExpressionAddNormalMap, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 91);

// @baa 0x00c2bd20
IMPLEMENT_CLASS_AT(UMaterialExpressionAppendVector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 37);

// @baa 0x00c2bdd0
IMPLEMENT_CLASS_AT(UMaterialExpressionBumpOffset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 36);

// @baa 0x00c2be80
IMPLEMENT_CLASS_AT(UMaterialExpressionCameraVector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 29);

// @baa 0x00c2bf20
IMPLEMENT_CLASS_AT(UMaterialExpressionCameraWorldPosition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 30);

// @baa 0x00c2bfc0
IMPLEMENT_CLASS_AT(UMaterialExpressionCeil, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 39);

// @baa 0x00c2c060
IMPLEMENT_CLASS_AT(UMaterialExpressionClamp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 23);

// @baa 0x00c2c110
IMPLEMENT_CLASS_AT(UMaterialExpressionComment, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 78);

// @baa 0x00c2c1c0
IMPLEMENT_CLASS_AT(UMaterialExpressionComponentMask, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 19);

// @baa 0x00c2c270
IMPLEMENT_CLASS_AT(UMaterialExpressionConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 24);

// @baa 0x00c2c310
IMPLEMENT_CLASS_AT(UMaterialExpressionConstant2Vector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 25);

/* Kit gap: FString::Printf (UnString.h) isn't declared. */
class FString_ : public FString
{
public:
	static FString Printf(const TCHAR* Fmt, ...);
};

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

// @baa 0x00c2a4e0
FString USpeechRecognition::GetDesc()
{
	INT Count = 0;
	for (INT i = 0; i < Vocabularies.Num(); i++)
	{
		FRecogVocabulary& Vocab = ((TArrayAt_<FRecogVocabulary>&)Vocabularies).At(i);
		Count += Vocab.WhoDictionary.Num() + Vocab.WhatDictionary.Num() + Vocab.WhereDictionary.Num();
	}
	return FString_::Printf(TEXT("Items: %d"), Count);
}

#line 2184 "candidate.cpp"
