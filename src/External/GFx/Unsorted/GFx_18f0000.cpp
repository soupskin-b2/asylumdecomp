// GFx_18f0000.cpp (part 1 of 3): 121 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C {
    void sub_018f0a40();
    int sub_018eed70();
    int sub_018da6d0();
    int sub_018ea400();
    int sub_018ea3c0();
    int sub_018ea440();
    int sub_018ea960();
    int sub_018ea690();
    int sub_018ea650();
    int sub_019368f0();
    int sub_018ea5a0();
};

extern undefined4 g_023f5794;
extern undefined4 g_023f57a0;
// @baa 0x018f0a40
void C::sub_018f0a40(void)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_018eed70();
  ((C *)(((char *)this + 0x9fc)))->sub_018da6d0();
  ((C *)(((char *)this + 0x9a4)))->sub_018ea400();
  ((C *)(((char *)this + 0x990)))->sub_018ea3c0();
  ((C *)(((char *)this + 0x954)))->sub_018ea400();
  ((C *)(((char *)this + 0x940)))->sub_018ea3c0();
  ((C *)(((char *)this + 0x920)))->sub_018ea440();
  ((C *)(((char *)this + 0x904)))->sub_018ea960();
  ((C *)(((char *)this + 0x8ec)))->sub_018ea690();
  ((C *)(((char *)this + 0x8e8)))->sub_018ea650();
  ((C *)(((char *)this + 0x38)))->sub_019368f0();
  ((C *)(((char *)this + 0x20)))->sub_018ea5a0();
  *(undefined ***)(param_1 + 0xc) = (undefined **)((&g_023f5794));
  *(undefined ***)(param_1 + 4) = (undefined **)((&g_023f57a0));
  return;
}

struct C_018f3db0 { int a, b, c; C_018f3db0(); };

// @baa 0x018f3db0
C_018f3db0::C_018f3db0() : a(0), b(0), c(0) {}

struct C_018f4040 {
    void sub_018f3f60(int);
    void sub_018f4040();
};

// @baa 0x018f4040
void C_018f4040::sub_018f4040()
{
    this->sub_018f3f60(1);
}

struct C_018f41a0 {
    void sub_018f41a0();
    int sub_018f4130(int);
};

// @baa 0x018f41a0
void C_018f41a0::sub_018f41a0(void)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  ((C_018f41a0 *)(this))->sub_018f4130(*(undefined4 *)(param_1 + 0x1c + *(int *)(param_1 + 0x24) * 4));
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

struct C_018f4ef0 { int a, b, c; C_018f4ef0(); };

// @baa 0x018f4ef0
C_018f4ef0::C_018f4ef0() : a(0), b(0), c(0) {}

struct C_018f50a0 {
    void sub_018f50a0(undefined4);
};

int __stdcall sub_018e3e30(int, int);
// @baa 0x018f50a0
void C_018f50a0::sub_018f50a0(undefined4 param_2)
{
    int * param_1 = (int *)this;
  sub_018e3e30(*param_1 + 0xc,param_2);
  return;
}

struct C_018f50d0 { int a; C_018f50d0(int); };

// @baa 0x018f50d0
C_018f50d0::C_018f50d0(int x) : a(x) {}

struct S {
    int Unk0; // 0x00
    BYTE sub_018f5110(S* Other);
};

// @baa 0x018f5110
BYTE S::sub_018f5110(S* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_018f5140 {
    void sub_018f5140();
};

extern undefined4 g_023f5994;
// @baa 0x018f5140
void C_018f5140::sub_018f5140(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5994));
  return;
}

struct S_018f51e0 {
    INT Unk00;
    INT Unk04;
    S_018f51e0 *sub_018f51e0();
};

// @baa 0x018f51e0
S_018f51e0 *S_018f51e0::sub_018f51e0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_018f51f0 { int a, b; C_018f51f0(const C_018f51f0 &); };

// @baa 0x018f51f0
C_018f51f0::C_018f51f0(const C_018f51f0 &o) : a(o.a), b(o.b) {}

struct C_018f5210 { int a, b; C_018f5210(const C_018f5210 &); };

