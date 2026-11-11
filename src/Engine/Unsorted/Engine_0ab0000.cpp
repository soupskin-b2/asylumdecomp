// Engine_0ab0000.cpp (part 1 of 3): 750 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00ab19f0
void sub_00ab19f0(void) {  }

// @baa 0x00ab1a00
void sub_00ab1a00(void) {  }

// @baa 0x00ab1a10
float10 sub_00ab1a10(double param_1)
{
  return (float10)param_1;
}

struct C {
    int sub_00ab1ab0();
};

// @baa 0x00ab1ab0
int C::sub_00ab1ab0(void)
{
    int * param_1 = (int *)this;

  return (param_1[3] - param_1[1]) * (param_1[2] - *param_1);
}

struct C_00ab1ac0 {
    float10 sub_00ab1ac0(int);
};

// @baa 0x00ab1ac0
float10 C_00ab1ac0::sub_00ab1ac0(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + param_2 * 4);
}

// @baa 0x00ab1b40
int sub_00ab1b40(int param_1, int param_2, int param_3)
{
  return param_3 + (param_2 + param_1 * 2) * 2;
}

// @baa 0x00ab1b60
int sub_00ab1b60(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01fdb940;
// @baa 0x00ab1b70
undefined4 * UObject::sub_00ab1b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fdb940);
  return param_1;
}

// @baa 0x00ab1b90
IMPLEMENT_CLASS_AT(UScene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Scene.cpp", 26);

// @baa 0x00ab1bf0
struct C_00ab1c30 { int sub_00ab1c30(void); };

// @baa 0x00ab1c30
int C_00ab1c30::sub_00ab1c30(void) { return *(int*)((char*)this + 4); }

struct C_00ab1c40 { int sub_00ab1c40(void); };

// @baa 0x00ab1c40
int C_00ab1c40::sub_00ab1c40(void) { return *(int*)((char*)this + 4); }

struct C_00ab1c50 {
    bool sub_00ab1c50();
};

// @baa 0x00ab1c50
bool C_00ab1c50::sub_00ab1c50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) != 0;
}

struct C_00ab1c60 {
    bool sub_00ab1c60();
};

// @baa 0x00ab1c60
bool C_00ab1c60::sub_00ab1c60(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 8);
}

extern char g_01fdba4c[];
struct C_00ab1c70 { void sub_00ab1c70(void); };

// @baa 0x00ab1c70
void C_00ab1c70::sub_00ab1c70(void) { *(int*)((char*)this + 0) = (int)g_01fdba4c; }

struct C_00ab1c80 {
    undefined4 * sub_00ab1c80(byte);
};

int sub_0053dfa0(...);
// @baa 0x00ab1c80
undefined4 * C_00ab1c80::sub_00ab1c80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fdba4c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ab1ca0 {
    uint sub_00ab1ca0();
};

// @baa 0x00ab1ca0
uint C_00ab1ca0::sub_00ab1ca0(void)
{
    uint * param_1 = (uint *)this;

  return (*param_1 >> 1 | *param_1) & 1;
}

extern char g_01fdba54[];
struct C_00ab1cb0 { void sub_00ab1cb0(void); };

// @baa 0x00ab1cb0
void C_00ab1cb0::sub_00ab1cb0(void) { *(int*)((char*)this + 0) = (int)g_01fdba54; }

struct C_00ab1cc0 {
    undefined4 * sub_00ab1cc0(byte);
};

// @baa 0x00ab1cc0
undefined4 * C_00ab1cc0::sub_00ab1cc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fdba54);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ab1ce0 { char* sub_00ab1ce0(void); };

// @baa 0x00ab1ce0
char* C_00ab1ce0::sub_00ab1ce0(void) { return (char*)this + 32; }

struct C_00ab1cf0 {
    undefined4 sub_00ab1cf0();
};

// @baa 0x00ab1cf0
undefined4 C_00ab1cf0::sub_00ab1cf0(void)
{
    int param_1 = (int)this;
  if (*(float *)(param_1 + 0x88) == 524287.0) {
    return 1;
  }
  return 0;
}

struct C_00ab1d10 {
    float10 sub_00ab1d10();
};

// @baa 0x00ab1d10
float10 C_00ab1d10::sub_00ab1d10(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + 0x90) * (float10)*(float *)(param_1 + 0x8c);
}

struct C_00ab1d40 { int sub_00ab1d40(void); };

// @baa 0x00ab1d40
int C_00ab1d40::sub_00ab1d40(void) { return *(int*)((char*)this + 16); }

struct C_00ab1d60 {
    undefined4 sub_00ab1d60();
};

// @baa 0x00ab1d60
undefined4 C_00ab1d60::sub_00ab1d60(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x10);
}

struct C_00ab1d90 {
    uint sub_00ab1d90();
};

// @baa 0x00ab1d90
uint C_00ab1d90::sub_00ab1d90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 4) & 7;
}

struct C_00ab1da0 {
    uint sub_00ab1da0();
};

// @baa 0x00ab1da0
uint C_00ab1da0::sub_00ab1da0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 4) >> 4 & 1;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00ab1db0();
};

// @baa 0x00ab1db0
S *S::sub_00ab1db0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

// @baa 0x00ab1dc0
void __stdcall sub_00ab1dc0(int a1)
{
}

struct C_00ab1dd0 { char* sub_00ab1dd0(void); };

// @baa 0x00ab1dd0
char* C_00ab1dd0::sub_00ab1dd0(void) { return (char*)this + 440; }

struct C_00ab1de0 { char* sub_00ab1de0(void); };

// @baa 0x00ab1de0
char* C_00ab1de0::sub_00ab1de0(void) { return (char*)this + 140; }

struct C_00ab1df0 { char* sub_00ab1df0(void); };

// @baa 0x00ab1df0
char* C_00ab1df0::sub_00ab1df0(void) { return (char*)this + 212; }

struct C_00ab1e00 { char* sub_00ab1e00(void); };

// @baa 0x00ab1e00
char* C_00ab1e00::sub_00ab1e00(void) { return (char*)this + 152; }

struct C_00ab1e10 { char* sub_00ab1e10(void); };

// @baa 0x00ab1e10
char* C_00ab1e10::sub_00ab1e10(void) { return (char*)this + 272; }

struct C_00ab1e20 { char* sub_00ab1e20(void); };

// @baa 0x00ab1e20
char* C_00ab1e20::sub_00ab1e20(void) { return (char*)this + 284; }

struct C_00ab1e30 {
    void sub_00ab1e30(uint);
};

// @baa 0x00ab1e30
void C_00ab1e30::sub_00ab1e30(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x1c8) =
       *(uint *)(param_1 + 0x1c8) ^ (*(uint *)(param_1 + 0x1c8) ^ param_2) & 1;
  return;
}

struct C_00ab1e50 { int sub_00ab1e50(void); };

// @baa 0x00ab1e50
int C_00ab1e50::sub_00ab1e50(void) { return *(int*)((char*)this + 60); }

struct C_00ab2020 {
    uint sub_00ab2020();
};

// @baa 0x00ab2020
uint C_00ab2020::sub_00ab2020(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x14) & 1;
}

struct C_00ab2030 {
    uint sub_00ab2030();
};

// @baa 0x00ab2030
uint C_00ab2030::sub_00ab2030(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x14) >> 2 & 1;
}

struct C_00ab2040 {
    uint sub_00ab2040();
};

// @baa 0x00ab2040
uint C_00ab2040::sub_00ab2040(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x14) >> 3 & 1;
}

struct C_00ab2050 { int sub_00ab2050(void); };

// @baa 0x00ab2050
int C_00ab2050::sub_00ab2050(void) { return *(int*)((char*)this + 8); }

// @baa 0x00ab2060
undefined4 sub_00ab2060(int param_1, int param_2)
{
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 1;
  }
  if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
    return 0xffffffff;
  }
  return 0;
}

// @baa 0x00ab20b0
void sub_00ab20b0(int * param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x20) = param_2;
  *(undefined4 *)(iVar1 + 0x24) = param_3;
  return;
}

// @baa 0x00ab2150
void sub_00ab2150(int * param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0xd0) = param_2;
  *(undefined4 *)(iVar1 + 0xd4) = param_3;
  return;
}

struct IX00ab2170 {
    virtual void f0() {}
    virtual void f1() {}
    virtual void f2() {}
    virtual void f3() {}
    virtual void f4() {}
    virtual void f5() {}
    virtual void f6() {}
    virtual void f7() {}
    virtual void f8() {}
    virtual void f9() {}
};

// @baa 0x00ab2170
void sub_00ab2170(int param_1, IX00ab2170 *param_2)
{
    param_2->f9();
}

struct C_view {
    int sub_0073f030(int);
};

int sub_009e0e10(...);
// @baa 0x00ab2210
uint UMorphWeightSequence::sub_00ab2210(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x4c);
  return uVar2 | uVar1;
}

struct FOwner;
struct UTarget {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void Apply(FOwner* Owner, int Arg1, int Arg3);
};

struct FOwner {
    UINT Unk00;  // 0x00
    UINT Unk04;  // 0x04
    UINT Unk08;  // 0x08
    UINT Unk0C;  // 0x0C
    UINT Unk10;  // 0x10
    UINT Unk14;  // 0x14
    UINT Unk18;  // 0x18
    UINT Unk1C;  // 0x1C
    UINT Unk20;  // 0x20
    UINT Unk24;  // 0x24
    UINT Unk28;  // 0x28
    UINT Unk2C;  // 0x2C
    UINT Unk30;  // 0x30
    UINT Unk34;  // 0x34
    UINT Unk38;  // 0x38
    UINT Unk3C;  // 0x3C
    UINT Unk40;  // 0x40
    UINT Unk44;  // 0x44
    UINT Unk48;  // 0x48
    UTarget* Target;  // 0x4C

    void sub_00ab2240(int Arg1, int Arg2, int Arg3);
};

// @baa 0x00ab2240
void FOwner::sub_00ab2240(int Arg1, int Arg2, int Arg3)
{
    UTarget* T = Target;
    if (T) {
        T->Apply(this, Arg1, Arg3);
    }
}

struct V {
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
};

// @baa 0x00ab22e0
void sub_00ab22e0(int unused, V* obj)
{
    obj->f9();
}

struct C_00ab2370 { C_00ab2370* sub_00ab2370(void); };

