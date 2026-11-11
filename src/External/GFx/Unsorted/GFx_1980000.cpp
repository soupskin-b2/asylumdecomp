// GFx_1980000.cpp (part 1 of 2): 67 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01980100();
    int sub_0197ee30(int);
};

// @baa 0x01980100
void C::sub_01980100(void)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_0197ee30(*(int *)(param_1 + 4) + -1);
  return;
}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0197ee30(int NewNum);
    void sub_01980110();
};

void __stdcall sub_018d7170(int A);
// @baa 0x01980110
void S018d4a70::sub_01980110()
{
    S018d4a70* Self = this;
    sub_0197ee30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01980230 { int a, b, c; C_01980230(); };

// @baa 0x01980230
C_01980230::C_01980230() : a(0), b(0), c(0) {}

struct S018d4a70_01980240 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0197ee30(int NewNum);
    void sub_01980240();
};

// @baa 0x01980240
void S018d4a70_01980240::sub_01980240()
{
    S018d4a70_01980240* Self = this;
    sub_0197ee30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019802a0 { void sub_01980130(int); void sub_019802a0(); };

// @baa 0x019802a0
void C_019802a0::sub_019802a0() { sub_01980130(0); }

struct C_019802f0 {
    void sub_019802f0(uint, undefined4 *);
    int sub_01980130(int);
};

extern "C" __declspec(dllimport) void *__cdecl memmove(void *, const void *, unsigned int);
// @baa 0x019802f0
void C_019802f0::sub_019802f0(uint param_2, undefined4 * param_3)
{
    int * param_1 = (int *)this;
  void *_Src;
  undefined4 *puVar1;
  ((C_019802f0 *)(this))->sub_01980130(param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 4);
    memmove((void *)((int)_Src + 4),_Src,(param_1[1] - param_2) * 4 - 4);
  }
  puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    *param_3 = 0;
  }
  return;
}

struct S018d4a70_01980380 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01980130(int NewNum);
    void sub_01980380();
};

// @baa 0x01980380
void S018d4a70_01980380::sub_01980380()
{
    S018d4a70_01980380* Self = this;
    sub_01980130(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019813d0 { int a, b, c; C_019813d0(); };

// @baa 0x019813d0
C_019813d0::C_019813d0() : a(0), b(0), c(0) {}

struct S018d4a70_019813e0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01980130(int NewNum);
    void sub_019813e0();
};

// @baa 0x019813e0
void S018d4a70_019813e0::sub_019813e0()
{
    S018d4a70_019813e0* Self = this;
    sub_01980130(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01981730 {
    void sub_01981730(undefined4, undefined4, undefined4);
    int sub_01980740(int, int, int, int, int);
};

// @baa 0x01981730
void C_01981730::sub_01981730(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_01981730 *)(this))->sub_01980740(param_2, param_3, param_4, *(undefined4 *)(param_1 + 0x24), *(undefined4 *)(param_1 + 0x20));
  return;
}

struct C_01981750 {
    void sub_01981750(undefined4, undefined4, undefined4);
    int sub_019809a0(int, int, int, int, int);
};

// @baa 0x01981750
void C_01981750::sub_01981750(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_01981750 *)(this))->sub_019809a0(param_2, param_3, param_4, *(undefined4 *)(param_1 + 0x24), *(undefined4 *)(param_1 + 0x20));
  return;
}

struct C_01981800 {
    void sub_01981800(undefined4, undefined4, undefined4, undefined4);
    int sub_01980d90(int, int, int, int, int, int);
};

// @baa 0x01981800
void C_01981800::sub_01981800(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;
  ((C_01981800 *)(this))->sub_01980d90(param_2, param_3, param_4, param_5, *(undefined4 *)(param_1 + 0x24), *(undefined4 *)(param_1 + 0x20));
  return;
}

int __stdcall sub_0192f290(int);
// @baa 0x01983360
void sub_01983360(void)
{
  sub_0192f290(0);
  return;
}

struct C_019834d0 {
    char pad[6];
    unsigned short x : 7, f : 1;
    int sub_019834d0();
};

// @baa 0x019834d0
int C_019834d0::sub_019834d0()
{
    return f;
}

struct C_019836b0 {
    int sub_019836b0();
};

// @baa 0x019836b0
int C_019836b0::sub_019836b0(void)
{
    int param_1 = (int)this;
  if (0 < *(short *)(param_1 + 0x24)) {
    return (int)*(short *)(param_1 + 0x24);
  }
  return 0;
}

struct C_019839e0 {
    int sub_019839e0();
};

