// GFx_1990000.cpp (part 1 of 3): 119 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 * sub_01990070();
};

int sub_018d3d50(void);
extern undefined * g_023fb408;
// @baa 0x01990070
undefined4 * C::sub_01990070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fb408);
  return param_1;
}

int __stdcall sub_018d7150(int);
// @baa 0x01990090
void sub_01990090(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

struct C_019900c0 {
    undefined4 sub_019900c0(int);
    int sub_01972a00(int);
    int sub_01976180(int);
};

// @baa 0x019900c0
undefined4 C_019900c0::sub_019900c0(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_019900c0 *)(this))->sub_01972a00(param_2);
  ((C_019900c0 *)(((char *)this + 0xc)))->sub_01976180(param_2 + 0xc);
  return param_1;
}

struct C_01990100 { int a, b; C_01990100(int, int); };

// @baa 0x01990100
C_01990100::C_01990100(int x, int y) : a(x), b(y) {}

struct C_01990120 { int a, b; C_01990120(int, int); };

// @baa 0x01990120
C_01990120::C_01990120(int x, int y) : a(x), b(y) {}

struct C_01990180 { int a, b; C_01990180(int, int); };

// @baa 0x01990180
C_01990180::C_01990180(int x, int y) : a(x), b(y) {}

struct C_019901f0 {
    undefined4 sub_019901f0(int);
    int sub_019729b0(int, int);
    int sub_01975590(int);
};

// @baa 0x019901f0
undefined4 C_019901f0::sub_019901f0(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_019901f0 *)(this))->sub_019729b0(param_2, 0);
  ((C_019901f0 *)(((char *)this + 0xc)))->sub_01975590(param_2 + 0xc);
  return param_1;
}

struct S {
    int Unk0; // 0x00
    BYTE sub_01990220(S* Other);
};

// @baa 0x01990220
BYTE S::sub_01990220(S* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_01990240 {
    int Unk0; // 0x00
    BYTE sub_01990240(S_01990240* Other);
};

// @baa 0x01990240
BYTE S_01990240::sub_01990240(S_01990240* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_019903b0 {
    int sub_019903b0(int);
};

// @baa 0x019903b0
int C_019903b0::sub_019903b0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x24;
}

struct C_019903c0 {
    undefined4 sub_019903c0();
};

// @baa 0x019903c0
undefined4 C_019903c0::sub_019903c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct GASObjectInterface {
    BYTE sub_01990440(INT a, INT b, INT c);
};

// @baa 0x01990440
BYTE GASObjectInterface::sub_01990440(INT a, INT b, INT c)
{
    return 0;
}

// @baa 0x01990450
unsigned char __stdcall sub_01990450(int a0, int a1, int a2, int a3) { return 0; }

struct S_01990520 {
    INT Unk00;
    INT Unk04;
    S_01990520 *sub_01990520();
};

// @baa 0x01990520
S_01990520 *S_01990520::sub_01990520()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01990530 {
    int sub_01990530();
};

// @baa 0x01990530
int C_01990530::sub_01990530(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + 0xc + param_1[1] * 0x18;
}

struct C_01990560 {
    int sub_01990560();
};

// @baa 0x01990560
int C_01990560::sub_01990560(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + 0xc + param_1[1] * 0x24;
}

struct C_019905d0 { int a, b; C_019905d0(int, int); };

// @baa 0x019905d0
C_019905d0::C_019905d0(int x, int y) : a(x), b(y) {}

struct C_01990ee0 {
    undefined4 sub_01990ee0(int *);
    int sub_01990af0(int, int);
};

// @baa 0x01990ee0
undefined4 C_01990ee0::sub_01990ee0(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_01990ee0 *)(this))->sub_01990af0((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_01990f10 {
    undefined4 sub_01990f10(int *);
    int sub_01990b60(int, int);
};

// @baa 0x01990f10
undefined4 C_01990f10::sub_01990f10(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_01990f10 *)(this))->sub_01990b60((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct A_019930b0 { virtual void sub_019930c0(); char pad[12]; };

struct B_019930b0 { virtual void sub_019930c0(); };

struct C_019930b0 : A_019930b0, B_019930b0 { virtual void sub_019930c0(); C_019930b0(); };

C_019930b0::C_019930b0() {}

// @baa 0x019930b0
void C_019930b0::sub_019930c0() {}

struct C_01993670 {
    undefined4 * sub_01993670(undefined4, undefined4);
    int sub_01992530(int, int);
    int sub_01972280(int, int);
    int sub_01972310(int);
};

extern undefined4 g_023faaf4;
extern undefined4 g_023fab4c;
// @baa 0x01993670
undefined4 * C_01993670::sub_01993670(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01993670 *)(this))->sub_01992530(param_2, param_3);
  *param_1 = (undefined4)((&g_023fab4c));
  param_1[4] = (undefined4)((&g_023faaf4));
  ((C_01993670 *)(((char *)this + 0x30)))->sub_01972280(0, 2);
  ((C_01993670 *)(((char *)this + 0x30)))->sub_01972310(1);
  ((C_01993670 *)(((char *)this + 0x3c)))->sub_01972280(0, 2);
  ((C_01993670 *)(((char *)this + 0x3c)))->sub_01972310(1);
  param_1[0x12] = 0;
  return param_1;
}

struct A_019937b0 { virtual void sub_01993840(); char pad[12]; };

struct B_019937b0 { virtual void sub_01993840(); };

struct C_019937b0 : A_019937b0, B_019937b0 { virtual void sub_01993840(); C_019937b0(); };

C_019937b0::C_019937b0() {}

// @baa 0x019937b0
void C_019937b0::sub_01993840() {}

struct C_019937d0 {
    undefined4 * sub_019937d0(undefined4, undefined4);
    int sub_01993670(int, int);
};

extern undefined4 g_023fb504;
extern undefined4 g_023fb55c;
// @baa 0x019937d0
undefined4 * C_019937d0::sub_019937d0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019937d0 *)(this))->sub_01993670(param_2, param_3);
  *param_1 = (undefined4)((&g_023fb55c));
  param_1[4] = (undefined4)((&g_023fb504));
  return param_1;
}

