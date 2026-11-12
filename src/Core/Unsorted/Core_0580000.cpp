// Core_0580000.cpp (part 1 of 3): 84 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_0057ebc0(int, int);
};

// @baa 0x00580ee0
void UState::sub_00580ee0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_0057ebc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

int sub_00578ff0(void);
// @baa 0x005813d0
int UState::sub_005813d0(void)
{
    int param_1 = (int)this;

  sub_00578ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C {
    int sub_005813f0();
};

int sub_005790a0(void);
// @baa 0x005813f0
int C::sub_005813f0(void)
{
    int param_1 = (int)this;

  sub_005790a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00581410 {
    int sub_00581410();
};

int sub_00579100(void);
// @baa 0x00581410
int C_00581410::sub_00581410(void)
{
    int param_1 = (int)this;

  sub_00579100();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00581430 {
    int sub_00581430();
};

int sub_005791b0(void);
// @baa 0x00581430
int C_00581430::sub_00581430(void)
{
    int param_1 = (int)this;

  sub_005791b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057bd80(void);
// @baa 0x00583520
int UState::sub_00583520(void)
{
    int param_1 = (int)this;

  sub_0057bd80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005814d0();
// @baa 0x005835a0
void sub_005835a0(void) { sub_005814d0(); }

void sub_00581540();
// @baa 0x005835b0
void sub_005835b0(void) { sub_00581540(); }

void sub_00582840();
// @baa 0x00584860
void sub_00584860(void) { sub_00582840(); }

void sub_005828d0();
// @baa 0x00584870
void sub_00584870(void) { sub_005828d0(); }

void sub_00582940();
// @baa 0x00584880
void sub_00584880(void) { sub_00582940(); }

void sub_005829b0();
// @baa 0x00584890
void sub_00584890(void) { sub_005829b0(); }

void sub_00582a20();
// @baa 0x005848a0
void sub_005848a0(void) { sub_00582a20(); }

void sub_005848b0();
// @baa 0x00584910
void sub_00584910(void) { sub_005848b0(); }

struct C_view_00584a30 {
    int sub_00581370(int, int);
};

// @baa 0x00584a30
int UState::sub_00584a30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00584a30 *)(this))->sub_00581370(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

// @baa 0x00584c40
int UState::sub_00584c40(void)
{
    int param_1 = (int)this;

  sub_00578ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00584c60 {
    int sub_00584c60();
};

// @baa 0x00584c60
int C_00584c60::sub_00584c60(void)
{
    int param_1 = (int)this;

  sub_005790a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00584c80 {
    int sub_00584c80();
};

// @baa 0x00584c80
int C_00584c80::sub_00584c80(void)
{
    int param_1 = (int)this;

  sub_00579100();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00584ca0 {
    int sub_00584ca0();
};

// @baa 0x00584ca0
int C_00584ca0::sub_00584ca0(void)
{
    int param_1 = (int)this;

  sub_005791b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00581840();
// @baa 0x00585990
void sub_00585990(void) { sub_00581840(); }

struct S {
    void sub_0056b010();
    void sub_005857c0();
    void sub_00586830();
};

// @baa 0x00586830
void S::sub_00586830() {
    sub_0056b010();
    sub_005857c0();
}

// @baa 0x00586840
void sub_00586840() {
    sub_00581840();
}

// @baa 0x0058c400
void __stdcall sub_0058c400(int a0) {  }

// @baa 0x0058c410
void __stdcall sub_0058c410(int a0) {  }

// @baa 0x0058f360
int sub_0058f360(int a0, int a1) { return a1; }

int sub_005fbf80(void);
int sub_006156a0(...);
extern undefined4 g_026a4b3c;
// @baa 0x0058f370
int sub_0058f370(void)
{
  if (g_026a4b3c == 0) {
    g_026a4b3c = sub_006156a0(L"Core");
    sub_005fbf80();
  }
  return g_026a4b3c;
}

// @baa 0x0058f3a0
int sub_0058f3a0(int a0, int a1) { return a1; }

// @baa 0x0058f440
IMPLEMENT_CLASS_AT(UInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 1859);

// @baa 0x0058f4a0
// @baa 0x0058f4c0
undefined4 sub_0058f4c0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

int sub_005fc1a0(void);
int sub_0061e230(...);
extern undefined4 g_026a4b40;
// @baa 0x0058f4d0
int sub_0058f4d0(void)
{
  if (g_026a4b40 == 0) {
    g_026a4b40 = sub_0061e230(L"Core");
    sub_005fc1a0();
  }
  return g_026a4b40;
}

// @baa 0x0058f500
int sub_0058f500(int a0, int a1) { return a1; }

struct S_0058f510 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0058f510
void sub_0058f510(S_0058f510* p, INT Value)
{
    p->vf_18(Value);
}

struct C_0058f550 {
    void sub_0058f550(undefined4, undefined4);
};

// @baa 0x0058f550
void C_0058f550::sub_0058f550(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  return;
}

struct C_0058f570 { void sub_0058f570(int a0); };

// @baa 0x0058f570
void C_0058f570::sub_0058f570(int a0) { *(int*)((char*)this + 64) = a0; }

struct C_0058f580 { int sub_0058f580(void); };

// @baa 0x0058f580
int C_0058f580::sub_0058f580(void) { return *(int*)((char*)this + 64); }

struct C_0058f590 { void sub_0058f590(int a0); };

// @baa 0x0058f590
void C_0058f590::sub_0058f590(int a0) { *(int*)((char*)this + 80) = a0; }

// @baa 0x0058f5a0
int sub_0058f5a0(int a0, int a1) { return a1; }

// @baa 0x0058f5b0
int sub_0058f5b0(int a0, int a1) { return a1; }

struct S_0058f5c0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0058f5c0
void sub_0058f5c0(S_0058f5c0* p, INT Value)
{
    p->vf_18(Value);
}

int sub_0062d880(void);
int sub_006454f0(...);
extern undefined4 g_026acbb0;
// @baa 0x0058f5e0
int sub_0058f5e0(void)
{
  if (g_026acbb0 == 0) {
    g_026acbb0 = sub_006454f0(L"Core");
    sub_0062d880();
  }
  return g_026acbb0;
}

// @baa 0x0058f610
int sub_0058f610(int a0, int a1) { return a1; }

struct C_0058f620 {
    bool sub_0058f620();
};

// @baa 0x0058f620
bool C_0058f620::sub_0058f620(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) != 0;
}

struct C_0058f630 { int sub_0058f630(void); };

// @baa 0x0058f630
int C_0058f630::sub_0058f630(void) { return *(int*)((char*)this + 20); }

struct C_0058f640 { int sub_0058f640(void); };

// @baa 0x0058f640
int C_0058f640::sub_0058f640(void) { return *(int*)((char*)this + 28); }

struct C_0058f670 {
    undefined4 sub_0058f670();
};

// @baa 0x0058f670
undefined4 C_0058f670::sub_0058f670(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x10);
}

// @baa 0x0058f680
int sub_0058f680(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 4) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x0058f6a0
int sub_0058f6a0(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x40) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x0058f6c0
int sub_0058f6c0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x200000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

struct C_0058f720 {
    undefined4 sub_0058f720(int);
};

// @baa 0x0058f720
undefined4 C_0058f720::sub_0058f720(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 == iVar1) break;
    iVar1 = *(int *)(iVar1 + 0x2c);
  }
  return 1;
}

extern char g_01e729c0[];
struct C_0058f790 { void sub_0058f790(void); };

// @baa 0x0058f790
void C_0058f790::sub_0058f790(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

struct C_0058f7a0 {
    undefined4 sub_0058f7a0();
};

// @baa 0x0058f7a0
undefined4 C_0058f7a0::sub_0058f7a0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x18) = *(undefined4 **)(param_1 + 0x18) + 1;
  return uVar1;
}

struct C_0058f7b0 {
    undefined4 sub_0058f7b0();
};

// @baa 0x0058f7b0
undefined4 C_0058f7b0::sub_0058f7b0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x18) = *(undefined4 **)(param_1 + 0x18) + 1;
  return uVar1;
}

struct C_0058f7c0 {
    float10 sub_0058f7c0();
};

// @baa 0x0058f7c0
float10 C_0058f7c0::sub_0058f7c0(void)
{
    int param_1 = (int)this;

  float fVar1;
  
  fVar1 = **(float **)(param_1 + 0x18);
  *(float **)(param_1 + 0x18) = *(float **)(param_1 + 0x18) + 1;
  return (float10)fVar1;
}

struct C_0058f7d0 {
    undefined2 sub_0058f7d0();
};

// @baa 0x0058f7d0
undefined2 C_0058f7d0::sub_0058f7d0(void)
{
    int param_1 = (int)this;

  undefined2 uVar1;
  
  uVar1 = **(undefined2 **)(param_1 + 0x18);
  *(undefined2 **)(param_1 + 0x18) = *(undefined2 **)(param_1 + 0x18) + 1;
  return uVar1;
}

struct C_0058f7e0 {
    undefined2 sub_0058f7e0();
};

// @baa 0x0058f7e0
undefined2 C_0058f7e0::sub_0058f7e0(void)
{
    int param_1 = (int)this;

  undefined2 uVar1;
  
  uVar1 = **(undefined2 **)(param_1 + 0x18);
  *(undefined2 **)(param_1 + 0x18) = *(undefined2 **)(param_1 + 0x18) + 1;
  return uVar1;
}

int sub_005fbe20(void);
int sub_0060f890(...);
extern undefined4 g_026a4b38;
// @baa 0x0058f840
int sub_0058f840(void)
{
  if (g_026a4b38 == 0) {
    g_026a4b38 = sub_0060f890(L"Core");
    sub_005fbe20();
  }
  return g_026a4b38;
}

int sub_005fba80(void);
int sub_0060f7d0(...);
extern undefined4 g_026a4b34;
// @baa 0x0058f870
int sub_0058f870(void)
{
  if (g_026a4b34 == 0) {
    g_026a4b34 = sub_0060f7d0(L"Core");
    sub_005fba80();
  }
  return g_026a4b34;
}

int sub_0053dfa0(...);
// @baa 0x0058f8a0
bool USubsystem::sub_0058f8a0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x88) != 0) {
    sub_0053dfa0(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return *(int *)(param_1 + 0x34) == 0;
}

struct C_0058f8d0 {
    void sub_0058f8d0(uint);
};

// @baa 0x0058f8d0
void C_0058f8d0::sub_0058f8d0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | param_2;
  return;
}

