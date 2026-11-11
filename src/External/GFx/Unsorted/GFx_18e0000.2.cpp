// GFx_18e0000.cpp (part 2 of 8): 94 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct GFxShapeCharacterDef {
    void sub_018fefb0(int a, int b, int c);
};

struct C {
    char _pad[0x1c];
    GFxShapeCharacterDef *field_0x1c;
    void sub_018e0890(int a, int b, int c) {
        field_0x1c->sub_018fefb0(a, b, c);
    }
};

// @baa 0x018e0890
void use(C *obj, int a, int b, int c) { obj->sub_018e0890(a, b, c); }

struct A_018e1a60 { virtual void sub_018e1f20(); char pad[12]; };

struct B_018e1a60 { virtual void sub_018e1f20(); };

struct C_018e1a60 : A_018e1a60, B_018e1a60 { virtual void sub_018e1f20(); C_018e1a60(); };

C_018e1a60::C_018e1a60() {}

// @baa 0x018e1a60
void C_018e1a60::sub_018e1f20() {}

struct A_018e1a70 { virtual void sub_018e1f20(); char pad[20]; };

struct B_018e1a70 { virtual void sub_018e1f20(); };

struct C_018e1a70 : A_018e1a70, B_018e1a70 { virtual void sub_018e1f20(); C_018e1a70(); };

C_018e1a70::C_018e1a70() {}

// @baa 0x018e1a70
void C_018e1a70::sub_018e1f20() {}

struct C_018e1c40 {
    undefined4 sub_018e1c40(uint *);
    int sub_018e1b40(int, int);
};

// @baa 0x018e1c40
undefined4 C_018e1c40::sub_018e1c40(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_018e1c40 *)(this))->sub_018e1b40((int)(param_2), *(uint *)(*param_1 + 4) & *param_2);
  return uVar1;
}

struct S {
    BYTE sub_018e3350(INT arg1);
};

// @baa 0x018e3350
BYTE S::sub_018e3350(INT arg1)
{
    return 0;
}

struct C_018e33c0 {
    undefined4 * sub_018e33c0();
};

int sub_018d3d50(void);
extern undefined * g_023f54e0;
// @baa 0x018e33c0
undefined4 * C_018e33c0::sub_018e33c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f54e0);
  return param_1;
}

struct A_018e3460 { virtual void sub_018e3490(); char pad[12]; };

struct B_018e3460 { virtual void sub_018e3490(); };

struct C_018e3460 : A_018e3460, B_018e3460 { virtual void sub_018e3490(); C_018e3460(); };

C_018e3460::C_018e3460() {}

// @baa 0x018e3460
void C_018e3460::sub_018e3490() {}

struct C_018e3550 {
    void sub_018e3550(undefined4, undefined4, undefined4);
    int sub_018e3500(int);
};

// @baa 0x018e3550
void C_018e3550::sub_018e3550(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  ((C_018e3550 *)(this))->sub_018e3500(param_2);
  return;
}

struct A_018e3610 { virtual void sub_018e3b20(); char pad[12]; };

struct B_018e3610 { virtual void sub_018e3b20(); };

struct C_018e3610 : A_018e3610, B_018e3610 { virtual void sub_018e3b20(); C_018e3610(); };

C_018e3610::C_018e3610() {}

// @baa 0x018e3610
void C_018e3610::sub_018e3b20() {}

struct C_018e3ca0 { int a, b; C_018e3ca0(int, int); };

// @baa 0x018e3ca0
C_018e3ca0::C_018e3ca0(int x, int y) : a(x), b(y) {}

struct C_018e4070 {
    undefined4 * sub_018e4070(undefined4);
    int sub_018e3fb0(int);
};

int __stdcall sub_0191dff0(int, int, int);
int __stdcall sub_0191e090(int, int);
// @baa 0x018e4070
undefined4 * C_018e4070::sub_018e4070(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  char cVar1;
  int iVar2;
  iVar2 = sub_0191e090(param_2,0xffffffff);
  cVar1 = ((C_018e4070 *)(this))->sub_018e3fb0(iVar2);
  if ((cVar1 != '\0') && (iVar2 != 0)) {
    sub_0191dff0(*param_1,param_2,iVar2);
  }
  return param_1;
}

typedef uint size_t;

struct C_018e40b0 {
    void sub_018e40b0(void *, int);
    int sub_018e3fb0(int);
};