struct C_01993970 {
    bool sub_01993970();
};

// @baa 0x01993970
bool C_01993970::sub_01993970(void)
{
    char * param_1 = (char *)this;
  return *param_1 == '\f';
}

struct C_01993c20 { int a, b; C_01993c20(int, int); };

// @baa 0x01993c20
C_01993c20::C_01993c20(int x, int y) : a(x), b(y) {}

struct M_01993dc0 { void sub_01976180(); };

struct C_01993dc0 { char pad[192]; M_01993dc0 m; void sub_01993dc0(); };

// @baa 0x01993dc0
void C_01993dc0::sub_01993dc0() { m.sub_01976180(); }

struct C_01993dd0 {
    void sub_01993dd0();
    int sub_01976050();
};

// @baa 0x01993dd0
void C_01993dd0::sub_01993dd0(void)
{
    int param_1 = (int)this;
  ((C_01993dd0 *)(((char *)this + 0xc0)))->sub_01976050();
  *(undefined1 *)(param_1 + 0xc0) = 10;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  return;
}

struct M_01993f10 { void sub_0198f7d0(); };

struct C_01993f10 { char pad[108]; M_01993f10 m; void sub_01993f10(); };

// @baa 0x01993f10
void C_01993f10::sub_01993f10() { m.sub_0198f7d0(); }

struct C_01993f70 {
    void sub_01973ce0();
    void sub_01993f70();
};

// @baa 0x01993f70
void C_01993f70::sub_01993f70() {
    this->sub_01973ce0();
}

struct C_01994070 {
    void sub_01994070(undefined4);
};