// @baa 0x019839e0
int C_019839e0::sub_019839e0(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

struct M_01983bd0 { void sub_0192b180(); };

struct C_01983bd0 { char pad[44]; M_01983bd0 m; void sub_01983bd0(); };

// @baa 0x01983bd0
void C_01983bd0::sub_01983bd0() { m.sub_0192b180(); }

struct M_01983c50 { void sub_0197d920(); };

struct C_01983c50 { char pad[28]; M_01983c50 m; void sub_01983c50(); };

// @baa 0x01983c50
void C_01983c50::sub_01983c50() { m.sub_0197d920(); }

struct C_01983c70 { int a, b; C_01983c70(int, int); };

// @baa 0x01983c70
C_01983c70::C_01983c70(int x, int y) : a(x), b(y) {}

struct C_01983c90 {
    C_01983c90* sub_01983c90(BYTE b);
};

// @baa 0x01983c90
C_01983c90* C_01983c90::sub_01983c90(BYTE b)
{
    *(BYTE*)this = b;
    return this;
}

struct V_01983d40 {
    virtual void v0();
    virtual void v1();
    virtual void g(int a0);
};

struct O_01983d40 { char pad[44]; V_01983d40* p; void sub_01983d40(int a0); };

// @baa 0x01983d40
void O_01983d40::sub_01983d40(int a0) { p->g(a0); }

struct C_01983f30 {
    undefined4 * sub_01983f30();
};

int sub_018d3d50(void);
extern undefined * g_023fb1b0;
// @baa 0x01983f30
undefined4 * C_01983f30::sub_01983f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fb1b0);
  return param_1;
}

struct C_01984070 {
    DWORD d;
    DWORD sub_01984070();
};

// @baa 0x01984070
DWORD C_01984070::sub_01984070()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_01984200 { int a, b; C_01984200(int, int); };

// @baa 0x01984200
C_01984200::C_01984200(int x, int y) : a(x), b(y) {}

struct C_01984230 {
    int sub_01984230(int);
};

// @baa 0x01984230
int C_01984230::sub_01984230(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01984240 {
    bool sub_01984240();
};

// @baa 0x01984240
bool C_01984240::sub_01984240(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

// @baa 0x01984250
int sub_01984250(float f) {
    return (int)f;
}

struct C_019842b0 {
    int sub_019842b0(int);
};

// @baa 0x019842b0
int C_019842b0::sub_019842b0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

// @baa 0x019842c0
void __stdcall sub_019842c0(int arg)
{
	(void)arg;
}

// @baa 0x019842d0
DWORD __stdcall sub_019842d0(DWORD * arg1)
{
	return *arg1;
}

struct S {
    int Unk0; // 0x00
    BYTE sub_01984310(S* Other);
};

// @baa 0x01984310
BYTE S::sub_01984310(S* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct V_01984330 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void g(int a0);
};

struct O_01984330 { char pad[12]; V_01984330* p; void sub_01984330(int a0); };

// @baa 0x01984330
void O_01984330::sub_01984330(int a0) { p->g(a0); }

struct V_01984340 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void g(int a0);
};

struct O_01984340 { char pad[12]; V_01984340* p; void sub_01984340(int a0); };

// @baa 0x01984340
void O_01984340::sub_01984340(int a0) { p->g(a0); }

struct V_01984350 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g(int a0);
};

struct O_01984350 { char pad[12]; V_01984350* p; void sub_01984350(int a0); };

// @baa 0x01984350
void O_01984350::sub_01984350(int a0) { p->g(a0); }

struct V_01984360 {
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
    virtual void g(int a0);
};

struct O_01984360 { char pad[12]; V_01984360* p; void sub_01984360(int a0); };

// @baa 0x01984360
void O_01984360::sub_01984360(int a0) { p->g(a0); }

struct C_019843a0 {
    undefined4 * sub_019843a0(undefined4);
    int sub_018e4150();
};

// @baa 0x019843a0
undefined4 * C_019843a0::sub_019843a0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  ((C_019843a0 *)(((char *)this + 4)))->sub_018e4150();
  return param_1;
}

struct C_01984520 {
    void sub_01984520(undefined4, undefined4, undefined4);
    int sub_0192c680(int, int, int, int);
};

// @baa 0x01984520
void C_01984520::sub_01984520(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = param_1[2];
  if ((iVar1 < 0) || (iVar1 == -1)) {
    iVar1 = *(int *)(*param_1 + 4);
  }
  ((C_01984520 *)((*(char **)((char *)this + 0))))->sub_0192c680(iVar1, param_2, param_3, param_4);
  param_1[2] = param_1[2] + 1;
  return;
}