int sub_0191f170(...);
void * sub_01a375f0(void *, void *, size_t);
// @baa 0x018e40b0
void C_018e40b0::sub_018e40b0(void * param_2, int param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  char cVar1;
  if (param_3 == -1) {
    param_3 = sub_0191f170(param_2);
  }
  cVar1 = ((C_018e40b0 *)(this))->sub_018e3fb0(param_3);
  if ((cVar1 != '\0') && (param_3 != 0)) {
    sub_01a375f0((void *)*param_1,param_2,param_3 * 2 + 2);
  }
  return;
}

struct V_018e70f0 {
    virtual void v0();
    virtual void g();
};

struct O_018e70f0 { char pad[16]; V_018e70f0* p; void sub_018e70f0(); };

// @baa 0x018e70f0
void O_018e70f0::sub_018e70f0() { p->g(); }

struct V_018e7120 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void g();
};

struct O_018e7120 { char pad[16]; V_018e7120* p; void sub_018e7120(); };

// @baa 0x018e7120
void O_018e7120::sub_018e7120() { p->g(); }

struct V_018e7130 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void g();
};

struct O_018e7130 { char pad[16]; V_018e7130* p; void sub_018e7130(); };

// @baa 0x018e7130
void O_018e7130::sub_018e7130() { p->g(); }

struct V_018e7140 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void g();
};

struct O_018e7140 { char pad[16]; V_018e7140* p; void sub_018e7140(); };

// @baa 0x018e7140
void O_018e7140::sub_018e7140() { p->g(); }

struct V_018e7150 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void g();
};

struct O_018e7150 { char pad[16]; V_018e7150* p; void sub_018e7150(); };

// @baa 0x018e7150
void O_018e7150::sub_018e7150() { p->g(); }

struct V_018e7160 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void g();
};

struct O_018e7160 { char pad[16]; V_018e7160* p; void sub_018e7160(); };

// @baa 0x018e7160
void O_018e7160::sub_018e7160() { p->g(); }

struct V_018e7170 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void g();
};

struct O_018e7170 { char pad[16]; V_018e7170* p; void sub_018e7170(); };

// @baa 0x018e7170
void O_018e7170::sub_018e7170() { p->g(); }