// @baa 0x01994070
void C_01994070::sub_01994070(undefined4 param_2)
{
    int param_1 = (int)this;
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x80;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

struct C_01994090 {
    void sub_01994090(undefined4);
};

// @baa 0x01994090
void C_01994090::sub_01994090(undefined4 param_2)
{
    int param_1 = (int)this;
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x100;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}

struct C_019940a0 {
    ushort sub_019940a0();
};

// @baa 0x019940a0
ushort C_019940a0::sub_019940a0(void)
{
    int param_1 = (int)this;
  return *(ushort *)(param_1 + 0x28) >> 8 & 1;
}

struct C_019940b0 {
    void sub_019940b0(undefined4);
};

// @baa 0x019940b0
void C_019940b0::sub_019940b0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 0x200;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

struct C_019940c0 {
    ushort sub_019940c0();
};

// @baa 0x019940c0
ushort C_019940c0::sub_019940c0(void)
{
    int param_1 = (int)this;
  return *(ushort *)(param_1 + 0x28) >> 9 & 1;
}

struct C_01994a90 {
    UINT sub_01994a90();
};

// @baa 0x01994a90
UINT C_01994a90::sub_01994a90(void)
{
    return *(BYTE *)((char *)this + 0x4c);
}

struct V_01995230 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void g();
};

struct O_01995230 { char pad[116]; V_01995230* p; void sub_01995230(); };

// @baa 0x01995230
void O_01995230::sub_01995230() { p->g(); }

struct V_01995280 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void g();
};

struct O_01995280 { char pad[116]; V_01995280* p; void sub_01995280(); };

// @baa 0x01995280
void O_01995280::sub_01995280() { p->g(); }

struct C_01995c70 {
    undefined4 * sub_01995c70();
};

extern undefined * g_023fbba8;
// @baa 0x01995c70
undefined4 * C_01995c70::sub_01995c70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fbba8);
  return param_1;
}

struct C_01995d00 {
    undefined4 * sub_01995d00();
};

extern undefined * g_023fbbb0;
// @baa 0x01995d00
undefined4 * C_01995d00::sub_01995d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fbbb0);
  return param_1;
}

struct C_01995d20 { int a; C_01995d20(int); };

// @baa 0x01995d20
C_01995d20::C_01995d20(int x) : a(x) {}

struct C_01995dd0 {
    undefined4 * sub_01995dd0();
};

extern undefined * g_023fbbb8;
// @baa 0x01995dd0
undefined4 * C_01995dd0::sub_01995dd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fbbb8);
  return param_1;
}

struct C_01995e10 {
    int sub_01995e10(int);
};

// @baa 0x01995e10
int C_01995e10::sub_01995e10(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 8;
}

struct C_01995ec0 { int a; C_01995ec0(int); };

// @baa 0x01995ec0
C_01995ec0::C_01995ec0(int x) : a(x) {}

struct C_01995f10 { int a; C_01995f10(int); };

// @baa 0x01995f10
C_01995f10::C_01995f10(int x) : a(x) {}

struct C_01995f70 { int a; C_01995f70(int); };

// @baa 0x01995f70
C_01995f70::C_01995f70(int x) : a(x) {}

struct C_01996010 {
    int sub_01996010(int);
};

// @baa 0x01996010
int C_01996010::sub_01996010(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x18;
}

struct C_01996020 { C_01996020* sub_01996020(void); };

// @baa 0x01996020
C_01996020* C_01996020::sub_01996020(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01996060 { int a, b, c; C_01996060(); };

// @baa 0x01996060
C_01996060::C_01996060() : a(0), b(0), c(0) {}

struct C_01996070 { int a, b, c; C_01996070(); };

// @baa 0x01996070
C_01996070::C_01996070() : a(0), b(0), c(0) {}

struct C_01996190 { int a, b; C_01996190(int, int); };

// @baa 0x01996190
C_01996190::C_01996190(int x, int y) : a(x), b(y) {}

struct C_019961b0 { int a, b; C_019961b0(int, int); };

// @baa 0x019961b0
C_019961b0::C_019961b0(int x, int y) : a(x), b(y) {}

struct C_019961d0 {
    int sub_019961d0(int);
};

// @baa 0x019961d0
int C_019961d0::sub_019961d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x18;
}

