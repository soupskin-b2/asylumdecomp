// GFx_1900000.cpp (part 2 of 6): 143 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_019000a0();
};

// @baa 0x019000a0
S *S::sub_019000a0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C {
    void sub_019001b0(undefined4);
};

// @baa 0x019001b0
void C::sub_019001b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 1;
  param_1[3] = param_2;
  return;
}

struct C_01900340 {
    undefined4 * sub_01900340();
};

int sub_018d3d50(void);
extern undefined * g_023f5e4c;
// @baa 0x01900340
undefined4 * C_01900340::sub_01900340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f5e4c);
  return param_1;
}

struct C_01900440 { int a; C_01900440(int); };

// @baa 0x01900440
C_01900440::C_01900440(int x) : a(x) {}

struct C_01900610 { int a; C_01900610(int); };

// @baa 0x01900610
C_01900610::C_01900610(int x) : a(x) {}

struct C_01900730 {
    undefined4 * sub_01900730();
};

extern undefined * g_023f5e54;
// @baa 0x01900730
undefined4 * C_01900730::sub_01900730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f5e54);
  return param_1;
}

struct C_01900790 {
    undefined4 * sub_01900790();
};

extern undefined * g_023f5e5c;
// @baa 0x01900790
undefined4 * C_01900790::sub_01900790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f5e5c);
  return param_1;
}

struct C_019007b0 { int a; C_019007b0(int); };

// @baa 0x019007b0
C_019007b0::C_019007b0(int x) : a(x) {}

struct C_01900840 { int a; C_01900840(int); };

// @baa 0x01900840
C_01900840::C_01900840(int x) : a(x) {}

struct C_01900870 { int a; C_01900870(int); };

// @baa 0x01900870
C_01900870::C_01900870(int x) : a(x) {}

struct C_019009d0 { int a, b, c; C_019009d0(); };

// @baa 0x019009d0
C_019009d0::C_019009d0() : a(0), b(0), c(0) {}

struct C_019029a0 { int a, b, c; C_019029a0(); };

// @baa 0x019029a0
C_019029a0::C_019029a0() : a(0), b(0), c(0) {}

struct A_01902b30 { virtual void sub_01903390(); char pad[24]; };

struct B_01902b30 { virtual void sub_01903390(); };

struct C_01902b30 : A_01902b30, B_01902b30 { virtual void sub_01903390(); C_01902b30(); };

C_01902b30::C_01902b30() {}

// @baa 0x01902b30
void C_01902b30::sub_01903390() {}

struct C_019034c0 { int a, b; C_019034c0(const C_019034c0 &); };

// @baa 0x019034c0
C_019034c0::C_019034c0(const C_019034c0 &o) : a(o.a), b(o.b) {}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_019034e0();
};

// @baa 0x019034e0
S16* S16::sub_019034e0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct C_01903540 {
    virtual int f0();
    virtual int f1();
    uint sub_01903540();
};

// @baa 0x01903540
uint C_01903540::sub_01903540()
{
    return f1() & 1;
}

struct C_019035d0 {
    void sub_019035d0();
};

int sub_01971650(void);
// @baa 0x019035d0
void C_019035d0::sub_019035d0(void)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    sub_01971650();
    return;
  }
  return;
}

struct C_01903820 {
    undefined4 sub_01903820(undefined4);
    int sub_019722b0(int, int);
};

// @baa 0x01903820
undefined4 C_01903820::sub_01903820(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01903820 *)(this))->sub_019722b0(param_2, 0);
  return param_1;
}

struct C_01903840 {
    undefined4 sub_01903840(undefined4);
    int sub_019729b0(int, int);
};

// @baa 0x01903840
undefined4 C_01903840::sub_01903840(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01903840 *)(this))->sub_019729b0(param_2, 0);
  return param_1;
}

struct C_01903870 {
    undefined4 sub_01903870(undefined4);
    int sub_01972280(int, int);
    int sub_01972310(int);
};

