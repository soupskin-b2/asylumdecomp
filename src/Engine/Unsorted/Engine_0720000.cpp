// Engine_0720000.cpp (part 1 of 7): 207 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00720530();
};

// @baa 0x00720530
int C::sub_00720530(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xc0;
}

struct C_007208f0{
void sub_007208f0();
};

extern undefined4*g_026b0d94;
// @baa 0x007208f0
void C_007208f0::sub_007208f0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(DWORD*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x23c))((int)(iVar1));
}
return;
}

int sub_0053df40(...);
extern undefined * g_01eee488;
// @baa 0x007209c0
undefined4 * sub_007209c0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x44,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01eee488);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined2 *)((int)puVar1 + 0x2a) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0xf) = 0;
    *(undefined2 *)((int)puVar1 + 0x42) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

extern undefined * g_01eee558;
// @baa 0x00720a10
undefined4 * sub_00720a10(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(100,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined2 *)((int)puVar1 + 0x2a) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0xf) = 0;
    *(undefined2 *)((int)puVar1 + 0x42) = 0;
    *puVar1 = (undefined4)(&g_01eee558);
    *(undefined2 *)(puVar1 + 0x12) = 0;
    *(undefined2 *)((int)puVar1 + 0x4e) = 0;
    *(undefined2 *)(puVar1 + 0x15) = 0;
    *(undefined2 *)((int)puVar1 + 0x5a) = 0;
    *(undefined2 *)(puVar1 + 0x18) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

void sub_0071d9e0();
// @baa 0x00722830
void sub_00722830(void) { sub_0071d9e0(); }

int sub_00662920(...);
// @baa 0x00722840
void sub_00722840(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  return;
}

// @baa 0x00722880
void sub_00722880(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  return;
}

// @baa 0x007228c0
undefined4 sub_007228c0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x007228e0
undefined4 sub_007228e0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x00722900
undefined4 sub_00722900(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x00722920
undefined4 sub_00722920(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00722940
undefined4 sub_00722940(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00722960
undefined4 sub_00722960(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00722980
bool sub_00722980(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00722990
bool sub_00722990(int param_1)
{
  return param_1 != 3;
}

// @baa 0x007229a0
bool sub_007229a0(int param_1)
{
  return param_1 != 3;
}

int sub_0053dfa0(...);
int sub_007227d0(void);
// @baa 0x007229b0
undefined4 ULensFlare::sub_007229b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007227d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007229f0 {
    void sub_007229f0(int);
};

int sub_0053df70(...);
// @baa 0x007229f0
void C_007229f0::sub_007229f0(int param_2)
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

struct C_00722a30 {
    int sub_00722a30();
};

// @baa 0x00722a30
int C_00722a30::sub_00722a30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00722a50
void __stdcall sub_00722a50(int a0, int a1) {  }

struct C_00722a60 { int sub_00722a60(void); };

// @baa 0x00722a60
int C_00722a60::sub_00722a60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00722b40 {
    int sub_00722b40(int);
};

// @baa 0x00722b40
int C_00722b40::sub_00722b40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00722b80 { int sub_00722b80(void); };

// @baa 0x00722b80
int C_00722b80::sub_00722b80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00722b90 {
    int sub_00722b90();
};

// @baa 0x00722b90
int C_00722b90::sub_00722b90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00722bb0 {
    int sub_00722bb0();
};

// @baa 0x00722bb0
int C_00722bb0::sub_00722bb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00722bd0 {
    int sub_00722bd0();
};

// @baa 0x00722bd0
int C_00722bd0::sub_00722bd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00722cc0
void __stdcall sub_00722cc0(int a0, int a1) {  }

// @baa 0x00722cd0
void __stdcall sub_00722cd0(int a0, int a1) {  }

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00722e00
undefined4 * UObject::sub_00722e00(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  return param_1;
}

// @baa 0x00722e50
int UObject::sub_00722e50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00722e60
undefined4 * UObject::sub_00722e60(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = 0xffffffff;
  return param_1;
}

// @baa 0x00722eb0
int UObject::sub_00722eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00722f20
int UObject::sub_00722f20(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x00722f90
int UObject::sub_00722f90(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x00722fa0
int UObject::sub_00722fa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00722fb0
int UObject::sub_00722fb0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_0040fcc0(void);
// @baa 0x00723d20
undefined4 UObject::sub_00723d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00723d40
undefined4 UObject::sub_00723d40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00722cf0(void);
// @baa 0x00723d60
undefined4 UObject::sub_00723d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00722cf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00723d80
undefined4 UObject::sub_00723d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00723df0
void UObject::sub_00723df0(int param_2)
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

// @baa 0x00723f20
undefined4 * UObject::sub_00723f20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

void sub_0071fc00();
// @baa 0x00723f60
void sub_00723f60(void) { sub_0071fc00(); }

struct C_00724050 { int sub_00724050(void); };

// @baa 0x00724050
int C_00724050::sub_00724050(void) { return *(int*)((char*)this + 104) - *(int*)((char*)this + 144); }

struct C_007240b0 {
    void sub_007240b0();
};

int sub_006563e0(void);
extern undefined * g_01eee7b4;
// @baa 0x007240b0
void C_007240b0::sub_007240b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  return;
}

// @baa 0x007240c0
undefined4 * UTextureCube::sub_007240c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00722730();
// @baa 0x00724100
void sub_00724100(void) { sub_00722730(); }

struct C_00724510 { int a, b, c; C_00724510(); };

// @baa 0x00724510
C_00724510::C_00724510() : a(0), b(0), c(0) {}

int sub_00720700(void);
// @baa 0x00724a80
undefined4 ULensFlare::sub_00724a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00720700();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026b22f4[];
// @baa 0x00724b10
int sub_00724b10(void) { return (int)g_026b22f4; }

// @baa 0x00724b20
int sub_00724b20(void) { return 0; }

void sub_00656790();
// @baa 0x00724b30
void sub_00724b30(void) { sub_00656790(); }

extern char g_026b26a8[];
// @baa 0x00724bf0
int sub_00724bf0(void) { return (int)g_026b26a8; }

extern char g_026b227c[];
// @baa 0x00724ce0
int sub_00724ce0(void) { return (int)g_026b227c; }

struct C_00725910 {
    undefined4 sub_00725910();
    int sub_00721740(int);
};

// @baa 0x00725910
undefined4 C_00725910::sub_00725910(void)
{
    int param_1 = (int)this;
  ((C_00725910 *)((*(char **)((char *)this + 4))))->sub_00721740(*(undefined4 *)(param_1 + 8));
  return 0xc;
}

struct C_007259b0 { int sub_007259b0(void); };

// @baa 0x007259b0
int C_007259b0::sub_007259b0(void) { return *(int*)((char*)this + 68); }

struct C_007259c0 { int sub_007259c0(void); };

// @baa 0x007259c0
int C_007259c0::sub_007259c0(void) { return *(int*)((char*)this + 72); }

struct C_007259d0{
int*sub_007259d0(int*);
};

// @baa 0x007259d0
int*C_007259d0::sub_007259d0(int*param_2)
{
int*param_1=(int*)this;

undefined4 iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1e0))((int)(iVar1));
}
*param_1=iVar1;
if(0!=iVar2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x22c))((int)(iVar2));
}
return param_1;
}

struct C_00725b40 {
    void sub_00725b40();
};

// @baa 0x00725b40
void C_00725b40::sub_00725b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  return;
}

