// UnPhysLevel.cpp (part 1 of 4): 53 functions
// Placed here by: neighbours 46, callers 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_007db2d0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x007db2d0
int C::sub_007db2d0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

int sub_005eae70(...);
int sub_009ebe80(...);
int sub_009ee820(void);
extern undefined4 g_026b63c4;
// @baa 0x009f1760
void sub_009f1760(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b63c4 == 0) {
    g_026b63c4 = sub_009ebe80(L"Engine");
    sub_009ee820();
  }
  sub_005eae70(g_026b63c4,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_009ebac0(...);
int sub_009ee5a0(void);
extern undefined4 g_026b63c0;
// @baa 0x009f17b0
void sub_009f17b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b63c0 == 0) {
    g_026b63c0 = sub_009ebac0(L"Engine");
    sub_009ee5a0();
  }
  sub_005eae70(g_026b63c0,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_009eb300(...);
int sub_009ee310(void);
extern undefined4 g_026b63bc;
// @baa 0x009f1800
void sub_009f1800(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b63bc == 0) {
    g_026b63bc = sub_009eb300(L"Engine");
    sub_009ee310();
  }
  sub_005eae70(g_026b63bc,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct C_00a073f0{
int sub_00a073f0(undefined4*);
};

// @baa 0x00a073f0
int C_00a073f0::sub_00a073f0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

extern char g_01fc0cb8[];
struct C_00a3b430 { C_00a3b430* sub_00a3b430(void); };

// @baa 0x00a3b430
C_00a3b430* C_00a3b430::sub_00a3b430(void) { *(int*)((char*)this + 0) = (int)g_01fc0cb8; return this; }

extern char g_01fc0774[];
struct C_00a3b440 { void sub_00a3b440(void); };

// @baa 0x00a3b440
void C_00a3b440::sub_00a3b440(void) { *(int*)((char*)this + 0) = (int)g_01fc0774; }

// @baa 0x00a3b450
void __stdcall sub_00a3b450(int a0, int a1, int a2, int a3) {  }

// @baa 0x00a3b460
void __stdcall sub_00a3b460(int a0) {  }

struct C_00a3b470 {
    undefined4 * sub_00a3b470(byte);
};

int sub_0053dfa0(...);
// @baa 0x00a3b470
undefined4 * C_00a3b470::sub_00a3b470(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc0774);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    int Unk00;
};

extern void __cdecl sub_0053df40(struct S const &Ref, int Value);
// @baa 0x00a3b4b0
void __stdcall sub_00a3b4b0(struct S const &Ref)
{
    sub_0053df40(Ref, 8);
}

void sub_0053dfa0(int);
struct S_00a3b4f0 {
    void sub_00a3b4f0(int A);
};

// @baa 0x00a3b4f0
void S_00a3b4f0::sub_00a3b4f0(int A)
{
    sub_0053dfa0(A);
}

extern char g_01fc0cd8[];
struct C_00a3b500 { C_00a3b500* sub_00a3b500(void); };

// @baa 0x00a3b500
C_00a3b500* C_00a3b500::sub_00a3b500(void) { *(int*)((char*)this + 0) = (int)g_01fc0cd8; return this; }

extern char g_01fc07f4[];
struct C_00a3b540 { void sub_00a3b540(void); };

// @baa 0x00a3b540
void C_00a3b540::sub_00a3b540(void) { *(int*)((char*)this + 0) = (int)g_01fc07f4; }

int sub_005d88c0(...);
int sub_006d8f70(void);
int sub_006ee740(...);
extern undefined4 g_026b1298;
// @baa 0x00a3b550
void sub_00a3b550(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b1298 == 0) {
    g_026b1298 = sub_006ee740(L"Engine");
    sub_006d8f70();
  }
  sub_005d88c0(g_026b1298,param_1,param_2,param_3);
  return;
}

// @baa 0x00a3b590
void sub_00a3b590(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b63c4 == 0) {
    g_026b63c4 = sub_009ebe80(L"Engine");
    sub_009ee820();
  }
  sub_005d88c0(g_026b63c4,param_1,param_2,param_3);
  return;
}

// @baa 0x00a3b5d0
void sub_00a3b5d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b63c0 == 0) {
    g_026b63c0 = sub_009ebac0(L"Engine");
    sub_009ee5a0();
  }
  sub_005d88c0(g_026b63c0,param_1,param_2,param_3);
  return;
}

// @baa 0x00a3b610
void sub_00a3b610(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b63bc == 0) {
    g_026b63bc = sub_009eb300(L"Engine");
    sub_009ee310();
  }
  sub_005d88c0(g_026b63bc,param_1,param_2,param_3);
  return;
}

struct C_00a3b650 {
    undefined4 * sub_00a3b650(byte);
};