// @baa 0x01903870
undefined4 C_01903870::sub_01903870(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01903870 *)(this))->sub_01972280(param_2, 2);
  ((C_01903870 *)(this))->sub_01972310(1);
  return param_1;
}

struct C_019038a0 { void sub_01972a00(int); C_019038a0 *sub_019038a0(int); };

// @baa 0x019038a0
C_019038a0 *C_019038a0::sub_019038a0(int a) { sub_01972a00(a); return this; }

int __stdcall sub_018d7170(int);
// @baa 0x019038c0
void sub_019038c0(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C_019038d0 {
    C_019038d0 *sub_019038d0(void);
};

// @baa 0x019038d0
C_019038d0 *C_019038d0::sub_019038d0(void)
{
    ((BYTE *)this)[0] = 0;
    return this;
}

struct C_019038e0 {
    C_019038e0* sub_019038e0(BYTE b);
};

// @baa 0x019038e0
C_019038e0* C_019038e0::sub_019038e0(BYTE b)
{
    *(BYTE*)this = b;
    return this;
}

struct C_01903940 {
    void sub_01903940();
    void sub_01976050();
};

// @baa 0x01903940
void C_01903940::sub_01903940()
{
    if (5 <= *(BYTE *)this) {
        sub_01976050();
    }
}

// @baa 0x01903a10
void *UGFxDataStoreSubscriber::sub_01903a10()
{
    void *p = this;
    *(BYTE *)p = 0;
    return p;
}

struct C_01903a20 {
    C_01903a20* sub_01903a20(BYTE b);
};

// @baa 0x01903a20
C_01903a20* C_01903a20::sub_01903a20(BYTE b)
{
    *(BYTE*)this = b;
    return this;
}

// @baa 0x01903a40
int UGFxDataStoreSubscriber::sub_01903a40(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return param_1[1];
  }
  return 0;
}

// @baa 0x01903ae0
uint UGFxDataStoreSubscriber::sub_01903ae0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) & 1;
}

// @baa 0x01903af0
uint UGFxDataStoreSubscriber::sub_01903af0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) >> 1 & 1;
}

// @baa 0x01903b10
int UGFxDataStoreSubscriber::sub_01903b10(void) { return *(int*)((char*)this + 24); }

// @baa 0x01903bc0
int UGFxDataStoreSubscriber::sub_01903bc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10 + param_2 * 4;
}

struct S_01903c10 {
    INT Unk00;
    INT Unk04;
    S_01903c10 *sub_01903c10();
};

// @baa 0x01903c10
S_01903c10 *S_01903c10::sub_01903c10()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

// @baa 0x01903c20
void UGFxDataStoreSubscriber::sub_01903c20(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// @baa 0x01903c30
void UGFxDataStoreSubscriber::sub_01903c30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}

// @baa 0x01903c70
int UGFxDataStoreSubscriber::sub_01903c70(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + param_2;
  return *param_1;
}

// @baa 0x01903ca0
undefined4 UGFxDataStoreSubscriber::sub_01903ca0(int param_2)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01903cb0
int UGFxDataStoreSubscriber::sub_01903cb0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] + *param_1;
}

// @baa 0x01903cc0
int UGFxDataStoreSubscriber::sub_01903cc0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] + -1 + *param_1;
}

// @baa 0x01903cd0
int UGFxDataStoreSubscriber::sub_01903cd0(void) { return *(int*)((char*)this + 0); }

// @baa 0x01903ce0
bool UGFxDataStoreSubscriber::sub_01903ce0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

// @baa 0x01903dc0
void UGFxDataStoreSubscriber::sub_01903dc0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

// @baa 0x01903dd0
byte UGFxDataStoreSubscriber::sub_01903dd0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc) & 7;
}