// @baa 0x00725ba0
void UTexture2DComposite::sub_00725ba0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0xb0),0,8);
      *(undefined4 *)(param_1 + 0xb0) = uVar1;
    }
  }
  return;
}

struct C_00725d50 {
    int sub_00725d50();
};

// @baa 0x00725d50
int C_00725d50::sub_00725d50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00725e30 { int sub_00725e30(void); };

// @baa 0x00725e30
int C_00725e30::sub_00725e30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00725e40 {
    int sub_00725e40(int);
};

// @baa 0x00725e40
int C_00725e40::sub_00725e40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00725f10 { int sub_00725f10(void); };

// @baa 0x00725f10
int C_00725f10::sub_00725f10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00725f50 { int a, b, c; C_00725f50(); };

// @baa 0x00725f50
C_00725f50::C_00725f50() : a(0), b(0), c(0) {}

struct C_00725f60 { C_00725f60* sub_00725f60(void); };

// @baa 0x00725f60
C_00725f60* C_00725f60::sub_00725f60(void) { return this; }

struct C_00725fd0 {
    int sub_00725fd0();
};

// @baa 0x00725fd0
int C_00725fd0::sub_00725fd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00725ff0 {
    int sub_00725ff0();
};

// @baa 0x00725ff0
int C_00725ff0::sub_00725ff0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00726010 {
    int sub_00726010();
};

