// FluidSurfaceGPUSimulation.cpp (part 1 of 2): 39 functions
// Placed here by: neighbours 35, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
void sub_0040d010();
};

extern undefined4*g_026b0d94;
// @baa 0x0040d010
void C::sub_0040d010(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x258))((int)(*param_1));
}
return;
}

struct C_0065b1b0 { C_0065b1b0* sub_0065b1b0(void); };

// @baa 0x0065b1b0
C_0065b1b0* C_0065b1b0::sub_0065b1b0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00bdf170 { int a, b, c; C_00bdf170(); };

// @baa 0x00bdf170
C_00bdf170::C_00bdf170() : a(0), b(0), c(0) {}

// @baa 0x00bdf180
int ULensFlare::sub_00bdf180(void) { return *(int*)((char*)this + 4); }

// @baa 0x00bdf210
int ULensFlare::sub_00bdf210(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf220
int ULensFlare::sub_00bdf220(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf230
int ULensFlare::sub_00bdf230(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf240
int ULensFlare::sub_00bdf240(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf250
int ULensFlare::sub_00bdf250(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf260
int ULensFlare::sub_00bdf260(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf270
int ULensFlare::sub_00bdf270(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf280
int ULensFlare::sub_00bdf280(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf290
int ULensFlare::sub_00bdf290(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf310
int ULensFlare::sub_00bdf310(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf320
int ULensFlare::sub_00bdf320(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bdf330
int ULensFlare::sub_00bdf330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct A_00bdf340 { virtual void sub_00be1fe0(); char pad[16]; };

struct B_00bdf340 { virtual void sub_00be1fe0(); };

struct C_00bdf340 : A_00bdf340, B_00bdf340 { virtual void sub_00be1fe0(); C_00bdf340(); };

C_00bdf340::C_00bdf340() {}

// @baa 0x00bdf340
void C_00bdf340::sub_00be1fe0() {}

struct A_00bdf350 { virtual void sub_00be1da0(); char pad[16]; };

struct B_00bdf350 { virtual void sub_00be1da0(); };

struct C_00bdf350 : A_00bdf350, B_00bdf350 { virtual void sub_00be1da0(); C_00bdf350(); };

C_00bdf350::C_00bdf350() {}

// @baa 0x00bdf350
void C_00bdf350::sub_00be1da0() {}

struct A_00bdf360 { virtual void sub_00be1f50(); char pad[16]; };

struct B_00bdf360 { virtual void sub_00be1f50(); };

struct C_00bdf360 : A_00bdf360, B_00bdf360 { virtual void sub_00be1f50(); C_00bdf360(); };

C_00bdf360::C_00bdf360() {}

// @baa 0x00bdf360
void C_00bdf360::sub_00be1f50() {}

struct A_00bdf370 { virtual void sub_00be1e30(); char pad[16]; };

struct B_00bdf370 { virtual void sub_00be1e30(); };

struct C_00bdf370 : A_00bdf370, B_00bdf370 { virtual void sub_00be1e30(); C_00bdf370(); };

C_00bdf370::C_00bdf370() {}

// @baa 0x00bdf370
void C_00bdf370::sub_00be1e30() {}

struct A_00bdf380 { virtual void sub_00be1ec0(); char pad[16]; };

struct B_00bdf380 { virtual void sub_00be1ec0(); };

struct C_00bdf380 : A_00bdf380, B_00bdf380 { virtual void sub_00be1ec0(); C_00bdf380(); };

C_00bdf380::C_00bdf380() {}

// @baa 0x00bdf380
void C_00bdf380::sub_00be1ec0() {}

int sub_0053dfa0(...);
int sub_00bdf400(void);
// @baa 0x00bdf470
undefined4 ULensFlare::sub_00bdf470(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bdf400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00716170(...);
// @baa 0x00bdf8c0
void ULensFlare::sub_00bdf8c0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  return;
}

extern char g_01ecdfc8[];
// @baa 0x00bdf8f0
void ULensFlare::sub_00bdf8f0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

// @baa 0x00bdf900
undefined4 * ULensFlare::sub_00bdf900(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00bdfb30(void);
// @baa 0x00be1ad0
undefined4 ULensFlare::sub_00be1ad0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bdfb30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_007249d0(void);
// @baa 0x00be1da0
undefined4 ULensFlare::sub_00be1da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00be1e30
undefined4 ULensFlare::sub_00be1e30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00be1ec0
undefined4 ULensFlare::sub_00be1ec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00be1f50
undefined4 ULensFlare::sub_00be1f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00be1fe0
undefined4 ULensFlare::sub_00be1fe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
extern undefined4 g_01f3de50;
extern undefined4 g_01f3de54;
// @baa 0x00be2000
void ULensFlare::sub_00be2000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f3de54);
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)(&g_01f3de50);
  param_1[10] = (undefined4)(&g_01ec1274);
  if (param_1[0xb] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

// @baa 0x00be20c0
void ULensFlare::sub_00be20c0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

// @baa 0x00be20d0
undefined4 * ULensFlare::sub_00be20d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df40(...);
extern undefined * g_02020264;
// @baa 0x00be20f0
undefined4 * sub_00be20f0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x3c,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *puVar1 = (undefined4)(&g_02020264);
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

int sub_00656490(void);
// @baa 0x00be21e0
undefined4 ULensFlare::sub_00be21e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026c0160[];
// @baa 0x00be2370
int sub_00be2370(void) { return (int)g_026c0160; }

int sub_00656790(void);
extern undefined * g_02020298;
// @baa 0x00be2380
void ULensFlare::sub_00be2380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02020298);
  sub_00656790();
  return;
}

int sub_00be22f0(void);
extern undefined * g_020202c8;
// @baa 0x00be2390
undefined4 * ULensFlare::sub_00be2390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00be22f0();
  *param_1 = (undefined4)(&g_020202c8);
  param_1[0x70] = 1;
  return param_1;
}