// @baa 0x018f5210
C_018f5210::C_018f5210(const C_018f5210 &o) : a(o.a), b(o.b) {}

struct S_018f5230 {
    INT Unk00;
    INT Unk04;
    S_018f5230 *sub_018f5230();
};

// @baa 0x018f5230
S_018f5230 *S_018f5230::sub_018f5230()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_018f5350 {
    void sub_018f5350(undefined4);
    int sub_018da920();
    int sub_018da960();
};

// @baa 0x018f5350
void C_018f5350::sub_018f5350(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018f5350 *)(((char *)this + 8)))->sub_018da920();
  *(undefined4 *)(param_1 + 0x20) = param_2;
  ((C_018f5350 *)(((char *)this + 8)))->sub_018da960();
  return;
}

struct C_018f5400 {
    undefined4 sub_018f5400(undefined4 *);
    int sub_018ddce0(int, int, int, int, int);
};

// @baa 0x018f5400
undefined4 C_018f5400::sub_018f5400(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_018f5400 *)(this))->sub_018ddce0(*(undefined2 *)(param_2 + 3), *param_2, param_2[2], param_2[1], param_2[4]);
  return param_1;
}

struct C_018f5430 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_018f5430* sub_018f5430(INT value);
};

// @baa 0x018f5430
C_018f5430* C_018f5430::sub_018f5430(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct S_018f59a0 {
    int Unk0; // 0x00
    BYTE sub_018f59a0(S_018f59a0* Other);
};

// @baa 0x018f59a0
BYTE S_018f59a0::sub_018f59a0(S_018f59a0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_018f59e0 {
    int Unk0; // 0x00
    BYTE sub_018f59e0(S_018f59e0* Other);
};

// @baa 0x018f59e0
BYTE S_018f59e0::sub_018f59e0(S_018f59e0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_018f5a60 {
    int Unk0; // 0x00
    BYTE sub_018f5a60(S_018f5a60* Other);
};

// @baa 0x018f5a60
BYTE S_018f5a60::sub_018f5a60(S_018f5a60* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_018f5aa0 {
    int Unk0; // 0x00
    BYTE sub_018f5aa0(S_018f5aa0* Other);
};

// @baa 0x018f5aa0
BYTE S_018f5aa0::sub_018f5aa0(S_018f5aa0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_018f5b00 {
    int Unk0; // 0x00
    BYTE sub_018f5b00(S_018f5b00* Other);
};

// @baa 0x018f5b00
BYTE S_018f5b00::sub_018f5b00(S_018f5b00* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_018f5b60 {
    int Unk0; // 0x00
    BYTE sub_018f5b60(S_018f5b60* Other);
};

// @baa 0x018f5b60
BYTE S_018f5b60::sub_018f5b60(S_018f5b60* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_018f5b90 {
    int Unk0; // 0x00
    BYTE sub_018f5b90(S_018f5b90* Other);
};

// @baa 0x018f5b90
BYTE S_018f5b90::sub_018f5b90(S_018f5b90* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_018f5bd0 { int a; C_018f5bd0(int); };

// @baa 0x018f5bd0
C_018f5bd0::C_018f5bd0(int x) : a(x) {}

struct C_018f5c50 {
    undefined4 * sub_018f5c50();
};

int sub_018d3d50(void);
extern undefined * g_023f59d4;
// @baa 0x018f5c50
undefined4 * C_018f5c50::sub_018f5c50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f59d4);
  return param_1;
}

struct S_018f5d40 {
    int Unk0; // 0x00
    BYTE sub_018f5d40(S_018f5d40* Other);
};

// @baa 0x018f5d40
BYTE S_018f5d40::sub_018f5d40(S_018f5d40* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_018f5eb0 {
    undefined4 * sub_018f5eb0();
};

extern undefined * g_023f59dc;
// @baa 0x018f5eb0
undefined4 * C_018f5eb0::sub_018f5eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f59dc);
  return param_1;
}

struct S_018f5ed0 {
    int Unk0; // 0x00
    BYTE sub_018f5ed0(S_018f5ed0* Other);
};

// @baa 0x018f5ed0
BYTE S_018f5ed0::sub_018f5ed0(S_018f5ed0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_018f5f20 {
    int Unk0; // 0x00
    BYTE sub_018f5f20(S_018f5f20* Other);
};

// @baa 0x018f5f20
BYTE S_018f5f20::sub_018f5f20(S_018f5f20* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_018f6030 { int a; C_018f6030(int); };

// @baa 0x018f6030
C_018f6030::C_018f6030(int x) : a(x) {}

struct C_018f6080 { int a; C_018f6080(int); };

// @baa 0x018f6080
C_018f6080::C_018f6080(int x) : a(x) {}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_018f6090();
};

struct Object {
    void sub_018dd090();
};

// @baa 0x018f6090
void ObjectRef::sub_018f6090()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_018f60c0 { int a; C_018f60c0(int); };

// @baa 0x018f60c0
C_018f60c0::C_018f60c0(int x) : a(x) {}

struct ObjectRef_018f60d0 {
    Object* ObjectPtr; // 0x00
    void sub_018f60d0();
};

// @baa 0x018f60d0
void ObjectRef_018f60d0::sub_018f60d0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_018f6100 { int a; C_018f6100(int); };

// @baa 0x018f6100
C_018f6100::C_018f6100(int x) : a(x) {}

struct ObjectRef_018f6110 {
    Object* ObjectPtr; // 0x00
    void sub_018f6110();
};

// @baa 0x018f6110
void ObjectRef_018f6110::sub_018f6110()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_018f6140 {
    undefined4 * sub_018f6140();
};

extern undefined * g_023f59e4;
// @baa 0x018f6140
undefined4 * C_018f6140::sub_018f6140(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f59e4);
  return param_1;
}

struct C_018f6160 { int a; C_018f6160(int); };

// @baa 0x018f6160
C_018f6160::C_018f6160(int x) : a(x) {}

struct C_018f61b0 {
    undefined4 * sub_018f61b0();
};

extern undefined * g_023f59ec;
// @baa 0x018f61b0
undefined4 * C_018f61b0::sub_018f61b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f59ec);
  return param_1;
}

struct C_018f61d0 { int a; C_018f61d0(int); };

// @baa 0x018f61d0
C_018f61d0::C_018f61d0(int x) : a(x) {}

struct C_018f62d0 {
    int sub_018f62d0(int);
};

// @baa 0x018f62d0
int C_018f62d0::sub_018f62d0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_018f62e0 { C_018f62e0* sub_018f62e0(void); };

// @baa 0x018f62e0
C_018f62e0* C_018f62e0::sub_018f62e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f62f0 {
    int sub_018f62f0(int);
};

// @baa 0x018f62f0
int C_018f62f0::sub_018f62f0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_018f6330 { int a, b, c; C_018f6330(); };

// @baa 0x018f6330
C_018f6330::C_018f6330() : a(0), b(0), c(0) {}

struct C_018f6350 { int a, b, c; C_018f6350(); };

// @baa 0x018f6350
C_018f6350::C_018f6350() : a(0), b(0), c(0) {}

struct C_018f6390 { int a, b, c; C_018f6390(); };

// @baa 0x018f6390
C_018f6390::C_018f6390() : a(0), b(0), c(0) {}

struct C_018f63e0 { int a, b; C_018f63e0(int, int); };

// @baa 0x018f63e0
C_018f63e0::C_018f63e0(int x, int y) : a(x), b(y) {}

struct C_018f6420 { int a, b; C_018f6420(int, int); };

// @baa 0x018f6420
C_018f6420::C_018f6420(int x, int y) : a(x), b(y) {}

struct C_018f6450 {
    int sub_018f6450(int);
};

// @baa 0x018f6450
int C_018f6450::sub_018f6450(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_018f6480 {
    int sub_018f6480(int);
};

// @baa 0x018f6480
int C_018f6480::sub_018f6480(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_018f6490 {
    uint sub_018f6490();
};

// @baa 0x018f6490
uint C_018f6490::sub_018f6490(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018f64e0 { int a, b; C_018f64e0(int, int); };

// @baa 0x018f64e0
C_018f64e0::C_018f64e0(int x, int y) : a(x), b(y) {}

struct C_018f6500 { int a, b; C_018f6500(int, int); };

// @baa 0x018f6500
C_018f6500::C_018f6500(int x, int y) : a(x), b(y) {}

struct C_018f6520 { int a, b; C_018f6520(int, int); };

// @baa 0x018f6520
C_018f6520::C_018f6520(int x, int y) : a(x), b(y) {}

struct C_018f6580 { int a, b; C_018f6580(int, int); };

// @baa 0x018f6580
C_018f6580::C_018f6580(int x, int y) : a(x), b(y) {}

struct C_018f65a0 { int a, b; C_018f65a0(int, int); };

// @baa 0x018f65a0
C_018f65a0::C_018f65a0(int x, int y) : a(x), b(y) {}

struct C_018f65c0 {
    int sub_018f65c0(int);
};

// @baa 0x018f65c0
int C_018f65c0::sub_018f65c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018f65d0 {
    uint sub_018f65d0();
};

// @baa 0x018f65d0
uint C_018f65d0::sub_018f65d0(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 8) >> 0x1e;
}

struct C_018f6620 {
    int sub_018f6620(int);
};

// @baa 0x018f6620
int C_018f6620::sub_018f6620(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018f6670 {
    int sub_018f6670(int);
};

// @baa 0x018f6670
int C_018f6670::sub_018f6670(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018f6680 { int a, b; C_018f6680(int, int); };

// @baa 0x018f6680
C_018f6680::C_018f6680(int x, int y) : a(x), b(y) {}

struct C_018f6720 { int a, b; C_018f6720(int, int); };

// @baa 0x018f6720
C_018f6720::C_018f6720(int x, int y) : a(x), b(y) {}

// @baa 0x018f6830
undefined4 * sub_018f6830(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_018f6880 {
    int sub_018f6880(int);
};

// @baa 0x018f6880
int C_018f6880::sub_018f6880(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018f6890 { C_018f6890* sub_018f6890(void); };

// @baa 0x018f6890
C_018f6890* C_018f6890::sub_018f6890(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018f6970 {
    int sub_018f6970(int);
};

// @baa 0x018f6970
int C_018f6970::sub_018f6970(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018f6980 {
    void sub_018f6980(undefined4 *);
    int sub_018e4700(int);
};

// @baa 0x018f6980
void C_018f6980::sub_018f6980(undefined4 * param_2)
{
    int param_1 = (int)this;
  ((C_018f6980 *)(this))->sub_018e4700(*param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)param_2[1];
  return;
}

struct C_018f69a0 {
    int sub_018f69a0(int);
};

// @baa 0x018f69a0
int C_018f69a0::sub_018f69a0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018f69b0 {
    int sub_018f69b0(int);
};

// @baa 0x018f69b0
int C_018f69b0::sub_018f69b0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_018f69c0 {
    void sub_018f69c0(undefined4 *);
    int sub_018e4700(int);
};

// @baa 0x018f69c0
void C_018f69c0::sub_018f69c0(undefined4 * param_2)
{
    int param_1 = (int)this;
  ((C_018f69c0 *)(this))->sub_018e4700(*param_2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)param_2[1];
  return;
}

struct S_018f6bc0 {
    int Unk0; // 0x00
    BYTE sub_018f6bc0(S_018f6bc0* Other);
};

// @baa 0x018f6bc0
BYTE S_018f6bc0::sub_018f6bc0(S_018f6bc0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_018f6c80 {
    undefined4 * sub_018f6c80(undefined4 *);
    int sub_018e4700(int);
};

// @baa 0x018f6c80
undefined4 * C_018f6c80::sub_018f6c80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_018f6c80 *)(((char *)this + 4)))->sub_018e4700((int)(param_2 + 1));
  return param_1;
}

struct C_018f6ca0 {
    int sub_018f6ca0(int);
    int sub_018e4700(int);
};

// @baa 0x018f6ca0
int C_018f6ca0::sub_018f6ca0(int param_2)
{
    int param_1 = (int)this;
  ((C_018f6ca0 *)(this))->sub_018e4700(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}

struct C_018f6cc0 {
    int sub_018f6cc0(int);
    int sub_018e4700(int);
};

// @baa 0x018f6cc0
int C_018f6cc0::sub_018f6cc0(int param_2)
{
    int param_1 = (int)this;
  ((C_018f6cc0 *)(this))->sub_018e4700(param_2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}

struct C_018f6ce0 {
    int sub_018f6ce0(int);
};

// @baa 0x018f6ce0
int C_018f6ce0::sub_018f6ce0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

// @baa 0x018f6cf0
uint sub_018f6cf0(uint * param_1)
{
  return *param_1 >> 8 ^ *param_1;
}

struct S_018f6d00 {
    int Unk0; // 0x00
    BYTE sub_018f6d00(S_018f6d00* Other);
};

// @baa 0x018f6d00
BYTE S_018f6d00::sub_018f6d00(S_018f6d00* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct V_018f6f10 {
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
    virtual void g();
};

struct O_018f6f10 { char pad[12]; V_018f6f10* p; void sub_018f6f10(); };

// @baa 0x018f6f10
void O_018f6f10::sub_018f6f10() { p->g(); }

struct Inner {
    char pad[0x6c];
    DWORD x;
};

struct Outer {
    char pad[0x24];
    Inner* p;
    uint sub_018f6fd0() volatile;
} volatile;

// @baa 0x018f6fd0
uint Outer::sub_018f6fd0() volatile
{
    Inner* tmp = p;
    return tmp->x & 0xf;
}

struct C_018f6fe0 {
    char pad[0x24];
    Inner* p;
    uint sub_018f6fe0() volatile;
};

// @baa 0x018f6fe0
uint C_018f6fe0::sub_018f6fe0() volatile
{
    Inner* tmp = p;
    return tmp->x & 0xfffffff0;
}

struct GFxCharacterDef;
struct GFxFontDef;
class GFxCharacterDefC {
public:
    BYTE sub_018f7170(GFxCharacterDef* p1, GFxFontDef* p2, GFxCharacterDef* p3);
};

// @baa 0x018f7170
BYTE GFxCharacterDefC::sub_018f7170(GFxCharacterDef* p1, GFxFontDef* p2, GFxCharacterDef* p3) { return 0; }

struct C_018f7340 {
    void sub_018f7340(undefined4 *);
    int sub_018da920();
    int sub_018da960();
};

// @baa 0x018f7340
void C_018f7340::sub_018f7340(undefined4 * param_2)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  ((C_018f7340 *)(((char *)this + 0xe4)))->sub_018da920();
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x74) * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  ((C_018f7340 *)(((char *)this + 0xe4)))->sub_018da960();
  return;
}

struct C_018f7380 {
    void sub_018f7380(undefined4 *);
    int sub_018da920();
    int sub_018da960();
};

// @baa 0x018f7380
void C_018f7380::sub_018f7380(undefined4 * param_2)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  ((C_018f7380 *)(((char *)this + 0xe4)))->sub_018da920();
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x74) * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  ((C_018f7380 *)(((char *)this + 0xe4)))->sub_018da960();
  return;
}

struct C_018f7490 {
    undefined4 sub_018f7490();
    int sub_018da920();
    int sub_018da960();
};

// @baa 0x018f7490
undefined4 C_018f7490::sub_018f7490(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_018f7490 *)(((char *)this + 0xe4)))->sub_018da920();
  uVar1 = *(undefined4 *)(param_1 + 0x108);
  ((C_018f7490 *)(((char *)this + 0xe4)))->sub_018da960();
  return uVar1;
}

struct C_018f7670 {
    undefined4 sub_018f7670(int);
    int sub_018e5280(int);
};

// @baa 0x018f7670
undefined4 C_018f7670::sub_018f7670(int param_2)
{
    int param_1 = (int)this;
  char cVar1;
  if ((((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) &&
       (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) &&
      (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
     (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))) {
    cVar1 = ((C_018f7670 *)(((char *)this + 0x10)))->sub_018e5280(param_2 + 0x10);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))) {
      return 1;
    }
  }
  return 0;
}

struct C_018f7b60 {
    uint sub_018f7b60();
    int sub_018f7a90();
};

// @baa 0x018f7b60
uint C_018f7b60::sub_018f7b60(void)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = ((C_018f7b60 *)((*(char **)((char *)this + 0x14))))->sub_018f7a90();
  return uVar2 ^ uVar1 >> 7 ^ uVar1;
}

struct C_018f7b80 {
    undefined4 sub_018f7b80(int);
    int sub_018f7ab0(int);
};

// @baa 0x018f7b80
undefined4 C_018f7b80::sub_018f7b80(int param_2)
{
    int param_1 = (int)this;
  char cVar1;
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
    cVar1 = ((C_018f7b80 *)((*(char **)((char *)this + 0x14))))->sub_018f7ab0(*(undefined4 *)(param_2 + 0x14));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

struct C_018f7ff0 { int a, b; C_018f7ff0(int, int); };

// @baa 0x018f7ff0
C_018f7ff0::C_018f7ff0(int x, int y) : a(x), b(y) {}

struct C_018f8010 { int a, b; C_018f8010(int, int); };

// @baa 0x018f8010
C_018f8010::C_018f8010(int x, int y) : a(x), b(y) {}

struct C_018f8160 { int a, b; C_018f8160(int, int); };

// @baa 0x018f8160
C_018f8160::C_018f8160(int x, int y) : a(x), b(y) {}

struct C_018f8270 { int a, b; C_018f8270(int, int); };

// @baa 0x018f8270
C_018f8270::C_018f8270(int x, int y) : a(x), b(y) {}

struct Inner_018f8cd0 {
    bool sub_018f7430(uint arg1);
};

struct C_018f8cd0 {
    char _pad[0x1c];
    Inner_018f8cd0* p;
    bool sub_018f8cd0(uint arg1);
};

// @baa 0x018f8cd0
bool C_018f8cd0::sub_018f8cd0(uint arg1)
{
    return p->sub_018f7430(arg1);
}

struct Base {
    virtual void v0(int);
    virtual void v1(int);
    virtual void f(int);
};

struct C_018f8ed0 {
    char pad[0x10];
    Base b;
    void sub_018f8ed0(int);
};

// @baa 0x018f8ed0
void C_018f8ed0::sub_018f8ed0(int a) { b.f(a); }

struct B {
    virtual void g();
    char pad[12];
};

struct T {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
};

struct C_018f8ee0 {
    B b;
    T t;
    void sub_018f8ee0();
};

// @baa 0x018f8ee0
void C_018f8ee0::sub_018f8ee0() { t.f16(); }

struct Inner_018f8ef0 {
    char pad[0x44];
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
    virtual void method();
};

struct GFxShapeCharacterDef {
    char pad[0x0c];
    Inner_018f8ef0 member;
    char pad2[0x24];
    virtual void sub_018f8ef0();
};

// @baa 0x018f8ef0
void GFxShapeCharacterDef::sub_018f8ef0()
{
    member.method();
}

void Inner_018f8ef0::method() {}

struct C_018f8f30 {
    void sub_018f8f30();
    int sub_01929d10();
};

extern undefined4 g_023f4ed0;
// @baa 0x018f8f30
void C_018f8f30::sub_018f8f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018f8f30 *)(((char *)this + 0x10)))->sub_01929d10();
  *param_1 = (undefined4)((&g_023f4ed0));
  return;
}

struct A_018f90c0 { virtual void sub_018f9090(); char pad[8]; };

struct B_018f90c0 { virtual void sub_018f9090(); };

struct C_018f90c0 : A_018f90c0, B_018f90c0 { virtual void sub_018f9090(); C_018f90c0(); };

C_018f90c0::C_018f90c0() {}

// @baa 0x018f90c0
void C_018f90c0::sub_018f9090() {}

struct A_018f9170 { virtual void sub_018fa240(); char pad[8]; };

struct B_018f9170 { virtual void sub_018fa240(); };

struct C_018f9170 : A_018f9170, B_018f9170 { virtual void sub_018fa240(); C_018f9170(); };

C_018f9170::C_018f9170() {}

// @baa 0x018f9170
void C_018f9170::sub_018fa240() {}

struct Inner_018f9180 {
    bool sub_018f56f0(uint arg1);
};

struct C_018f9180 {
    char _pad[0x1c];
    Inner_018f9180* p;
    bool sub_018f9180(uint arg1);
};

// @baa 0x018f9180
bool C_018f9180::sub_018f9180(uint arg1)
{
    return p->sub_018f56f0(arg1);
}

struct C_018f9230 {
    undefined4 sub_018f9230();
};

// @baa 0x018f9230
undefined4 C_018f9230::sub_018f9230(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 100);
}

struct Inner_018f9440 {
    bool sub_018f7310(uint arg1);
};

struct C_018f9440 {
    char _pad[0x1c];
    Inner_018f9440* p;
    bool sub_018f9440(uint arg1);
};

// @baa 0x018f9440
bool C_018f9440::sub_018f9440(uint arg1)
{
    return p->sub_018f7310(arg1);
}

struct C_018f94c0 {
    DWORD sub_018f94c0();
};

// @baa 0x018f94c0
DWORD C_018f94c0::sub_018f94c0() {
    DWORD* p = *(DWORD**)(this + 0x1c);
    volatile DWORD* q = p + 0x24;
    return *q;
}

struct C_018fa1b0 {
    char pad[0x1c];
    DWORD x_1c;
    DWORD sub_018fa1b0();
};

// @baa 0x018fa1b0
DWORD C_018fa1b0::sub_018fa1b0()
{
    volatile DWORD *p = (volatile DWORD *)x_1c;
    p += 0xa8 / 4;
    return *p;
}

struct C_018fa1e0 {
    void sub_018fa1e0(undefined4);
    int sub_018f8fc0(int);
    int sub_018f5630(int, int);
};

// @baa 0x018fa1e0
void C_018fa1e0::sub_018fa1e0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018fa1e0 *)(((char *)this + 0x24)))->sub_018f8fc0(param_2);
  ((C_018fa1e0 *)(this))->sub_018f5630(*(undefined4 *)(param_1 + 0x74), 1);
  return;
}

