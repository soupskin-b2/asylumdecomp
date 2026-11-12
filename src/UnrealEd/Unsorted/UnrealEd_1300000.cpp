// UnrealEd_1300000.cpp (part 1 of 2): 66 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_012f4700(int); C *sub_013010d0(int); };

// @baa 0x013010d0
C *C::sub_013010d0(int a) { sub_012f4700(a); return this; }

struct C_013010f0 { C_013010f0* sub_013010f0(void); };

// @baa 0x013010f0
C_013010f0* C_013010f0::sub_013010f0(void) { return this; }

void sub_012f1850();
// @baa 0x01304d50
void sub_01304d50(void) { sub_012f1850(); }

// @baa 0x0130b800
void sub_0130b800(void) { sub_012f1850(); }

struct C_0130b810 { void sub_013076c0(); void sub_0130b810(int); };

// @baa 0x0130b810
void C_0130b810::sub_0130b810(int) { sub_013076c0(); }

struct C_0130cdb0 { void sub_0130bfa0(); void sub_0130cdb0(int); };

// @baa 0x0130cdb0
void C_0130cdb0::sub_0130cdb0(int) { sub_0130bfa0(); }

struct C_0130d3e0 { void sub_0130cdc0(); void sub_0130d3e0(int); };

// @baa 0x0130d3e0
void C_0130d3e0::sub_0130d3e0(int) { sub_0130cdc0(); }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_02248f9c;
// @baa 0x0130d3f0
undefined4 * UUnrealEdEngine::sub_0130d3f0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02248f9c);
  param_1[5] = param_3;
  param_1[6] = param_4;
  return param_1;
}

void sub_00c38ac0();
// @baa 0x0130d420
void sub_0130d420(void) { sub_00c38ac0(); }

extern undefined4 g_02248fac;
// @baa 0x0130d430
undefined4 * UUnrealEdEngine::sub_0130d430(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02248fac);
  return param_1;
}

// @baa 0x0130d450
void sub_0130d450(void) { sub_00c38ac0(); }

// @baa 0x0130d480
void sub_0130d480(void) { sub_00c38ac0(); }

extern undefined4 g_02248fcc;
// @baa 0x0130d490
undefined4 * UUnrealEdEngine::sub_0130d490(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02248fcc);
  return param_1;
}

// @baa 0x0130d4b0
void sub_0130d4b0(void) { sub_00c38ac0(); }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0130d4e0
void sub_0130d4e0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x0130d500
void sub_0130d500(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_025e8ec8[];
// @baa 0x0130d520
int sub_0130d520(void) { return (int)g_025e8ec8; }

extern char g_026d6b94[];
// @baa 0x0130d530
int sub_0130d530(void) { return (int)g_026d6b94; }

extern char g_025e8ed0[];
// @baa 0x0130d6d0
int sub_0130d6d0(void) { return (int)g_025e8ed0; }

extern char g_026d6bd4[];
// @baa 0x0130d6e0
int sub_0130d6e0(void) { return (int)g_026d6bd4; }

extern char g_02242120[];
// @baa 0x0130d7e0
int sub_0130d7e0(void) { return (int)g_02242120; }

extern char g_026d6c14[];
// @baa 0x0130d7f0
int sub_0130d7f0(void) { return (int)g_026d6c14; }

// @baa 0x0130d820
void UUnrealEdEngine::sub_0130d820(int param_2)
{
    int param_1 = (int)this;

  if (param_2 == *(int *)(param_1 + 0x218)) {
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x270)) {
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  return;
}

// @baa 0x0130d850
void __stdcall sub_0130d850(int a0, int a1) {  }

extern char g_022427ac[];
// @baa 0x0130d860
int sub_0130d860(void) { return (int)g_022427ac; }

// @baa 0x0130d870
int sub_0130d870(void) { return 0; }

extern char g_025e8ed8[];
// @baa 0x0130d890
int sub_0130d890(void) { return (int)g_025e8ed8; }

extern char g_026d70a0[];
// @baa 0x0130d8a0
int sub_0130d8a0(void) { return (int)g_026d70a0; }

// @baa 0x0130d900
undefined4 UUnrealEdEngine::sub_0130d900(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x45c) != 0) {
    return *(undefined4 *)(param_1 + 0x42c);
  }
  if (*(int *)(param_1 + 0x468) == 0) {
    return *(undefined4 *)(param_1 + 0x414);
  }
  return *(undefined4 *)(param_1 + 0x420);
}

// @baa 0x0130d930
undefined4 UUnrealEdEngine::sub_0130d930(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x45c) != 0) {
    return *(undefined4 *)(param_1 + 0x430);
  }
  if (*(int *)(param_1 + 0x468) == 0) {
    return *(undefined4 *)(param_1 + 0x418);
  }
  return *(undefined4 *)(param_1 + 0x424);
}

// @baa 0x0130d960
undefined4 UUnrealEdEngine::sub_0130d960(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x45c) != 0) {
    return *(undefined4 *)(param_1 + 0x434);
  }
  if (*(int *)(param_1 + 0x468) == 0) {
    return *(undefined4 *)(param_1 + 0x41c);
  }
  return *(undefined4 *)(param_1 + 0x428);
}