struct C_01996200 { int a, b; C_01996200(int, int); };

// @baa 0x01996200
C_01996200::C_01996200(int x, int y) : a(x), b(y) {}

struct C_01996220 { int a, b; C_01996220(int, int); };

// @baa 0x01996220
C_01996220::C_01996220(int x, int y) : a(x), b(y) {}

struct C_01996250 { int a, b; C_01996250(int, int); };

// @baa 0x01996250
C_01996250::C_01996250(int x, int y) : a(x), b(y) {}

struct C_01996270 {
    int sub_01996270(int);
};

// @baa 0x01996270
int C_01996270::sub_01996270(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01996280 { C_01996280* sub_01996280(void); };

// @baa 0x01996280
C_01996280* C_01996280::sub_01996280(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019962a0 {
    int sub_019962a0(int);
};

// @baa 0x019962a0
int C_019962a0::sub_019962a0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_01996310 { int a, b; C_01996310(int, int); };

// @baa 0x01996310
C_01996310::C_01996310(int x, int y) : a(x), b(y) {}

// @baa 0x019964a0
undefined4 sub_019964a0(undefined4 param_1)
{
  return param_1;
}

struct S_01996520 {
    INT Unk00;
    INT Unk04;
    S_01996520 *sub_01996520();
};

// @baa 0x01996520
S_01996520 *S_01996520::sub_01996520()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01996530 {
    void sub_01996530(undefined4 *);
};

// @baa 0x01996530
void C_01996530::sub_01996530(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *(undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  return;
}

struct C_01996570 {
    int * sub_01996570(int *);
    int sub_019729b0(int, int);
};

// @baa 0x01996570
int * C_01996570::sub_01996570(int * param_2)
{
    int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  iVar2 = *param_2;
  *param_1 = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01996570 *)(((char *)this + 4)))->sub_019729b0((int)(param_2 + 1), 0);
  return param_1;
}

struct S_019965c0 {
    int Unk0; // 0x00
    BYTE sub_019965c0(S_019965c0* Other);
};

// @baa 0x019965c0
BYTE S_019965c0::sub_019965c0(S_019965c0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_019965e0 {
    int Unk0; // 0x00
    BYTE sub_019965e0(S_019965e0* Other);
};

// @baa 0x019965e0
BYTE S_019965e0::sub_019965e0(S_019965e0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_01996600 {
    int * sub_01996600(undefined4 *);
    int sub_01975590(int);
};

// @baa 0x01996600
int * C_01996600::sub_01996600(undefined4 * param_2)
{
    int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  iVar2 = *(int *)*param_2;
  *param_1 = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01996600 *)(((char *)this + 4)))->sub_01975590(param_2[1]);
  return param_1;
}

struct C_01996660 {
    int * sub_01996660(undefined4 *);
    int sub_019729b0(int, int);
};

// @baa 0x01996660
int * C_01996660::sub_01996660(undefined4 * param_2)
{
    int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  iVar2 = *(int *)*param_2;
  *param_1 = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01996660 *)(((char *)this + 4)))->sub_019729b0(param_2[1], 0);
  return param_1;
}

struct C_019966c0 {
    int sub_019966c0(int);
};

// @baa 0x019966c0
int C_019966c0::sub_019966c0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

// @baa 0x019966d0
void __stdcall sub_019966d0(void *p) {}

struct C_01996710 {
    undefined4 * sub_01996710(int *, undefined4);
    int sub_019729b0(int, int);
};

// @baa 0x01996710
undefined4 * C_01996710::sub_01996710(int * param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  *param_1 = param_3;
  iVar2 = *param_2;
  param_1[1] = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01996710 *)(((char *)this + 8)))->sub_019729b0((int)(param_2 + 1), 0);
  return param_1;
}

// @baa 0x01996770
void __stdcall sub_01996770(int arg1)
{
}

struct C_01996780 {
    int * sub_01996780(int *);
    int sub_01975590(int);
};