struct C_018fa3c0 { void sub_018f9840(int); void sub_018fa3c0(); };

// @baa 0x018fa3c0
void C_018fa3c0::sub_018fa3c0() { sub_018f9840(0); }

struct C_018fa3d0 { void sub_018f9720(int); void sub_018fa3d0(); };

// @baa 0x018fa3d0
void C_018fa3d0::sub_018fa3d0() { sub_018f9720(0); }

struct C_018fa3e0 { void sub_018f9950(int); void sub_018fa3e0(); };

// @baa 0x018fa3e0
void C_018fa3e0::sub_018fa3e0() { sub_018f9950(0); }

struct C_018fa630 {
    undefined4 sub_018fa630(uint *);
    int sub_018f9ee0(int, int);
};

// @baa 0x018fa630
undefined4 C_018fa630::sub_018fa630(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_018fa630 *)(this))->sub_018f9ee0((int)(param_2), (*param_2 >> 8 ^ *param_2) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_018fa7f0 {
    void sub_018fa7f0();
    int sub_018da920();
    int sub_018f9720(int);
    int sub_018da960();
    int sub_018f5630(int, int);
};

// @baa 0x018fa7f0
void C_018fa7f0::sub_018fa7f0(void)
{
    int param_1 = (int)this;
  ((C_018fa7f0 *)(((char *)this + 0xe4)))->sub_018da920();
  ((C_018fa7f0 *)(((char *)this + 0xf8)))->sub_018f9720(*(undefined4 *)(param_1 + 0x40));
  ((C_018fa7f0 *)(((char *)this + 0x104)))->sub_018f9720(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x110) = 0;
  ((C_018fa7f0 *)(((char *)this + 0xe4)))->sub_018da960();
  ((C_018fa7f0 *)(this))->sub_018f5630(*(undefined4 *)(param_1 + 0x40), 2);
  return;
}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018f9840(int NewNum);
    void sub_018fa990();
};