// @baa 0x0130d990
void UUnrealEdEngine::sub_0130d990(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x45c) != 0) {
    *(undefined4 *)(param_1 + 0x42c) = param_2;
    return;
  }
  if (*(int *)(param_1 + 0x468) == 0) {
    *(undefined4 *)(param_1 + 0x414) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x420) = param_2;
  return;
}

// @baa 0x0130d9d0
void UUnrealEdEngine::sub_0130d9d0(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x45c) != 0) {
    *(undefined4 *)(param_1 + 0x430) = param_2;
    return;
  }
  if (*(int *)(param_1 + 0x468) == 0) {
    *(undefined4 *)(param_1 + 0x418) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x424) = param_2;
  return;
}

// @baa 0x0130da10
void UUnrealEdEngine::sub_0130da10(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x45c) != 0) {
    *(undefined4 *)(param_1 + 0x434) = param_2;
    return;
  }
  if (*(int *)(param_1 + 0x468) == 0) {
    *(undefined4 *)(param_1 + 0x41c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x428) = param_2;
  return;
}

extern char g_02247958[];
// @baa 0x0130ed20
int sub_0130ed20(void) { return (int)g_02247958; }

// @baa 0x0130ed30
int sub_0130ed30(void) { return 0; }

struct C_0130ed70 { int sub_0130ed70(void); };

// @baa 0x0130ed70
int C_0130ed70::sub_0130ed70(void) { return *(int*)((char*)this + 4); }

struct C_0130ed80 { int sub_0130ed80(void); };

// @baa 0x0130ed80
int C_0130ed80::sub_0130ed80(void) { return *(int*)((char*)this + 4); }

struct C_0130ed90 { int sub_0130ed90(void); };

// @baa 0x0130ed90
int C_0130ed90::sub_0130ed90(void) { return *(int*)((char*)this + 4); }

struct C_0130edd0 { int a, b; C_0130edd0(int, int); };

// @baa 0x0130edd0
C_0130edd0::C_0130edd0(int x, int y) : a(x), b(y) {}

struct C_0130edf0 { int a, b; C_0130edf0(int, int); };

// @baa 0x0130edf0
C_0130edf0::C_0130edf0(int x, int y) : a(x), b(y) {}

struct C_0130ee10 { int a, b; C_0130ee10(int, int); };

// @baa 0x0130ee10
C_0130ee10::C_0130ee10(int x, int y) : a(x), b(y) {}

// @baa 0x0130ee30
int sub_0130ee30(int a0) { return *(int*)a0; }

struct C_0130ee60 {
    void sub_0130ee60(int *);
};

// @baa 0x0130ee60
void C_0130ee60::sub_0130ee60(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x0130ee70
int sub_0130ee70(int a0) { return *(int*)a0; }

struct C_0130eeb0 {
    void sub_0130eeb0(int *);
};

// @baa 0x0130eeb0
void C_0130eeb0::sub_0130eeb0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 4;
  return;
}

// @baa 0x0130eec0
int sub_0130eec0(int a0) { return *(int*)a0; }

struct C_0130eef0 {
    void sub_0130eef0(int *);
};

// @baa 0x0130eef0
void C_0130eef0::sub_0130eef0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4);
  return;
}

struct C_0130ef80 { int a, b; C_0130ef80(const C_0130ef80 &); };

// @baa 0x0130ef80
C_0130ef80::C_0130ef80(const C_0130ef80 &o) : a(o.a), b(o.b) {}

struct A_0130efa0 { virtual void sub_01310320(); char pad[332]; };

struct B_0130efa0 { virtual void sub_01310320(); };

struct C_0130efa0 : A_0130efa0, B_0130efa0 { virtual void sub_01310320(); C_0130efa0(); };

C_0130efa0::C_0130efa0() {}

// @baa 0x0130efa0
void C_0130efa0::sub_01310320() {}

// @baa 0x0130efb0
void sub_0130efb0(void) {  }

// @baa 0x0130efc0
void sub_0130efc0(void) {  }

// @baa 0x0130efd0
float10 sub_0130efd0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x0130eff0
undefined2 sub_0130eff0(void)
{
  return 0x69;
}

// @baa 0x0130f000
undefined2 sub_0130f000(void)
{
  return 0x73;
}

// @baa 0x0130f010
int sub_0130f010(int a0, int a1) { return a1; }

// @baa 0x0130f020
int sub_0130f020(int a0, int a1) { return a1; }

// @baa 0x0130f030
int sub_0130f030(int a0, int a1) { return a1; }

// @baa 0x0130f040
void sub_0130f040(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_02158c10[];
// @baa 0x0130f060
int sub_0130f060(void) { return (int)g_02158c10; }

int sub_005c7a20(void);
extern undefined * g_02249cb0;
// @baa 0x0130f070
undefined4 * UObject::sub_0130f070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02249cb0);
  return param_1;
}

// @baa 0x0130f090
IMPLEMENT_CLASS_AT(UPhATSimOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PhATMain.cpp", 15);

// @baa 0x0130f510
// @baa 0x0130f640
bool UPhATSimOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0053dfa0(...);
int sub_0130d6f0(void);
// @baa 0x0130f680
undefined4 UUnrealEdEngine::sub_0130f680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0130d6f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