// @baa 0x01996780
int * C_01996780::sub_01996780(int * param_2)
{
    int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  iVar2 = *param_2;
  *param_1 = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01996780 *)(((char *)this + 4)))->sub_01975590((int)(param_2 + 1));
  return param_1;
}

struct C_019967b0 { int a, b; C_019967b0(const C_019967b0 &); };

// @baa 0x019967b0
C_019967b0::C_019967b0(const C_019967b0 &o) : a(o.a), b(o.b) {}

// @baa 0x019967d0
DWORD __stdcall sub_019967d0(DWORD * arg1)
{
	return *arg1;
}

// @baa 0x01996870
undefined1 * sub_01996870(undefined1 * param_1, float * param_2)
{
  float fVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    fVar1 = *param_2;
    *param_1 = 3;
    *(double *)(param_1 + 4) = (double)fVar1;
    return param_1;
  }
  return (undefined1 *)0x0;
}

// @baa 0x01996890
undefined1 * sub_01996890(undefined1 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    *param_1 = 4;
    *(undefined4 *)(param_1 + 4) = uVar1;
    return param_1;
  }
  return (undefined1 *)0x0;
}

struct C_01996910 {
    int sub_01996910(int);
};

// @baa 0x01996910
int C_01996910::sub_01996910(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01996920 {
    int sub_01996920(int);
};

// @baa 0x01996920
int C_01996920::sub_01996920(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_01996930 {
    int sub_01996930(int);
};

// @baa 0x01996930
int C_01996930::sub_01996930(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_01996940 {
    undefined4 sub_01996940();
};

// @baa 0x01996940
undefined4 C_01996940::sub_01996940(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct S_01996960 {
    int Unk0; // 0x00
    BYTE sub_01996960(S_01996960* Other);
};

// @baa 0x01996960
BYTE S_01996960::sub_01996960(S_01996960* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_01996980 {
    int Unk0; // 0x00
    BYTE sub_01996980(S_01996980* Other);
};

// @baa 0x01996980
BYTE S_01996980::sub_01996980(S_01996980* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_019969b0 {
    int Unk0; // 0x00
    BYTE sub_019969b0(S_019969b0* Other);
};

// @baa 0x019969b0
BYTE S_019969b0::sub_019969b0(S_019969b0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_019969f0 {
    int Unk0; // 0x00
    BYTE sub_019969f0(S_019969f0* Other);
};

// @baa 0x019969f0
BYTE S_019969f0::sub_019969f0(S_019969f0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct A_01996a90 { virtual void sub_01996c00(); char pad[12]; };

struct B_01996a90 { virtual void sub_01996c00(); };

struct C_01996a90 : A_01996a90, B_01996a90 { virtual void sub_01996c00(); C_01996a90(); };

C_01996a90::C_01996a90() {}

// @baa 0x01996a90
void C_01996a90::sub_01996c00() {}

struct C_01996be0 {
    bool sub_01996be0();
};

// @baa 0x01996be0
bool C_01996be0::sub_01996be0(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) != 0;
}

struct C_019974f0 {
    undefined4 sub_019974f0();
};

// @baa 0x019974f0
undefined4 C_019974f0::sub_019974f0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x5c);
}

struct C_01997500 {
    undefined4 * sub_01997500();
};

extern undefined * g_023fbc9c;
// @baa 0x01997500
undefined4 * C_01997500::sub_01997500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fbc9c);
  return param_1;
}

struct C_019995d0 { int a, b; C_019995d0(int, int); };

// @baa 0x019995d0
C_019995d0::C_019995d0(int x, int y) : a(x), b(y) {}

// @baa 0x01999630
int UGFxDataStoreSubscriber::sub_01999630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x14;
}

struct C_019996a0 { int a, b; C_019996a0(int, int); };

// @baa 0x019996a0
C_019996a0::C_019996a0(int x, int y) : a(x), b(y) {}

struct C_01999950 {
    undefined4 * sub_01999950(undefined4 *);
    int sub_019729b0(int, int);
};

// @baa 0x01999950
undefined4 * C_01999950::sub_01999950(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  *param_1 = *param_2;
  iVar2 = param_2[1];
  param_1[1] = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01999950 *)(((char *)this + 8)))->sub_019729b0((int)(param_2 + 2), 0);
  return param_1;
}