void __stdcall sub_018d7170(int A);
// @baa 0x018fa990
void S018d4a70::sub_018fa990()
{
    S018d4a70* Self = this;
    sub_018f9840(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_018fa9b0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018f9720(int NewNum);
    void sub_018fa9b0();
};

// @baa 0x018fa9b0
void S018d4a70_018fa9b0::sub_018fa9b0()
{
    S018d4a70_018fa9b0* Self = this;
    sub_018f9720(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_018fa9d0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018f9950(int NewNum);
    void sub_018fa9d0();
};

// @baa 0x018fa9d0
void S018d4a70_018fa9d0::sub_018fa9d0()
{
    S018d4a70_018fa9d0* Self = this;
    sub_018f9950(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_018fb170 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018f9840(int NewNum);
    void sub_018fb170();
};

// @baa 0x018fb170
void S018d4a70_018fb170::sub_018fb170()
{
    S018d4a70_018fb170* Self = this;
    sub_018f9840(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_018fb190 { int a, b, c; C_018fb190(); };

// @baa 0x018fb190
C_018fb190::C_018fb190() : a(0), b(0), c(0) {}

struct S018d4a70_018fb1a0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018f9720(int NewNum);
    void sub_018fb1a0();
};

// @baa 0x018fb1a0
void S018d4a70_018fb1a0::sub_018fb1a0()
{
    S018d4a70_018fb1a0* Self = this;
    sub_018f9720(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_018fb1c0 { int a, b, c; C_018fb1c0(); };

// @baa 0x018fb1c0
C_018fb1c0::C_018fb1c0() : a(0), b(0), c(0) {}

struct S018d4a70_018fb1d0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018f9950(int NewNum);
    void sub_018fb1d0();
};

// @baa 0x018fb1d0
void S018d4a70_018fb1d0::sub_018fb1d0()
{
    S018d4a70_018fb1d0* Self = this;
    sub_018f9950(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_018fb200 { int a, b, c; C_018fb200(); };

// @baa 0x018fb200
C_018fb200::C_018fb200() : a(0), b(0), c(0) {}

struct Inner_018fdc80 {
    bool sub_018fcef0(uint arg1);
};

struct C_018fdc80 {
    char _pad[0x1c];
    Inner_018fdc80* p;
    bool sub_018fdc80(uint arg1);
};

// @baa 0x018fdc80
bool C_018fdc80::sub_018fdc80(uint arg1)
{
    return p->sub_018fcef0(arg1);
}

// GFx: forwards a call to a virtual of an embedded interface object.
struct GFxInterface
{
    virtual void Func00();
    virtual void Func04();
    virtual void Func08();
    virtual void Func0C();
    virtual void Func10();
    virtual void Func14();
    virtual void Func18();
    virtual void Func1C();
    virtual void Func20();
    virtual void Func24();
    virtual void Func28();
    virtual void Func2C();
    virtual void Func30();
    virtual void Func34();
    virtual void Func38();
    virtual void Func3C();
    virtual void Func40();
    virtual void Func44();
    virtual void Func48(void* Param);
};

struct GFxInterfaceOwner
{
    char         Header[0x10];
    GFxInterface Interface;

    void sub_018f8f00(void* Param);
};

// @baa 0x018f8f00
void GFxInterfaceOwner::sub_018f8f00(void* Param)
{
    Interface.Func48(Param);
}

// GFx: a key's hash, taken from the node it points to (the node's value folded with itself shifted right by 8).
struct GFxIdNode
{
    unsigned int Id;

    unsigned int GetHash() const { return (Id >> 8) ^ Id; }
};

struct GFxIdKey
{
    GFxIdNode* pNode;

    unsigned int sub_018f69e0() const;
};

// @baa 0x018f69e0
unsigned int GFxIdKey::sub_018f69e0() const
{
    return pNode->GetHash();
}