// @baa 0x00a3b650
undefined4 * C_00a3b650::sub_00a3b650(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc07f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc0d48[];
struct C_00a3b670 { C_00a3b670* sub_00a3b670(void); };

// @baa 0x00a3b670
C_00a3b670* C_00a3b670::sub_00a3b670(void) { *(int*)((char*)this + 0) = (int)g_01fc0d48; return this; }

struct C_00a3b730 {
    undefined4 * sub_00a3b730(byte);
};

extern undefined4 g_01fc0800;
// @baa 0x00a3b730
undefined4 * C_00a3b730::sub_00a3b730(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc0800);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc0d64[];
struct C_00a3b750 { C_00a3b750* sub_00a3b750(void); };

// @baa 0x00a3b750
C_00a3b750* C_00a3b750::sub_00a3b750(void) { *(int*)((char*)this + 0) = (int)g_01fc0d64; return this; }

// @baa 0x00a3b760
int __stdcall sub_00a3b760(int a0, int a1, int a2) { return 2; }

// @baa 0x00a3b770
void __stdcall sub_00a3b770(int a0) {  }

extern char g_01fc0764[];
struct C_00a3b780 { void sub_00a3b780(void); };

// @baa 0x00a3b780
void C_00a3b780::sub_00a3b780(void) { *(int*)((char*)this + 0) = (int)g_01fc0764; }

extern char g_01fc0d74[];
struct C_00a3b790 { C_00a3b790* sub_00a3b790(void); };

// @baa 0x00a3b790
C_00a3b790* C_00a3b790::sub_00a3b790(void) { *(int*)((char*)this + 0) = (int)g_01fc0d74; return this; }

extern char g_01fc07c4[];
struct C_00a3b7a0 { void sub_00a3b7a0(void); };

// @baa 0x00a3b7a0
void C_00a3b7a0::sub_00a3b7a0(void) { *(int*)((char*)this + 0) = (int)g_01fc07c4; }

struct C_00a3b7b0 {
    undefined4 * sub_00a3b7b0(byte);
};

// @baa 0x00a3b7b0
undefined4 * C_00a3b7b0::sub_00a3b7b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc0764);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a3b7d0 {
    undefined4 * sub_00a3b7d0(byte);
};

// @baa 0x00a3b7d0
undefined4 * C_00a3b7d0::sub_00a3b7d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc07c4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc0da4[];
struct C_00a3b7f0 { C_00a3b7f0* sub_00a3b7f0(void); };

// @baa 0x00a3b7f0
C_00a3b7f0* C_00a3b7f0::sub_00a3b7f0(void) { *(int*)((char*)this + 0) = (int)g_01fc0da4; return this; }

struct C_00a3b8c0 {
    undefined4 * sub_00a3b8c0(byte);
};

extern undefined4 g_01fc0794;
// @baa 0x00a3b8c0
undefined4 * C_00a3b8c0::sub_00a3b8c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc0794);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00a07170();
// @baa 0x00a44720
void sub_00a44720(void) { sub_00a07170(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00a44c60 { void* Data; int Num; int Max; void sub_00a44c60(); };

// @baa 0x00a44c60
void C_00a44c60::sub_00a44c60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a44cc0 { void* Data; int Num; int Max; void sub_00a44cc0(); };

// @baa 0x00a44cc0
void C_00a44cc0::sub_00a44cc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a44d20 { void* Data; int Num; int Max; void sub_00a44d20(); };

// @baa 0x00a44d20
void C_00a44d20::sub_00a44d20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a44d80 {
    int sub_00a44d80();
};

// @baa 0x00a44d80
int C_00a44d80::sub_00a44d80(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00a44f70 {
    int sub_00a44f70(int);
};

// @baa 0x00a44f70
int C_00a44f70::sub_00a44f70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_00a44f80 { int sub_00a438b0(int); };

// @baa 0x00a44f80
int sub_00a44f80(S_00a44f80 *s, int a) { return s->sub_00a438b0(a); }

struct C_00a44f90 {
    int sub_00a44f90(int);
};

// @baa 0x00a44f90
int C_00a44f90::sub_00a44f90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00a44fa0 {
    int sub_00a44fa0(int);
};

// @baa 0x00a44fa0
int C_00a44fa0::sub_00a44fa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00a44fb0 {
    int sub_00a44fb0(int);
};

// @baa 0x00a44fb0
int C_00a44fb0::sub_00a44fb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a45080 {
    int sub_00a45080(int);
};

// @baa 0x00a45080
int C_00a45080::sub_00a45080(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a45090 {
    int sub_00a45090();
};

// @baa 0x00a45090
int C_00a45090::sub_00a45090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a450b0 {
    int sub_00a450b0();
};

// @baa 0x00a450b0
int C_00a450b0::sub_00a450b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00a450c0 {
    int sub_00a450c0(int);
};

// @baa 0x00a450c0
int C_00a450c0::sub_00a450c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a450d0 {
    int sub_00a450d0();
};

// @baa 0x00a450d0
int C_00a450d0::sub_00a450d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00a450e0 {
    int sub_00a450e0();
};

// @baa 0x00a450e0
int C_00a450e0::sub_00a450e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00a450f0 {
    int sub_00a450f0();
};

// @baa 0x00a450f0
int C_00a450f0::sub_00a450f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00a45100 {
    int sub_00a45100();
};

// @baa 0x00a45100
int C_00a45100::sub_00a45100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00a45110 {
    int sub_00a45110();
};

// @baa 0x00a45110
int C_00a45110::sub_00a45110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00a45120 {
    int sub_00a45120();
};

// @baa 0x00a45120
int C_00a45120::sub_00a45120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

void sub_00a4f770();
// @baa 0x00a51000
void sub_00a51000(void) { sub_00a4f770(); }

struct C_01a399c0 { void sub_01a399c0(int a0); };

// @baa 0x01a399c0
void C_01a399c0::sub_01a399c0(int a0) { *(int*)((char*)this + 2292) = a0; }