// @baa 0x00726010
int C_00726010::sub_00726010(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00726030 { void* Data; int Num; int Max; void sub_00726030(); };

// @baa 0x00726030
void C_00726030::sub_00726030() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern TArray<int> g_026a1ca4;
struct C_00726090 {
    int sub_00726090();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00726090
int C_00726090::sub_00726090()
{
    return g_026a1ca4(Index);
}

struct C_007260f0 { void* Data; int Num; int Max; void sub_007260f0(); };

// @baa 0x007260f0
void C_007260f0::sub_007260f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00726170 { C_00726170* sub_00726170(void); };

// @baa 0x00726170
C_00726170* C_00726170::sub_00726170(void) { return this; }

void sub_00656490();
// @baa 0x007262c0
void sub_007262c0(void) { sub_00656490(); }

struct C_007262f0{
int*sub_007262f0(int*);
};

// @baa 0x007262f0
int*C_007262f0::sub_007262f0(int*param_2)
{
int*param_1=(int*)this;

undefined4 iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1d8))((int)(iVar1));
}
return param_1;
}

struct D_00726d10 { void sub_00726c70(int a); };

struct C_00726d10 { void sub_00726d10(); };

// @baa 0x00726d10
void C_00726d10::sub_00726d10()
{
    ((D_00726d10 *)((char *)this + 0x14))->sub_00726c70(0);
}

int sub_00726d20(void);
// @baa 0x00726da0
undefined4 ULensFlare::sub_00726da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00726d20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00726ec0 {
    int sub_00726ec0(int);
};

// @baa 0x00726ec0
int C_00726ec0::sub_00726ec0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00726ed0 {
    int sub_00726ed0();
};

// @baa 0x00726ed0
int C_00726ed0::sub_00726ed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00726ee0 {
    void sub_00726ee0(int);
};

// @baa 0x00726ee0
void C_00726ee0::sub_00726ee0(int param_2)
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

// @baa 0x00726f20
void UTexture2D::sub_00726f20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00726f60
int UTexture2D::sub_00726f60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_00726f70 {
    int sub_00722ec0(int, int);
};

// @baa 0x00726f70
int UTexture2D::sub_00726f70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00726f70 *)(this))->sub_00722ec0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x00726fa0
int UTexture2D::sub_00726fa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_00726fb0 {
    int sub_00722f30(int, int);
};

// @baa 0x00726fb0
int UTexture2D::sub_00726fb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00726fb0 *)(this))->sub_00722f30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00726fe0 {
    int sub_00726fe0(int);
};

// @baa 0x00726fe0
int C_00726fe0::sub_00726fe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_007270a0 { int sub_007270a0(void); };

// @baa 0x007270a0
int C_007270a0::sub_007270a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007270b0 {
    int sub_007270b0(int);
};

// @baa 0x007270b0
int C_007270b0::sub_007270b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_view_007270c0 {
    int sub_00722fc0(int, int);
};

// @baa 0x007270c0
int UTexture2D::sub_007270c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_007270c0 *)(this))->sub_00722fc0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

// @baa 0x007270f0
int UTexture2D::sub_007270f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00727100
int UTexture2D::sub_00727100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x00727110
int UTexture2D::sub_00727110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_view_00727120 {
    int sub_007231b0(int, int);
};

// @baa 0x00727120
int UTexture2D::sub_00727120(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00727120 *)(this))->sub_007231b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

// @baa 0x00727150
int UTexture2D::sub_00727150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view_00727160 {
    int sub_007232e0(int, int);
};