// @baa 0x00ab2370
C_00ab2370* C_00ab2370::sub_00ab2370(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x00ab2380
int sub_00ab2380(int a0) { return *(int*)a0; }

// @baa 0x00ab2390
bool sub_00ab2390(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ab23a0 {
    undefined4 sub_00ab23a0(int *);
};

// @baa 0x00ab23a0
undefined4 C_00ab23a0::sub_00ab23a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00ab23c0 { int a, b; C_00ab23c0(int, int); };

// @baa 0x00ab23c0
C_00ab23c0::C_00ab23c0(int x, int y) : a(x), b(y) {}

int sub_00716170(...);
// @baa 0x00ab2450
undefined4 sub_00ab2450(undefined4 param_1, int param_2)
{
  sub_00716170(param_1,param_2);
  sub_00716170(param_1,param_2 + 6);
  sub_00716170(param_1,param_2 + 0xc);
  sub_00716170(param_1,param_2 + 0x12);
  sub_00716170(param_1,param_2 + 0x18);
  sub_00716170(param_1,param_2 + 0x1e);
  return param_1;
}

// @baa 0x00ab25f0
int sub_00ab25f0(void) { return 1; }

// @baa 0x00ab2600
int sub_00ab2600(void) { return 76; }

struct CS : UScene {
    float sub_00ab2630();
};

// @baa 0x00ab2630
float CS::sub_00ab2630() {
    return *(float*)((char*)this + 0x48) * 1000000.0f;
}

// @baa 0x00ab26a0
int sub_00ab26a0(void) { return 3; }

// @baa 0x00ab26b0
int sub_00ab26b0(void) { return 96; }

struct C_00ab2760 {
    float10 sub_00ab2760();
};

// @baa 0x00ab2760
float10 C_00ab2760::sub_00ab2760(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + 0x48) * (float10)100000.0;
}

// @baa 0x00ab27d0
int sub_00ab27d0(void) { return 4; }

// @baa 0x00ab27e0
int sub_00ab27e0(void) { return 96; }

struct C_00ab2880 {
    long double sub_00ab2880();
};

// @baa 0x00ab2880
long double C_00ab2880::sub_00ab2880()
{
    return *(float *)((char *)this + 0x48) * 250000.0f;
}

// @baa 0x00ab2910
int sub_00ab2910(void) { return 5; }

// @baa 0x00ab2920
int sub_00ab2920(void) { return 108; }

struct C_00ab29a0 {
    long double sub_00ab29a0();
};

// @baa 0x00ab29a0
long double C_00ab29a0::sub_00ab29a0()
{
    return *(float *)((char *)this + 0x48) * 250000.0f;
}

struct IFace {
    virtual int v0() { return 0; }
    virtual int v1() { return 0; }
    virtual int v2() { return 0; }
    virtual int v3() { return 0; }
    virtual int v4() { return 0; }
    virtual int v5() { return 0; }
    virtual int v6() { return 0; }
    virtual int v7() { return 0; }
    virtual int v8() { return 0; }
    virtual int v9() { return 0; }
    virtual int v10() { return 0; }
};

// @baa 0x00ab2b50
int sub_00ab2b50(void * param_1, void * param_2)
{
    return ((IFace *)param_2)->v10();
}

struct C_00ab2b60 {
    undefined4 * sub_00ab2b60(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01fdbb18;
extern undefined * g_01fdbb20;
// @baa 0x00ab2b60
undefined4 * C_00ab2b60::sub_00ab2b60(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ab2b60 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01fdbb20);
  param_1[5] = (undefined4)(&g_01fdbb18);
  return param_1;
}

// @baa 0x00ab2b80
void __stdcall sub_00ab2b80(void* param1)
{
}

void sub_007249d0();
// @baa 0x00ab2ba0
void sub_00ab2ba0(void) { sub_007249d0(); }

struct C_00ab2bb0 {
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
};

// @baa 0x00ab2bb0
void sub_00ab2bb0(undefined4 a, C_00ab2bb0* p)
{
    p->v10();
}

struct C_00ab2f50 {
    void sub_00ab2f50();
};

// @baa 0x00ab2f50
void C_00ab2f50::sub_00ab2f50(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x8000;
  return;
}

// @baa 0x00ab2f70
// @baa 0x00ab3080
int UScene::vf_000(void) { return 1; }

// @baa 0x00ab3090
bool UScene::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00ab3660 {
    void sub_00ab3660(float *, float, float, float);
};

// @baa 0x00ab3660
void C_00ab3660::sub_00ab3660(float * param_2, float param_3, float param_4, float param_5)
{
    int param_1 = (int)this;
  *param_2 = (param_3 / *(float *)(param_1 + 0x30)) * 2.0 - 1.0;
  param_2[1] = 1.0 - (param_4 / *(float *)(param_1 + 0x34)) * 2.0;
  param_2[2] = param_5;
  param_2[3] = 1.0;
  return;
}

extern char g_01fd2df4[];
// @baa 0x00ab3ff0
int sub_00ab3ff0(void) { return (int)g_01fd2df4; }

extern char g_01ebb554[];
struct C_00ab4000 { void sub_00ab4000(void); };

// @baa 0x00ab4000
void C_00ab4000::sub_00ab4000(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4010 {
    undefined4 * sub_00ab4010(byte);
};

// @baa 0x00ab4010
undefined4 * C_00ab4010::sub_00ab4010(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd3024[];
// @baa 0x00ab4030
int sub_00ab4030(void) { return (int)g_01fd3024; }

// @baa 0x00ab4040
void sub_00ab4040(void) {  }

struct C_00ab4050 { void sub_00ab4050(void); };

// @baa 0x00ab4050
void C_00ab4050::sub_00ab4050(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_01fd3254[];
// @baa 0x00ab4080
int sub_00ab4080(void) { return (int)g_01fd3254; }

struct C_00ab4090 { void sub_00ab4090(void); };

// @baa 0x00ab4090
void C_00ab4090::sub_00ab4090(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab40a0 {
    undefined4 * sub_00ab40a0(byte);
};

// @baa 0x00ab40a0
undefined4 * C_00ab40a0::sub_00ab40a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd3554[];
// @baa 0x00ab40e0
int sub_00ab40e0(void) { return (int)g_01fd3554; }

struct C_00ab40f0 { void sub_00ab40f0(void); };

// @baa 0x00ab40f0
void C_00ab40f0::sub_00ab40f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4100 {
    undefined4 * sub_00ab4100(byte);
};

// @baa 0x00ab4100
undefined4 * C_00ab4100::sub_00ab4100(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd377c[];
// @baa 0x00ab4120
int sub_00ab4120(void) { return (int)g_01fd377c; }

// @baa 0x00ab4160
void sub_00ab4160(void) {  }

struct C_00ab4170 { void sub_00ab4170(void); };

// @baa 0x00ab4170
void C_00ab4170::sub_00ab4170(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_01fd39ac[];
// @baa 0x00ab41c0
int sub_00ab41c0(void) { return (int)g_01fd39ac; }

struct C_00ab41d0 { void sub_00ab41d0(void); };

// @baa 0x00ab41d0
void C_00ab41d0::sub_00ab41d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab41e0 {
    undefined4 * sub_00ab41e0(byte);
};

// @baa 0x00ab41e0
undefined4 * C_00ab41e0::sub_00ab41e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00ab4200
void __stdcall sub_00ab4200(int a0, int a1) {  }

extern char g_01fd3bec[];
// @baa 0x00ab4230
int sub_00ab4230(void) { return (int)g_01fd3bec; }

struct C_00ab4240 { void sub_00ab4240(void); };

// @baa 0x00ab4240
void C_00ab4240::sub_00ab4240(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4250 {
    undefined4 * sub_00ab4250(byte);
};

// @baa 0x00ab4250
undefined4 * C_00ab4250::sub_00ab4250(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd3e14[];
// @baa 0x00ab42a0
int sub_00ab42a0(void) { return (int)g_01fd3e14; }

struct C_00ab42b0 { void sub_00ab42b0(void); };

// @baa 0x00ab42b0
void C_00ab42b0::sub_00ab42b0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab42c0 {
    undefined4 * sub_00ab42c0(byte);
};

// @baa 0x00ab42c0
undefined4 * C_00ab42c0::sub_00ab42c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd4034[];
// @baa 0x00ab4300
int sub_00ab4300(void) { return (int)g_01fd4034; }

struct C_00ab4310 { void sub_00ab4310(void); };

// @baa 0x00ab4310
void C_00ab4310::sub_00ab4310(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4320 {
    undefined4 * sub_00ab4320(byte);
};

// @baa 0x00ab4320
undefined4 * C_00ab4320::sub_00ab4320(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd425c[];
// @baa 0x00ab4360
int sub_00ab4360(void) { return (int)g_01fd425c; }

struct C_00ab4370 { void sub_00ab4370(void); };

// @baa 0x00ab4370
void C_00ab4370::sub_00ab4370(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4380 {
    undefined4 * sub_00ab4380(byte);
};

// @baa 0x00ab4380
undefined4 * C_00ab4380::sub_00ab4380(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd448c[];
// @baa 0x00ab43c0
int sub_00ab43c0(void) { return (int)g_01fd448c; }

struct C_00ab43d0 { void sub_00ab43d0(void); };

// @baa 0x00ab43d0
void C_00ab43d0::sub_00ab43d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab43e0 {
    undefined4 * sub_00ab43e0(byte);
};

// @baa 0x00ab43e0
undefined4 * C_00ab43e0::sub_00ab43e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd47a4[];
// @baa 0x00ab4460
int sub_00ab4460(void) { return (int)g_01fd47a4; }

struct C_00ab4470 { void sub_00ab4470(void); };

// @baa 0x00ab4470
void C_00ab4470::sub_00ab4470(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4480 {
    undefined4 * sub_00ab4480(byte);
};

// @baa 0x00ab4480
undefined4 * C_00ab4480::sub_00ab4480(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd49d4[];
// @baa 0x00ab44d0
int sub_00ab44d0(void) { return (int)g_01fd49d4; }

struct C_00ab44e0 { void sub_00ab44e0(void); };

// @baa 0x00ab44e0
void C_00ab44e0::sub_00ab44e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab44f0 {
    undefined4 * sub_00ab44f0(byte);
};

// @baa 0x00ab44f0
undefined4 * C_00ab44f0::sub_00ab44f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd4c04[];
// @baa 0x00ab4530
int sub_00ab4530(void) { return (int)g_01fd4c04; }

struct C_00ab4540 { void sub_00ab4540(void); };

// @baa 0x00ab4540
void C_00ab4540::sub_00ab4540(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4550 {
    undefined4 * sub_00ab4550(byte);
};

// @baa 0x00ab4550
undefined4 * C_00ab4550::sub_00ab4550(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd4fc4[];
// @baa 0x00ab45a0
int sub_00ab45a0(void) { return (int)g_01fd4fc4; }

struct C_00ab45b0 { void sub_00ab45b0(void); };

// @baa 0x00ab45b0
void C_00ab45b0::sub_00ab45b0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab45c0 {
    undefined4 * sub_00ab45c0(byte);
};

// @baa 0x00ab45c0
undefined4 * C_00ab45c0::sub_00ab45c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd53cc[];
// @baa 0x00ab4600
int sub_00ab4600(void) { return (int)g_01fd53cc; }

struct C_00ab4610 { void sub_00ab4610(void); };

// @baa 0x00ab4610
void C_00ab4610::sub_00ab4610(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4620 {
    undefined4 * sub_00ab4620(byte);
};

// @baa 0x00ab4620
undefined4 * C_00ab4620::sub_00ab4620(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd56cc[];
// @baa 0x00ab4660
int sub_00ab4660(void) { return (int)g_01fd56cc; }

struct C_00ab4670 { void sub_00ab4670(void); };

// @baa 0x00ab4670
void C_00ab4670::sub_00ab4670(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4680 {
    undefined4 * sub_00ab4680(byte);
};

// @baa 0x00ab4680
undefined4 * C_00ab4680::sub_00ab4680(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ab46a0 { char* sub_00ab46a0(void); };

// @baa 0x00ab46a0
char* C_00ab46a0::sub_00ab46a0(void) { return (char*)this + 13112; }

struct C_00ab46b0 {
    undefined4 sub_00ab46b0();
};

extern undefined4 g_026b62b8;
// @baa 0x00ab46b0
undefined4 C_00ab46b0::sub_00ab46b0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(g_026b62b8 + 0x34) != param_1) && (*(int *)(param_1 + 0x3c70) == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00ab46d0
int sub_00ab46d0(void) { return 0; }

struct C_00ab46e0 { C_00ab46e0* sub_00ab46e0(void); };

// @baa 0x00ab46e0
C_00ab46e0* C_00ab46e0::sub_00ab46e0(void) { return this; }

// @baa 0x00ab46f0
void sub_00ab46f0(void) {  }

extern int g_01fdbbfc;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00ab4700(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00ab4700
FDecalValue* FDecalValue::sub_00ab4700(int* Src)
{
    Value = (int)&g_01fdbbfc;
    Unk04 = *Src;
    return this;
}

extern char g_01fd5d0c[];
// @baa 0x00ab4740
int sub_00ab4740(void) { return (int)g_01fd5d0c; }

struct C_00ab4750 { void sub_00ab4750(void); };

// @baa 0x00ab4750
void C_00ab4750::sub_00ab4750(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab4760 {
    undefined4 * sub_00ab4760(byte);
};

// @baa 0x00ab4760
undefined4 * C_00ab4760::sub_00ab4760(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fd5f30[];
// @baa 0x00ab47a0
int sub_00ab47a0(void) { return (int)g_01fd5f30; }

struct C_00ab47b0 { void sub_00ab47b0(void); };

// @baa 0x00ab47b0
void C_00ab47b0::sub_00ab47b0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab47c0 {
    undefined4 * sub_00ab47c0(byte);
};

// @baa 0x00ab47c0
undefined4 * C_00ab47c0::sub_00ab47c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00ab4800
void __stdcall sub_00ab4800(int a0) {  }

// @baa 0x00ab4810
void __stdcall sub_00ab4810(int a0) {  }

// @baa 0x00ab4820
void __stdcall sub_00ab4820(int a0) {  }

// @baa 0x00ab4830
void __stdcall sub_00ab4830(int a0) {  }

// @baa 0x00ab4840
void __stdcall sub_00ab4840(int a0) {  }

// @baa 0x00ab4850
void __stdcall sub_00ab4850(int a0) {  }

// @baa 0x00ab4860
void __stdcall sub_00ab4860(int a0) {  }

// @baa 0x00ab4870
void __stdcall sub_00ab4870(int a0, int a1) {  }

// @baa 0x00ab4880
void __stdcall sub_00ab4880(int a0) {  }

// @baa 0x00ab4890
void __stdcall sub_00ab4890(int a0) {  }

// @baa 0x00ab48a0
void __stdcall sub_00ab48a0(int a0) {  }

// @baa 0x00ab48b0
void __stdcall sub_00ab48b0(int a0) {  }

// @baa 0x00ab48c0
int sub_00ab48c0(void) { return 0; }

// @baa 0x00ab48d0
void __stdcall sub_00ab48d0(int a0) {  }

// @baa 0x00ab48e0
void __stdcall sub_00ab48e0(int a0) {  }

// @baa 0x00ab48f0
void __stdcall sub_00ab48f0(int a0) {  }

// @baa 0x00ab4900
void __stdcall sub_00ab4900(int a0, int a1) {  }

// @baa 0x00ab4910
void __stdcall sub_00ab4910(int a0) {  }

// @baa 0x00ab4920
void __stdcall sub_00ab4920(int a0) {  }

// @baa 0x00ab4930
void __stdcall sub_00ab4930(int a0) {  }

// @baa 0x00ab4940
void sub_00ab4940(void) {  }

// @baa 0x00ab4950
void __stdcall sub_00ab4950(int a0, int a1) {  }

// @baa 0x00ab4960
int sub_00ab4960(void) { return 0; }

// @baa 0x00ab4970
int sub_00ab4970(void) { return 0; }

struct C_00ab4980 { int sub_00ab4980(void); };

// @baa 0x00ab4980
int C_00ab4980::sub_00ab4980(void) { return *(int*)((char*)this + 4); }

// @baa 0x00ab4990
int sub_00ab4990(void) { return 0; }

extern char g_01ebb778[];
struct C_00ab49a0 { void sub_00ab49a0(void); };

// @baa 0x00ab49a0
void C_00ab49a0::sub_00ab49a0(void) { *(int*)((char*)this + 0) = (int)g_01ebb778; }

// @baa 0x00ab49b0
undefined4 sub_00ab49b0(int param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}

struct C_00ab49c0 {
    int sub_00ab49c0(int);
};

// @baa 0x00ab49c0
int C_00ab49c0::sub_00ab49c0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0x12) * 8;
}

struct C_00ab49d0 {
    int sub_00ab49d0(int);
};

// @baa 0x00ab49d0
int C_00ab49d0::sub_00ab49d0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0x36) * 8;
}

struct C_00ab49e0 {
    int sub_00ab49e0(int);
};

// @baa 0x00ab49e0
int C_00ab49e0::sub_00ab49e0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0x5a) * 8;
}

struct C_00ab49f0 {
    int sub_00ab49f0(int);
};

// @baa 0x00ab49f0
int C_00ab49f0::sub_00ab49f0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0x7e) * 8;
}

struct C_00ab4a00 {
    int sub_00ab4a00(int);
};

// @baa 0x00ab4a00
int C_00ab4a00::sub_00ab4a00(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0xa2) * 8;
}

struct C_00ab4a20 {
    int sub_00ab4a20(int);
};

// @baa 0x00ab4a20
int C_00ab4a20::sub_00ab4a20(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0xc6) * 8;
}

struct C_00ab4a40 {
    int sub_00ab4a40(int);
};

// @baa 0x00ab4a40
int C_00ab4a40::sub_00ab4a40(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0xea) * 8;
}

struct C_00ab4a60 {
    int sub_00ab4a60(int);
};

// @baa 0x00ab4a60
int C_00ab4a60::sub_00ab4a60(int param_2)
{
    int param_1 = (int)this;

  return param_1 + (param_2 * 9 + 0x10e) * 8;
}

// @baa 0x00ab4f60
int sub_00ab4f60(void) { return 1; }

// @baa 0x00ab4f70
void sub_00ab4f70(void) {  }

// @baa 0x00ab5090
void sub_00ab5090(void) { sub_007249d0(); }

// @baa 0x00ab50a0
int sub_00ab50a0(void) { return 1; }

// @baa 0x00ab50b0
void sub_00ab50b0(void) {  }

struct C_00ab50c0 {
    undefined4 * sub_00ab50c0(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01fdbd14;
extern undefined * g_01fdbd1c;
// @baa 0x00ab50c0
undefined4 * C_00ab50c0::sub_00ab50c0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ab50c0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01fdbd1c);
  param_1[5] = (undefined4)(&g_01fdbd14);
  return param_1;
}

struct S00ab50e0 {
    void sub_007249d0();
    void sub_00ab50e0();
};

// @baa 0x00ab50e0
void S00ab50e0::sub_00ab50e0() {
    sub_007249d0();
}

struct C_00ab51b0 { C_00ab51b0* sub_00ab51b0(void); };

// @baa 0x00ab51b0
C_00ab51b0* C_00ab51b0::sub_00ab51b0(void) { return this; }

struct C_00ab5360 { C_00ab5360* sub_00ab5360(void); };

// @baa 0x00ab5360
C_00ab5360* C_00ab5360::sub_00ab5360(void) { *(int*)((char*)this + 0) = (int)g_01fdba54; return this; }

// @baa 0x00ab5370
wchar_t * sub_00ab5370(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return L"UnrealEd Background";
  case 1:
    return L"World";
  case 2:
    return L"Highlight";
  case 3:
    return L"Foreground";
  case 4:
    return L"UnrealEd Foreground";
  case 5:
    return L"PostProcess";
  default:
    return L"Unknown";
  }
}

struct C_00ab53d0 { int sub_00ab53d0(void); };

// @baa 0x00ab53d0
int C_00ab53d0::sub_00ab53d0(void) { return *(int*)((char*)this + 8); }

struct C_00ab53e0 { int sub_00ab53e0(void); };

// @baa 0x00ab53e0
int C_00ab53e0::sub_00ab53e0(void) { return *(int*)((char*)this + 12); }

extern undefined4 g_026bbbb8;
extern undefined4 g_026bbbbc;
// @baa 0x00ab53f0
undefined4 * sub_00ab53f0(void)
{
  if ((g_026bbbbc & 1) == 0) {
    g_026bbbbc = g_026bbbbc | 1;
    g_026bbbb8 = 0;
  }
  return &g_026bbbb8;
}

extern int g_01fdbd44;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00ab5420
{
    FDecalValue_00ab5420* sub_00ab5420(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00ab5420
FDecalValue_00ab5420* FDecalValue_00ab5420::sub_00ab5420(int* Src)
{
    Value = (int)&g_01fdbd44;
    Unk04 = *Src;
    return this;
}

extern char g_01fd90e4[];
// @baa 0x00ab5440
int sub_00ab5440(void) { return (int)g_01fd90e4; }

extern int g_01fdbd50;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00ab5450
{
    FDecalValue_00ab5450* sub_00ab5450(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00ab5450
FDecalValue_00ab5450* FDecalValue_00ab5450::sub_00ab5450(int* Src)
{
    Value = (int)&g_01fdbd50;
    Unk04 = *Src;
    return this;
}

extern char g_01fd9108[];
// @baa 0x00ab5470
int sub_00ab5470(void) { return (int)g_01fd9108; }

struct C_00ab5480 { void sub_00ab5480(void); };

// @baa 0x00ab5480
void C_00ab5480::sub_00ab5480(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab5490 { void sub_00ab5490(void); };

// @baa 0x00ab5490
void C_00ab5490::sub_00ab5490(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00ab54a0 {
    undefined4 * sub_00ab54a0(byte);
};

// @baa 0x00ab54a0
undefined4 * C_00ab54a0::sub_00ab54a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ab54c0 {
    undefined4 * sub_00ab54c0(byte);
};

// @baa 0x00ab54c0
undefined4 * C_00ab54c0::sub_00ab54c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ab54e0 {
    int sub_00ab54e0();
};

// @baa 0x00ab54e0
int C_00ab54e0::sub_00ab54e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 8;
}

struct C_00ab54f0 {
    int sub_00ab54f0();
};

// @baa 0x00ab54f0
int C_00ab54f0::sub_00ab54f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x74) << 4;
}

struct C_00ab5500 {
    int sub_00ab5500();
};

// @baa 0x00ab5500
int C_00ab5500::sub_00ab5500(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x94) << 4;
}

struct C_00ab5510 { C_00ab5510* sub_00ab5510(void); };

// @baa 0x00ab5510
C_00ab5510* C_00ab5510::sub_00ab5510(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab5520{
int*sub_00ab5520(int);
};

extern undefined4*g_026b0d94;
// @baa 0x00ab5520
int*C_00ab5520::sub_00ab5520(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(0!=param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1cc))((int)(param_2));
}
return param_1;
}

struct C_00ab5590 { int sub_00ab5590(void); };

// @baa 0x00ab5590
int C_00ab5590::sub_00ab5590(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ab55a0
bool sub_00ab55a0(int * param_1)
{
  return *param_1 != 0;
}

struct C_00ab55b0{
undefined4 sub_00ab55b0();
};

// @baa 0x00ab55b0
undefined4 C_00ab55b0::sub_00ab55b0(void)
{
int*param_1=(int*)this;

undefined4 uVar1;

if(*param_1!=0){
uVar1=(*(int(__stdcall**)(int))(*g_026b0d94+0x264))((int)(*param_1));
return uVar1;
}
return 0;
}

struct C_00ab55d0 { int a, b, c; C_00ab55d0(); };

// @baa 0x00ab55d0
C_00ab55d0::C_00ab55d0() : a(0), b(0), c(0) {}

struct C_00ab55e0 {
    int sub_00ab55e0();
};

// @baa 0x00ab55e0
int C_00ab55e0::sub_00ab55e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct C_00ab55f0 { int a, b, c; C_00ab55f0(); };

// @baa 0x00ab55f0
C_00ab55f0::C_00ab55f0() : a(0), b(0), c(0) {}

struct C_00ab5600 {
    int sub_00ab5600();
};

// @baa 0x00ab5600
int C_00ab5600::sub_00ab5600(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x120;
}

struct C_00ab5610 {
    int sub_00ab5610();
};

// @baa 0x00ab5610
int C_00ab5610::sub_00ab5610(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct C_00ab5620 { int sub_00ab5620(void); };

// @baa 0x00ab5620
int C_00ab5620::sub_00ab5620(void) { return *(int*)((char*)this + 4); }

struct C_00ab5630 {
    int sub_00ab5630();
};

// @baa 0x00ab5630
int C_00ab5630::sub_00ab5630(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x104;
}

struct C_00ab5640 { int a, b, c; C_00ab5640(); };

// @baa 0x00ab5640
C_00ab5640::C_00ab5640() : a(0), b(0), c(0) {}

struct C_00ab5650 { int sub_00ab5650(void); };

// @baa 0x00ab5650
int C_00ab5650::sub_00ab5650(void) { return *(int*)((char*)this + 4); }

// @baa 0x00ab5660
void sub_00ab5660(void) {  }

struct C_00ab5670 { int sub_00ab5670(void); };

// @baa 0x00ab5670
int C_00ab5670::sub_00ab5670(void) { return *(int*)((char*)this + 4); }

struct C_00ab5680 { int sub_00ab5680(void); };

// @baa 0x00ab5680
int C_00ab5680::sub_00ab5680(void) { return *(int*)((char*)this + 4); }

struct C_00ab5690 { int sub_00ab5690(void); };

// @baa 0x00ab5690
int C_00ab5690::sub_00ab5690(void) { return *(int*)((char*)this + 4); }

struct C_00ab56a0 { int sub_00ab56a0(void); };

// @baa 0x00ab56a0
int C_00ab56a0::sub_00ab56a0(void) { return *(int*)((char*)this + 4); }

struct C_00ab56b0 { int a, b, c; C_00ab56b0(); };

// @baa 0x00ab56b0
C_00ab56b0::C_00ab56b0() : a(0), b(0), c(0) {}

struct C_00ab56c0 { int sub_00ab56c0(void); };

// @baa 0x00ab56c0
int C_00ab56c0::sub_00ab56c0(void) { return *(int*)((char*)this + 4); }

struct T_00ab56d0 { int x; };

// @baa 0x00ab56d0
template T_00ab56d0& TIndirectArray<T_00ab56d0>::operator()(INT);

struct C_00ab5720 { int a, b, c; C_00ab5720(); };

// @baa 0x00ab5720
C_00ab5720::C_00ab5720() : a(0), b(0), c(0) {}

struct C_00ab5730 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00ab5730(INT Index);
};

// @baa 0x00ab5730
UBOOL C_00ab5730::sub_00ab5730(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00ab5750 { int sub_00ab5750(void); };

// @baa 0x00ab5750
int C_00ab5750::sub_00ab5750(void) { return *(int*)((char*)this + 4); }

struct C_00ab5760 { int a, b, c; C_00ab5760(); };

// @baa 0x00ab5760
C_00ab5760::C_00ab5760() : a(0), b(0), c(0) {}

struct C_00ab5770 { int sub_00ab5770(void); };

// @baa 0x00ab5770
int C_00ab5770::sub_00ab5770(void) { return *(int*)((char*)this + 4); }

struct C_00ab5780 { int sub_00ab5780(void); };

// @baa 0x00ab5780
int C_00ab5780::sub_00ab5780(void) { return *(int*)((char*)this + 16); }

struct C_00ab5790 { int a, b, c; C_00ab5790(); };

// @baa 0x00ab5790
C_00ab5790::C_00ab5790() : a(0), b(0), c(0) {}

struct C_00ab57a0 {
    int sub_00ab57a0();
};

// @baa 0x00ab57a0
int C_00ab57a0::sub_00ab57a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct C_00ab57b0 { int a, b, c; C_00ab57b0(); };

// @baa 0x00ab57b0
C_00ab57b0::C_00ab57b0() : a(0), b(0), c(0) {}

struct C_00ab57c0 {
    int sub_00ab57c0();
};

// @baa 0x00ab57c0
int C_00ab57c0::sub_00ab57c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x28;
}

struct C_00ab57d0 {
    int sub_00ab57d0();
};

// @baa 0x00ab57d0
int C_00ab57d0::sub_00ab57d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct C_00ab57e0 { int sub_00ab57e0(void); };

// @baa 0x00ab57e0
int C_00ab57e0::sub_00ab57e0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab57f0 { int sub_00ab57f0(void); };

// @baa 0x00ab57f0
int C_00ab57f0::sub_00ab57f0(void) { return *(int*)((char*)this + 4); }

struct C_00ab5830 { int a, b, c; C_00ab5830(); };

// @baa 0x00ab5830
C_00ab5830::C_00ab5830() : a(0), b(0), c(0) {}

struct C_00ab5840 {
    int sub_00ab5840();
};

// @baa 0x00ab5840
int C_00ab5840::sub_00ab5840(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x50;
}

struct C_00ab5850 { int sub_00ab5850(void); };

// @baa 0x00ab5850
int C_00ab5850::sub_00ab5850(void) { return *(int*)((char*)this + 4); }

struct C_00ab5a60 {
    uint sub_00ab5a60();
};

// @baa 0x00ab5a60
uint C_00ab5a60::sub_00ab5a60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

struct C_00ab5a70 {
    void sub_00ab5a70();
};

// @baa 0x00ab5a70
void C_00ab5a70::sub_00ab5a70(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) & 0xfffffffd;
  return;
}

struct C_00ab5a80 {
    bool sub_00ab5a80();
};

// @baa 0x00ab5a80
bool C_00ab5a80::sub_00ab5a80(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00ab5a90 { int sub_00ab5a90(void); };

// @baa 0x00ab5a90
int C_00ab5a90::sub_00ab5a90(void) { return *(int*)((char*)this + 0); }

struct C_00ab5aa0 { char* sub_00ab5aa0(void); };

// @baa 0x00ab5aa0
char* C_00ab5aa0::sub_00ab5aa0(void) { return (char*)this + 16; }

struct C_00ab5ab0 {
    int sub_00ab5ab0();
};

// @baa 0x00ab5ab0
int C_00ab5ab0::sub_00ab5ab0()
{
    ((int*)this)[1]++;
    return (int)this;
}

struct C_00ab5ac0 {
    void sub_00ab5ac0();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00ab5ac0
void C_00ab5ac0::sub_00ab5ac0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) != 0) {
    sub_006311e0("NumLive == 0","Core/Inc\\AllocatorFixedSizeFreeList.h",0x37,&g_01e3f3dc);
  }
  return;
}

struct C_00ab5b70 { int sub_00ab5b70(void); };

// @baa 0x00ab5b70
int C_00ab5b70::sub_00ab5b70(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ab5b80
int sub_00ab5b80(void) { return 1; }

// @baa 0x00ab5b90
int sub_00ab5b90(void) { return 1; }

// @baa 0x00ab5ba0
int sub_00ab5ba0(void) { return 1; }

// @baa 0x00ab5bb0
int sub_00ab5bb0(void) { return 1; }

// @baa 0x00ab5bc0
int sub_00ab5bc0(void) { return 1; }

// @baa 0x00ab5bd0
int sub_00ab5bd0(void) { return 1; }

// @baa 0x00ab5be0
int sub_00ab5be0(void) { return 1; }

// @baa 0x00ab5bf0
int sub_00ab5bf0(void) { return 1; }

// @baa 0x00ab5c00
int sub_00ab5c00(void) { return 1; }

// @baa 0x00ab5c10
int sub_00ab5c10(void) { return 1; }

// @baa 0x00ab5c20
int sub_00ab5c20(void) { return 1; }

// @baa 0x00ab5c30
int sub_00ab5c30(void) { return 1; }

// @baa 0x00ab5c40
int sub_00ab5c40(void) { return 1; }

// @baa 0x00ab5c50
int sub_00ab5c50(void) { return 1; }

// @baa 0x00ab5c60
int sub_00ab5c60(void) { return 1; }

// @baa 0x00ab5c70
int sub_00ab5c70(void) { return 1; }

// @baa 0x00ab5c80
int sub_00ab5c80(void) { return 1; }

// @baa 0x00ab5c90
int sub_00ab5c90(void) { return 1; }

// @baa 0x00ab5ca0
int sub_00ab5ca0(void) { return 1; }

// @baa 0x00ab5cb0
int sub_00ab5cb0(void) { return 1; }

// @baa 0x00ab5cc0
int sub_00ab5cc0(void) { return 1; }

// @baa 0x00ab5cd0
int sub_00ab5cd0(void) { return 1; }

// @baa 0x00ab5ce0
int sub_00ab5ce0(void) { return 1; }

// @baa 0x00ab5cf0
int sub_00ab5cf0(void) { return 1; }

// @baa 0x00ab5d00
int sub_00ab5d00(void) { return 1; }

// @baa 0x00ab5d10
int sub_00ab5d10(void) { return 1; }

// @baa 0x00ab5d20
int sub_00ab5d20(void) { return 1; }

// @baa 0x00ab5d30
int sub_00ab5d30(void) { return 1; }

// @baa 0x00ab5d40
int sub_00ab5d40(void) { return 1; }

// @baa 0x00ab5d50
int sub_00ab5d50(void) { return 1; }

// @baa 0x00ab5d60
int sub_00ab5d60(void) { return 1; }

// @baa 0x00ab5d70
int sub_00ab5d70(void) { return 1; }

struct C_00ab5d80 { int sub_00ab5d80(void); };

// @baa 0x00ab5d80
int C_00ab5d80::sub_00ab5d80(void) { return *(int*)((char*)this + 0); }

struct C_00ab5d90 { int sub_00ab5d90(void); };

// @baa 0x00ab5d90
int C_00ab5d90::sub_00ab5d90(void) { return *(int*)((char*)this + 0); }

struct C_00ab5da0 { int sub_00ab5da0(void); };

// @baa 0x00ab5da0
int C_00ab5da0::sub_00ab5da0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5db0 { int sub_00ab5db0(void); };

// @baa 0x00ab5db0
int C_00ab5db0::sub_00ab5db0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5dc0 { int sub_00ab5dc0(void); };

// @baa 0x00ab5dc0
int C_00ab5dc0::sub_00ab5dc0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5dd0 { int sub_00ab5dd0(void); };

// @baa 0x00ab5dd0
int C_00ab5dd0::sub_00ab5dd0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5de0 { int sub_00ab5de0(void); };

// @baa 0x00ab5de0
int C_00ab5de0::sub_00ab5de0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5df0 { int sub_00ab5df0(void); };

// @baa 0x00ab5df0
int C_00ab5df0::sub_00ab5df0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e00 { int sub_00ab5e00(void); };

// @baa 0x00ab5e00
int C_00ab5e00::sub_00ab5e00(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e10 { int sub_00ab5e10(void); };

// @baa 0x00ab5e10
int C_00ab5e10::sub_00ab5e10(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e20 { int sub_00ab5e20(void); };

// @baa 0x00ab5e20
int C_00ab5e20::sub_00ab5e20(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e30 { int sub_00ab5e30(void); };

// @baa 0x00ab5e30
int C_00ab5e30::sub_00ab5e30(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e40 { int sub_00ab5e40(void); };

// @baa 0x00ab5e40
int C_00ab5e40::sub_00ab5e40(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e50 { int sub_00ab5e50(void); };

// @baa 0x00ab5e50
int C_00ab5e50::sub_00ab5e50(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e60 { int sub_00ab5e60(void); };

// @baa 0x00ab5e60
int C_00ab5e60::sub_00ab5e60(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e70 { int sub_00ab5e70(void); };

// @baa 0x00ab5e70
int C_00ab5e70::sub_00ab5e70(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e80 { int sub_00ab5e80(void); };

// @baa 0x00ab5e80
int C_00ab5e80::sub_00ab5e80(void) { return *(int*)((char*)this + 0); }

struct C_00ab5e90 { int sub_00ab5e90(void); };

// @baa 0x00ab5e90
int C_00ab5e90::sub_00ab5e90(void) { return *(int*)((char*)this + 0); }

struct C_00ab5ea0 { int sub_00ab5ea0(void); };

// @baa 0x00ab5ea0
int C_00ab5ea0::sub_00ab5ea0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5eb0 { int sub_00ab5eb0(void); };

// @baa 0x00ab5eb0
int C_00ab5eb0::sub_00ab5eb0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5ec0 { int sub_00ab5ec0(void); };

// @baa 0x00ab5ec0
int C_00ab5ec0::sub_00ab5ec0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5ed0 { int sub_00ab5ed0(void); };

// @baa 0x00ab5ed0
int C_00ab5ed0::sub_00ab5ed0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5ee0 { int sub_00ab5ee0(void); };

// @baa 0x00ab5ee0
int C_00ab5ee0::sub_00ab5ee0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5ef0 { int sub_00ab5ef0(void); };

// @baa 0x00ab5ef0
int C_00ab5ef0::sub_00ab5ef0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f00 { int sub_00ab5f00(void); };

// @baa 0x00ab5f00
int C_00ab5f00::sub_00ab5f00(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f10 { int sub_00ab5f10(void); };

// @baa 0x00ab5f10
int C_00ab5f10::sub_00ab5f10(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f20 { int sub_00ab5f20(void); };

// @baa 0x00ab5f20
int C_00ab5f20::sub_00ab5f20(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f30 { int sub_00ab5f30(void); };

// @baa 0x00ab5f30
int C_00ab5f30::sub_00ab5f30(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f40 { int sub_00ab5f40(void); };

// @baa 0x00ab5f40
int C_00ab5f40::sub_00ab5f40(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f50 { int sub_00ab5f50(void); };

// @baa 0x00ab5f50
int C_00ab5f50::sub_00ab5f50(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f60 { int sub_00ab5f60(void); };

// @baa 0x00ab5f60
int C_00ab5f60::sub_00ab5f60(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f70 { int sub_00ab5f70(void); };

// @baa 0x00ab5f70
int C_00ab5f70::sub_00ab5f70(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f80 { int sub_00ab5f80(void); };

// @baa 0x00ab5f80
int C_00ab5f80::sub_00ab5f80(void) { return *(int*)((char*)this + 0); }

struct C_00ab5f90 { int sub_00ab5f90(void); };

// @baa 0x00ab5f90
int C_00ab5f90::sub_00ab5f90(void) { return *(int*)((char*)this + 0); }

struct C_00ab5fa0 { int sub_00ab5fa0(void); };

// @baa 0x00ab5fa0
int C_00ab5fa0::sub_00ab5fa0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5fb0 { int sub_00ab5fb0(void); };

// @baa 0x00ab5fb0
int C_00ab5fb0::sub_00ab5fb0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5fc0 { int sub_00ab5fc0(void); };

// @baa 0x00ab5fc0
int C_00ab5fc0::sub_00ab5fc0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5fd0 { int sub_00ab5fd0(void); };

// @baa 0x00ab5fd0
int C_00ab5fd0::sub_00ab5fd0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5fe0 { int sub_00ab5fe0(void); };

// @baa 0x00ab5fe0
int C_00ab5fe0::sub_00ab5fe0(void) { return *(int*)((char*)this + 0); }

struct C_00ab5ff0 { int sub_00ab5ff0(void); };

// @baa 0x00ab5ff0
int C_00ab5ff0::sub_00ab5ff0(void) { return *(int*)((char*)this + 0); }

struct C_00ab6000 { int sub_00ab6000(void); };

// @baa 0x00ab6000
int C_00ab6000::sub_00ab6000(void) { return *(int*)((char*)this + 0); }

struct C_00ab6010 { int sub_00ab6010(void); };

// @baa 0x00ab6010
int C_00ab6010::sub_00ab6010(void) { return *(int*)((char*)this + 0); }

struct C_00ab6020 { int sub_00ab6020(void); };

// @baa 0x00ab6020
int C_00ab6020::sub_00ab6020(void) { return *(int*)((char*)this + 0); }

struct C_00ab6030 { int sub_00ab6030(void); };

// @baa 0x00ab6030
int C_00ab6030::sub_00ab6030(void) { return *(int*)((char*)this + 0); }

struct C_00ab6040 { int sub_00ab6040(void); };

// @baa 0x00ab6040
int C_00ab6040::sub_00ab6040(void) { return *(int*)((char*)this + 0); }

struct C_00ab6050 { int sub_00ab6050(void); };

// @baa 0x00ab6050
int C_00ab6050::sub_00ab6050(void) { return *(int*)((char*)this + 0); }

struct C_00ab6060 { int sub_00ab6060(void); };

// @baa 0x00ab6060
int C_00ab6060::sub_00ab6060(void) { return *(int*)((char*)this + 0); }

struct C_00ab6070 { int sub_00ab6070(void); };

// @baa 0x00ab6070
int C_00ab6070::sub_00ab6070(void) { return *(int*)((char*)this + 0); }

struct C_00ab6080 { int sub_00ab6080(void); };

// @baa 0x00ab6080
int C_00ab6080::sub_00ab6080(void) { return *(int*)((char*)this + 0); }

struct C_00ab6090 { int sub_00ab6090(void); };

// @baa 0x00ab6090
int C_00ab6090::sub_00ab6090(void) { return *(int*)((char*)this + 0); }

struct C_00ab60a0 { int sub_00ab60a0(void); };

// @baa 0x00ab60a0
int C_00ab60a0::sub_00ab60a0(void) { return *(int*)((char*)this + 0); }

struct C_00ab60b0 { int sub_00ab60b0(void); };

// @baa 0x00ab60b0
int C_00ab60b0::sub_00ab60b0(void) { return *(int*)((char*)this + 0); }

struct C_00ab60c0 { int sub_00ab60c0(void); };

// @baa 0x00ab60c0
int C_00ab60c0::sub_00ab60c0(void) { return *(int*)((char*)this + 0); }

struct C_00ab60d0 { int sub_00ab60d0(void); };

// @baa 0x00ab60d0
int C_00ab60d0::sub_00ab60d0(void) { return *(int*)((char*)this + 0); }

struct C_00ab60e0 { int sub_00ab60e0(void); };

// @baa 0x00ab60e0
int C_00ab60e0::sub_00ab60e0(void) { return *(int*)((char*)this + 0); }

struct C_00ab60f0 { int sub_00ab60f0(void); };

// @baa 0x00ab60f0
int C_00ab60f0::sub_00ab60f0(void) { return *(int*)((char*)this + 0); }

struct C_00ab6100 { int sub_00ab6100(void); };

// @baa 0x00ab6100
int C_00ab6100::sub_00ab6100(void) { return *(int*)((char*)this + 0); }

struct C_00ab6110 { int sub_00ab6110(void); };

// @baa 0x00ab6110
int C_00ab6110::sub_00ab6110(void) { return *(int*)((char*)this + 0); }

struct C_00ab6120 { int sub_00ab6120(void); };

// @baa 0x00ab6120
int C_00ab6120::sub_00ab6120(void) { return *(int*)((char*)this + 0); }

struct C_00ab6130 { int sub_00ab6130(void); };

// @baa 0x00ab6130
int C_00ab6130::sub_00ab6130(void) { return *(int*)((char*)this + 0); }

struct C_00ab6140 { int sub_00ab6140(void); };

// @baa 0x00ab6140
int C_00ab6140::sub_00ab6140(void) { return *(int*)((char*)this + 0); }

struct C_00ab6150 { int sub_00ab6150(void); };

// @baa 0x00ab6150
int C_00ab6150::sub_00ab6150(void) { return *(int*)((char*)this + 0); }

struct C_00ab6160 { int sub_00ab6160(void); };

// @baa 0x00ab6160
int C_00ab6160::sub_00ab6160(void) { return *(int*)((char*)this + 0); }

struct C_00ab6170 { int sub_00ab6170(void); };

// @baa 0x00ab6170
int C_00ab6170::sub_00ab6170(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ab6180
int sub_00ab6180(void) { return 1; }

// @baa 0x00ab6190
int sub_00ab6190(void) { return 1; }

// @baa 0x00ab61a0
int sub_00ab61a0(void) { return 1; }

struct C_00ab61b0 { int sub_00ab61b0(void); };

// @baa 0x00ab61b0
int C_00ab61b0::sub_00ab61b0(void) { return *(int*)((char*)this + 0); }

struct C_00ab61c0 { int sub_00ab61c0(void); };

// @baa 0x00ab61c0
int C_00ab61c0::sub_00ab61c0(void) { return *(int*)((char*)this + 0); }

struct C_00ab61d0 { int sub_00ab61d0(void); };

// @baa 0x00ab61d0
int C_00ab61d0::sub_00ab61d0(void) { return *(int*)((char*)this + 0); }

struct C_00ab61e0 { int sub_00ab61e0(void); };

// @baa 0x00ab61e0
int C_00ab61e0::sub_00ab61e0(void) { return *(int*)((char*)this + 0); }

struct C_00ab61f0 {
    uint sub_00ab61f0();
};

// @baa 0x00ab61f0
uint C_00ab61f0::sub_00ab61f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

struct C_00ab6200 {
    undefined4 sub_00ab6200(byte);
};

int sub_00adf9b0(void);
// @baa 0x00ab6200
undefined4 C_00ab6200::sub_00ab6200(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00adf9b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ab6220 {
    undefined4 sub_00ab6220(byte);
};

int sub_00ad9360(void);
// @baa 0x00ab6220
undefined4 C_00ab6220::sub_00ab6220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad9360();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ab6240 {
    void sub_00ab6240();
};

int sub_0053df70(...);
// @baa 0x00ab6240
void C_00ab6240::sub_00ab6240(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ab6270{
int*sub_00ab6270(int*);
};

// @baa 0x00ab6270
int*C_00ab6270::sub_00ab6270(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1cc))((int)(iVar1));
}
return param_1;
}

struct C_00ab62a0 { int sub_00ab62a0(void); };

// @baa 0x00ab62a0
int C_00ab62a0::sub_00ab62a0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab62b0 {
    int sub_00ab62b0(int);
};

// @baa 0x00ab62b0
int C_00ab62b0::sub_00ab62b0(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return ((param_1[1] - param_2) + -1) * 0x50 + *param_1;
}

struct C_00ab6360 {
    int sub_00ab6360();
};

// @baa 0x00ab6360
int C_00ab6360::sub_00ab6360(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct C_00ab6370 { C_00ab6370* sub_00ab6370(void); };

// @baa 0x00ab6370
C_00ab6370* C_00ab6370::sub_00ab6370(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab6380 { int sub_00ab6380(void); };

// @baa 0x00ab6380
int C_00ab6380::sub_00ab6380(void) { return *(int*)((char*)this + 0); }

struct C_00ab6390 {
    int sub_00ab6390(int);
};

// @baa 0x00ab6390
int C_00ab6390::sub_00ab6390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ab63a0 { C_00ab63a0* sub_00ab63a0(void); };

// @baa 0x00ab63a0
C_00ab63a0* C_00ab63a0::sub_00ab63a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab63b0 { C_00ab63b0* sub_00ab63b0(void); };

// @baa 0x00ab63b0
C_00ab63b0* C_00ab63b0::sub_00ab63b0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab63c0 { C_00ab63c0* sub_00ab63c0(void); };

// @baa 0x00ab63c0
C_00ab63c0* C_00ab63c0::sub_00ab63c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab63d0 { C_00ab63d0* sub_00ab63d0(void); };

// @baa 0x00ab63d0
C_00ab63d0* C_00ab63d0::sub_00ab63d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab63e0 { C_00ab63e0* sub_00ab63e0(void); };

// @baa 0x00ab63e0
C_00ab63e0* C_00ab63e0::sub_00ab63e0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x00ab63f0
int sub_00ab63f0(int a0) { return a0; }

struct C_00ab6400 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00ab6400* sub_00ab6400(INT value);
};

// @baa 0x00ab6400
C_00ab6400* C_00ab6400::sub_00ab6400(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

struct C_00ab6420 { C_00ab6420* sub_00ab6420(void); };

// @baa 0x00ab6420
C_00ab6420* C_00ab6420::sub_00ab6420(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab6430 { int sub_00ab6430(void); };

// @baa 0x00ab6430
int C_00ab6430::sub_00ab6430(void) { return *(int*)((char*)this + 0); }

struct C_00ab6440 { C_00ab6440* sub_00ab6440(void); };

// @baa 0x00ab6440
C_00ab6440* C_00ab6440::sub_00ab6440(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab6450 { int sub_00ab6450(void); };

// @baa 0x00ab6450
int C_00ab6450::sub_00ab6450(void) { return *(int*)((char*)this + 0); }

struct C_00ab6460 { C_00ab6460* sub_00ab6460(void); };

// @baa 0x00ab6460
C_00ab6460* C_00ab6460::sub_00ab6460(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x00ab6470
void sub_00ab6470(void) {  }

struct C_00ab6480 { int sub_00ab6480(void); };

// @baa 0x00ab6480
int C_00ab6480::sub_00ab6480(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ab6500
int sub_00ab6500(int a0) { return a0; }

struct C_00ab6510 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00ab6510* sub_00ab6510(INT value);
};

// @baa 0x00ab6510
C_00ab6510* C_00ab6510::sub_00ab6510(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

struct C_00ab6530 { int sub_00ab6530(void); };

// @baa 0x00ab6530
int C_00ab6530::sub_00ab6530(void) { return *(int*)((char*)this + 0); }

struct C_00ab65b0 { int a, b, c; C_00ab65b0(); };

// @baa 0x00ab65b0
C_00ab65b0::C_00ab65b0() : a(0), b(0), c(0) {}

struct C_00ab65c0 { int sub_00ab65c0(void); };

// @baa 0x00ab65c0
int C_00ab65c0::sub_00ab65c0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab65d0 { int sub_00ab65d0(void); };

// @baa 0x00ab65d0
int C_00ab65d0::sub_00ab65d0(void) { return *(int*)((char*)this + 4); }

struct C_00ab6670 {
    undefined4 sub_00ab6670(uint);
};

// @baa 0x00ab6670
undefined4 C_00ab6670::sub_00ab6670(uint param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 0x3d0 + (param_2 & 7) * 4);
}

struct C_00ab6690 { int sub_00ab6690(void); };

// @baa 0x00ab6690
int C_00ab6690::sub_00ab6690(void) { return *(int*)((char*)this + 0); }

struct C_00ab6770 { int sub_00ab6770(void); };

// @baa 0x00ab6770
int C_00ab6770::sub_00ab6770(void) { return *(int*)((char*)this + 4); }

struct C_00ab6780 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00ab6780* sub_00ab6780(INT value);
};

// @baa 0x00ab6780
C_00ab6780* C_00ab6780::sub_00ab6780(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00ab67a0 {
    bool sub_00ab67a0();
};

// @baa 0x00ab67a0
bool C_00ab67a0::sub_00ab67a0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00ab67b0 {
    char pad[4];
    int field;
    void* sub_00ab67b0();
};

// @baa 0x00ab67b0
void* C_00ab67b0::sub_00ab67b0()
{
    ++(*(reinterpret_cast<int*>(this) + 1));
    return this;
}

struct C_00ab67c0 { int sub_00ab67c0(void); };

// @baa 0x00ab67c0
int C_00ab67c0::sub_00ab67c0(void) { return *(int*)((char*)this + 0); }

struct C_00ab6840 { int sub_00ab6840(void); };

// @baa 0x00ab6840
int C_00ab6840::sub_00ab6840(void) { return *(int*)((char*)this + 20); }

struct C_00ab6850 { int sub_00ab6850(void); };

// @baa 0x00ab6850
int C_00ab6850::sub_00ab6850(void) { return *(int*)((char*)this + 20); }

struct C_00ab6860 { int sub_00ab6860(void); };

// @baa 0x00ab6860
int C_00ab6860::sub_00ab6860(void) { return *(int*)((char*)this + 20); }

// @baa 0x00ab6870
void sub_00ab6870(void) {  }

struct C_00ab6950 {
    undefined4 sub_00ab6950(undefined4);
    int sub_0073f030(int);
};

int sub_007161b0(...);
// @baa 0x00ab6950
undefined4 C_00ab6950::sub_00ab6950(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab6950 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab6a00
undefined4 UMorphWeightSequence::sub_00ab6a00(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab6ac0 {
    undefined4 sub_00ab6ac0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab6ac0
undefined4 C_00ab6ac0::sub_00ab6ac0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab6ac0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab6b70
undefined4 UMorphWeightSequence::sub_00ab6b70(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab6c30 {
    undefined4 sub_00ab6c30(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab6c30
undefined4 C_00ab6c30::sub_00ab6c30(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab6c30 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab6ce0
undefined4 UMorphWeightSequence::sub_00ab6ce0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab6da0 {
    undefined4 sub_00ab6da0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab6da0
undefined4 C_00ab6da0::sub_00ab6da0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab6da0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab6e50
undefined4 UMorphWeightSequence::sub_00ab6e50(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab6f10 {
    undefined4 sub_00ab6f10(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab6f10
undefined4 C_00ab6f10::sub_00ab6f10(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab6f10 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab6fc0
undefined4 UMorphWeightSequence::sub_00ab6fc0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7080 {
    undefined4 sub_00ab7080(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7080
undefined4 C_00ab7080::sub_00ab7080(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7080 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7130
undefined4 UMorphWeightSequence::sub_00ab7130(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab71f0 {
    undefined4 sub_00ab71f0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab71f0
undefined4 C_00ab71f0::sub_00ab71f0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab71f0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab72a0
undefined4 UMorphWeightSequence::sub_00ab72a0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7360 {
    undefined4 sub_00ab7360(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7360
undefined4 C_00ab7360::sub_00ab7360(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7360 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7410
undefined4 UMorphWeightSequence::sub_00ab7410(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab74d0 {
    undefined4 sub_00ab74d0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab74d0
undefined4 C_00ab74d0::sub_00ab74d0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab74d0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7580
undefined4 UMorphWeightSequence::sub_00ab7580(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7640 {
    undefined4 sub_00ab7640(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7640
undefined4 C_00ab7640::sub_00ab7640(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7640 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab76f0
undefined4 UMorphWeightSequence::sub_00ab76f0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab77b0 {
    undefined4 sub_00ab77b0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab77b0
undefined4 C_00ab77b0::sub_00ab77b0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab77b0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7860
undefined4 UMorphWeightSequence::sub_00ab7860(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7920 {
    undefined4 sub_00ab7920(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7920
undefined4 C_00ab7920::sub_00ab7920(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7920 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab79d0
undefined4 UMorphWeightSequence::sub_00ab79d0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7a90 {
    undefined4 sub_00ab7a90(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7a90
undefined4 C_00ab7a90::sub_00ab7a90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7a90 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7b40
undefined4 UMorphWeightSequence::sub_00ab7b40(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7c00 {
    undefined4 sub_00ab7c00(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7c00
undefined4 C_00ab7c00::sub_00ab7c00(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7c00 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7cb0
undefined4 UMorphWeightSequence::sub_00ab7cb0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7d70 {
    undefined4 sub_00ab7d70(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7d70
undefined4 C_00ab7d70::sub_00ab7d70(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7d70 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7e20
undefined4 UMorphWeightSequence::sub_00ab7e20(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7ee0 {
    undefined4 sub_00ab7ee0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ab7ee0
undefined4 C_00ab7ee0::sub_00ab7ee0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ab7ee0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00ab7f90
undefined4 UMorphWeightSequence::sub_00ab7f90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00ab7fc0 {
    undefined4 * sub_00ab7fc0(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01fdc400;
extern undefined * g_01fdc408;
// @baa 0x00ab7fc0
undefined4 * C_00ab7fc0::sub_00ab7fc0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ab7fc0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01fdc408);
  param_1[5] = (undefined4)(&g_01fdc400);
  return param_1;
}

struct C_00ab7ff0 {
    undefined4 * sub_00ab7ff0(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01fdc430;
extern undefined * g_01fdc438;
// @baa 0x00ab7ff0
undefined4 * C_00ab7ff0::sub_00ab7ff0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ab7ff0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01fdc438);
  param_1[5] = (undefined4)(&g_01fdc430);
  return param_1;
}

struct C_00ab8020 {
    undefined4 * sub_00ab8020(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01fdc460;
extern undefined * g_01fdc468;
// @baa 0x00ab8020
undefined4 * C_00ab8020::sub_00ab8020(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00ab8020 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01fdc468);
  param_1[5] = (undefined4)(&g_01fdc460);
  return param_1;
}

struct C_00ab8050 {
    int sub_00ab8050();
};

// @baa 0x00ab8050
int C_00ab8050::sub_00ab8050(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ab8060 { int a, b; C_00ab8060(int, int); };

// @baa 0x00ab8060
C_00ab8060::C_00ab8060(int x, int y) : a(x), b(y) {}

struct C_00ab8080 {
    int sub_00ab8080();
};

// @baa 0x00ab8080
int C_00ab8080::sub_00ab8080(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ab8090 { int a, b; C_00ab8090(int, int); };

// @baa 0x00ab8090
C_00ab8090::C_00ab8090(int x, int y) : a(x), b(y) {}

struct C_00ab80b0 {
    int sub_00ab80b0();
};

// @baa 0x00ab80b0
int C_00ab80b0::sub_00ab80b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ab80c0 { int a, b; C_00ab80c0(int, int); };

// @baa 0x00ab80c0
C_00ab80c0::C_00ab80c0(int x, int y) : a(x), b(y) {}

struct C_00ab80e0 {
    int sub_00ab80e0();
};

// @baa 0x00ab80e0
int C_00ab80e0::sub_00ab80e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ab80f0 { int a, b; C_00ab80f0(int, int); };

// @baa 0x00ab80f0
C_00ab80f0::C_00ab80f0(int x, int y) : a(x), b(y) {}

struct C_00ab8110 {
    bool sub_00ab8110();
};

// @baa 0x00ab8110
bool C_00ab8110::sub_00ab8110(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00ab8120 { int sub_00ab8120(void); };

// @baa 0x00ab8120
int C_00ab8120::sub_00ab8120(void) { return *(int*)((char*)this + 0); }

struct C_00ab8130 {
    bool sub_00ab8130();
};

// @baa 0x00ab8130
bool C_00ab8130::sub_00ab8130(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00ab8140 { int sub_00ab8140(void); };

// @baa 0x00ab8140
int C_00ab8140::sub_00ab8140(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ab8400
int*ULensFlare::sub_00ab8400(byte param_2)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((int)(*param_1));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

// @baa 0x00ab84a0
void ULensFlare::sub_00ab84a0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

// @baa 0x00ab84c0
undefined4 ULensFlare::sub_00ab84c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ab8150(void);
// @baa 0x00ab84e0
undefined4 ULensFlare::sub_00ab84e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ab8150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ab81d0(void);
// @baa 0x00ab8500
undefined4 ULensFlare::sub_00ab8500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ab81d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ab8250(void);
// @baa 0x00ab8520
undefined4 ULensFlare::sub_00ab8520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ab8250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ab82d0(void);
// @baa 0x00ab8540
undefined4 ULensFlare::sub_00ab8540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ab82d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ab8350(void);
// @baa 0x00ab8560
undefined4 ULensFlare::sub_00ab8560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ab8350();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00ab8580
void sub_00ab8580(void) {  }

// @baa 0x00ab8590
void sub_00ab8590(void) { sub_007249d0(); }

// @baa 0x00ab85a0
void sub_00ab85a0(void) { sub_007249d0(); }

// @baa 0x00ab85b0
void sub_00ab85b0(void) { sub_007249d0(); }

// @baa 0x00ab85c0
void sub_00ab85c0(void) { sub_007249d0(); }

// @baa 0x00ab85d0
void sub_00ab85d0(void) { sub_007249d0(); }

// @baa 0x00ab85e0
void sub_00ab85e0(void) { sub_007249d0(); }

// @baa 0x00ab85f0
void sub_00ab85f0(void) { sub_007249d0(); }

// @baa 0x00ab8600
void sub_00ab8600(void) { sub_007249d0(); }

// @baa 0x00ab8610
void sub_00ab8610(void) { sub_007249d0(); }

// @baa 0x00ab8620
void sub_00ab8620(void) { sub_007249d0(); }

// @baa 0x00ab8630
void sub_00ab8630(void) { sub_007249d0(); }

// @baa 0x00ab8640
void sub_00ab8640(void) { sub_007249d0(); }

// @baa 0x00ab8650
void sub_00ab8650(void) { sub_007249d0(); }

// @baa 0x00ab8660
void sub_00ab8660(void) { sub_007249d0(); }

// @baa 0x00ab8670
void sub_00ab8670(void) { sub_007249d0(); }

// @baa 0x00ab8680
void sub_00ab8680(void) { sub_007249d0(); }

// @baa 0x00ab8690
void sub_00ab8690(void) { sub_007249d0(); }

// @baa 0x00ab86a0
void sub_00ab86a0(void) { sub_007249d0(); }

// @baa 0x00ab86b0
void sub_00ab86b0(void) { sub_007249d0(); }

// @baa 0x00ab86c0
void sub_00ab86c0(void) { sub_007249d0(); }

// @baa 0x00ab86d0
void sub_00ab86d0(void) { sub_007249d0(); }

// @baa 0x00ab86e0
void sub_00ab86e0(void) { sub_007249d0(); }

// @baa 0x00ab86f0
void sub_00ab86f0(void) { sub_007249d0(); }

// @baa 0x00ab8700
void sub_00ab8700(void) { sub_007249d0(); }

// @baa 0x00ab8710
void sub_00ab8710(void) { sub_007249d0(); }

// @baa 0x00ab8720
void sub_00ab8720(void) { sub_007249d0(); }

// @baa 0x00ab8730
void sub_00ab8730(void) { sub_007249d0(); }

// @baa 0x00ab8740
void sub_00ab8740(void) { sub_007249d0(); }

// @baa 0x00ab8750
void sub_00ab8750(void) { sub_007249d0(); }

// @baa 0x00ab8760
void sub_00ab8760(void) { sub_007249d0(); }

// @baa 0x00ab8770
void sub_00ab8770(void) { sub_007249d0(); }

// @baa 0x00ab8780
void sub_00ab8780(void) { sub_007249d0(); }

// @baa 0x00ab8790
void sub_00ab8790(void) { sub_007249d0(); }

// @baa 0x00ab87a0
void sub_00ab87a0(void) { sub_007249d0(); }

// @baa 0x00ab87b0
void sub_00ab87b0(void) { sub_007249d0(); }

struct S_00ab87c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ab87c0(INT Index);
};

// @baa 0x00ab87c0
DWORD* S_00ab87c0::sub_00ab87c0(INT Index)
{
    return &Items(Index);
}

struct C_00ab8830 { int a, b, c; C_00ab8830(); };

// @baa 0x00ab8830
C_00ab8830::C_00ab8830() : a(0), b(0), c(0) {}

struct C_00ab8840 { int sub_00ab8840(void); };

// @baa 0x00ab8840
int C_00ab8840::sub_00ab8840(void) { return *(int*)((char*)this + 0); }

struct C_00ab8870 { C_00ab8870* sub_00ab8870(void); };

// @baa 0x00ab8870
C_00ab8870* C_00ab8870::sub_00ab8870(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab88a0 { int sub_00ab88a0(void); };

// @baa 0x00ab88a0
int C_00ab88a0::sub_00ab88a0(void) { return *(int*)((char*)this + 0); }

struct C_00ab88b0 { int sub_00ab88b0(void); };

// @baa 0x00ab88b0
int C_00ab88b0::sub_00ab88b0(void) { return *(int*)((char*)this + 0); }

struct C_00ab88c0 { int sub_00ab88c0(void); };

// @baa 0x00ab88c0
int C_00ab88c0::sub_00ab88c0(void) { return *(int*)((char*)this + 0); }

struct C_00ab88f0 { int sub_00ab88f0(void); };

// @baa 0x00ab88f0
int C_00ab88f0::sub_00ab88f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ab8900
bool sub_00ab8900(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ab8990 { int sub_00ab8990(void); };

// @baa 0x00ab8990
int C_00ab8990::sub_00ab8990(void) { return *(int*)((char*)this + 4); }

struct C_00ab89a0 { int sub_00ab89a0(void); };

// @baa 0x00ab89a0
int C_00ab89a0::sub_00ab89a0(void) { return *(int*)((char*)this + 0); }

struct C_00ab89b0 { int sub_00ab89b0(void); };

// @baa 0x00ab89b0
int C_00ab89b0::sub_00ab89b0(void) { return *(int*)((char*)this + 0); }

struct C_00ab89c0 { int sub_00ab89c0(void); };

// @baa 0x00ab89c0
int C_00ab89c0::sub_00ab89c0(void) { return *(int*)((char*)this + 0); }

struct C_00ab89d0 { int sub_00ab89d0(void); };

// @baa 0x00ab89d0
int C_00ab89d0::sub_00ab89d0(void) { return *(int*)((char*)this + 0); }

struct C_00ab8a00 { int sub_00ab8a00(void); };

// @baa 0x00ab8a00
int C_00ab8a00::sub_00ab8a00(void) { return *(int*)((char*)this + 0); }

struct C_00ab8a10 { int sub_00ab8a10(void); };

// @baa 0x00ab8a10
int C_00ab8a10::sub_00ab8a10(void) { return *(int*)((char*)this + 0); }

struct S_00ab8a20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ab8a20(INT Index);
};

// @baa 0x00ab8a20
DWORD* S_00ab8a20::sub_00ab8a20(INT Index)
{
    return &Items(Index);
}

// @baa 0x00ab8a70
int sub_00ab8a70(int a0) { return *(int*)a0; }

// @baa 0x00ab8a80
undefined4 sub_00ab8a80(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00ab8ae0 {
    void sub_00ab8ae0(int *);
};

// @baa 0x00ab8ae0
void C_00ab8ae0::sub_00ab8ae0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00ab8af0 { int sub_00ab8af0(void); };

// @baa 0x00ab8af0
int C_00ab8af0::sub_00ab8af0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00ab8b40
bool sub_00ab8b40(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00ab8b50
int* sub_00ab8b50(int* a, int b)
{
  *a = b;
  return a;
}

struct C_00ab8b90 { C_00ab8b90* sub_00ab8b90(void); };

// @baa 0x00ab8b90
C_00ab8b90* C_00ab8b90::sub_00ab8b90(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab8ba0 { int sub_00ab8ba0(void); };

// @baa 0x00ab8ba0
int C_00ab8ba0::sub_00ab8ba0(void) { return *(int*)((char*)this + 0); }

struct S_00ab8bb0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ab8bb0(INT Index);
};

// @baa 0x00ab8bb0
DWORD* S_00ab8bb0::sub_00ab8bb0(INT Index)
{
    return &Items(Index);
}

struct C_00ab8c00 { int sub_00ab8c00(void); };

// @baa 0x00ab8c00
int C_00ab8c00::sub_00ab8c00(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ab8c80
int sub_00ab8c80(int a0) { return *(int*)a0; }

// @baa 0x00ab8c90
bool sub_00ab8c90(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ab8ca0 { int a, b; C_00ab8ca0(const C_00ab8ca0 &); };

// @baa 0x00ab8ca0
C_00ab8ca0::C_00ab8ca0(const C_00ab8ca0 &o) : a(o.a), b(o.b) {}

// @baa 0x00ab8d00
int sub_00ab8d00(int a0) { return *(int*)a0; }

// @baa 0x00ab8d10
bool sub_00ab8d10(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ab8d20 {
    void sub_00ab8d20(undefined4 *);
};

// @baa 0x00ab8d20
void C_00ab8d20::sub_00ab8d20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00ab8d40
int sub_00ab8d40(int a0) { return *(int*)a0; }

// @baa 0x00ab8d50
bool sub_00ab8d50(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ab8d60 {
    void sub_00ab8d60(undefined4 *);
};

// @baa 0x00ab8d60
void C_00ab8d60::sub_00ab8d60(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00ab8d80 {
    int sub_00ab8d80();
};

// @baa 0x00ab8d80
int C_00ab8d80::sub_00ab8d80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x314) * 0x30;
}

struct C_00ab8dc0 {
    int sub_00ab8dc0();
};

// @baa 0x00ab8dc0
int C_00ab8dc0::sub_00ab8dc0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x3c8) * 0x3c;
}

struct C_00ab8de0 { int sub_00ab8de0(void); };

// @baa 0x00ab8de0
int C_00ab8de0::sub_00ab8de0(void) { return *(int*)((char*)this + 0); }

struct C_00ab8df0 { C_00ab8df0* sub_00ab8df0(void); };

// @baa 0x00ab8df0
C_00ab8df0* C_00ab8df0::sub_00ab8df0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab8e00 { int sub_00ab8e00(void); };

// @baa 0x00ab8e00
int C_00ab8e00::sub_00ab8e00(void) { return *(int*)((char*)this + 0); }

struct C_00ab8e30 { int sub_00ab8e30(void); };

// @baa 0x00ab8e30
int C_00ab8e30::sub_00ab8e30(void) { return *(int*)((char*)this + 0); }

struct C_00ab8e40 { char* sub_00ab8e40(void); };

// @baa 0x00ab8e40
char* C_00ab8e40::sub_00ab8e40(void) { return (char*)this + 16; }

struct C_00ab8eb0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00ab8eb0* sub_00ab8eb0(INT value);
};

// @baa 0x00ab8eb0
C_00ab8eb0* C_00ab8eb0::sub_00ab8eb0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00ab8ed0 { int sub_00ab8ed0(void); };

// @baa 0x00ab8ed0
int C_00ab8ed0::sub_00ab8ed0(void) { return *(int*)((char*)this + 20); }

struct C_00ab8ee0 { int sub_00ab8ee0(void); };

// @baa 0x00ab8ee0
int C_00ab8ee0::sub_00ab8ee0(void) { return *(int*)((char*)this + 6352); }

struct C_00ab8ef0 { int sub_00ab8ef0(void); };

// @baa 0x00ab8ef0
int C_00ab8ef0::sub_00ab8ef0(void) { return *(int*)((char*)this + 6352); }

struct C_00ab8f00 {
    void sub_00ab8f00();
};

// @baa 0x00ab8f00
void C_00ab8f00::sub_00ab8f00(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00ab8f20 {
    void sub_00ab8f20();
};

// @baa 0x00ab8f20
void C_00ab8f20::sub_00ab8f20(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00ab8f40 {
    void sub_00ab8f40();
};

// @baa 0x00ab8f40
void C_00ab8f40::sub_00ab8f40(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00ab8f60 {
    void sub_00ab8f60();
};

// @baa 0x00ab8f60
void C_00ab8f60::sub_00ab8f60(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00ab8fa0 { int sub_00ab8fa0(void); };

// @baa 0x00ab8fa0
int C_00ab8fa0::sub_00ab8fa0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab8fb0 { int sub_00ab8fb0(void); };

// @baa 0x00ab8fb0
int C_00ab8fb0::sub_00ab8fb0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab8fc0 { int sub_00ab8fc0(void); };

// @baa 0x00ab8fc0
int C_00ab8fc0::sub_00ab8fc0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab8fd0 { int sub_00ab8fd0(void); };

// @baa 0x00ab8fd0
int C_00ab8fd0::sub_00ab8fd0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab8fe0 { int sub_00ab8fe0(void); };

// @baa 0x00ab8fe0
int C_00ab8fe0::sub_00ab8fe0(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab8ff0 { int sub_00ab8ff0(void); };

// @baa 0x00ab8ff0
int C_00ab8ff0::sub_00ab8ff0(void) { return *(int*)((char*)this + 0); }

struct C_00ab9000 { C_00ab9000* sub_00ab9000(void); };

// @baa 0x00ab9000
C_00ab9000* C_00ab9000::sub_00ab9000(void) { return this; }

struct C_00ab9010 {
    int sub_00ab9010(int);
};

// @baa 0x00ab9010
int C_00ab9010::sub_00ab9010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ab9020 { int sub_00ab9020(void); };

// @baa 0x00ab9020
int C_00ab9020::sub_00ab9020(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab9030 { C_00ab9030* sub_00ab9030(void); };

// @baa 0x00ab9030
C_00ab9030* C_00ab9030::sub_00ab9030(void) { return this; }

struct C_00ab9040 { int sub_00ab9040(void); };

// @baa 0x00ab9040
int C_00ab9040::sub_00ab9040(void) { return *(int*)((char*)this + 0); }

struct C_00ab9050 { int sub_00ab9050(void); };

// @baa 0x00ab9050
int C_00ab9050::sub_00ab9050(void) { return *(int*)((char*)this + 0); }

struct C_00ab9060 { int sub_00ab9060(void); };

// @baa 0x00ab9060
int C_00ab9060::sub_00ab9060(void) { return *(int*)((char*)this + 0); }

struct C_00ab9070 { int sub_00ab9070(void); };

// @baa 0x00ab9070
int C_00ab9070::sub_00ab9070(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab9080 { int sub_00ab9080(void); };

// @baa 0x00ab9080
int C_00ab9080::sub_00ab9080(void) { return *(int*)((char*)this + 4); }

struct C_00ab9100 { int sub_00ab9100(void); };

// @baa 0x00ab9100
int C_00ab9100::sub_00ab9100(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00ab9110 { int sub_00ab9110(void); };

// @baa 0x00ab9110
int C_00ab9110::sub_00ab9110(void) { return *(int*)((char*)this + 4); }

struct C_00ab91b0 {
    undefined4 sub_00ab91b0(uint);
};

// @baa 0x00ab91b0
undefined4 C_00ab91b0::sub_00ab91b0(uint param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 0x324 + (param_2 & 7) * 4);
}

struct C_00ab91d0 { int sub_00ab91d0(void); };

// @baa 0x00ab91d0
int C_00ab91d0::sub_00ab91d0(void) { return *(int*)((char*)this + 4); }

struct C_00ab91e0 { C_00ab91e0* sub_00ab91e0(void); };

// @baa 0x00ab91e0
C_00ab91e0* C_00ab91e0::sub_00ab91e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab91f0 { int sub_00ab91f0(void); };

// @baa 0x00ab91f0
int C_00ab91f0::sub_00ab91f0(void) { return *(int*)((char*)this + 0); }

struct C_00ab9200 { int sub_00ab9200(void); };

// @baa 0x00ab9200
int C_00ab9200::sub_00ab9200(void) { return *(int*)((char*)this + 20); }

struct C_00ab9210 { int sub_00ab9210(void); };

// @baa 0x00ab9210
int C_00ab9210::sub_00ab9210(void) { return *(int*)((char*)this + 20); }

struct C_00ab9280 { int sub_00ab9280(void); };

// @baa 0x00ab9280
int C_00ab9280::sub_00ab9280(void) { return *(int*)((char*)this + 20); }

struct C_00ab9290 { int sub_00ab9290(void); };

// @baa 0x00ab9290
int C_00ab9290::sub_00ab9290(void) { return *(int*)((char*)this + 20); }

struct C_00ab92a0 { int sub_00ab92a0(void); };

// @baa 0x00ab92a0
int C_00ab92a0::sub_00ab92a0(void) { return *(int*)((char*)this + 20); }

struct C_00ab92b0 { int sub_00ab92b0(void); };

// @baa 0x00ab92b0
int C_00ab92b0::sub_00ab92b0(void) { return *(int*)((char*)this + 20); }

struct C_00ab92c0 { int sub_00ab92c0(void); };

// @baa 0x00ab92c0
int C_00ab92c0::sub_00ab92c0(void) { return *(int*)((char*)this + 20); }

struct C_00ab92d0 { int sub_00ab92d0(void); };

// @baa 0x00ab92d0
int C_00ab92d0::sub_00ab92d0(void) { return *(int*)((char*)this + 20); }

struct C_00ab92e0 { int sub_00ab92e0(void); };

// @baa 0x00ab92e0
int C_00ab92e0::sub_00ab92e0(void) { return *(int*)((char*)this + 20); }

struct C_00ab92f0 { int sub_00ab92f0(void); };

// @baa 0x00ab92f0
int C_00ab92f0::sub_00ab92f0(void) { return *(int*)((char*)this + 20); }

struct C_00ab9300 { int sub_00ab9300(void); };

// @baa 0x00ab9300
int C_00ab9300::sub_00ab9300(void) { return *(int*)((char*)this + 0); }

struct C_00ab9310 { int sub_00ab9310(void); };

// @baa 0x00ab9310
int C_00ab9310::sub_00ab9310(void) { return *(int*)((char*)this + 0); }

struct C_00ab9320 {
    int sub_00ab9320(int);
};

// @baa 0x00ab9320
int C_00ab9320::sub_00ab9320(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ab9330 { int sub_00ab9330(void); };

// @baa 0x00ab9330
int C_00ab9330::sub_00ab9330(void) { return *(int*)((char*)this + 0); }

struct C_00ab9340 { int sub_00ab9340(void); };

// @baa 0x00ab9340
int C_00ab9340::sub_00ab9340(void) { return *(int*)((char*)this + 0); }

struct C_00ab9350 { int sub_00ab9350(void); };

// @baa 0x00ab9350
int C_00ab9350::sub_00ab9350(void) { return *(int*)((char*)this + 0); }

struct C_00ab9360 { int sub_00ab9360(void); };

// @baa 0x00ab9360
int C_00ab9360::sub_00ab9360(void) { return *(int*)((char*)this + 0); }

struct C_00ab9390 { C_00ab9390* sub_00ab9390(void); };

// @baa 0x00ab9390
C_00ab9390* C_00ab9390::sub_00ab9390(void) { return this; }

struct C_00ab93a0 { C_00ab93a0* sub_00ab93a0(void); };

// @baa 0x00ab93a0
C_00ab93a0* C_00ab93a0::sub_00ab93a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab93b0 { int sub_00ab93b0(void); };

// @baa 0x00ab93b0
int C_00ab93b0::sub_00ab93b0(void) { return *(int*)((char*)this + 0); }

struct C_00ab93c0 { C_00ab93c0* sub_00ab93c0(void); };

// @baa 0x00ab93c0
C_00ab93c0* C_00ab93c0::sub_00ab93c0(void) { return this; }

struct C_00ab93d0 { C_00ab93d0* sub_00ab93d0(void); };

// @baa 0x00ab93d0
C_00ab93d0* C_00ab93d0::sub_00ab93d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab93e0 { int sub_00ab93e0(void); };

// @baa 0x00ab93e0
int C_00ab93e0::sub_00ab93e0(void) { return *(int*)((char*)this + 0); }

struct C_00ab93f0 { int sub_00ab93f0(void); };

// @baa 0x00ab93f0
int C_00ab93f0::sub_00ab93f0(void) { return *(int*)((char*)this + 20); }

struct C_00ab9400 { int sub_00ab9400(void); };

// @baa 0x00ab9400
int C_00ab9400::sub_00ab9400(void) { return *(int*)((char*)this + 20); }

struct C_00ab9410 { int sub_00ab9410(void); };

// @baa 0x00ab9410
int C_00ab9410::sub_00ab9410(void) { return *(int*)((char*)this + 20); }

struct C_00ab9420 { int sub_00ab9420(void); };

// @baa 0x00ab9420
int C_00ab9420::sub_00ab9420(void) { return *(int*)((char*)this + 20); }

struct C_00ab9430 { int sub_00ab9430(void); };

// @baa 0x00ab9430
int C_00ab9430::sub_00ab9430(void) { return *(int*)((char*)this + 20); }

struct C_00ab9440 { int sub_00ab9440(void); };

// @baa 0x00ab9440
int C_00ab9440::sub_00ab9440(void) { return *(int*)((char*)this + 20); }

struct C_00ab9450 { int sub_00ab9450(void); };

// @baa 0x00ab9450
int C_00ab9450::sub_00ab9450(void) { return *(int*)((char*)this + 20); }

struct C_00ab9460 { int sub_00ab9460(void); };

// @baa 0x00ab9460
int C_00ab9460::sub_00ab9460(void) { return *(int*)((char*)this + 20); }

struct C_00ab9470 { int sub_00ab9470(void); };

// @baa 0x00ab9470
int C_00ab9470::sub_00ab9470(void) { return *(int*)((char*)this + 20); }

struct C_00ab9480 { int sub_00ab9480(void); };

// @baa 0x00ab9480
int C_00ab9480::sub_00ab9480(void) { return *(int*)((char*)this + 20); }

struct C_00ab9490 { int sub_00ab9490(void); };

// @baa 0x00ab9490
int C_00ab9490::sub_00ab9490(void) { return *(int*)((char*)this + 20); }

struct C_00ab94a0 { int sub_00ab94a0(void); };

// @baa 0x00ab94a0
int C_00ab94a0::sub_00ab94a0(void) { return *(int*)((char*)this + 20); }

struct C_00ab94b0 { int sub_00ab94b0(void); };

// @baa 0x00ab94b0
int C_00ab94b0::sub_00ab94b0(void) { return *(int*)((char*)this + 20); }

struct C_00ab94c0 { int sub_00ab94c0(void); };

// @baa 0x00ab94c0
int C_00ab94c0::sub_00ab94c0(void) { return *(int*)((char*)this + 20); }

struct C_00ab94d0 { int sub_00ab94d0(void); };

// @baa 0x00ab94d0
int C_00ab94d0::sub_00ab94d0(void) { return *(int*)((char*)this + 20); }

struct C_00ab94e0 { int sub_00ab94e0(void); };

// @baa 0x00ab94e0
int C_00ab94e0::sub_00ab94e0(void) { return *(int*)((char*)this + 20); }

struct C_00ab94f0 { int sub_00ab94f0(void); };

// @baa 0x00ab94f0
int C_00ab94f0::sub_00ab94f0(void) { return *(int*)((char*)this + 20); }

struct C_00ab9500 { int sub_00ab9500(void); };

// @baa 0x00ab9500
int C_00ab9500::sub_00ab9500(void) { return *(int*)((char*)this + 20); }

struct C_00ab9510 { int sub_00ab9510(void); };

// @baa 0x00ab9510
int C_00ab9510::sub_00ab9510(void) { return *(int*)((char*)this + 20); }

struct C_00ab9520 { int sub_00ab9520(void); };

// @baa 0x00ab9520
int C_00ab9520::sub_00ab9520(void) { return *(int*)((char*)this + 20); }

struct C_00ab9530 { int sub_00ab9530(void); };

// @baa 0x00ab9530
int C_00ab9530::sub_00ab9530(void) { return *(int*)((char*)this + 0); }

struct C_00ab9540 { int sub_00ab9540(void); };

// @baa 0x00ab9540
int C_00ab9540::sub_00ab9540(void) { return *(int*)((char*)this + 0); }

struct C_00ab9550 { int sub_00ab9550(void); };

// @baa 0x00ab9550
int C_00ab9550::sub_00ab9550(void) { return *(int*)((char*)this + 0); }

struct C_00ab9560 { int sub_00ab9560(void); };

// @baa 0x00ab9560
int C_00ab9560::sub_00ab9560(void) { return *(int*)((char*)this + 20); }

struct C_00ab9570 { int sub_00ab9570(void); };

// @baa 0x00ab9570
int C_00ab9570::sub_00ab9570(void) { return *(int*)((char*)this + 0); }

struct C_00ab9580 { C_00ab9580* sub_00ab9580(void); };

// @baa 0x00ab9580
C_00ab9580* C_00ab9580::sub_00ab9580(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab9590 { int sub_00ab9590(void); };

// @baa 0x00ab9590
int C_00ab9590::sub_00ab9590(void) { return *(int*)((char*)this + 0); }

struct C_00ab95a0 { int sub_00ab95a0(void); };

// @baa 0x00ab95a0
int C_00ab95a0::sub_00ab95a0(void) { return *(int*)((char*)this + 0); }

struct C_00ab95b0 { int sub_00ab95b0(void); };

// @baa 0x00ab95b0
int C_00ab95b0::sub_00ab95b0(void) { return *(int*)((char*)this + 0); }

struct C_00ab95c0 { int sub_00ab95c0(void); };

// @baa 0x00ab95c0
int C_00ab95c0::sub_00ab95c0(void) { return *(int*)((char*)this + 0); }

struct C_00ab95d0 { int a, b, c; C_00ab95d0(); };

// @baa 0x00ab95d0
C_00ab95d0::C_00ab95d0() : a(0), b(0), c(0) {}

struct C_00ab95e0 { int sub_00ab95e0(void); };

// @baa 0x00ab95e0
int C_00ab95e0::sub_00ab95e0(void) { return *(int*)((char*)this + 0); }

struct C_00ab95f0 { int sub_00ab95f0(void); };

// @baa 0x00ab95f0
int C_00ab95f0::sub_00ab95f0(void) { return *(int*)((char*)this + 0); }

struct C_00ab9600 { int a, b, c; C_00ab9600(); };

// @baa 0x00ab9600
C_00ab9600::C_00ab9600() : a(0), b(0), c(0) {}

struct C_00ab9610 { int sub_00ab9610(void); };

// @baa 0x00ab9610
int C_00ab9610::sub_00ab9610(void) { return *(int*)((char*)this + 0); }

struct C_00ab9620 { int sub_00ab9620(void); };

// @baa 0x00ab9620
int C_00ab9620::sub_00ab9620(void) { return *(int*)((char*)this + 0); }

struct C_00ab9630 { C_00ab9630* sub_00ab9630(void); };

// @baa 0x00ab9630
C_00ab9630* C_00ab9630::sub_00ab9630(void) { return this; }

struct C_00ab9640 { int sub_00ab9640(void); };

// @baa 0x00ab9640
int C_00ab9640::sub_00ab9640(void) { return *(int*)((char*)this + 0); }

struct C_00ab9650 { int sub_00ab9650(void); };

// @baa 0x00ab9650
int C_00ab9650::sub_00ab9650(void) { return *(int*)((char*)this + 16); }

struct C_00ab9660 { int sub_00ab9660(void); };

// @baa 0x00ab9660
int C_00ab9660::sub_00ab9660(void) { return *(int*)((char*)this + 0); }

struct C_00ab9670 { int sub_00ab9670(void); };

// @baa 0x00ab9670
int C_00ab9670::sub_00ab9670(void) { return *(int*)((char*)this + 0); }

struct C_00ab9680 { int sub_00ab9680(void); };

// @baa 0x00ab9680
int C_00ab9680::sub_00ab9680(void) { return *(int*)((char*)this + 0); }

struct C_00ab9690 { C_00ab9690* sub_00ab9690(void); };

// @baa 0x00ab9690
C_00ab9690* C_00ab9690::sub_00ab9690(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ab96a0 { int sub_00ab96a0(void); };

// @baa 0x00ab96a0
int C_00ab96a0::sub_00ab96a0(void) { return *(int*)((char*)this + 0); }

struct C_00ab96b0 { int sub_00ab96b0(void); };

// @baa 0x00ab96b0
int C_00ab96b0::sub_00ab96b0(void) { return *(int*)((char*)this + 0); }

struct C_00ab96c0 { int sub_00ab96c0(void); };

// @baa 0x00ab96c0
int C_00ab96c0::sub_00ab96c0(void) { return *(int*)((char*)this + 0); }

struct C_00ab96d0 { int sub_00ab96d0(void); };

// @baa 0x00ab96d0
int C_00ab96d0::sub_00ab96d0(void) { return *(int*)((char*)this + 0); }

struct C_00ab9700 { int sub_00ab9700(void); };

// @baa 0x00ab9700
int C_00ab9700::sub_00ab9700(void) { return *(int*)((char*)this + 0); }

struct C_00ab9730 { int sub_00ab9730(void); };

// @baa 0x00ab9730
int C_00ab9730::sub_00ab9730(void) { return *(int*)((char*)this + 0); }

struct C_00ab9760 { int sub_00ab9760(void); };

// @baa 0x00ab9760
int C_00ab9760::sub_00ab9760(void) { return *(int*)((char*)this + 0); }

extern char g_026bd1c0[];
struct C_00ab98f0 { void sub_006fa300(int, int); void sub_00ab98f0(int); };

// @baa 0x00ab98f0
void C_00ab98f0::sub_00ab98f0(int a) { sub_006fa300((int)g_026bd1c0, a); }

extern char g_026bc008[];
struct C_00ab9910 { void sub_006fa300(int, int); void sub_00ab9910(int); };

// @baa 0x00ab9910
void C_00ab9910::sub_00ab9910(int a) { sub_006fa300((int)g_026bc008, a); }

extern char g_026bcd28[];
struct C_00ab9930 { void sub_006fa300(int, int); void sub_00ab9930(int); };

// @baa 0x00ab9930
void C_00ab9930::sub_00ab9930(int a) { sub_006fa300((int)g_026bcd28, a); }

extern char g_026bdaf0[];
struct C_00ab9950 { void sub_006fa300(int, int); void sub_00ab9950(int); };

// @baa 0x00ab9950
void C_00ab9950::sub_00ab9950(int a) { sub_006fa300((int)g_026bdaf0, a); }

extern char g_026bb994[];
struct C_00ab9970 { void sub_006fa300(int, int); void sub_00ab9970(int); };

// @baa 0x00ab9970
void C_00ab9970::sub_00ab9970(int a) { sub_006fa300((int)g_026bb994, a); }

extern char g_026bba50[];
struct C_00ab9990 { void sub_006fa300(int, int); void sub_00ab9990(int); };

// @baa 0x00ab9990
void C_00ab9990::sub_00ab9990(int a) { sub_006fa300((int)g_026bba50, a); }

struct C_00ab99b0 {
    void sub_00ab99b0(int);
};

// @baa 0x00ab99b0
void C_00ab99b0::sub_00ab99b0(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 100);
  return;
}

struct C_00ab9a00 {
    void sub_00ab9a00(int);
};

// @baa 0x00ab9a00
void C_00ab9a00::sub_00ab9a00(int param_2)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 100);
  return;
}

// @baa 0x00ab9a10
void sub_00ab9a10(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

// @baa 0x00ab9a20
void sub_00ab9a20(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

// @baa 0x00ab9ab0
void sub_00ab9ab0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00ab9ad0
void sub_00ab9ad0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00ab9af0
uint sub_00ab9af0(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00ab9b10
uint sub_00ab9b10(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00ab9b30
uint sub_00ab9b30(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00ab9b50
uint sub_00ab9b50(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_00ab9b70{
int sub_00ab9b70(byte);
};

// @baa 0x00ab9b70
int C_00ab9b70::sub_00ab9b70(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+8)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((int)(*(int*)(param_1+8)));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00ab9c80{
undefined4*sub_00ab9c80(undefined4*);
};

// @baa 0x00ab9c80
undefined4*C_00ab9c80::sub_00ab9c80(undefined4*param_2)
{
undefined4*param_1=(undefined4*)this;

int iVar1;

*param_1=*param_2;
param_1[1]=param_2[1];
iVar1=param_2[2];
param_1[2]=iVar1;
if(iVar1!=0){
(*(uint(__stdcall**)(int))(*g_026b0d94+0x1cc))((int)(iVar1));
}
return param_1;
}

struct C_00ab9d40 { int a, b; C_00ab9d40(const C_00ab9d40 &); };

// @baa 0x00ab9d40
C_00ab9d40::C_00ab9d40(const C_00ab9d40 &o) : a(o.a), b(o.b) {}

struct C_00ab9d60 { int sub_00ab9d60(void); };

// @baa 0x00ab9d60
int C_00ab9d60::sub_00ab9d60(void) { return *(int*)((char*)this + 784); }

struct C_00ab9d70 { int sub_00ab9d70(void); };

// @baa 0x00ab9d70
int C_00ab9d70::sub_00ab9d70(void) { return *(int*)((char*)this + 964); }

struct C_00abad70 { int sub_00abad70(void); };

// @baa 0x00abad70
int C_00abad70::sub_00abad70(void) { return *(int*)((char*)this + 4); }

struct C_00abafa0 { int sub_00abafa0(void); };

// @baa 0x00abafa0
int C_00abafa0::sub_00abafa0(void) { return *(int*)((char*)this + 0); }

struct C_00abafb0 { int sub_00abafb0(void); };

// @baa 0x00abafb0
int C_00abafb0::sub_00abafb0(void) { return *(int*)((char*)this + 0); }

struct C_00abafc0 {
    int sub_00abafc0(int);
};

// @baa 0x00abafc0
int C_00abafc0::sub_00abafc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00abafd0 { C_00abafd0* sub_00abafd0(void); };

// @baa 0x00abafd0
C_00abafd0* C_00abafd0::sub_00abafd0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00abafe0 { C_00abafe0* sub_00abafe0(void); };

// @baa 0x00abafe0
C_00abafe0* C_00abafe0::sub_00abafe0(void) { *(int*)((char*)this + 0) = 0; return this; }

int sub_00627f00(...);
// @baa 0x00abaff0
void sub_00abaff0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,800);
  return;
}

// @baa 0x00abb010
void sub_00abb010(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x3cc);
  return;
}

extern char g_026bc548[];
struct C_00abb030 { void sub_006fa300(int, int); void sub_00abb030(int); };

// @baa 0x00abb030
void C_00abb030::sub_00abb030(int a) { sub_006fa300((int)g_026bc548, a); }

extern char g_026bd460[];
struct C_00abb050 { void sub_006fa300(int, int); void sub_00abb050(int); };

// @baa 0x00abb050
void C_00abb050::sub_00abb050(int a) { sub_006fa300((int)g_026bd460, a); }

extern char g_026bcfc8[];
struct C_00abb070 { void sub_006fa300(int, int); void sub_00abb070(int); };

// @baa 0x00abb070
void C_00abb070::sub_00abb070(int a) { sub_006fa300((int)g_026bcfc8, a); }

extern char g_026bc938[];
struct C_00abb090 { void sub_006fa300(int, int); void sub_00abb090(int); };

// @baa 0x00abb090
void C_00abb090::sub_00abb090(int a) { sub_006fa300((int)g_026bc938, a); }

struct C_00abb0b0 { unsigned sub_00abb0b0(void); };

// @baa 0x00abb0b0
unsigned C_00abb0b0::sub_00abb0b0(void) { return *(unsigned*)((char*)this + 836) >> 31; }

struct C_00abb0c0 { unsigned sub_00abb0c0(void); };

// @baa 0x00abb0c0
unsigned C_00abb0c0::sub_00abb0c0(void) { return *(unsigned*)((char*)this + 1008) >> 31; }

struct C_00abb0d0 {
    bool sub_00abb0d0();
};

// @baa 0x00abb0d0
bool C_00abb0d0::sub_00abb0d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00abb0e0 { int sub_00abb0e0(void); };

// @baa 0x00abb0e0
int C_00abb0e0::sub_00abb0e0(void) { return *(int*)((char*)this + 0); }

struct C_00abb0f0 { char* sub_00abb0f0(void); };

// @baa 0x00abb0f0
char* C_00abb0f0::sub_00abb0f0(void) { return (char*)this + 16; }

struct C_00abb100 {
    bool sub_00abb100();
};

// @baa 0x00abb100
bool C_00abb100::sub_00abb100(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00abb110 { int sub_00abb110(void); };

// @baa 0x00abb110
int C_00abb110::sub_00abb110(void) { return *(int*)((char*)this + 0); }

struct C_00abb120 { char* sub_00abb120(void); };

// @baa 0x00abb120
char* C_00abb120::sub_00abb120(void) { return (char*)this + 16; }

struct C_00abb130 { int sub_00abb130(void); };

// @baa 0x00abb130
int C_00abb130::sub_00abb130(void) { return *(int*)((char*)this + 80); }

struct C_00abb140 {
    void sub_00abb140();
};

// @baa 0x00abb140
void C_00abb140::sub_00abb140(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

struct C_00abb160 { int sub_00abb160(void); };

// @baa 0x00abb160
int C_00abb160::sub_00abb160(void) { return *(int*)((char*)this + 80); }

struct C_00abb170 {
    void sub_00abb170();
};

// @baa 0x00abb170
void C_00abb170::sub_00abb170(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

struct C_00abb190 { C_00abb190* sub_00abb190(void); };

// @baa 0x00abb190
C_00abb190* C_00abb190::sub_00abb190(void) { *(int*)((char*)this + 64) = 0; return this; }

struct C_00abb1d0 { C_00abb1d0* sub_00abb1d0(void); };

// @baa 0x00abb1d0
C_00abb1d0* C_00abb1d0::sub_00abb1d0(void) { *(int*)((char*)this + 64) = 0; return this; }

struct C_00abb210 { C_00abb210* sub_00abb210(void); };

// @baa 0x00abb210
C_00abb210* C_00abb210::sub_00abb210(void) { return this; }

struct C_00abb220 { C_00abb220* sub_00abb220(void); };

// @baa 0x00abb220
C_00abb220* C_00abb220::sub_00abb220(void) { return this; }

struct A_00abb270 { virtual void sub_00ac1630(); char pad[16]; };

struct B_00abb270 { virtual void sub_00ac1630(); };

struct C_00abb270 : A_00abb270, B_00abb270 { virtual void sub_00ac1630(); C_00abb270(); };

C_00abb270::C_00abb270() {}

// @baa 0x00abb270
void C_00abb270::sub_00ac1630() {}

struct A_00abb280 { virtual void sub_00ac15f0(); char pad[16]; };

struct B_00abb280 { virtual void sub_00ac15f0(); };

struct C_00abb280 : A_00abb280, B_00abb280 { virtual void sub_00ac15f0(); C_00abb280(); };

C_00abb280::C_00abb280() {}

// @baa 0x00abb280
void C_00abb280::sub_00ac15f0() {}

struct A_00abb290 { virtual void sub_00ac15b0(); char pad[16]; };

struct B_00abb290 { virtual void sub_00ac15b0(); };

struct C_00abb290 : A_00abb290, B_00abb290 { virtual void sub_00ac15b0(); C_00abb290(); };

C_00abb290::C_00abb290() {}

// @baa 0x00abb290
void C_00abb290::sub_00ac15b0() {}

struct A_00abb2a0 { virtual void sub_00ac1770(); char pad[16]; };

struct B_00abb2a0 { virtual void sub_00ac1770(); };

struct C_00abb2a0 : A_00abb2a0, B_00abb2a0 { virtual void sub_00ac1770(); C_00abb2a0(); };

C_00abb2a0::C_00abb2a0() {}

// @baa 0x00abb2a0
void C_00abb2a0::sub_00ac1770() {}

struct A_00abb2b0 { virtual void sub_00ac16f0(); char pad[16]; };

struct B_00abb2b0 { virtual void sub_00ac16f0(); };

struct C_00abb2b0 : A_00abb2b0, B_00abb2b0 { virtual void sub_00ac16f0(); C_00abb2b0(); };

C_00abb2b0::C_00abb2b0() {}

// @baa 0x00abb2b0
void C_00abb2b0::sub_00ac16f0() {}

struct A_00abb2c0 { virtual void sub_00abb6e0(); char pad[16]; };

struct B_00abb2c0 { virtual void sub_00abb6e0(); };

struct C_00abb2c0 : A_00abb2c0, B_00abb2c0 { virtual void sub_00abb6e0(); C_00abb2c0(); };

C_00abb2c0::C_00abb2c0() {}

// @baa 0x00abb2c0
void C_00abb2c0::sub_00abb6e0() {}

struct A_00abb2d0 { virtual void sub_00ac1750(); char pad[16]; };

struct B_00abb2d0 { virtual void sub_00ac1750(); };

struct C_00abb2d0 : A_00abb2d0, B_00abb2d0 { virtual void sub_00ac1750(); C_00abb2d0(); };

C_00abb2d0::C_00abb2d0() {}

// @baa 0x00abb2d0
void C_00abb2d0::sub_00ac1750() {}

struct A_00abb2e0 { virtual void sub_00ac1670(); char pad[16]; };

struct B_00abb2e0 { virtual void sub_00ac1670(); };

struct C_00abb2e0 : A_00abb2e0, B_00abb2e0 { virtual void sub_00ac1670(); C_00abb2e0(); };

C_00abb2e0::C_00abb2e0() {}

// @baa 0x00abb2e0
void C_00abb2e0::sub_00ac1670() {}

struct A_00abb2f0 { virtual void sub_00ac1450(); char pad[16]; };

struct B_00abb2f0 { virtual void sub_00ac1450(); };

struct C_00abb2f0 : A_00abb2f0, B_00abb2f0 { virtual void sub_00ac1450(); C_00abb2f0(); };

C_00abb2f0::C_00abb2f0() {}

// @baa 0x00abb2f0
void C_00abb2f0::sub_00ac1450() {}

struct A_00abb300 { virtual void sub_00ac1350(); char pad[16]; };

struct B_00abb300 { virtual void sub_00ac1350(); };

struct C_00abb300 : A_00abb300, B_00abb300 { virtual void sub_00ac1350(); C_00abb300(); };

C_00abb300::C_00abb300() {}

// @baa 0x00abb300
void C_00abb300::sub_00ac1350() {}

struct A_00abb310 { virtual void sub_00ac1330(); char pad[16]; };

struct B_00abb310 { virtual void sub_00ac1330(); };

struct C_00abb310 : A_00abb310, B_00abb310 { virtual void sub_00ac1330(); C_00abb310(); };

C_00abb310::C_00abb310() {}

// @baa 0x00abb310
void C_00abb310::sub_00ac1330() {}

struct A_00abb320 { virtual void sub_00ac1570(); char pad[16]; };

struct B_00abb320 { virtual void sub_00ac1570(); };

struct C_00abb320 : A_00abb320, B_00abb320 { virtual void sub_00ac1570(); C_00abb320(); };

C_00abb320::C_00abb320() {}

// @baa 0x00abb320
void C_00abb320::sub_00ac1570() {}

struct A_00abb330 { virtual void sub_00ac14f0(); char pad[16]; };

struct B_00abb330 { virtual void sub_00ac14f0(); };

struct C_00abb330 : A_00abb330, B_00abb330 { virtual void sub_00ac14f0(); C_00abb330(); };

C_00abb330::C_00abb330() {}

// @baa 0x00abb330
void C_00abb330::sub_00ac14f0() {}

struct A_00abb340 { virtual void sub_00ac16b0(); char pad[16]; };

struct B_00abb340 { virtual void sub_00ac16b0(); };

struct C_00abb340 : A_00abb340, B_00abb340 { virtual void sub_00ac16b0(); C_00abb340(); };

C_00abb340::C_00abb340() {}

// @baa 0x00abb340
void C_00abb340::sub_00ac16b0() {}

struct A_00abb350 { virtual void sub_00ac1530(); char pad[16]; };

struct B_00abb350 { virtual void sub_00ac1530(); };

struct C_00abb350 : A_00abb350, B_00abb350 { virtual void sub_00ac1530(); C_00abb350(); };

C_00abb350::C_00abb350() {}

// @baa 0x00abb350
void C_00abb350::sub_00ac1530() {}

struct A_00abb360 { virtual void sub_00ac1390(); char pad[16]; };

struct B_00abb360 { virtual void sub_00ac1390(); };

struct C_00abb360 : A_00abb360, B_00abb360 { virtual void sub_00ac1390(); C_00abb360(); };

C_00abb360::C_00abb360() {}

// @baa 0x00abb360
void C_00abb360::sub_00ac1390() {}

struct A_00abb370 { virtual void sub_00ac1430(); char pad[16]; };

struct B_00abb370 { virtual void sub_00ac1430(); };

struct C_00abb370 : A_00abb370, B_00abb370 { virtual void sub_00ac1430(); C_00abb370(); };

C_00abb370::C_00abb370() {}

// @baa 0x00abb370
void C_00abb370::sub_00ac1430() {}

struct A_00abb380 { virtual void sub_00ac13d0(); char pad[16]; };

struct B_00abb380 { virtual void sub_00ac13d0(); };

struct C_00abb380 : A_00abb380, B_00abb380 { virtual void sub_00ac13d0(); C_00abb380(); };

C_00abb380::C_00abb380() {}

// @baa 0x00abb380
void C_00abb380::sub_00ac13d0() {}

struct A_00abb390 { virtual void sub_00abc810(); char pad[16]; };

struct B_00abb390 { virtual void sub_00abc810(); };

struct C_00abb390 : A_00abb390, B_00abb390 { virtual void sub_00abc810(); C_00abb390(); };

C_00abb390::C_00abb390() {}

// @baa 0x00abb390
void C_00abb390::sub_00abc810() {}

struct A_00abb3a0 { virtual void sub_00ac1470(); char pad[16]; };

struct B_00abb3a0 { virtual void sub_00ac1470(); };

struct C_00abb3a0 : A_00abb3a0, B_00abb3a0 { virtual void sub_00ac1470(); C_00abb3a0(); };

C_00abb3a0::C_00abb3a0() {}

// @baa 0x00abb3a0
void C_00abb3a0::sub_00ac1470() {}

struct A_00abb3b0 { virtual void sub_00ac14b0(); char pad[16]; };

struct B_00abb3b0 { virtual void sub_00ac14b0(); };

struct C_00abb3b0 : A_00abb3b0, B_00abb3b0 { virtual void sub_00ac14b0(); C_00abb3b0(); };

C_00abb3b0::C_00abb3b0() {}

// @baa 0x00abb3b0
void C_00abb3b0::sub_00ac14b0() {}

struct A_00abb3c0 { virtual void sub_00ac1370(); char pad[16]; };

struct B_00abb3c0 { virtual void sub_00ac1370(); };

struct C_00abb3c0 : A_00abb3c0, B_00abb3c0 { virtual void sub_00ac1370(); C_00abb3c0(); };

C_00abb3c0::C_00abb3c0() {}

// @baa 0x00abb3c0
void C_00abb3c0::sub_00ac1370() {}

struct A_00abb3d0 { virtual void sub_00ac1550(); char pad[16]; };

struct B_00abb3d0 { virtual void sub_00ac1550(); };

struct C_00abb3d0 : A_00abb3d0, B_00abb3d0 { virtual void sub_00ac1550(); C_00abb3d0(); };

C_00abb3d0::C_00abb3d0() {}

// @baa 0x00abb3d0
void C_00abb3d0::sub_00ac1550() {}

struct A_00abb3e0 { virtual void sub_00ac1610(); char pad[16]; };

struct B_00abb3e0 { virtual void sub_00ac1610(); };

struct C_00abb3e0 : A_00abb3e0, B_00abb3e0 { virtual void sub_00ac1610(); C_00abb3e0(); };

C_00abb3e0::C_00abb3e0() {}

// @baa 0x00abb3e0
void C_00abb3e0::sub_00ac1610() {}

struct A_00abb3f0 { virtual void sub_00ac13f0(); char pad[16]; };

struct B_00abb3f0 { virtual void sub_00ac13f0(); };

struct C_00abb3f0 : A_00abb3f0, B_00abb3f0 { virtual void sub_00ac13f0(); C_00abb3f0(); };

C_00abb3f0::C_00abb3f0() {}

// @baa 0x00abb3f0
void C_00abb3f0::sub_00ac13f0() {}

struct A_00abb400 { virtual void sub_00ac15d0(); char pad[16]; };

struct B_00abb400 { virtual void sub_00ac15d0(); };

struct C_00abb400 : A_00abb400, B_00abb400 { virtual void sub_00ac15d0(); C_00abb400(); };

C_00abb400::C_00abb400() {}

// @baa 0x00abb400
void C_00abb400::sub_00ac15d0() {}

struct A_00abb410 { virtual void sub_00ac1710(); char pad[16]; };

struct B_00abb410 { virtual void sub_00ac1710(); };

struct C_00abb410 : A_00abb410, B_00abb410 { virtual void sub_00ac1710(); C_00abb410(); };

C_00abb410::C_00abb410() {}

// @baa 0x00abb410
void C_00abb410::sub_00ac1710() {}

struct A_00abb420 { virtual void sub_00ac13b0(); char pad[16]; };

struct B_00abb420 { virtual void sub_00ac13b0(); };

struct C_00abb420 : A_00abb420, B_00abb420 { virtual void sub_00ac13b0(); C_00abb420(); };

C_00abb420::C_00abb420() {}

// @baa 0x00abb420
void C_00abb420::sub_00ac13b0() {}

struct A_00abb430 { virtual void sub_00abc780(); char pad[16]; };

struct B_00abb430 { virtual void sub_00abc780(); };

struct C_00abb430 : A_00abb430, B_00abb430 { virtual void sub_00abc780(); C_00abb430(); };

C_00abb430::C_00abb430() {}

// @baa 0x00abb430
void C_00abb430::sub_00abc780() {}

struct A_00abb440 { virtual void sub_00ac1730(); char pad[16]; };

struct B_00abb440 { virtual void sub_00ac1730(); };

struct C_00abb440 : A_00abb440, B_00abb440 { virtual void sub_00ac1730(); C_00abb440(); };

C_00abb440::C_00abb440() {}

// @baa 0x00abb440
void C_00abb440::sub_00ac1730() {}

struct A_00abb450 { virtual void sub_00ac1590(); char pad[16]; };

struct B_00abb450 { virtual void sub_00ac1590(); };

struct C_00abb450 : A_00abb450, B_00abb450 { virtual void sub_00ac1590(); C_00abb450(); };

C_00abb450::C_00abb450() {}

// @baa 0x00abb450
void C_00abb450::sub_00ac1590() {}

struct A_00abb460 { virtual void sub_00ac1510(); char pad[16]; };

struct B_00abb460 { virtual void sub_00ac1510(); };

struct C_00abb460 : A_00abb460, B_00abb460 { virtual void sub_00ac1510(); C_00abb460(); };

C_00abb460::C_00abb460() {}

// @baa 0x00abb460
void C_00abb460::sub_00ac1510() {}

struct A_00abb470 { virtual void sub_00ac1650(); char pad[16]; };

struct B_00abb470 { virtual void sub_00ac1650(); };

struct C_00abb470 : A_00abb470, B_00abb470 { virtual void sub_00ac1650(); C_00abb470(); };

C_00abb470::C_00abb470() {}

// @baa 0x00abb470
void C_00abb470::sub_00ac1650() {}

struct A_00abb480 { virtual void sub_00ac16d0(); char pad[16]; };

struct B_00abb480 { virtual void sub_00ac16d0(); };

struct C_00abb480 : A_00abb480, B_00abb480 { virtual void sub_00ac16d0(); C_00abb480(); };

C_00abb480::C_00abb480() {}

// @baa 0x00abb480
void C_00abb480::sub_00ac16d0() {}

struct A_00abb490 { virtual void sub_00ac1690(); char pad[16]; };

struct B_00abb490 { virtual void sub_00ac1690(); };

struct C_00abb490 : A_00abb490, B_00abb490 { virtual void sub_00ac1690(); C_00abb490(); };

C_00abb490::C_00abb490() {}

// @baa 0x00abb490
void C_00abb490::sub_00ac1690() {}

struct A_00abb4a0 { virtual void sub_00abbe20(); char pad[16]; };

struct B_00abb4a0 { virtual void sub_00abbe20(); };

struct C_00abb4a0 : A_00abb4a0, B_00abb4a0 { virtual void sub_00abbe20(); C_00abb4a0(); };

C_00abb4a0::C_00abb4a0() {}

// @baa 0x00abb4a0
void C_00abb4a0::sub_00abbe20() {}

struct A_00abb4b0 { virtual void sub_00ac1410(); char pad[16]; };

struct B_00abb4b0 { virtual void sub_00ac1410(); };

struct C_00abb4b0 : A_00abb4b0, B_00abb4b0 { virtual void sub_00ac1410(); C_00abb4b0(); };

C_00abb4b0::C_00abb4b0() {}

// @baa 0x00abb4b0
void C_00abb4b0::sub_00ac1410() {}

struct A_00abb4c0 { virtual void sub_00ac1490(); char pad[16]; };

struct B_00abb4c0 { virtual void sub_00ac1490(); };

struct C_00abb4c0 : A_00abb4c0, B_00abb4c0 { virtual void sub_00ac1490(); C_00abb4c0(); };

C_00abb4c0::C_00abb4c0() {}

// @baa 0x00abb4c0
void C_00abb4c0::sub_00ac1490() {}

struct A_00abb4d0 { virtual void sub_00ac14d0(); char pad[16]; };

struct B_00abb4d0 { virtual void sub_00ac14d0(); };

struct C_00abb4d0 : A_00abb4d0, B_00abb4d0 { virtual void sub_00ac14d0(); C_00abb4d0(); };

C_00abb4d0::C_00abb4d0() {}

// @baa 0x00abb4d0
void C_00abb4d0::sub_00ac14d0() {}

struct C_00abb6e0 {
    undefined4 sub_00abb6e0(byte);
};

int sub_00ab2280(void);
// @baa 0x00abb6e0
undefined4 C_00abb6e0::sub_00abb6e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ab2280();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00abb700
void sub_00abb700(void) {  }

struct C_00abb710 { int sub_00abb710(void); };

// @baa 0x00abb710
int C_00abb710::sub_00abb710(void) { return *(int*)((char*)this + 16); }

struct C_00abb770 {
    bool sub_00abb770();
};

// @baa 0x00abb770
bool C_00abb770::sub_00abb770(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) != 0;
}

struct T_00abb7f0 { int x; };

// @baa 0x00abb7f0
template T_00abb7f0& TIndirectArray<T_00abb7f0>::operator()(INT);

int sub_00ab9770(...);
// @baa 0x00abba00
void sub_00abba00(undefined4 param_1)
{
  sub_00ab9770(param_1,0);
  return;
}

int sub_00ab97f0(...);
// @baa 0x00abba10
void sub_00abba10(undefined4 * param_1)
{
  undefined4 uVar1;
  uVar1 = sub_00ab9770(*param_1,0);
  sub_00ab97f0(param_1[1],uVar1);
  return;
}

int sub_00abbe40(void);
// @baa 0x00abbeb0
undefined4 ULensFlare::sub_00abbeb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00abbe40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00abc110 {
    int sub_00abc110();
};

// @baa 0x00abc110
int C_00abc110::sub_00abc110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x18) * 0x41 + *(int *)(param_1 + 0x60)) * 4 + 0xa8;
}

struct C_00abc610 {
    undefined4 * sub_00abc610(byte);
};

// @baa 0x00abc610
undefined4 * C_00abc610::sub_00abc610(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb778);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00abc680(void);
// @baa 0x00abc6f0
undefined4 ULensFlare::sub_00abc6f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00abc680();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00abcc40(void);
// @baa 0x00abccb0
undefined4 ULensFlare::sub_00abccb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00abcc40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00abcd70
undefined4 sub_00abcd70(int param_1, int param_2)
{
  return *(undefined4 *)(param_1 + 0x7f4 + param_2 * 0xc);
}

// @baa 0x00abcd90
undefined4 sub_00abcd90(int param_1, int param_2)
{
  return *(undefined4 *)(param_1 + 0x788 + param_2 * 0x18);
}

struct S_00abcdb0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00abcdb0(INT Index) const;
};

// @baa 0x00abcdb0
const DWORD* S_00abcdb0::sub_00abcdb0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00abce00
int ULensFlare::sub_00abce00(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return param_1[1] * 0x50 + -0x50 + *param_1;
}

// @baa 0x00abcea0
void ULensFlare::sub_00abcea0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00abced0 { int a, b, c; C_00abced0(); };

// @baa 0x00abced0
C_00abced0::C_00abced0() : a(0), b(0), c(0) {}

struct S_00abcee0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00abcee0(INT Index) const;
};

// @baa 0x00abcee0
const DWORD* S_00abcee0::sub_00abcee0(INT Index) const
{
    return &Items(Index);
}

struct C_00abcf30 { int a, b, c; C_00abcf30(); };

// @baa 0x00abcf30
C_00abcf30::C_00abcf30() : a(0), b(0), c(0) {}

struct C_00abcf40 { int a, b, c; C_00abcf40(); };

// @baa 0x00abcf40
C_00abcf40::C_00abcf40() : a(0), b(0), c(0) {}

struct C_00abcf50 { int a, b, c; C_00abcf50(); };

// @baa 0x00abcf50
C_00abcf50::C_00abcf50() : a(0), b(0), c(0) {}

struct C_00abcf60 { int a, b, c; C_00abcf60(); };

// @baa 0x00abcf60
C_00abcf60::C_00abcf60() : a(0), b(0), c(0) {}

struct C_00abcf70 { int a, b, c; C_00abcf70(); };

// @baa 0x00abcf70
C_00abcf70::C_00abcf70() : a(0), b(0), c(0) {}

struct C_00abcf80 { int a, b, c; C_00abcf80(); };

// @baa 0x00abcf80
C_00abcf80::C_00abcf80() : a(0), b(0), c(0) {}

struct S_00abcf90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00abcf90(INT Index);
};

// @baa 0x00abcf90
DWORD* S_00abcf90::sub_00abcf90(INT Index)
{
    return &Items(Index);
}

struct C_00abd090 { int a, b, c; C_00abd090(); };

// @baa 0x00abd090
C_00abd090::C_00abd090() : a(0), b(0), c(0) {}

struct C_00abd0a0 { int a, b, c; C_00abd0a0(); };

// @baa 0x00abd0a0
C_00abd0a0::C_00abd0a0() : a(0), b(0), c(0) {}

// @baa 0x00abd180
int ULensFlare::sub_00abd180(void) { return *(int*)((char*)this + 4); }

// @baa 0x00abd1b0
int ULensFlare::sub_00abd1b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00abd400
int ULensFlare::sub_00abd400(void) { return *(int*)((char*)this + 20); }

// @baa 0x00abd410
bool ULensFlare::sub_00abd410(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) != 0;
}

// @baa 0x00abd450
bool ULensFlare::sub_00abd450(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) != 0;
}

struct C_view_00abd4c0 {
    int sub_00ab5ae0(int);
};

// @baa 0x00abd4c0
undefined4 * ULensFlare::sub_00abd4c0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_view_00abd4c0 *)(this))->sub_00ab5ae0(param_2);
  return param_1;
}

// @baa 0x00abd500
void ULensFlare::sub_00abd500(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[2] = param_1[2] + -1;
  *param_2 = *param_1;
  *param_1 = (undefined4)(param_2);
  return;
}

// @baa 0x00abd520
int ULensFlare::sub_00abd520(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x28;
}
