// GFx_1940000.cpp (part 2 of 3): 86 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct S {
    void sub_0193f330(int arg1);
    void sub_019401a0(int arg1);
};

// @baa 0x019401a0
void S::sub_019401a0(int arg1) { this->sub_0193f330(arg1); }

struct C { void sub_0193f180(int); void sub_019401d0(); };

// @baa 0x019401d0
void C::sub_019401d0() { sub_0193f180(0); }

struct C_01940810 {
    undefined4 sub_01940810(ushort *);
    int sub_0193fcb0(int, int);
};

// @baa 0x01940810
undefined4 C_01940810::sub_01940810(ushort * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_01940810 *)(this))->sub_0193fcb0((int)(param_2), *(uint *)(*param_1 + 4) & (uint)*param_2);
  return uVar1;
}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0193f180(int NewNum);
    void sub_01941050();
};

void __stdcall sub_018d7170(int A);
// @baa 0x01941050
void S018d4a70::sub_01941050()
{
    S018d4a70* Self = this;
    sub_0193f180(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01941760 { int a, b, c; C_01941760(); };

// @baa 0x01941760
C_01941760::C_01941760() : a(0), b(0), c(0) {}

struct S018d4a70_01941770 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0193f180(int NewNum);
    void sub_01941770();
};

// @baa 0x01941770
void S018d4a70_01941770::sub_01941770()
{
    S018d4a70_01941770* Self = this;
    sub_0193f180(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01941800 { int a, b, c; C_01941800(); };

// @baa 0x01941800
C_01941800::C_01941800() : a(0), b(0), c(0) {}

struct C_01941820 { int a, b, c; C_01941820(); };

// @baa 0x01941820
C_01941820::C_01941820() : a(0), b(0), c(0) {}

struct C_01941840 { int a, b, c; C_01941840(); };

// @baa 0x01941840
C_01941840::C_01941840() : a(0), b(0), c(0) {}

struct GFxFontData {
    BYTE sub_01941fd0(int param1, int param2);
};

// @baa 0x01941fd0
BYTE GFxFontData::sub_01941fd0(int param1, int param2)
{
    return 0;
}

// @baa 0x01941fe0
unsigned char __stdcall sub_01941fe0(int a0, int a1) { return 0; }

struct C_01943000 { int a, b, c; C_01943000(); };

// @baa 0x01943000
C_01943000::C_01943000() : a(0), b(0), c(0) {}

void __stdcall sub_018d7150(int Index);
// @baa 0x01944950
void sub_01944950(int Value)
{
    sub_018d7150(Value * 4);
}

struct C_01944b30 {
    void sub_01944b30();
    int sub_01944a50(int, int, int, int);
};

// @baa 0x01944b30
void C_01944b30::sub_01944b30(void)
{
    int param_1 = (int)this;
  ((C_01944b30 *)(this))->sub_01944a50(param_1 + 0x3c, param_1 + 0x40, param_1 + 0x44, param_1 + 0x48);
  return;
}

struct C_01945960 {
    undefined4 * sub_01945960();
};

int sub_018d3d50(void);
extern undefined * g_023f8aa4;
// @baa 0x01945960
undefined4 * C_01945960::sub_01945960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8aa4);
  return param_1;
}

struct C_01945ab0 {
    undefined4 * sub_01945ab0();
};

extern undefined * g_023f8aac;
// @baa 0x01945ab0
undefined4 * C_01945ab0::sub_01945ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8aac);
  return param_1;
}

struct C_01945bc0 {
    undefined4 * sub_01945bc0();
};

extern undefined * g_023f8ac8;
// @baa 0x01945bc0
undefined4 * C_01945bc0::sub_01945bc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8ac8);
  return param_1;
}

struct C_01945c00 {
    void sub_01945c00();
};

int __stdcall sub_018d7190(int);
// @baa 0x01945c00
void C_01945c00::sub_01945c00(void)
{
    int param_1 = (int)this;
  sub_018d7190(*(undefined4 *)(param_1 + 0x14c));
  return;
}

struct C_01945d60 {
    void sub_01945d60();
};

int sub_019d9070(void);
// @baa 0x01945d60
void C_01945d60::sub_01945d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f8ac8);
  sub_019d9070();
  return;
}

struct C_019466b0 {
    void sub_019466b0(undefined1 *, undefined1 *, undefined1 *);
};

// @baa 0x019466b0
void C_019466b0::sub_019466b0(undefined1 * param_2, undefined1 * param_3, undefined1 * param_4)
{
    undefined1 * param_1 = (undefined1 *)this;
  *param_2 = param_1[2];
  *param_3 = param_1[1];
  *param_4 = *param_1;
  return;
}