struct C_01984590 {
    byte sub_01984590();
};

// @baa 0x01984590
byte C_01984590::sub_01984590(void)
{
    int param_1 = (int)this;
  return ~(*(byte *)(param_1 + 0x14e) >> 3) & 1;
}

struct C_019845a0 {
    undefined4 sub_019845a0();
};

// @baa 0x019845a0
undefined4 C_019845a0::sub_019845a0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x14);
}

// @baa 0x01985350
DWORD __stdcall sub_01985350(DWORD * arg1)
{
	return *arg1;
}

// @baa 0x01985360
DWORD __stdcall sub_01985360(DWORD * arg1)
{
	return *arg1;
}

typedef unsigned int uint4;

// @baa 0x01985720
uint4 __stdcall sub_01985720(uint4 **arg1)
{
    return **arg1;
}

struct C_01985a70 {
    undefined4 sub_01985a70(uint *);
    int sub_01985740(int, int);
};

// @baa 0x01985a70
undefined4 C_01985a70::sub_01985a70(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_01985a70 *)(this))->sub_01985740((int)(param_2), *(uint *)(*param_1 + 4) & *param_2);
  return uVar1;
}

struct Inner {
    void sub_0197d780();
};

struct Outer {
    char pad[0x10];
    Inner* p;
    void sub_019862c0();
};

// @baa 0x019862c0
void Outer::sub_019862c0()
{
    p->sub_0197d780();
}

struct S018d4a70_01987b40 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0192f3f0(int NewNum);
    void sub_01987b40();
};

// @baa 0x01987b40
void S018d4a70_01987b40::sub_01987b40()
{
    S018d4a70_01987b40* Self = this;
    sub_0192f3f0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0198c820 {
    undefined4 * sub_0198c820(undefined4, undefined4);
    int sub_019815f0(int);
};

extern undefined4 g_023fb25c;
// @baa 0x0198c820
undefined4 * C_0198c820::sub_0198c820(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0198c820 *)(this))->sub_019815f0(param_3);
  *param_1 = (undefined4)((&g_023fb25c));
  param_1[0xb] = param_2;
  return param_1;
}

void sub_01981560();
// @baa 0x0198c840
void sub_0198c840()
{
	sub_01981560();
}

struct C_0198ca30 { int a, b; C_0198ca30(int, int); };

// @baa 0x0198ca30
C_0198ca30::C_0198ca30(int x, int y) : a(x), b(y) {}

struct C_0198ca50 { int a; C_0198ca50(int); };

// @baa 0x0198ca50
C_0198ca50::C_0198ca50(int x) : a(x) {}

struct C_0198ca60 { int a, b; C_0198ca60(int, int); };

// @baa 0x0198ca60
C_0198ca60::C_0198ca60(int x, int y) : a(x), b(y) {}

struct C_0198caf0 {
    void sub_0198caf0(undefined4);
    int sub_01988220(int, int);
};

// @baa 0x0198caf0
void C_0198caf0::sub_0198caf0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0198caf0 *)(this))->sub_01988220(*(undefined4 *)(param_1 + 0x24), param_2);
  return;
}

struct M_0198cd50 { void sub_0198cb30(); };

struct C_0198cd50 { char pad[76]; M_0198cd50 m; void sub_0198cd50(); };

// @baa 0x0198cd50
void C_0198cd50::sub_0198cd50() { m.sub_0198cb30(); }

struct C_0198ce30 { int a; C_0198ce30(int); };

// @baa 0x0198ce30
C_0198ce30::C_0198ce30(int x) : a(x) {}

struct C_0198ce40 {
    undefined4 * sub_0198ce40();
};

extern undefined * g_023fb27c;
// @baa 0x0198ce40
undefined4 * C_0198ce40::sub_0198ce40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fb27c);
  return param_1;
}

struct C_0198ce60 {
    undefined4 * sub_0198ce60();
};

extern undefined * g_023fb284;
// @baa 0x0198ce60
undefined4 * C_0198ce60::sub_0198ce60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fb284);
  return param_1;
}

struct C_0198ced0 {
    char pad[0x10];
    unsigned short f10;
    C_0198ced0* sub_0198ced0();
};

// @baa 0x0198ced0
C_0198ced0* C_0198ced0::sub_0198ced0()
{
    f10 = 0;
    return this;
}

struct C_0198cf20 {
    char _pad[0x10];
    unsigned short f_10;
    void sub_0198cf20();
};