struct C_0058f8e0 {
    char pad[4];
    unsigned int f4 : 16;
    unsigned sub_0058f8e0();
};

// @baa 0x0058f8e0
unsigned C_0058f8e0::sub_0058f8e0()
{
    int x = f4;
    return x & 0xffff;
}

struct C_0058f8f0 {
    char pad[6];
    unsigned short f6;
    int sub_0058f8f0();
};

// @baa 0x0058f8f0
int C_0058f8f0::sub_0058f8f0()
{
    return (unsigned short)f6;
}

struct C_0058f900 {
    void sub_0058f900(uint, int);
};

// @baa 0x0058f900
void C_0058f900::sub_0058f900(uint param_2, int param_3)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 4) = param_3 << 0x10 | param_2;
  return;
}

// @baa 0x0058f920
int sub_0058f920(int a0, int a1) { return a1; }

struct C_0058f930 {
    undefined4 sub_0058f930(int *);
};

// @baa 0x0058f930
undefined4 C_0058f930::sub_0058f930(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x0058f950
int sub_0058f950(int a0, int a1) { return a1; }

struct C_0058f960 { int a, b, c; C_0058f960(); };

// @baa 0x0058f960
C_0058f960::C_0058f960() : a(0), b(0), c(0) {}

struct C_0058f970 {
    void sub_0058f970();
};

// @baa 0x0058f970
void C_0058f970::sub_0058f970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0053dfa0(*param_1);
  return;
}