struct C4 { unsigned char B,G,R,A; };

static __forceinline float Lerp(const float& x, const float& y, const float& t){ return x + t*(y-x); }

static __forceinline unsigned char Lp(unsigned char p, unsigned char q, float t){
  float x=(float)p; float y=(float)q; volatile float v = Lerp(x,y,t); double d=v; return (unsigned char)(int)(d+0.5); }

// @baa 0x01946df0
C4* __stdcall sub_01946df0(C4* o, C4 a, C4 b, float t)
{
  o->R = Lp(a.R,b.R,t);
  o->G = Lp(a.G,b.G,t);
  o->B = Lp(a.B,b.B,t);
  o->A = Lp(a.A,b.A,t);
  return o;
}

// @baa 0x019474b0
ushort sub_019474b0(ushort x)
{
    x = (x << 8) | (x >> 8);
    return x;
}

// @baa 0x019474c0
ushort sub_019474c0(ushort x)
{
    x = (x << 8) | (x >> 8);
    return x;
}

struct S_01947530 {
    int Unk0; // 0x00
    BYTE sub_01947530(S_01947530* Other);
};

// @baa 0x01947530
BYTE S_01947530::sub_01947530(S_01947530* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_01947640 {
    BYTE b0;
    BYTE& sub_01947640();
};

// @baa 0x01947640
BYTE& C_01947640::sub_01947640()
{
    b0 = 0;
    return b0;
}

struct C_01947720 {
    UINT sub_01947720();
};

// @baa 0x01947720
UINT C_01947720::sub_01947720(void)
{
    return *(BYTE *)this;
}

struct C_01947a80 {
    char pad[0x2c];
    BYTE f2c;
    BYTE sub_01947a80(void);
};

// @baa 0x01947a80
BYTE C_01947a80::sub_01947a80(void)
{
    BYTE b = f2c;
    b >>= 3;
    b &= 1;
    return b;
}

struct C_01947ab0 {
    char pad[0x2c];
    byte sub_01947ab0();
};

// @baa 0x01947ab0
byte C_01947ab0::sub_01947ab0()
{
    byte b = pad[0x2c];
    b = b >> 4;
    b &= 1;
    return b;
}

struct C_01947af0 {
    void sub_01947af0(int);
    int sub_01975e10(int);
};

// @baa 0x01947af0
void C_01947af0::sub_01947af0(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    iVar1 = ((C_01947af0 *)(((char *)this + 0x3c)))->sub_01975e10(0);
    if (param_2 == iVar1) {
      *(undefined1 *)(param_1 + 100) = 1;
    }
  }
  return;
}

struct C_01947b20 {
    void sub_01947b20(int);
    int sub_01975e10(int);
};

// @baa 0x01947b20
void C_01947b20::sub_01947b20(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar1 = ((C_01947b20 *)(((char *)this + 0x50)))->sub_01975e10(0);
    if (param_2 == iVar1) {
      *(undefined1 *)(param_1 + 100) = 1;
    }
  }
  return;
}

struct C_01947b90 {
    void sub_01947b90();
};

// @baa 0x01947b90
void C_01947b90::sub_01947b90(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

struct C_01947ba0 {
    int * sub_01947ba0(int *, undefined4, undefined1);
    int sub_01975590(int);
};

// @baa 0x01947ba0
int * C_01947ba0::sub_01947ba0(int * param_2, undefined4 param_3, undefined1 param_4)
{
    int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  iVar2 = *param_2;
  *param_1 = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_01947ba0 *)(((char *)this + 4)))->sub_01975590(param_3);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = param_4;
  return param_1;
}

struct C_01947bd0 {
    void sub_01947bd0();
};

// @baa 0x01947bd0
void C_01947bd0::sub_01947bd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

struct C_01947cc0 {
    char pad[424];
    int f10;
    bool sub_01947cc0();
};

// @baa 0x01947cc0
bool C_01947cc0::sub_01947cc0()
{
    return f10 >= 0;
}

struct C_01947ce0 {
    char pad[0x28];
    WORD w;
    C_01947ce0* sub_01947ce0();
};

// @baa 0x01947ce0
C_01947ce0* C_01947ce0::sub_01947ce0()
{
    w = 0;
    return this;
}

struct C_01948800 { int a; C_01948800(int); };

// @baa 0x01948800
C_01948800::C_01948800(int x) : a(x) {}

struct C_019489a0 { int a; C_019489a0(int); };

// @baa 0x019489a0
C_019489a0::C_019489a0(int x) : a(x) {}