// @baa 0x01903de0
bool UGFxDataStoreSubscriber::sub_01903de0(void)
{
    int param_1 = (int)this;

  return (*(byte *)(param_1 + 0xc) & 7) != 0;
}

// @baa 0x01903df0
void UGFxDataStoreSubscriber::sub_01903df0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf8;
  return;
}

// @baa 0x01903e00
void UGFxDataStoreSubscriber::sub_01903e00(byte param_2)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) ^ (*(byte *)(param_1 + 0xc) ^ param_2) & 7;
  return;
}

// @baa 0x01903e10
void UGFxDataStoreSubscriber::sub_01903e10(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
  *param_1 = *param_2;
  return;
}

// @baa 0x01903e20
void UGFxDataStoreSubscriber::sub_01903e20(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf7;
  return;
}

// @baa 0x01903e30
byte UGFxDataStoreSubscriber::sub_01903e30(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc) >> 3 & 1;
}

// @baa 0x01903e50
void UGFxDataStoreSubscriber::sub_01903e50(void)
{
    int param_1 = (int)this;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xef;
  return;
}

// @baa 0x01903e60
byte UGFxDataStoreSubscriber::sub_01903e60(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc) >> 4 & 1;
}

// @baa 0x01903e80
void UGFxDataStoreSubscriber::sub_01903e80(void)
{
    int param_1 = (int)this;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xdf;
  return;
}

// @baa 0x01903e90
byte UGFxDataStoreSubscriber::sub_01903e90(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc) >> 5 & 1;
}

// @baa 0x01903ef0
char* UGFxDataStoreSubscriber::sub_01903ef0(void) { return (char*)this + 20; }

// @baa 0x01903f30
void UGFxDataStoreSubscriber::sub_01903f30(undefined4 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 1;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

// @baa 0x01903f40
void UGFxDataStoreSubscriber::sub_01903f40(undefined2 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 4;
  *(undefined2 *)(param_1 + 0x16) = param_2;
  return;
}

// @baa 0x01903f60
void UGFxDataStoreSubscriber::sub_01903f60(undefined2 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 8;
  *(undefined2 *)(param_1 + 0x18) = param_2;
  return;
}

// @baa 0x01903f80
void UGFxDataStoreSubscriber::sub_01903f80(undefined2 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x10;
  *(undefined2 *)(param_1 + 0x1a) = param_2;
  return;
}

// @baa 0x01903fa0
void UGFxDataStoreSubscriber::sub_01903fa0(undefined2 param_2)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x20;
  *(undefined2 *)(param_1 + 0x1c) = param_2;
  return;
}

// @baa 0x01903fd0
int UGFxDataStoreSubscriber::sub_01903fd0(void) { return *(int*)((char*)this + 0); }

// @baa 0x01903fe0
int UGFxDataStoreSubscriber::sub_01903fe0(void) { return *(int*)((char*)this + 4); }

// @baa 0x01904010
int UGFxDataStoreSubscriber::sub_01904010(void) { return *(int*)((char*)this + 28); }

// @baa 0x01904020
int UGFxDataStoreSubscriber::sub_01904020(void) { return *(int*)((char*)this + 0); }

// @baa 0x01904030
int UGFxDataStoreSubscriber::sub_01904030(void) { return *(int*)((char*)this + 0); }

// @baa 0x01904070
void UGFxDataStoreSubscriber::sub_01904070(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  return;
}

// @baa 0x01904080
byte UGFxDataStoreSubscriber::sub_01904080(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x28) & 1;
}

// @baa 0x01904150
int UGFxDataStoreSubscriber::sub_01904150(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + param_1;
}

// @baa 0x01904190
int UGFxDataStoreSubscriber::sub_01904190(void) { return *(int*)((char*)this + 28); }

struct M_019041b0 { void sub_01978450(); };

struct C_019041b0 { char pad[28]; M_019041b0 m; void sub_019041b0(); };