// @baa 0x0058f980
int sub_0058f980(int a0, int a1) { return a1; }

// @baa 0x0058f9d0
undefined2 sub_0058f9d0(void)
{
  return 0x69;
}

// @baa 0x0058f9e0
undefined2 sub_0058f9e0(void)
{
  return 0x73;
}

// @baa 0x0058f9f0
int sub_0058f9f0(int a0, int a1) { return a1; }

struct C_0058fa00 { C_0058fa00* sub_0058fa00(int a0); };

// @baa 0x0058fa00
C_0058fa00* C_0058fa00::sub_0058fa00(int a0) { return this; }

struct C_0058fa10 { int a, b, c; C_0058fa10(); };

// @baa 0x0058fa10
C_0058fa10::C_0058fa10() : a(0), b(0), c(0) {}

struct C_0058fa20 { int sub_0058fa20(void); };

// @baa 0x0058fa20
int C_0058fa20::sub_0058fa20(void) { return *(int*)((char*)this + 4); }

struct C_0058fa30 { int a, b, c; C_0058fa30(); };

// @baa 0x0058fa30
C_0058fa30::C_0058fa30() : a(0), b(0), c(0) {}

struct C_0058fa40 { int a, b, c; C_0058fa40(); };

// @baa 0x0058fa40
C_0058fa40::C_0058fa40() : a(0), b(0), c(0) {}

struct C_0058fa50 { int a, b, c; C_0058fa50(); };

// @baa 0x0058fa50
C_0058fa50::C_0058fa50() : a(0), b(0), c(0) {}

struct C_0058fa60 { int a, b, c; C_0058fa60(); };

// @baa 0x0058fa60
C_0058fa60::C_0058fa60() : a(0), b(0), c(0) {}

struct C_0058fa70 { C_0058fa70* sub_0058fa70(int a0); };

// @baa 0x0058fa70
C_0058fa70* C_0058fa70::sub_0058fa70(int a0) { return this; }

struct C_0058fa80 { int sub_0058fa80(void); };

// @baa 0x0058fa80
int C_0058fa80::sub_0058fa80(void) { return *(int*)((char*)this + 0); }

struct C_0058fb00 { int sub_0058fb00(void); };

// @baa 0x0058fb00
int C_0058fb00::sub_0058fb00(void) { return *(int*)((char*)this + 0); }

struct C_0058fb10 { int sub_0058fb10(void); };

// @baa 0x0058fb10
int C_0058fb10::sub_0058fb10(void) { return *(int*)((char*)this + 0); }

struct C_0058fb20 { int sub_0058fb20(void); };

// @baa 0x0058fb20
int C_0058fb20::sub_0058fb20(void) { return *(int*)((char*)this + 0); }