struct C_019489e0 { int a; C_019489e0(int); };

// @baa 0x019489e0
C_019489e0::C_019489e0(int x) : a(x) {}

struct C_01948a00 {
    undefined4 * sub_01948a00();
};

extern undefined * g_023f8c64;
// @baa 0x01948a00
undefined4 * C_01948a00::sub_01948a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8c64);
  return param_1;
}

struct C_01948ab0 {
    undefined4 * sub_01948ab0();
};

extern undefined * g_023f8c6c;
// @baa 0x01948ab0
undefined4 * C_01948ab0::sub_01948ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8c6c);
  return param_1;
}

struct C_01948ad0 {
    undefined4 * sub_01948ad0();
};

extern undefined * g_023f8c74;
// @baa 0x01948ad0
undefined4 * C_01948ad0::sub_01948ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8c74);
  return param_1;
}

struct C_01948c40 {
    undefined4 * sub_01948c40();
};

extern undefined * g_023f8c7c;
// @baa 0x01948c40
undefined4 * C_01948c40::sub_01948c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8c7c);
  return param_1;
}

struct C_01948c60 { int a; C_01948c60(int); };

// @baa 0x01948c60
C_01948c60::C_01948c60(int x) : a(x) {}

struct S_01948d40 {
    int Unk0; // 0x00
    BYTE sub_01948d40(S_01948d40* Other);
};

// @baa 0x01948d40
BYTE S_01948d40::sub_01948d40(S_01948d40* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_01948d90 {
    int Unk0; // 0x00
    BYTE sub_01948d90(S_01948d90* Other);
};

// @baa 0x01948d90
BYTE S_01948d90::sub_01948d90(S_01948d90* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_01948e90 { int a; C_01948e90(int); };

// @baa 0x01948e90
C_01948e90::C_01948e90(int x) : a(x) {}

struct C_01948ee0 {
    undefined4 * sub_01948ee0();
};

extern undefined * g_023f8c84;
// @baa 0x01948ee0
undefined4 * C_01948ee0::sub_01948ee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8c84);
  return param_1;
}

struct C_01948f00 {
    undefined4 * sub_01948f00();
};

extern undefined * g_023f8c8c;
// @baa 0x01948f00
undefined4 * C_01948f00::sub_01948f00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8c8c);
  return param_1;
}

struct C_01949340 {
    void *field0;
    void *field4;
    C_01949340 *sub_01949340();
};

// @baa 0x01949340
C_01949340 *C_01949340::sub_01949340()
{
    field0 = this;
    field4 = this;
    return this;
}

struct C_01949560 { int a; C_01949560(int); };

// @baa 0x01949560
C_01949560::C_01949560(int x) : a(x) {}

struct S_01949570 {
    int Unk0; // 0x00
    BYTE sub_01949570(S_01949570* Other);
};