struct V_018e7180 {
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

struct O_018e7180 { char pad[16]; V_018e7180* p; void sub_018e7180(int a0); };

// @baa 0x018e7180
void O_018e7180::sub_018e7180(int a0) { p->g(a0); }

struct V_018e7190 {
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

struct O_018e7190 { char pad[16]; V_018e7190* p; void sub_018e7190(int a0); };

// @baa 0x018e7190
void O_018e7190::sub_018e7190(int a0) { p->g(a0); }

struct V_018e71a0 {
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
    virtual void g(int a0);
};

struct O_018e71a0 { char pad[16]; V_018e71a0* p; void sub_018e71a0(int a0); };

// @baa 0x018e71a0
void O_018e71a0::sub_018e71a0(int a0) { p->g(a0); }

struct V_018e71b0 {
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
    virtual void g();
};

struct O_018e71b0 { char pad[16]; V_018e71b0* p; void sub_018e71b0(); };

// @baa 0x018e71b0
void O_018e71b0::sub_018e71b0() { p->g(); }

struct V_018e71c0 {
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
    virtual void g();
};

struct O_018e71c0 { char pad[16]; V_018e71c0* p; void sub_018e71c0(); };

// @baa 0x018e71c0
void O_018e71c0::sub_018e71c0() { p->g(); }

struct V_018e71d0 {
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
    virtual void g(int a0);
};

struct O_018e71d0 { char pad[16]; V_018e71d0* p; void sub_018e71d0(int a0); };

// @baa 0x018e71d0
void O_018e71d0::sub_018e71d0(int a0) { p->g(a0); }

struct V_018e7200 {
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
    virtual void g(int a0);
};

struct O_018e7200 { char pad[16]; V_018e7200* p; void sub_018e7200(int a0); };

// @baa 0x018e7200
void O_018e7200::sub_018e7200(int a0) { p->g(a0); }

struct V_018e7210 {
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
    virtual void g(int a0);
};

struct O_018e7210 { char pad[16]; V_018e7210* p; void sub_018e7210(int a0); };

// @baa 0x018e7210
void O_018e7210::sub_018e7210(int a0) { p->g(a0); }

struct V_018e7220 {
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

struct O_018e7220 { char pad[16]; V_018e7220* p; void sub_018e7220(); };

// @baa 0x018e7220
void O_018e7220::sub_018e7220() { p->g(); }

struct C_018e7a50 {
    void sub_018e7a50();
};

int sub_018d3de0(void);
extern undefined * g_023f56dc;
// @baa 0x018e7a50
void C_018e7a50::sub_018e7a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f56dc);
  sub_018d3de0();
  return;
}

struct GUnopenedFile {
    int sub_018e7ae0(int a1, int a2);
};

// @baa 0x018e7ae0
int GUnopenedFile::sub_018e7ae0(int a1, int a2)
{
    return -1;
}

struct GUnopenedFile;
struct S_018e7b50 {
    BYTE sub_018e7b50(INT);
};

// @baa 0x018e7b50
BYTE S_018e7b50::sub_018e7b50(INT a1)
{
    return 0;
}

struct C_018e7e60 { C_018e7e60* sub_018e7e60(void); };

// @baa 0x018e7e60
C_018e7e60* C_018e7e60::sub_018e7e60(void) { *(int*)((char*)this + 0) = 0; return this; }

struct S_018e8230 {
    INT Unk00;
    INT Unk04;
    S_018e8230 *sub_018e8230();
};

// @baa 0x018e8230
S_018e8230 *S_018e8230::sub_018e8230()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

// @baa 0x018e8240
void sub_018e8240(void)
{
  return;
}

struct C_018e83a0 {
    int sub_018e83a0();
};

// @baa 0x018e83a0
int C_018e83a0::sub_018e83a0()
{
    return *(BYTE *)(this + 0x2d);
}

struct C_018e83f0 {
    int sub_018e83f0();
};

// @baa 0x018e83f0
int C_018e83f0::sub_018e83f0()
{
    return *(unsigned char *)(this + 6);
}

struct C_018e8620 {
    void sub_018e8620();
};

// @baa 0x018e8620
void C_018e8620::sub_018e8620(void)
{
    int param_1 = (int)this;
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0x7fff;
  return;
}

struct C_018e87b0 {
    char pad_0x18[0x18];
    UINT sub_018e87b0();
};

// @baa 0x018e87b0
UINT C_018e87b0::sub_018e87b0()
{
    return (UINT)(BYTE)pad_0x18[0x18];
}

struct M_018e89f0 { void sub_01932f00(); };

struct C_018e89f0 { char pad[1836]; M_018e89f0 m; void sub_018e89f0(); };

// @baa 0x018e89f0
void C_018e89f0::sub_018e89f0() { m.sub_01932f00(); }

struct C_018e8a20 { int a, b; C_018e8a20(int, int); };

// @baa 0x018e8a20
C_018e8a20::C_018e8a20(int x, int y) : a(x), b(y) {}

struct C_018e8c00 {
    void sub_018e8c00(int);
};

// @baa 0x018e8c00
void C_018e8c00::sub_018e8c00(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if (param_2 == 0) {
    param_2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x48) = param_2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x1c) = param_2;
    *(int *)(iVar1 + 0x18) = param_2;
  }
  return;
}

struct C_018e8c20 {
    void sub_018e8c20();
};

extern undefined4 g_023f57a0;
// @baa 0x018e8c20
void C_018e8c20::sub_018e8c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f57a0));
  return;
}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_018e8ec0();
};

struct Object {
    void sub_018dd090();
};

// @baa 0x018e8ec0
void ObjectRef::sub_018e8ec0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_018e90c0 {
    void sub_018e90c0(int);
};

// @baa 0x018e90c0
void C_018e90c0::sub_018e90c0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

struct C_018e90d0 {
    void *field0;
    void *field4;
    C_018e90d0 *sub_018e90d0();
};

// @baa 0x018e90d0
C_018e90d0 *C_018e90d0::sub_018e90d0()
{
    field0 = this;
    field4 = this;
    return this;
}

struct C_018e9180 {
    void sub_018e9180(int);
};

// @baa 0x018e9180
void C_018e9180::sub_018e9180(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

struct C_018e9190 {
    void *field0;
    void *field4;
    C_018e9190 *sub_018e9190();
};

// @baa 0x018e9190
C_018e9190 *C_018e9190::sub_018e9190()
{
    field0 = this;
    field4 = this;
    return this;
}

struct C_018e9250 { int a; C_018e9250(int); };

// @baa 0x018e9250
C_018e9250::C_018e9250(int x) : a(x) {}

struct Object_018e9260;
struct ObjectRef_018e9260 {
    Object_018e9260* ObjectPtr; // 0x00
    void sub_018e9260();
};

struct Object_018e9260 {
    void sub_01925010();
};

// @baa 0x018e9260
void ObjectRef_018e9260::sub_018e9260()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_01925010();
}

struct Object_018e92e0;
struct ObjectRef_018e92e0 {
    Object_018e92e0* ObjectPtr; // 0x00
    void sub_018e92e0();
};

struct Object_018e92e0 {
    void sub_01925010();
};