// @baa 0x00727160
int UTexture2D::sub_00727160(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00727160 *)(this))->sub_007232e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00727190 {
    int sub_00727190();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00727190
int C_00727190::sub_00727190()
{
    return g_026a1ca4(Index);
}

// @baa 0x00729070
void sub_00729070(void) { sub_0071fc00(); }

int sub_00720a70(void);
int sub_00724d20(...);
extern undefined4 g_026b224c;
// @baa 0x00729080
int sub_00729080(void)
{
  if (g_026b224c == 0) {
    g_026b224c = sub_00724d20(L"Engine");
    sub_00720a70();
  }
  return g_026b224c;
}

// @baa 0x007290d0
int UTexture2DComposite::GetMaterialType(void) { return 16; }

// @baa 0x007290e0
IMPLEMENT_CLASS_AT(UTexture2DComposite, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture2DComposite.cpp", 8);

// @baa 0x00729150
int sub_00656520(void);
// @baa 0x007291e0
undefined4 UTexture2DComposite::sub_007291e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_00729250 { virtual void sub_0072f070(); char pad[16]; };

struct B_00729250 { virtual void sub_0072f070(); };

struct C_00729250 : A_00729250, B_00729250 { virtual void sub_0072f070(); C_00729250(); };

C_00729250::C_00729250() {}

// @baa 0x00729250
void C_00729250::sub_0072f070() {}

void sub_007249d0();
// @baa 0x00729260
void sub_00729260(void) { sub_007249d0(); }

int sub_00724450(void);
// @baa 0x00729270
undefined4 UTexture2DComposite::sub_00729270(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00724450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00729500 {
    int sub_00715e40(int);
    int sub_00724520();
};

// @baa 0x00729500
undefined4 * UTexture2DComposite::sub_00729500(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ((C_view_00729500 *)(this))->sub_00715e40(param_2);
  ((C_view_00729500 *)(this))->sub_00724520();
  return param_1;
}

struct C_00729530 { void sub_00724620(int); void sub_00729530(); };

// @baa 0x00729530
void C_00729530::sub_00729530() { sub_00724620(0); }

struct A_00729590 { virtual void sub_0072f190(); char pad[16]; };

struct B_00729590 { virtual void sub_0072f190(); };

struct C_00729590 : A_00729590, B_00729590 { virtual void sub_0072f190(); C_00729590(); };

C_00729590::C_00729590() {}

// @baa 0x00729590
void C_00729590::sub_0072f190() {}

// @baa 0x007295a0
void sub_007295a0(void) { sub_007249d0(); }

struct A_00729600 { virtual void sub_0072f210(); char pad[16]; };

struct B_00729600 { virtual void sub_0072f210(); };

struct C_00729600 : A_00729600, B_00729600 { virtual void sub_0072f210(); C_00729600(); };

C_00729600::C_00729600() {}

// @baa 0x00729600
void C_00729600::sub_0072f210() {}

// @baa 0x00729610
void sub_00729610(void) { sub_007249d0(); }

struct C_00729bb0 {
    undefined4 sub_00729bb0();
};

// @baa 0x00729bb0
undefined4 C_00729bb0::sub_00729bb0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct A_00729bc0 { virtual void sub_0072f2b0(); char pad[16]; };

struct B_00729bc0 { virtual void sub_0072f2b0(); };

struct C_00729bc0 : A_00729bc0, B_00729bc0 { virtual void sub_0072f2b0(); C_00729bc0(); };

C_00729bc0::C_00729bc0() {}

// @baa 0x00729bc0
void C_00729bc0::sub_0072f2b0() {}

// @baa 0x00729ce0
void sub_00729ce0(void) { sub_007249d0(); }

extern char g_026b2504[];
// @baa 0x00729e50
int sub_00729e50(void) { return (int)g_026b2504; }

struct C_00729e60 {
    int sub_00729e60();
};

// @baa 0x00729e60
int C_00729e60::sub_00729e60(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x90;
  }
  return 0;
}

struct C_00729e70 {
    int sub_00729e70();
};

// @baa 0x00729e70
int C_00729e70::sub_00729e70(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x90;
  }
  return 0;
}

struct C_00729e80 { C_00729e80* sub_00729e80(void); };

// @baa 0x00729e80
C_00729e80* C_00729e80::sub_00729e80(void) { return this; }

struct A_00729e90 { virtual void sub_00729e80(); char pad[140]; };

struct B_00729e90 { virtual void sub_00729e80(); };

struct C_00729e90 : A_00729e90, B_00729e90 { virtual void sub_00729e80(); C_00729e90(); };

C_00729e90::C_00729e90() {}

// @baa 0x00729e90
void C_00729e90::sub_00729e80() {}

struct A_00729ea0 { virtual void sub_00729f10(); char pad[140]; };

struct B_00729ea0 { virtual void sub_00729f10(); };

struct C_00729ea0 : A_00729ea0, B_00729ea0 { virtual void sub_00729f10(); C_00729ea0(); };

C_00729ea0::C_00729ea0() {}

// @baa 0x00729ea0
void C_00729ea0::sub_00729f10() {}

struct C_00729f10 {
    undefined4 sub_00729f10(byte);
};

int sub_00729eb0(void);
// @baa 0x00729f10
undefined4 C_00729f10::sub_00729f10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00729eb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026b26d8[];
// @baa 0x0072a020
int sub_0072a020(void) { return (int)g_026b26d8; }

struct C_0072a030 {
    int sub_0072a030();
};

// @baa 0x0072a030
int C_0072a030::sub_0072a030(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x90;
  }
  return 0;
}

struct C_0072a040 {
    int sub_0072a040();
};

// @baa 0x0072a040
int C_0072a040::sub_0072a040(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x90;
  }
  return 0;
}

struct C_0072a050 { C_0072a050* sub_0072a050(void); };

// @baa 0x0072a050
C_0072a050* C_0072a050::sub_0072a050(void) { return this; }

struct A_0072a060 { virtual void sub_0072a050(); char pad[140]; };

struct B_0072a060 { virtual void sub_0072a050(); };

struct C_0072a060 : A_0072a060, B_0072a060 { virtual void sub_0072a050(); C_0072a060(); };