// @baa 0x019999c0
DWORD __stdcall sub_019999c0(DWORD * arg1)
{
	return *arg1;
}

struct C_01999ae0 {
    undefined4 * sub_01999ae0(undefined4 *);
    int sub_01975590(int);
};

// @baa 0x01999ae0
undefined4 * C_01999ae0::sub_01999ae0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  *param_1 = *param_2;
  iVar2 = param_2[1];
  param_1[1] = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01999ae0 *)(((char *)this + 8)))->sub_01975590((int)(param_2 + 2));
  return param_1;
}

struct C_01999b10 {
    undefined4 * sub_01999b10(int *, undefined4);
    int sub_01975590(int);
};

// @baa 0x01999b10
undefined4 * C_01999b10::sub_01999b10(int * param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  *param_1 = param_3;
  iVar2 = *param_2;
  param_1[1] = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01999b10 *)(((char *)this + 8)))->sub_01975590((int)(param_2 + 1));
  return param_1;
}

struct C_0199a910 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_0199a910* sub_0199a910();
};

extern INT g_023fbea4;
// @baa 0x0199a910
C_0199a910* C_0199a910::sub_0199a910()
{
    Value04 = 0;
    Unk00 = &g_023fbea4;
    return this;
}

// @baa 0x0199adf0
uint UGFxDataStoreSubscriber::sub_0199adf0(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

typedef unsigned int uint4;

// @baa 0x0199ae20
uint4 __stdcall sub_0199ae20(uint4 **arg1)
{
    return **arg1;
}

// @baa 0x0199b060
DWORD __stdcall sub_0199b060(DWORD * arg1)
{
	return *arg1;
}

// @baa 0x0199b070
uint UGFxDataStoreSubscriber::sub_0199b070(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

// @baa 0x0199bb80
uint UGFxDataStoreSubscriber::sub_0199bb80(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 4) & param_2;
}

struct C_view {
    int sub_0199b110(int, int);
};

// @baa 0x0199bc30
undefined4 UGFxDataStoreSubscriber::sub_0199bc30(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_view *)(this))->sub_0199b110((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_view_0199bc60 {
    int sub_0199b180(int, int);
};

// @baa 0x0199bc60
undefined4 UGFxDataStoreSubscriber::sub_0199bc60(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_view_0199bc60 *)(this))->sub_0199b180((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_0199c8a0 {
    undefined4 * sub_0199c8a0(undefined4);
    int sub_0199b8f0(int);
};

// @baa 0x0199c8a0
undefined4 * C_0199c8a0::sub_0199c8a0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_0199c8a0 *)(this))->sub_0199b8f0(param_2);
  return param_1;
}

struct C_0199c8c0 { void sub_0199ac10(int); void sub_0199c8c0(); };

// @baa 0x0199c8c0
void C_0199c8c0::sub_0199c8c0() { sub_0199ac10(0); }

struct C_view_0199cef0 {
    int sub_0199c0a0(int, int);
};

// @baa 0x0199cef0
undefined4 UGFxDataStoreSubscriber::sub_0199cef0(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_view_0199cef0 *)(this))->sub_0199c0a0((int)(param_2), *(uint *)(*param_1 + 4) & *param_2);
  return uVar1;
}

struct C_view_0199cfd0 {
    int sub_0199c1a0(int, int);
};

// @baa 0x0199cfd0
undefined4 UGFxDataStoreSubscriber::sub_0199cfd0(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_view_0199cfd0 *)(this))->sub_0199c1a0((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_0199d7a0 {
    void sub_0199d7a0(undefined4 *);
    int sub_01962920(int);
};

// @baa 0x0199d7a0
void C_0199d7a0::sub_0199d7a0(undefined4 * param_2)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  iVar2 = *(int *)(param_1 + 0xb8) + 1;
  ((C_0199d7a0 *)(((char *)this + 0xb4)))->sub_01962920(iVar2);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb4) + -0xc + iVar2 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0199ac10(int NewNum);
    void sub_0199d970();
};