// @baa 0x019041b0
void C_019041b0::sub_019041b0() { m.sub_01978450(); }

struct C_01904240 {
    undefined4 sub_01904240();
};

// @baa 0x01904240
undefined4 C_01904240::sub_01904240(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x58);
}

struct C_01904530 {
    undefined4 sub_01904530(undefined4);
    int sub_01972280(int, int);
};

// @baa 0x01904530
undefined4 C_01904530::sub_01904530(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01904530 *)(this))->sub_01972280(param_2, 0);
  return param_1;
}

// @baa 0x019045a0
BYTE __stdcall sub_019045a0(BYTE a0, BYTE a1) { return 0; }

struct V_01904600 {
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
    virtual void g();
};

struct O_01904600 { char pad[36]; V_01904600* p; void sub_01904600(); };

// @baa 0x01904600
void O_01904600::sub_01904600() { p->g(); }

struct V_01904610 {
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
    virtual void g();
};

struct O_01904610 { char pad[36]; V_01904610* p; void sub_01904610(); };

// @baa 0x01904610
void O_01904610::sub_01904610() { p->g(); }

struct V_01904620 {
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
    virtual void g(int a0);
};

struct O_01904620 { char pad[36]; V_01904620* p; void sub_01904620(int a0); };

// @baa 0x01904620
void O_01904620::sub_01904620(int a0) { p->g(a0); }

struct V_01904630 {
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
    virtual void g();
};

struct O_01904630 { char pad[36]; V_01904630* p; void sub_01904630(); };

// @baa 0x01904630
void O_01904630::sub_01904630() { p->g(); }

// @baa 0x01904670
BYTE __stdcall sub_01904670(DWORD arg1)
{
    return 0;
}

struct GFxCharacter {
    uchar sub_019046d0(int param);
};

// @baa 0x019046d0
uchar GFxCharacter::sub_019046d0(int param) {
    return 0;
}

struct GFxASCharacter {
    BYTE sub_01904820(int a, int b);
};

// @baa 0x01904820
BYTE GFxASCharacter::sub_01904820(int a, int b) { return 1; }

struct S_019048f0 {
    bool sub_019048f0(int, int, int);
};

// @baa 0x019048f0
bool S_019048f0::sub_019048f0(int, int, int) { return 0; }

struct C_01904f90 { int a; C_01904f90(int); };

// @baa 0x01904f90
C_01904f90::C_01904f90(int x) : a(x) {}

// @baa 0x01905050
void sub_01905050(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C_019050e0 { int a; C_019050e0(int); };

// @baa 0x019050e0
C_019050e0::C_019050e0(int x) : a(x) {}

struct C_01905100 { int a; C_01905100(int); };

// @baa 0x01905100
C_01905100::C_01905100(int x) : a(x) {}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_01905110();
};

struct Object {
    void sub_01925010();
};

// @baa 0x01905110
void ObjectRef::sub_01905110()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_01925010();
}

struct C_01905170 {
    undefined4 * sub_01905170();
};

extern undefined * g_023f63c4;
// @baa 0x01905170
undefined4 * C_01905170::sub_01905170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f63c4);
  return param_1;
}

struct C_01905240 {
    undefined4 * sub_01905240();
};

extern undefined * g_023f63cc;
// @baa 0x01905240
undefined4 * C_01905240::sub_01905240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f63cc);
  return param_1;
}

struct C_019052a0 {
    undefined4 * sub_019052a0();
};

extern undefined * g_023f63d4;
// @baa 0x019052a0
undefined4 * C_019052a0::sub_019052a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f63d4);
  return param_1;
}

struct S_01905360 {
    int Unk0; // 0x00
    BYTE sub_01905360(S_01905360* Other);
};

// @baa 0x01905360
BYTE S_01905360::sub_01905360(S_01905360* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_01905420 {
    undefined4 * sub_01905420();
};

extern undefined * g_023f63dc;
// @baa 0x01905420
undefined4 * C_01905420::sub_01905420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f63dc);
  return param_1;
}