// @baa 0x0198cf20
void C_0198cf20::sub_0198cf20(void)
{
    f_10 += 0xffff;
}

struct C_0198d160 {
    void sub_0198d160();
    int sub_01988300(int);
    int sub_019882b0(int);
};

// @baa 0x0198d160
void C_0198d160::sub_0198d160(void)
{
    int param_1 = (int)this;
  ((C_0198d160 *)((*(char **)((char *)this + 0x10))))->sub_01988300(*(undefined4 *)(param_1 + 0x58));
  ((C_0198d160 *)((*(char **)((char *)this + 0x10))))->sub_019882b0(*(undefined4 *)(param_1 + 0x54));
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x400;
  return;
}

struct C_0198d190 {
    void sub_0198d190();
    int sub_01988300(int);
    int sub_019882b0(int);
};

// @baa 0x0198d190
void C_0198d190::sub_0198d190(void)
{
    int param_1 = (int)this;
  ((C_0198d190 *)((*(char **)((char *)this + 0x10))))->sub_01988300(*(undefined4 *)(param_1 + 0x60));
  ((C_0198d190 *)((*(char **)((char *)this + 0x10))))->sub_019882b0(*(undefined4 *)(param_1 + 0x5c));
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfb9f;
  return;
}

struct C_0198d6f0 {
    void sub_0198d6f0(undefined4, undefined4);
    int sub_0198d570();
    int sub_0197d7f0();
    int sub_01979ab0(int, int, int);
    int sub_0197f850(int, int, int, int);
    int sub_0197fc10(int, int);
    int sub_0198d6c0();
};

// @baa 0x0198d6f0
void C_0198d6f0::sub_0198d6f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0198d6f0 *)(this))->sub_0198d570();
  ((C_0198d6f0 *)(((char *)this + 0x1c)))->sub_0197d7f0();
  ((C_0198d6f0 *)(((char *)this + 0x1c)))->sub_01979ab0(*(undefined4 *)(param_1 + 0x18), param_2, param_3);
  ((C_0198d6f0 *)(((char *)this + 0x1c)))->sub_0197f850(*(undefined4 *)(param_1 + 0x18), *(undefined4 *)(param_1 + 0x10), 0, *(undefined4 *)(param_1 + 0x20));
  ((C_0198d6f0 *)(((char *)this + 0x1c)))->sub_0197fc10(*(undefined4 *)(param_1 + 0x18), *(undefined4 *)(param_1 + 0x10));
  ((C_0198d6f0 *)(this))->sub_0198d6c0();
  return;
}

struct C_0198f720 {
    BYTE m;
    BYTE sub_0198f720();
};

// @baa 0x0198f720
BYTE C_0198f720::sub_0198f720()
{
    BYTE b = m;
    b >>= 2;
    b &= 1;
    return b;
}

struct C_0198f730 {
    byte sub_0198f730();
};

// @baa 0x0198f730
byte C_0198f730::sub_0198f730(void)
{
    byte b = *((byte*)this);
    b >>= 1;
    b &= 1;
    return b;
}

struct C_0198f740 {
    byte m0;
    byte sub_0198f740();
};

// @baa 0x0198f740
byte C_0198f740::sub_0198f740(void)
{
    byte v = m0;
    v &= 1;
    return v;
}

struct C_0198f770 {
    int sub_0198f770(undefined4, undefined1);
    int sub_01975590(int);
};

// @baa 0x0198f770
int C_0198f770::sub_0198f770(undefined4 param_2, undefined1 param_3)
{
    int param_1 = (int)this;
  ((C_0198f770 *)(this))->sub_01975590(param_2);
  *(undefined1 *)(param_1 + 1) = param_3;
  return param_1;
}

struct C_0198f790 {
    int sub_0198f790(int);
    int sub_01975590(int);
};

// @baa 0x0198f790
int C_0198f790::sub_0198f790(int param_2)
{
    int param_1 = (int)this;
  ((C_0198f790 *)(this))->sub_01975590(param_2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}

struct GASObject {
	virtual int pad0();
	virtual int pad1();
	virtual void sub_0198f8d0(BYTE *arg1);
};

// @baa 0x0198f8d0
void GASObject::sub_0198f8d0(BYTE *arg1)
{
	*arg1 = 0;
}

struct C_0198f900 {
    int sub_0198f900();
    int sub_01972280(int, int);
};

// @baa 0x0198f900
int C_0198f900::sub_0198f900(void)
{
    int param_1 = (int)this;
  ((C_0198f900 *)(this))->sub_01972280(0, 0);
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}