C_0072a060::C_0072a060() {}

// @baa 0x0072a060
void C_0072a060::sub_0072a050() {}

struct A_0072a070 { virtual void sub_0072a0e0(); char pad[140]; };

struct B_0072a070 { virtual void sub_0072a0e0(); };

struct C_0072a070 : A_0072a070, B_0072a070 { virtual void sub_0072a0e0(); C_0072a070(); };

C_0072a070::C_0072a070() {}

// @baa 0x0072a070
void C_0072a070::sub_0072a0e0() {}

struct C_0072a0e0 {
    undefined4 sub_0072a0e0(byte);
};

int sub_0072a080(void);
// @baa 0x0072a0e0
undefined4 C_0072a0e0::sub_0072a0e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072a080();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026b27c0[];
// @baa 0x0072a1f0
int sub_0072a1f0(void) { return (int)g_026b27c0; }

struct C_0072a200 {
    int sub_0072a200();
};

// @baa 0x0072a200
int C_0072a200::sub_0072a200(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x90;
  }
  return 0;
}

struct C_0072a210 {
    int sub_0072a210();
};

// @baa 0x0072a210
int C_0072a210::sub_0072a210(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 0x90;
  }
  return 0;
}

struct C_0072a220 { C_0072a220* sub_0072a220(void); };

// @baa 0x0072a220
C_0072a220* C_0072a220::sub_0072a220(void) { return this; }

struct A_0072a230 { virtual void sub_0072a2b0(); char pad[140]; };

struct B_0072a230 { virtual void sub_0072a2b0(); };

struct C_0072a230 : A_0072a230, B_0072a230 { virtual void sub_0072a2b0(); C_0072a230(); };

C_0072a230::C_0072a230() {}

// @baa 0x0072a230
void C_0072a230::sub_0072a2b0() {}

struct A_0072a240 { virtual void sub_0072a220(); char pad[140]; };

struct B_0072a240 { virtual void sub_0072a220(); };

struct C_0072a240 : A_0072a240, B_0072a240 { virtual void sub_0072a220(); C_0072a240(); };

C_0072a240::C_0072a240() {}

// @baa 0x0072a240
void C_0072a240::sub_0072a220() {}

struct C_0072a2b0 {
    undefined4 sub_0072a2b0(byte);
};

int sub_0072a250(void);
// @baa 0x0072a2b0
undefined4 C_0072a2b0::sub_0072a2b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072a250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0072a520 { int a, b, c; C_0072a520(); };

// @baa 0x0072a520
C_0072a520::C_0072a520() : a(0), b(0), c(0) {}

// @baa 0x0072a530
IMPLEMENT_CLASS_AT(UTexture2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture2D.cpp", 25);

// @baa 0x0072a640
bool UTexture2D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0072b0e0
// @baa 0x0072b1f0
bool UTexture2DComposite::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0072b230
undefined4 * UTextureCube::sub_0072b230(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee7b4);
  sub_006563e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0072b7a0 {
    int sub_0072b7a0();
};

// @baa 0x0072b7a0
int C_0072b7a0::sub_0072b7a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0072b7b0 {
    int sub_0072b7b0();
};

// @baa 0x0072b7b0
int C_0072b7b0::sub_0072b7b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

// @baa 0x0072ba10
int UTexture2D::sub_0072ba10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x0072ba20
int UTexture2D::sub_0072ba20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x0072ba30
int UTexture2D::sub_0072ba30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0x1c + param_1[5] * 0x28;
}

struct C_view_0072ba80 {
    int sub_007232e0(int, int);
};

// @baa 0x0072ba80
int UTexture2D::sub_0072ba80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0072ba80 *)(this))->sub_007232e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

int sub_0072b820(void);
// @baa 0x0072bb20
undefined4 ULensFlare::sub_0072bb20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072b820();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072bac0(void);
// @baa 0x0072bb40
undefined4 ULensFlare::sub_0072bb40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072bac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_0072bb60 {
    int sub_00727260(int, int);
};

// @baa 0x0072bb60
int UTexture2D::sub_0072bb60(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0072bb60 *)(this))->sub_00727260((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_view_0072bc70 {
    int sub_006bd3b0(int, int);
};

// @baa 0x0072bc70
int UState::sub_0072bc70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0072bc70 *)(this))->sub_006bd3b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_0072bdc0 {
    int sub_0067f360(int, int);
};