struct S_01905580 {
    INT Unk00;
    INT Unk04;
    S_01905580 *sub_01905580();
};

// @baa 0x01905580
S_01905580 *S_01905580::sub_01905580()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

int __stdcall sub_018d7150(int);
// @baa 0x01905870
void sub_01905870(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

// @baa 0x01905880
void sub_01905880(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C_01905890 { int a; C_01905890(int); };

// @baa 0x01905890
C_01905890::C_01905890(int x) : a(x) {}

struct C_019058e0 { int a; C_019058e0(int); };

// @baa 0x019058e0
C_019058e0::C_019058e0(int x) : a(x) {}

struct C_01905940 { int a; C_01905940(int); };

// @baa 0x01905940
C_01905940::C_01905940(int x) : a(x) {}

struct C_01905a30 {
    void sub_01905a30();
    void sub_01976050();
};

// @baa 0x01905a30
void C_01905a30::sub_01905a30()
{
    if (5 <= *(BYTE *)this) {
        sub_01976050();
    }
}

struct C_01905ac0 { int a, b, c; C_01905ac0(); };

// @baa 0x01905ac0
C_01905ac0::C_01905ac0() : a(0), b(0), c(0) {}

struct C_01905b30 { int a, b, c; C_01905b30(); };

// @baa 0x01905b30
C_01905b30::C_01905b30() : a(0), b(0), c(0) {}

struct C_01905bd0 { int a, b, c; C_01905bd0(); };

// @baa 0x01905bd0
C_01905bd0::C_01905bd0() : a(0), b(0), c(0) {}

struct C_01905bf0 { int a, b; C_01905bf0(int, int); };

// @baa 0x01905bf0
C_01905bf0::C_01905bf0(int x, int y) : a(x), b(y) {}

// @baa 0x01905c10
void sub_01905c10(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C_01905c20 { int a, b; C_01905c20(int, int); };

// @baa 0x01905c20
C_01905c20::C_01905c20(int x, int y) : a(x), b(y) {}

struct C_01905c40 {
    int sub_01905c40(int);
};

// @baa 0x01905c40
int C_01905c40::sub_01905c40(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x18;
}

struct C_01905c50 {
    uint sub_01905c50();
};

// @baa 0x01905c50
uint C_01905c50::sub_01905c50(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 8) >> 0x1e;
}

struct C_01906320 { int a, b; C_01906320(const C_01906320 &); };

// @baa 0x01906320
C_01906320::C_01906320(const C_01906320 &o) : a(o.a), b(o.b) {}

struct C_01906360 {
    bool sub_01906360();
};

// @baa 0x01906360
bool C_01906360::sub_01906360(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct C_019063c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_019063c0* sub_019063c0(INT value);
};

// @baa 0x019063c0
C_019063c0* C_019063c0::sub_019063c0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_019064c0 {
    int sub_019064c0(int);
};

// @baa 0x019064c0
int C_019064c0::sub_019064c0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_019064d0 {
    undefined4 sub_019064d0();
};

// @baa 0x019064d0
undefined4 C_019064d0::sub_019064d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct A_01906640 { virtual void sub_01906f30(); char pad[104]; };

struct B_01906640 { virtual void sub_01906f30(); };

struct C_01906640 : A_01906640, B_01906640 { virtual void sub_01906f30(); C_01906640(); };

C_01906640::C_01906640() {}

// @baa 0x01906640
void C_01906640::sub_01906f30() {}

struct A_01906650 { virtual void sub_01906f30(); char pad[12]; };

struct B_01906650 { virtual void sub_01906f30(); };

struct C_01906650 : A_01906650, B_01906650 { virtual void sub_01906f30(); C_01906650(); };

C_01906650::C_01906650() {}

// @baa 0x01906650
void C_01906650::sub_01906f30() {}

struct A_01906660 { virtual void sub_01904960(); char pad[104]; };

struct B_01906660 { virtual void sub_01904960(); };

struct C_01906660 : A_01906660, B_01906660 { virtual void sub_01904960(); C_01906660(); };

C_01906660::C_01906660() {}

// @baa 0x01906660
void C_01906660::sub_01904960() {}

struct C_01906870 {
    undefined4 sub_01906870();
};

// @baa 0x01906870
undefined4 C_01906870::sub_01906870(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_01906980 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01906980* sub_01906980(INT value);
};

// @baa 0x01906980
C_01906980* C_01906980::sub_01906980(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_019069c0 { int a, b; C_019069c0(int, int); };

// @baa 0x019069c0
C_019069c0::C_019069c0(int x, int y) : a(x), b(y) {}

struct C_01906bc0 {
    undefined4 * sub_01906bc0();
    int sub_018e4150();
};

// @baa 0x01906bc0
undefined4 * C_01906bc0::sub_01906bc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  ((C_01906bc0 *)(((char *)this + 4)))->sub_018e4150();
  ((C_01906bc0 *)(((char *)this + 8)))->sub_018e4150();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = 0xffffffff;
  return param_1;
}

struct GFxDocumentListener {
    virtual unsigned char sub_01906c50(int a, int b);
};

// @baa 0x01906c50
unsigned char GFxDocumentListener::sub_01906c50(int a, int b) {
    return 0;
}

struct GFxDocumentListener_01906cb0 {
    undefined2 sub_01906cb0(uint param_1, uint param_2);
};

// @baa 0x01906cb0
undefined2 GFxDocumentListener_01906cb0::sub_01906cb0(uint param_1, uint param_2)
{
    return param_2;
}

struct Inner {
    void sub_0197c050();
};

struct Outer {
    char pad[0x10];
    Inner* p;
    void sub_01906cf0();
};

// @baa 0x01906cf0
void Outer::sub_01906cf0()
{
    p->sub_0197c050();
}

struct Inner_01906d20 {
    void sub_0197d970();
};

struct Outer_01906d20 {
    char pad[0x10];
    Inner_01906d20* p;
    void sub_01906d20();
};

// @baa 0x01906d20
void Outer_01906d20::sub_01906d20()
{
    p->sub_0197d970();
}

struct Inner_01906d30 {
    void sub_0197de20();
};

struct Outer_01906d30 {
    char pad[0x10];
    Inner_01906d30* p;
    void sub_01906d30();
};

// @baa 0x01906d30
void Outer_01906d30::sub_01906d30()
{
    p->sub_0197de20();
}

struct Inner_01906d40 {
    void sub_0197ffd0();
};

struct Outer_01906d40 {
    char pad[0x10];
    Inner_01906d40* p;
    void sub_01906d40();
};

// @baa 0x01906d40
void Outer_01906d40::sub_01906d40()
{
    p->sub_0197ffd0();
}

struct Inner_01906d50 {
    void sub_0197feb0();
};

struct Outer_01906d50 {
    char pad[0x10];
    Inner_01906d50* p;
    void sub_01906d50();
};

// @baa 0x01906d50
void Outer_01906d50::sub_01906d50()
{
    p->sub_0197feb0();
}

struct Inner_01906d60 {
    void sub_01979b70();
};

struct Outer_01906d60 {
    char pad[0x10];
    Inner_01906d60* p;
    void sub_01906d60();
};

// @baa 0x01906d60
void Outer_01906d60::sub_01906d60()
{
    p->sub_01979b70();
}

struct Inner_01906d70 {
    void sub_0197ffa0();
};

struct Outer_01906d70 {
    char pad[0x10];
    Inner_01906d70* p;
    void sub_01906d70();
};

// @baa 0x01906d70
void Outer_01906d70::sub_01906d70()
{
    p->sub_0197ffa0();
}

struct Inner_01906e00 {
    void sub_019810b0();
};

struct Outer_01906e00 {
    char pad[0x10];
    Inner_01906e00* p;
    void sub_01906e00();
};

// @baa 0x01906e00
void Outer_01906e00::sub_01906e00()
{
    p->sub_019810b0();
}

struct C_01906f00 {
    uint sub_01906f00();
};

// @baa 0x01906f00
uint C_01906f00::sub_01906f00(void)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x28);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x24);
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  return uVar2;
}

