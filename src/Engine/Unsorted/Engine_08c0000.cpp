// Engine_08c0000.cpp (part 1 of 3): 53 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct T_008c0f70;
// @baa 0x008c0f70
template INT TArray<T_008c0f70*>::RemoveItem(T_008c0f70* const&);

struct C { void sub_008c0ff0(void); };

// @baa 0x008c0ff0
void C::sub_008c0ff0(void) { *(int*)((char*)this + 4) = 0; }

struct T_008c1000;
// @baa 0x008c1000
template INT TArray<T_008c1000*>::RemoveItem(T_008c1000* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_008c1080 { void* Data; int Num; int Max; void sub_008c1080(); };

// @baa 0x008c1080
void C_008c1080::sub_008c1080() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c1200 {
    void sub_008c1200(int);
};

int sub_0053df70(...);
// @baa 0x008c1200
void C_008c1200::sub_008c1200(int param_2)
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

struct C_008c2250 { void* Data; int Num; int Max; void sub_008c2250(); };

// @baa 0x008c2250
void C_008c2250::sub_008c2250() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c22b0 { void* Data; int Num; int Max; void sub_008c22b0(); };

// @baa 0x008c22b0
void C_008c22b0::sub_008c22b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2490 {
    void sub_008c2490(int);
};

// @baa 0x008c2490
void C_008c2490::sub_008c2490(int param_2)
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

struct C_008c24d0 { void* Data; int Num; int Max; void sub_008c24d0(); };

// @baa 0x008c24d0
void C_008c24d0::sub_008c24d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2980 { void* Data; int Num; int Max; void sub_008c2980(); };

// @baa 0x008c2980
void C_008c2980::sub_008c2980() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c29e0 { void* Data; int Num; int Max; void sub_008c29e0(); };

// @baa 0x008c29e0
void C_008c29e0::sub_008c29e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2a40 { void* Data; int Num; int Max; void sub_008c2a40(); };

// @baa 0x008c2a40
void C_008c2a40::sub_008c2a40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x008c2aa0
undefined4 * UObject::sub_008c2aa0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  return param_1;
}

void sub_0040fcc0();
// @baa 0x008c2ca0
void sub_008c2ca0(void) { sub_0040fcc0(); }

// @baa 0x008c2cb0
int UObject::sub_008c2cb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x008c2cc0
int UObject::sub_008c2cc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x008c2cd0
int UObject::sub_008c2cd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x008c38f0
IMPLEMENT_CLASS_AT(USceneCaptureComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 10);

// @baa 0x008c3960
int USceneCaptureComponent::vf_14c(void) { return 0; }

// @baa 0x008c3970
struct C_008c59e0 {
    undefined4 * sub_008c59e0();
};

int sub_005c7a20(void);
extern undefined * g_01f5fed0;
// @baa 0x008c59e0
undefined4 * C_008c59e0::sub_008c59e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = param_1[0x13] | 0x20;
  *param_1 = (undefined4)(&g_01f5fed0);
  return param_1;
}

// @baa 0x008c5b70
float USeqVar_Union::sub_008c5b70(void) { return *(float*)((char*)this + 68); }

// @baa 0x008c5b80
float USeqVar_Union::sub_008c5b80(void) { return *(float*)((char*)this + 72); }

struct C_008cd710 { void sub_008c30b0(int); C_008cd710 *sub_008cd710(int); };

// @baa 0x008cd710
C_008cd710 *C_008cd710::sub_008cd710(int a) { sub_008c30b0(a); return this; }