// @baa 0x0072bdc0
int UTexture2D::sub_0072bdc0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0072bdc0 *)(this))->sub_0067f360((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

// @baa 0x0072be40
void __stdcall sub_0072be40(int a0) {  }

struct A_0072be50 { virtual void sub_0072cdd0(); char pad[16]; };

struct B_0072be50 { virtual void sub_0072cdd0(); };

struct C_0072be50 : A_0072be50, B_0072be50 { virtual void sub_0072cdd0(); C_0072be50(); };

C_0072be50::C_0072be50() {}

// @baa 0x0072be50
void C_0072be50::sub_0072cdd0() {}

struct A_0072bff0 { virtual void sub_007309d0(); char pad[16]; };

struct B_0072bff0 { virtual void sub_007309d0(); };

struct C_0072bff0 : A_0072bff0, B_0072bff0 { virtual void sub_007309d0(); C_0072bff0(); };

C_0072bff0::C_0072bff0() {}

// @baa 0x0072bff0
void C_0072bff0::sub_007309d0() {}

struct A_0072c060 { virtual void sub_0072cdf0(); char pad[16]; };

struct B_0072c060 { virtual void sub_0072cdf0(); };

struct C_0072c060 : A_0072c060, B_0072c060 { virtual void sub_0072cdf0(); C_0072c060(); };

C_0072c060::C_0072c060() {}

// @baa 0x0072c060
void C_0072c060::sub_0072cdf0() {}

struct A_0072c1a0 { virtual void sub_007309f0(); char pad[16]; };

struct B_0072c1a0 { virtual void sub_007309f0(); };

struct C_0072c1a0 : A_0072c1a0, B_0072c1a0 { virtual void sub_007309f0(); C_0072c1a0(); };

C_0072c1a0::C_0072c1a0() {}

// @baa 0x0072c1a0
void C_0072c1a0::sub_007309f0() {}

struct A_0072c200 { virtual void sub_0072ce10(); char pad[16]; };

struct B_0072c200 { virtual void sub_0072ce10(); };

struct C_0072c200 : A_0072c200, B_0072c200 { virtual void sub_0072ce10(); C_0072c200(); };

C_0072c200::C_0072c200() {}

// @baa 0x0072c200
void C_0072c200::sub_0072ce10() {}

struct A_0072c340 { virtual void sub_00730a10(); char pad[16]; };

struct B_0072c340 { virtual void sub_00730a10(); };

struct C_0072c340 : A_0072c340, B_0072c340 { virtual void sub_00730a10(); C_0072c340(); };

C_0072c340::C_0072c340() {}

// @baa 0x0072c340
void C_0072c340::sub_00730a10() {}

struct A_0072c510 { virtual void sub_0072ce30(); char pad[16]; };

struct B_0072c510 { virtual void sub_0072ce30(); };

struct C_0072c510 : A_0072c510, B_0072c510 { virtual void sub_0072ce30(); C_0072c510(); };

C_0072c510::C_0072c510() {}

// @baa 0x0072c510
void C_0072c510::sub_0072ce30() {}

struct A_0072c6e0 { virtual void sub_00730a30(); char pad[16]; };

struct B_0072c6e0 { virtual void sub_00730a30(); };

struct C_0072c6e0 : A_0072c6e0, B_0072c6e0 { virtual void sub_00730a30(); C_0072c6e0(); };

C_0072c6e0::C_0072c6e0() {}

// @baa 0x0072c6e0
void C_0072c6e0::sub_00730a30() {}

struct A_0072c750 { virtual void sub_0072ce50(); char pad[16]; };

struct B_0072c750 { virtual void sub_0072ce50(); };

struct C_0072c750 : A_0072c750, B_0072c750 { virtual void sub_0072ce50(); C_0072c750(); };

C_0072c750::C_0072c750() {}

// @baa 0x0072c750
void C_0072c750::sub_0072ce50() {}

struct A_0072c8a0 { virtual void sub_00730a50(); char pad[16]; };

struct B_0072c8a0 { virtual void sub_00730a50(); };

struct C_0072c8a0 : A_0072c8a0, B_0072c8a0 { virtual void sub_00730a50(); C_0072c8a0(); };

C_0072c8a0::C_0072c8a0() {}

// @baa 0x0072c8a0
void C_0072c8a0::sub_00730a50() {}

struct A_0072c910 { virtual void sub_0072ce70(); char pad[16]; };

struct B_0072c910 { virtual void sub_0072ce70(); };

struct C_0072c910 : A_0072c910, B_0072c910 { virtual void sub_0072ce70(); C_0072c910(); };

C_0072c910::C_0072c910() {}

// @baa 0x0072c910
void C_0072c910::sub_0072ce70() {}

struct A_0072ca50 { virtual void sub_00730a70(); char pad[16]; };

struct B_0072ca50 { virtual void sub_00730a70(); };

struct C_0072ca50 : A_0072ca50, B_0072ca50 { virtual void sub_00730a70(); C_0072ca50(); };

C_0072ca50::C_0072ca50() {}

// @baa 0x0072ca50
void C_0072ca50::sub_00730a70() {}

int sub_00673150(void);
extern undefined4 g_01eef090;
extern undefined * g_01eef098;
// @baa 0x0072ca60
undefined4 * UTexture2D::sub_0072ca60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00673150();
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((int)param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((int)param_1 + 0x8e) = 0;
  *param_1 = (undefined4)(&g_01eef098);
  param_1[5] = (undefined4)(&g_01eef090);
  return param_1;
}

struct A_0072cb80 { virtual void sub_00730a90(); char pad[16]; };

struct B_0072cb80 { virtual void sub_00730a90(); };

struct C_0072cb80 : A_0072cb80, B_0072cb80 { virtual void sub_00730a90(); C_0072cb80(); };

C_0072cb80::C_0072cb80() {}

// @baa 0x0072cb80
void C_0072cb80::sub_00730a90() {}

int sub_0072be60(void);
// @baa 0x0072cdd0
undefined4 UTexture2D::sub_0072cdd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072be60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072c070(void);
// @baa 0x0072cdf0
undefined4 UTexture2D::sub_0072cdf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072c070();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072c210(void);
// @baa 0x0072ce10
undefined4 UTexture2D::sub_0072ce10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072c210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072c520(void);
// @baa 0x0072ce30
undefined4 UTexture2D::sub_0072ce30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072c520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072c760(void);
// @baa 0x0072ce50
undefined4 UTexture2D::sub_0072ce50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072c760();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072c920(void);
// @baa 0x0072ce70
undefined4 UTexture2D::sub_0072ce70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072c920();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0072d0d0
void sub_0072d0d0(void) { sub_007249d0(); }

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_0072d240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072d240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072d240& operator++();
};

TConstSetBitIterator_0072d240::TConstSetBitIterator_0072d240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072d240
TConstSetBitIterator_0072d240& TConstSetBitIterator_0072d240::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0072d520 {
    int sub_00729620(int);
};

// @baa 0x0072d520
int UTexture2D::sub_0072d520(undefined4 * param_2)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_view_0072d520 *)(this))->sub_00729620(*param_2);
  iVar1 = *(int *)param_2[1];
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return param_1;
}