struct C_01906f10 {
    uint sub_01906f10();
};

// @baa 0x01906f10
uint C_01906f10::sub_01906f10(void)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x28);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x24);
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

struct C_01906f20 {
    undefined4 sub_01906f20();
};

// @baa 0x01906f20
undefined4 C_01906f20::sub_01906f20(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x1c);
}

struct A_01907010 { virtual void sub_01907020(); char pad[12]; };

struct B_01907010 { virtual void sub_01907020(); };

struct C_01907010 : A_01907010, B_01907010 { virtual void sub_01907020(); C_01907010(); };

C_01907010::C_01907010() {}

// @baa 0x01907010
void C_01907010::sub_01907020() {}

struct C_01907120 { int a, b, c; C_01907120(); };

// @baa 0x01907120
C_01907120::C_01907120() : a(0), b(0), c(0) {}

struct M_01907350 { void sub_019550c0(); };

struct C_01907350 { char pad[2584]; M_01907350 m; void sub_01907350(); };

// @baa 0x01907350
void C_01907350::sub_01907350() { m.sub_019550c0(); }

struct C_01907420 { int a, b, c; C_01907420(); };

// @baa 0x01907420
C_01907420::C_01907420() : a(0), b(0), c(0) {}

struct S_01909670 {
    INT Unk00;
    INT Unk04;
    S_01909670 *sub_01909670();
};