// @baa 0x01949570
BYTE S_01949570::sub_01949570(S_01949570* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_01949850 { int a, b, c; C_01949850(); };

// @baa 0x01949850
C_01949850::C_01949850() : a(0), b(0), c(0) {}

struct C_01949860 { int a, b, c; C_01949860(); };

// @baa 0x01949860
C_01949860::C_01949860() : a(0), b(0), c(0) {}

struct C_01949870 { int a, b, c; C_01949870(); };

// @baa 0x01949870
C_01949870::C_01949870() : a(0), b(0), c(0) {}

struct C_01949880 {
    int sub_01949880(int);
};

// @baa 0x01949880
int C_01949880::sub_01949880(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01949890 { int a, b, c; C_01949890(); };

// @baa 0x01949890
C_01949890::C_01949890() : a(0), b(0), c(0) {}

struct C_019498a0 { int a, b, c; C_019498a0(); };

// @baa 0x019498a0
C_019498a0::C_019498a0() : a(0), b(0), c(0) {}

struct C_019498b0 { int a, b, c; C_019498b0(); };

// @baa 0x019498b0
C_019498b0::C_019498b0() : a(0), b(0), c(0) {}

struct C_019498c0 { int a, b, c; C_019498c0(); };

// @baa 0x019498c0
C_019498c0::C_019498c0() : a(0), b(0), c(0) {}

struct C_019498d0 { int a, b, c; C_019498d0(); };

// @baa 0x019498d0
C_019498d0::C_019498d0() : a(0), b(0), c(0) {}

struct C_019498e0 { int a, b; C_019498e0(int, int); };

// @baa 0x019498e0
C_019498e0::C_019498e0(int x, int y) : a(x), b(y) {}

struct C_01949910 { int a, b; C_01949910(int, int); };

// @baa 0x01949910
C_01949910::C_01949910(int x, int y) : a(x), b(y) {}

struct C_019499b0 {
    int sub_019499b0(int);
};

// @baa 0x019499b0
int C_019499b0::sub_019499b0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_019499c0 {
    int sub_019499c0(int);
};

// @baa 0x019499c0
int C_019499c0::sub_019499c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_019499d0 {
    int sub_019499d0(int);
};

// @baa 0x019499d0
int C_019499d0::sub_019499d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01949b20 { int a, b; C_01949b20(int, int); };

// @baa 0x01949b20
C_01949b20::C_01949b20(int x, int y) : a(x), b(y) {}

// @baa 0x01949e80
int * sub_01949e80(int * param_1, int * param_2)
{
  int *piVar1;
  int iVar2;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_2;
    *param_1 = iVar2;
    piVar1 = (int *)(iVar2 + 0xc);
    *piVar1 = *piVar1 + 1;
    return param_1;
  }
  return (int *)0x0;
}

struct S_01949f80 {
    int Unk0; // 0x00
    BYTE sub_01949f80(S_01949f80* Other);
};

// @baa 0x01949f80
BYTE S_01949f80::sub_01949f80(S_01949f80* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_0194a130 {
    int Unk0; // 0x00
    BYTE sub_0194a130(S_0194a130* Other);
};

// @baa 0x0194a130
BYTE S_0194a130::sub_0194a130(S_0194a130* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_0194a280 {
    void sub_0194a280();
    int sub_019722d0();
};

extern undefined4 g_023f8bac;
extern undefined4 g_023f8c94;
// @baa 0x0194a280
void C_0194a280::sub_0194a280(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f8c94));
  ((C_0194a280 *)(((char *)this + 0xc)))->sub_019722d0();
  *param_1 = (undefined4)((&g_023f8bac));
  return;
}

struct C_0194a2a0 {
    undefined4 * sub_0194a2a0(byte);
    int sub_019722d0();
};

int sub_00402660(...);
// @baa 0x0194a2a0
undefined4 * C_0194a2a0::sub_0194a2a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f8c94));
  ((C_0194a2a0 *)(((char *)this + 0xc)))->sub_019722d0();
  *param_1 = (undefined4)((&g_023f8bac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct Inner {
    bool sub_018fa7f0(uint arg1);
};

struct C_0194a370 {
    char _pad[0x1c];
    Inner* p;
    bool sub_0194a370(uint arg1);
};

// @baa 0x0194a370
bool C_0194a370::sub_0194a370(uint arg1)
{
    return p->sub_018fa7f0(arg1);
}

struct A_0194a4b0 { virtual void sub_0194c7b0(); char pad[12]; };

struct B_0194a4b0 { virtual void sub_0194c7b0(); };

struct C_0194a4b0 : A_0194a4b0, B_0194a4b0 { virtual void sub_0194c7b0(); C_0194a4b0(); };

C_0194a4b0::C_0194a4b0() {}

// @baa 0x0194a4b0
void C_0194a4b0::sub_0194c7b0() {}

struct C_0194a6d0 {
    undefined4 sub_0194a6d0(int);
    int sub_019723d0(int);
    int sub_01947690(int);
};

// @baa 0x0194a6d0
undefined4 C_0194a6d0::sub_0194a6d0(int param_2)
{
    int param_1 = (int)this;
  char cVar1;
  if ((((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
       (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
      (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))) {
    cVar1 = ((C_0194a6d0 *)(((char *)this + 0x20)))->sub_019723d0(param_2 + 0x20);
    if (cVar1 != '\0') {
      cVar1 = ((C_0194a6d0 *)(((char *)this + 0x10)))->sub_01947690(param_2 + 0x10);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

struct C_0194a940 {
    undefined4 * sub_0194a940();
};

extern undefined * g_023f8cd4;
// @baa 0x0194a940
undefined4 * C_0194a940::sub_0194a940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8cd4);
  return param_1;
}

struct C_0194bb70 {
    void sub_0194bb70(float *);
};

// @baa 0x0194bb70
void C_0194bb70::sub_0194bb70(float * param_2)
{
    float * param_1 = (float *)this;

  *param_2 = (param_1[2] + *param_1) * 0.5;
  param_2[1] = (param_1[3] + param_1[1]) * 0.5;
  return;
}

struct C_0194bec0 { int a, b; C_0194bec0(int, int); };

// @baa 0x0194bec0
C_0194bec0::C_0194bec0(int x, int y) : a(x), b(y) {}

// @baa 0x0194c3b0
int sub_0194c3b0(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return param_1;
  }
  return 0;
}

struct S_0194cdd0 {
    bool sub_0194cd20();
};

struct GFxLoadQueueEntryMT_LoadMovie {
    char pad[0x14];
    S_0194cdd0* field_14;
    bool sub_0194cdd0();
};

// @baa 0x0194cdd0
bool GFxLoadQueueEntryMT_LoadMovie::sub_0194cdd0()
{
    return field_14->sub_0194cd20();
}

struct A_0194d1a0 { virtual void sub_0194d1d0(); char pad[12]; };

struct B_0194d1a0 { virtual void sub_0194d1d0(); };

struct C_0194d1a0 : A_0194d1a0, B_0194d1a0 { virtual void sub_0194d1d0(); C_0194d1a0(); };

C_0194d1a0::C_0194d1a0() {}

// @baa 0x0194d1a0
void C_0194d1a0::sub_0194d1d0() {}

struct C_0194ff10 {
    uint sub_0194ff10(uint);
};

// @baa 0x0194ff10
uint C_0194ff10::sub_0194ff10(uint param_2)
{
    int param_1 = (int)this;
  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

// Rebuild of GFxMovieRoot around virtual slot 24 (0x60).
// The class holds an integer-typed subobject at 0x38 that is
// forwarded by address to a sibling virtual at slot 20 (0x50).
struct GFxMovieRoot
{
    int *VirtualTable;
    int  Filler[12];            // up to 0x38
    int  State;                 // at 0x38, a subobject that the slot-20 virtual operates on
    int  Filler2[18];           // up to 0x84
    int  Field84;

    virtual void f00() {}
    virtual void f01() {}
    virtual void f02() {}
    virtual void f03() {}
    virtual void f04() {}
    virtual void f05() {}
    virtual void f06() {}
    virtual void f07() {}
    virtual void f08() {}
    virtual void f09() {}
    virtual void f10() {}
    virtual void f11() {}
    virtual void f12() {}
    virtual void f13() {}
    virtual void f14() {}
    virtual void f15() {}
    virtual void f16() {}
    virtual void f17() {}
    virtual void f18() {}
    virtual void f19() {}
    virtual void sub_01949560(int *In);   // slot 20 (0x50)
    virtual void f21() {}
    virtual void f22() {}
    virtual void f23() {}
    virtual void sub_01947fa0(int In);    // slot 24 (0x60)
};

void GFxMovieRoot::sub_01949560(int *) {}

// @baa 0x01947fa0
void GFxMovieRoot::sub_01947fa0(int In)
{
    Field84 = In;
    sub_01949560(&State);
}

#pragma pack(push, 4)
// Holds a numeric value with a type tag; bType 3 marks a double.
struct FNumericStringDouble
{
	BYTE bType;
	double Value;
};

#pragma pack(pop)
// @baa 0x0194a050
FNumericStringDouble* sub_0194a050(FNumericStringDouble* Result, double* Value)
{
	if (Result != 0)
	{
		Result->Value = *Value;
		Result->bType = 3;
		return Result;
	}
	return 0;
}

struct SInitHeader
{
    int Value;
    int Size;
    int P0;
    int P1;
    int P2;
    int P3;
    unsigned short Flags;
    unsigned char Pad2;
    unsigned char Pad3;

    SInitHeader* sub_0194a6b0();
};

// @baa 0x0194a6b0
SInitHeader* SInitHeader::sub_0194a6b0()
{
    Value = 0;
    Size = -1;
    Flags = 0;
    Pad2 = 0;
    Pad3 = 0;
    return this;
}

// An entry created by the pass allocator.
struct FPassEntry
{
	void*		VTable;	// 0x0
	INT		Flags;		// 0x4
	INT		Data;		// 0x8
	INT		Count;		// 0xc
};

class FPassList
{
public:
	FPassEntry*	AllocPass( INT Param );		// 0x01971880
	FPassEntry**	AddPass( FPassEntry** OutEntry, INT Param );	// 0x01947550
};

// @baa 0x01947550
// 0x01947550
FPassEntry**	FPassList::AddPass( FPassEntry** OutEntry, INT Param )
{
	FPassEntry*	Entry = AllocPass( Param );
	Entry->Count++;
	*OutEntry = Entry;
	return OutEntry;
}

struct F {
    // 019485f0: __thiscall, 4 stack args
    void sub_019485f0(int A, int B, int C, int D);
    // 0194a530: __thiscall, 3 stack args
    void sub_0194a530(int A, int B, int C);
};

// @baa 0x0194a530
void F::sub_0194a530(int A, int B, int C)
{
    sub_019485f0(A, B, C, 0);
}