extern TArray<int> g_026a1ca4;
struct C_008cd7d0 {
    int sub_008cd7d0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x008cd7d0
int C_008cd7d0::sub_008cd7d0()
{
    return g_026a1ca4(Index);
}

struct C_008cd830 { C_008cd830* sub_008cd830(void); };

// @baa 0x008cd830
C_008cd830* C_008cd830::sub_008cd830(void) { return this; }

struct C_008cd840 { C_008cd840* sub_008cd840(void); };

// @baa 0x008cd840
C_008cd840* C_008cd840::sub_008cd840(void) { return this; }

struct C_008cd850 { C_008cd850* sub_008cd850(void); };

// @baa 0x008cd850
C_008cd850* C_008cd850::sub_008cd850(void) { return this; }

struct C_008cd8d0 { C_008cd8d0* sub_008cd8d0(void); };

// @baa 0x008cd8d0
C_008cd8d0* C_008cd8d0::sub_008cd8d0(void) { return this; }

struct C_008cd8e0 { C_008cd8e0* sub_008cd8e0(void); };

// @baa 0x008cd8e0
C_008cd8e0* C_008cd8e0::sub_008cd8e0(void) { return this; }

struct C_008cd8f0 { C_008cd8f0* sub_008cd8f0(void); };

// @baa 0x008cd8f0
C_008cd8f0* C_008cd8f0::sub_008cd8f0(void) { return this; }

struct C_008cd900 { C_008cd900* sub_008cd900(void); };

// @baa 0x008cd900
C_008cd900* C_008cd900::sub_008cd900(void) { return this; }

struct C_008cd910 { C_008cd910* sub_008cd910(void); };

// @baa 0x008cd910
C_008cd910* C_008cd910::sub_008cd910(void) { return this; }

struct C_008cd920 { C_008cd920* sub_008cd920(void); };

// @baa 0x008cd920
C_008cd920* C_008cd920::sub_008cd920(void) { return this; }

struct C_008cd9d0 { void sub_008c31c0(int); C_008cd9d0 *sub_008cd9d0(int); };

// @baa 0x008cd9d0
C_008cd9d0 *C_008cd9d0::sub_008cd9d0(int a) { sub_008c31c0(a); return this; }

struct C_008cd9f0 { void sub_008c3280(int); C_008cd9f0 *sub_008cd9f0(int); };

// @baa 0x008cd9f0
C_008cd9f0 *C_008cd9f0::sub_008cd9f0(int a) { sub_008c3280(a); return this; }

struct C_008cda70 { void sub_008c3340(int); C_008cda70 *sub_008cda70(int); };

// @baa 0x008cda70
C_008cda70 *C_008cda70::sub_008cda70(int a) { sub_008c3340(a); return this; }

struct C_008cda90 { void sub_008c3450(int); C_008cda90 *sub_008cda90(int); };

// @baa 0x008cda90
C_008cda90 *C_008cda90::sub_008cda90(int a) { sub_008c3450(a); return this; }

struct M_008cdbf0 { void sub_00549160(); };

struct C_008cdbf0 { char pad[8]; M_008cdbf0 m; void sub_008cdbf0(); };

// @baa 0x008cdbf0
void C_008cdbf0::sub_008cdbf0() { m.sub_00549160(); }

struct C_008cdd00 { void sub_008c35f0(int); C_008cdd00 *sub_008cdd00(int); };

// @baa 0x008cdd00
C_008cdd00 *C_008cdd00::sub_008cdd00(int a) { sub_008c35f0(a); return this; }

struct C_008cdd20 { void sub_008c3590(int); C_008cdd20 *sub_008cdd20(int); };

// @baa 0x008cdd20
C_008cdd20 *C_008cdd20::sub_008cdd20(int a) { sub_008c3590(a); return this; }

// @baa 0x008ce230
IMPLEMENT_CLASS_AT(USceneCapture2DComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 11);

// @baa 0x008ce290
struct C_008ce2c0 {
    undefined4 * sub_008ce2c0();
};

extern undefined * g_01f60cd0;
// @baa 0x008ce2c0
undefined4 * C_008ce2c0::sub_008ce2c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = param_1[0x13] | 0x20;
  *param_1 = (undefined4)(&g_01f60cd0);
  return param_1;
}

// @baa 0x008ce2e0
IMPLEMENT_CLASS_AT(USceneCaptureCubeMapComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 12);

// @baa 0x008ce340
struct C_008ce370 {
    undefined4 * sub_008ce370();
};

extern undefined * g_01f60e28;
// @baa 0x008ce370
undefined4 * C_008ce370::sub_008ce370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = param_1[0x13] | 0x20;
  *param_1 = (undefined4)(&g_01f60e28);
  return param_1;
}

// @baa 0x008ce390
IMPLEMENT_CLASS_AT(USceneCapturePortalComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 14);

// @baa 0x008ce3f0
struct C_008ce420 {
    undefined4 * sub_008ce420();
};

extern undefined * g_01f60f80;
// @baa 0x008ce420
undefined4 * C_008ce420::sub_008ce420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = param_1[0x13] | 0x20;
  *param_1 = (undefined4)(&g_01f60f80);
  return param_1;
}

// @baa 0x008ce440
IMPLEMENT_CLASS_AT(USceneCaptureReflectComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 13);

// @baa 0x008ce4a0
struct C_008cfce0 {
    int sub_008cfce0(int);
    int sub_008c30b0(int);
};

// @baa 0x008cfce0
int C_008cfce0::sub_008cfce0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  ((C_008cfce0 *)(((char *)this + 0x38)))->sub_008c30b0(param_2 + 0x38);
  return param_1;
}