struct C_view_0072d740 {
    int sub_00729620(int);
};

// @baa 0x0072d740
int UTexture2D::sub_0072d740(undefined4 * param_2)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_view_0072d740 *)(this))->sub_00729620(*param_2);
  iVar1 = *(int *)param_2[1];
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_0072d8d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072d8d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072d8d0& operator++();
};

TConstSetBitIterator_0072d8d0::TConstSetBitIterator_0072d8d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072d8d0
TConstSetBitIterator_0072d8d0& TConstSetBitIterator_0072d8d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072d8f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072d8f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072d8f0& operator++();
};

TConstSetBitIterator_0072d8f0::TConstSetBitIterator_0072d8f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072d8f0
TConstSetBitIterator_0072d8f0& TConstSetBitIterator_0072d8f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072de50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072de50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072de50& operator++();
};

TConstSetBitIterator_0072de50::TConstSetBitIterator_0072de50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072de50
TConstSetBitIterator_0072de50& TConstSetBitIterator_0072de50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e380& operator++();
};

TConstSetBitIterator_0072e380::TConstSetBitIterator_0072e380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e380
TConstSetBitIterator_0072e380& TConstSetBitIterator_0072e380::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e3d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e3d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e3d0& operator++();
};

TConstSetBitIterator_0072e3d0::TConstSetBitIterator_0072e3d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e3d0
TConstSetBitIterator_0072e3d0& TConstSetBitIterator_0072e3d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e470& operator++();
};

TConstSetBitIterator_0072e470::TConstSetBitIterator_0072e470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e470
TConstSetBitIterator_0072e470& TConstSetBitIterator_0072e470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e4c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e4c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e4c0& operator++();
};

TConstSetBitIterator_0072e4c0::TConstSetBitIterator_0072e4c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e4c0
TConstSetBitIterator_0072e4c0& TConstSetBitIterator_0072e4c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e510& operator++();
};

TConstSetBitIterator_0072e510::TConstSetBitIterator_0072e510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e510
TConstSetBitIterator_0072e510& TConstSetBitIterator_0072e510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e560& operator++();
};

TConstSetBitIterator_0072e560::TConstSetBitIterator_0072e560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e560
TConstSetBitIterator_0072e560& TConstSetBitIterator_0072e560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e5b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e5b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e5b0& operator++();
};