// @baa 0x01909670
S_01909670 *S_01909670::sub_01909670()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01909720 {
    int sub_01909720();
};

// @baa 0x01909720
int C_01909720::sub_01909720(void)
{
    int * param_1 = (int *)this;
  return *param_1 + -4 + param_1[1] * 4;
}

struct C_0190a040 {
    void sub_0190a040(undefined4 *);
};

// @baa 0x0190a040
void C_0190a040::sub_0190a040(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_0190b590 {
    int sub_0190b590(int);
};

int __stdcall sub_0094a720(int, int, int, int, int);
int sub_01908fc0(...);
// @baa 0x0190b590
int C_0190b590::sub_0190b590(int param_2)
{
    int param_1 = (int)this;
  sub_0094a720(param_1, param_2, 0x10, 5, (int)(sub_01908fc0));
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  return param_1;
}

// @baa 0x0190bfe0
undefined4 * sub_0190bfe0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_0190c3c0 {
    uint sub_0190c3c0(uint);
};

// @baa 0x0190c3c0
uint C_0190c3c0::sub_0190c3c0(uint param_2)
{
    int param_1 = (int)this;
  return *(uint *)(*(int *)(param_1 + 4) + 0x10) & param_2;
}

struct C_0190cbe0 { void sub_0190bc40(int); void sub_0190cbe0(); };

// @baa 0x0190cbe0
void C_0190cbe0::sub_0190cbe0() { sub_0190bc40(0); }

struct C_0190cbf0 { void sub_0190bb80(int); void sub_0190cbf0(); };

// @baa 0x0190cbf0
void C_0190cbf0::sub_0190cbf0() { sub_0190bb80(0); }

struct C_0190cc00 {
    void sub_0190cc00();
    int sub_01909940(int);
};

// @baa 0x0190cc00
void C_0190cc00::sub_0190cc00(void)
{
    int param_1 = (int)this;
  ((C_0190cc00 *)(this))->sub_01909940(*(int *)(param_1 + 4) + -1);
  return;
}