// @baa 0x018e92e0
void ObjectRef_018e92e0::sub_018e92e0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_01925010();
}

struct C_018e9340 { int a; C_018e9340(int); };

// @baa 0x018e9340
C_018e9340::C_018e9340(int x) : a(x) {}

struct C_018e9450 { int a, b, c; C_018e9450(); };

// @baa 0x018e9450
C_018e9450::C_018e9450() : a(0), b(0), c(0) {}

struct C_018e9460 { int a, b, c; C_018e9460(); };

// @baa 0x018e9460
C_018e9460::C_018e9460() : a(0), b(0), c(0) {}

struct C_018e94d0 {
    int sub_018e94d0(int);
};

// @baa 0x018e94d0
int C_018e94d0::sub_018e94d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018e94e0 {
    int sub_018e94e0(int);
};

// @baa 0x018e94e0
int C_018e94e0::sub_018e94e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018e94f0 { C_018e94f0* sub_018e94f0(void); };

// @baa 0x018e94f0
C_018e94f0* C_018e94f0::sub_018e94f0(void) { *(int*)((char*)this + 0) = 0; return this; }

void __stdcall sub_018d7170(int Obj);
// @baa 0x018e9510
void __cdecl sub_018e9510(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x018e9520
void __cdecl sub_018e9520(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x018e9530
void __cdecl sub_018e9530(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x018e9540
void __cdecl sub_018e9540(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x018e9550
void __cdecl sub_018e9550(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x018e9560
void __cdecl sub_018e9560(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct C_018e9570 { int a, b; C_018e9570(int, int); };

// @baa 0x018e9570
C_018e9570::C_018e9570(int x, int y) : a(x), b(y) {}

// @baa 0x018e95c0
void __cdecl sub_018e95c0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x018e9610
void __cdecl sub_018e9610(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct C_018e9620 { int a, b; C_018e9620(int, int); };

// @baa 0x018e9620
C_018e9620::C_018e9620(int x, int y) : a(x), b(y) {}

struct C_018e96e0 {
    int sub_018e96e0(int);
};

// @baa 0x018e96e0
int C_018e96e0::sub_018e96e0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_018e9710 { int a, b; C_018e9710(int, int); };

// @baa 0x018e9710
C_018e9710::C_018e9710(int x, int y) : a(x), b(y) {}

struct C_018e9760 { int a, b; C_018e9760(int, int); };

// @baa 0x018e9760
C_018e9760::C_018e9760(int x, int y) : a(x), b(y) {}

struct C_018e9b90 {
    uint sub_018e9b90();
};

// @baa 0x018e9b90
uint C_018e9b90::sub_018e9b90(void)
{
    int * param_1 = (int *)this;
  uint *puVar1;
  puVar1 = (uint *)*param_1;
  return (uint)(*(byte *)((int)puVar1 + 7) ^ *(byte *)((int)puVar1 + 6)) ^ (uint)(ushort)puVar1[1] ^
         *puVar1 >> 6 ^ *puVar1;
}

// @baa 0x018e9bd0
void __stdcall sub_018e9bd0(void* arg) {}

struct C_018e9ca0 {
    int sub_018e9ca0(int);
};

// @baa 0x018e9ca0
int C_018e9ca0::sub_018e9ca0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

// @baa 0x018e9cb0
uint sub_018e9cb0(uint * param_1)
{
  return *param_1 >> 6 ^ param_1[1] ^ *param_1;
}

struct V_018e9d50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void g(int a0);
};

struct O_018e9d50 { char pad[12]; V_018e9d50* p; void sub_018e9d50(int a0); };

// @baa 0x018e9d50
void O_018e9d50::sub_018e9d50(int a0) { p->g(a0); }

struct V_018e9d60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void g(int a0);
};

struct O_018e9d60 { char pad[12]; V_018e9d60* p; void sub_018e9d60(int a0); };

// @baa 0x018e9d60
void O_018e9d60::sub_018e9d60(int a0) { p->g(a0); }

struct V_018e9d70 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void g(int a0);
};

struct O_018e9d70 { char pad[12]; V_018e9d70* p; void sub_018e9d70(int a0); };

// @baa 0x018e9d70
void O_018e9d70::sub_018e9d70(int a0) { p->g(a0); }

struct V_018e9d80 {
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
    virtual void g(int a0);
};

struct O_018e9d80 { char pad[12]; V_018e9d80* p; void sub_018e9d80(int a0); };

// @baa 0x018e9d80
void O_018e9d80::sub_018e9d80(int a0) { p->g(a0); }

struct C_018e9e10 {
    char pad[12];
    BYTE b;
    C_018e9e10& sub_018e9e10();
};

// @baa 0x018e9e10
C_018e9e10& C_018e9e10::sub_018e9e10()
{
    b = 0;
    return *this;
}

struct C_018ea290{
void sub_018ea290(int,int);
int sub_018ea230();
};

// @baa 0x018ea290
void C_018ea290::sub_018ea290(int param_2,int param_3)
{
int param_1=(int)this;
((C_018ea290*)((*(char**)((char*)this+4))))->sub_018ea230();
if(((param_3==1)&&(**(int**)(param_1+4)!=0))&&(**(int**)(param_1+4)==param_2)){
(*(int(__stdcall**)(int))(*(int*)**(undefined4**)(param_1+4)+0x80))((int)(*(undefined4**)(param_1+4)+3));
**(undefined4**)(param_1+4)=0;
}
return;
}

struct C_018ea7d0 {
    void sub_018ea7d0(float *);
};

// @baa 0x018ea7d0
void C_018ea7d0::sub_018ea7d0(float * param_2)
{
    float * param_1 = (float *)this;
  *param_2 = -*param_1;
  param_2[1] = -param_1[1];
  return;
}

struct C_018ea9a0 { int a, b; C_018ea9a0(int, int); };

// @baa 0x018ea9a0
C_018ea9a0::C_018ea9a0(int x, int y) : a(x), b(y) {}

struct C_018eaa20 { int a, b; C_018eaa20(int, int); };

// @baa 0x018eaa20
C_018eaa20::C_018eaa20(int x, int y) : a(x), b(y) {}

// @baa 0x018eab60
undefined4 sub_018eab60(undefined4 param_1)
{
  return param_1;
}

struct C_018eac00 {
    undefined4 sub_018eac00(uint *);
    int sub_018e9c10(int, int);
};

// @baa 0x018eac00
undefined4 C_018eac00::sub_018eac00(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_018eac00 *)(this))->sub_018e9c10((int)(param_2), (*param_2 >> 6 ^ *param_2) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct M_018eb370 { void sub_018ea440(); };

struct C_018eb370 { char pad[24]; M_018eb370 m; void sub_018eb370(); };

// @baa 0x018eb370
void C_018eb370::sub_018eb370() { m.sub_018ea440(); }

struct Object_018ec410;
struct ObjectRef_018ec410 {
    Object_018ec410* ObjectPtr; // 0x00
    void sub_018ec410();
};

struct Object_018ec410 {
    void sub_018ec370();
};

// @baa 0x018ec410
void ObjectRef_018ec410::sub_018ec410()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018ec370();
}

struct C_018ec7d0 {
    undefined4 sub_018ec7d0(uint *);
    int sub_018ec230(int, int);
};

// @baa 0x018ec7d0
undefined4 C_018ec7d0::sub_018ec7d0(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_018ec7d0 *)(this))->sub_018ec230((int)(param_2), (*param_2 >> 6 ^ param_2[1] ^ *param_2) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_018ed1d0 { int a, b, c; C_018ed1d0(); };

// @baa 0x018ed1d0
C_018ed1d0::C_018ed1d0() : a(0), b(0), c(0) {}

struct C_018ed260 { void sub_018ebcb0(int); void sub_018ed260(); };

// @baa 0x018ed260
void C_018ed260::sub_018ed260() { sub_018ebcb0(0); }

struct C_018edc50 { int a, b, c; C_018edc50(); };

// @baa 0x018edc50
C_018edc50::C_018edc50() : a(0), b(0), c(0) {}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018ebcb0(int NewNum);
    void sub_018edcc0();
};

void __stdcall sub_018d7170(int A);
// @baa 0x018edcc0
void S018d4a70::sub_018edcc0()
{
    S018d4a70* Self = this;
    sub_018ebcb0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_018ee0e0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018ebcb0(int NewNum);
    void sub_018ee0e0();
};

// @baa 0x018ee0e0
void S018d4a70_018ee0e0::sub_018ee0e0()
{
    S018d4a70_018ee0e0* Self = this;
    sub_018ebcb0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct ObjB {
    int sub_018ede00();
};

struct ObjA {
    int f0;
    ObjB* p4;
    int sub_018ee1b0();
};

// @baa 0x018ee1b0
int ObjA::sub_018ee1b0() { return p4->sub_018ede00(); }

struct S_018eed60 {
    void sub_018eed40(void* a);
};

struct T {
    char pad[0x4c];
    S_018eed60* p;
    void sub_018eed60(void* a);
};

// @baa 0x018eed60
void T::sub_018eed60(void* a) {
    p->sub_018eed40(a);
}