void __stdcall sub_018d7170(int A);
// @baa 0x0199d970
void S018d4a70::sub_0199d970()
{
    S018d4a70* Self = this;
    sub_0199ac10(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0199daf0 { C_0199daf0* sub_0199daf0(void); };

// @baa 0x0199daf0
C_0199daf0* C_0199daf0::sub_0199daf0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0199f390 { int a, b, c; C_0199f390(); };

// @baa 0x0199f390
C_0199f390::C_0199f390() : a(0), b(0), c(0) {}

struct C_view_0199f3a0 {
    int sub_0199b8f0(int);
};

// @baa 0x0199f3a0
undefined4 * UGFxDataStoreSubscriber::sub_0199f3a0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_view_0199f3a0 *)(this))->sub_0199b8f0(param_2);
  return param_1;
}

struct S018d4a70_0199f3c0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0199ac10(int NewNum);
    void sub_0199f3c0();
};

// @baa 0x0199f3c0
void S018d4a70_0199f3c0::sub_0199f3c0()
{
    S018d4a70_0199f3c0* Self = this;
    sub_0199ac10(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0199f3e0 { int a, b, c; C_0199f3e0(); };

// @baa 0x0199f3e0
C_0199f3e0::C_0199f3e0() : a(0), b(0), c(0) {}

struct C_0199f3f0 { void sub_0199c8d0(int); C_0199f3f0 *sub_0199f3f0(int); };

// @baa 0x0199f3f0
C_0199f3f0 *C_0199f3f0::sub_0199f3f0(int a) { sub_0199c8d0(a); return this; }

struct M_0199f9e0 { void sub_0199f270(); };

struct C_0199f9e0 { char pad[8]; M_0199f9e0 m; void sub_0199f9e0(); };

// @baa 0x0199f9e0
void C_0199f9e0::sub_0199f9e0() { m.sub_0199f270(); }

struct FGASResult
{
    char pad_00_e8[0xe8];
    BYTE bFlag;
};

struct FGASComp
{
    virtual ~FGASComp() {}
    virtual void F1() {}
    virtual void F2() {}
    virtual void F3() {}
    virtual void F4() {}
    virtual void F5() {}
    virtual void F6() {}
    virtual void F7() {}
    virtual void F8() {}
    virtual void F9() {}
    virtual void F10() {}
    virtual void F11() {}
    virtual void F12() {}
    virtual void F13() {}
    virtual void F14() {}
    virtual void F15() {}
    virtual FGASResult* GetResult();
};

class GASEnvironment
{
    char pad_00_74[0x74];
    FGASComp* m_Compare;
public:
    BYTE sub_01995260();
};

// @baa 0x01995260
BYTE GASEnvironment::sub_01995260()
{    INT b = 0;
    b = m_Compare->GetResult()->bFlag == b;
    return b ? 1 : 0;
}

// 0x01999b50 - copy of a 12-byte GFx data struct, original file GFx_1990000.cpp
struct FGfx_0x12 {
    INT X;
    INT Y;
    INT Z;
    FGfx_0x12& sub_01999b50(const FGfx_0x12& Other);
};

// @baa 0x01999b50
FGfx_0x12& FGfx_0x12::sub_01999b50(const FGfx_0x12& Other)
{
    X = Other.X;
    Y = Other.Y;
    Z = Other.Z;
    return *this;
}

class GASEnvironment;
// Visitor for GASActionBuffer::Execute's EnumerateOp (local class).
class EnumerateOpVisitor
{
public:
	GASEnvironment* Environment;
	int ActionIndex;

	EnumerateOpVisitor(GASEnvironment* InEnvironment, int InActionIndex);
	virtual void VisitOp();
};

// @baa 0x01995170
EnumerateOpVisitor::EnumerateOpVisitor(GASEnvironment* InEnvironment, int InActionIndex)
{
	Environment = InEnvironment;
	ActionIndex = InActionIndex;
}