TConstSetBitIterator_0072e5b0::TConstSetBitIterator_0072e5b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e5b0
TConstSetBitIterator_0072e5b0& TConstSetBitIterator_0072e5b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e600& operator++();
};

TConstSetBitIterator_0072e600::TConstSetBitIterator_0072e600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e600
TConstSetBitIterator_0072e600& TConstSetBitIterator_0072e600::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e650 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e650(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e650& operator++();
};

TConstSetBitIterator_0072e650::TConstSetBitIterator_0072e650(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e650
TConstSetBitIterator_0072e650& TConstSetBitIterator_0072e650::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e6a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e6a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e6a0& operator++();
};

TConstSetBitIterator_0072e6a0::TConstSetBitIterator_0072e6a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e6a0
TConstSetBitIterator_0072e6a0& TConstSetBitIterator_0072e6a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e6f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e6f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e6f0& operator++();
};

TConstSetBitIterator_0072e6f0::TConstSetBitIterator_0072e6f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e6f0
TConstSetBitIterator_0072e6f0& TConstSetBitIterator_0072e6f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e740& operator++();
};

TConstSetBitIterator_0072e740::TConstSetBitIterator_0072e740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e740
TConstSetBitIterator_0072e740& TConstSetBitIterator_0072e740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e790& operator++();
};

TConstSetBitIterator_0072e790::TConstSetBitIterator_0072e790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e790
TConstSetBitIterator_0072e790& TConstSetBitIterator_0072e790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072e9c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e9c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e9c0& operator++();
};

TConstSetBitIterator_0072e9c0::TConstSetBitIterator_0072e9c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e9c0
TConstSetBitIterator_0072e9c0& TConstSetBitIterator_0072e9c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072ead0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072ead0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072ead0& operator++();
};

TConstSetBitIterator_0072ead0::TConstSetBitIterator_0072ead0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072ead0
TConstSetBitIterator_0072ead0& TConstSetBitIterator_0072ead0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072eb20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072eb20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072eb20& operator++();
};

TConstSetBitIterator_0072eb20::TConstSetBitIterator_0072eb20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072eb20
TConstSetBitIterator_0072eb20& TConstSetBitIterator_0072eb20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072eb70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072eb70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072eb70& operator++();
};

TConstSetBitIterator_0072eb70::TConstSetBitIterator_0072eb70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072eb70
TConstSetBitIterator_0072eb70& TConstSetBitIterator_0072eb70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072ebc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072ebc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072ebc0& operator++();
};

TConstSetBitIterator_0072ebc0::TConstSetBitIterator_0072ebc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072ebc0
TConstSetBitIterator_0072ebc0& TConstSetBitIterator_0072ebc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072ec10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072ec10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072ec10& operator++();
};

TConstSetBitIterator_0072ec10::TConstSetBitIterator_0072ec10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072ec10
TConstSetBitIterator_0072ec10& TConstSetBitIterator_0072ec10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0072ec60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072ec60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072ec60& operator++();
};

TConstSetBitIterator_0072ec60::TConstSetBitIterator_0072ec60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072ec60
TConstSetBitIterator_0072ec60& TConstSetBitIterator_0072ec60::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0072eda0 {
    int sub_00729620(int);
};

// @baa 0x0072eda0
int UTexture2D::sub_0072eda0(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_view_0072eda0 *)(this))->sub_00729620(param_2);
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return param_1;
}

struct C_view_0072edd0 {
    int sub_00729620(int);
};

// @baa 0x0072edd0
int UTexture2D::sub_0072edd0(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_view_0072edd0 *)(this))->sub_00729620(param_2);
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return param_1;
}

// @baa 0x0072ee00
void sub_0072ee00(void) { sub_0071fc00(); }

// @baa 0x0072efa0
struct C_0072fcf0 {
    undefined4 sub_0072fcf0();
    int sub_0072b2f0(int);
};

// @baa 0x0072fcf0
undefined4 C_0072fcf0::sub_0072fcf0(void)
{
    int param_1 = (int)this;
  ((C_0072fcf0 *)((*(char **)((char *)this + 4))))->sub_0072b2f0(param_1 + 8);
  return 0x14;
}

struct M_0072fd50 { void sub_0072bb90(); };

struct C_0072fd50 { char pad[4]; M_0072fd50 m; void sub_0072fd50(); };

// @baa 0x0072fd50
void C_0072fd50::sub_0072fd50() { m.sub_0072bb90(); }

struct C_view_0072fe20 {
    int sub_0067f360(int, int);
};

// @baa 0x0072fe20
int UTexture2D::sub_0072fe20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0072fe20 *)(this))->sub_0067f360((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}
