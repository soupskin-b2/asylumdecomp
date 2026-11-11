// UnInteraction.cpp: 62 functions
// Placed here by: neighbours 31, class 23, file 5, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00d77a90(void);
int sub_00d8c4e0(...);
extern undefined4 g_026c59a0;
// @baa 0x00ca0aa0
int sub_00ca0aa0(void)
{
  if (g_026c59a0 == 0) {
    g_026c59a0 = sub_00d8c4e0(L"Engine");
    sub_00d77a90();
  }
  return g_026c59a0;
}

int sub_00d8cdd0(...);
int sub_00d8ce90(void);
extern undefined4 g_026c59a4;
// @baa 0x00ca0ad0
int sub_00ca0ad0(void)
{
  if (g_026c59a4 == 0) {
    g_026c59a4 = sub_00d8cdd0(L"Engine");
    sub_00d8ce90();
  }
  return g_026c59a4;
}

int sub_0088e740(...);
int sub_008a0120(void);
extern undefined4 g_026b58fc;
// @baa 0x00ca0b00
int sub_00ca0b00(void)
{
  if (g_026b58fc == 0) {
    g_026b58fc = sub_0088e740(L"Engine");
    sub_008a0120();
  }
  return g_026b58fc;
}

// @baa 0x00d6b930
int UPlayerInput::vf_000(void) { return 1; }

// @baa 0x00d6bce0
IMPLEMENT_CLASS_AT(UInteraction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInteraction.cpp", 13);

// @baa 0x00d6bdf0
int UInteraction::vf_000(void) { return 1; }

// @baa 0x00d6be00
bool UInteraction::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d6be60
IMPLEMENT_CLASS_AT(UUIInputConfiguration, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInteraction.cpp", 15);

// @baa 0x00d6bf90
bool UUIInputConfiguration::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d6c030
void UInteraction::vf_10c(void) {  }

extern char g_020b51fc[];
struct C { C* sub_00d6c070(void); };

// @baa 0x00d6c070
C* C::sub_00d6c070(void) { *(int*)((char*)this + 0) = (int)g_020b51fc; return this; }

struct V_00d6c850 {
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void g(int a0);
};

struct O_00d6c850 { char pad[112]; V_00d6c850* p; void sub_00d6c850(int a0); };

// @baa 0x00d6c850
void O_00d6c850::sub_00d6c850(int a0) { p->g(a0); }

// @baa 0x00d6c900
int UUIInteraction::vf_128(void) { return *(int*)((char*)this + 412); }

// @baa 0x00d6c910
uint UUIInteraction::vf_12c(void)
{
    int param_1 = (int)this;

  return ~(*(uint *)(param_1 + 0xdc) >> 4) & 1;
}

// @baa 0x00d6e0c0
// @baa 0x00d70650
extern undefined4 g_026c3cdc;
// @baa 0x00d70710
undefined4 sub_00d70710(void)
{
  return *(undefined4 *)(g_026c3cdc + 0x328);
}

struct C_00d707a0 {
    void sub_00d707a0();
    int sub_00572b30(int);
};

int sub_006311e0(...);
extern undefined4 g_020b335c;
// @baa 0x00d707a0
void C_00d707a0::sub_00d707a0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x6c) == 0) {
    sub_006311e0("SceneClientClass",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInteraction.cpp"
                 ,0x346,&g_020b335c);
  }
  ((C_00d707a0 *)((*(char **)((char *)this + 0x6c))))->sub_00572b30(0);
  return;
}

// @baa 0x00d77a90
IMPLEMENT_CLASS_AT(UInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnIn.cpp", 10);

// @baa 0x00d77ba0
bool UInput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d780b0
IMPLEMENT_CLASS_AT(UConsole, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInteraction.cpp", 12);

// @baa 0x00d781c0
bool UConsole::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d78200
IMPLEMENT_CLASS_AT(UUIInteraction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInteraction.cpp", 14);

// @baa 0x00d78310
bool UUIInteraction::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0053df70(...);
// @baa 0x00d79560
void UInput::vf_12c(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x6c),0,8);
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
    }
  }
  return;
}

// @baa 0x00d839b0
// @baa 0x00d84210
int sub_00d80eb0(void);
// @baa 0x00d871d0
int UInput::sub_00d871d0(void)
{
    int param_1 = (int)this;

  sub_00d80eb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00d88400
int UInput::sub_00d88400(void)
{
    int param_1 = (int)this;

  sub_00d80eb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00d8a990
int UInput::sub_00d8a990(void)
{
    int param_1 = (int)this;

  sub_00d80eb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct A_00d8bbe0 { virtual void sub_00d8bfb0(); char pad[100]; };

struct B_00d8bbe0 { virtual void sub_00d8bfb0(); };

struct C_00d8bbe0 : A_00d8bbe0, B_00d8bbe0 { virtual void sub_00d8bfb0(); C_00d8bbe0(); };

C_00d8bbe0::C_00d8bbe0() {}

// @baa 0x00d8bbe0
void C_00d8bbe0::sub_00d8bfb0() {}

struct A_00d8bbf0 { virtual void sub_00d8bfb0(); char pad[96]; };

struct B_00d8bbf0 { virtual void sub_00d8bfb0(); };

struct C_00d8bbf0 : A_00d8bbf0, B_00d8bbf0 { virtual void sub_00d8bfb0(); C_00d8bbf0(); };

C_00d8bbf0::C_00d8bbf0() {}

// @baa 0x00d8bbf0
void C_00d8bbf0::sub_00d8bfb0() {}

void sub_00d88140();
// @baa 0x00d8bc00
void sub_00d8bc00(void) { sub_00d88140(); }

// @baa 0x00d8bcf0
int UInput::sub_00d8bcf0(void)
{
    int param_1 = (int)this;

  sub_00d80eb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00d864f0();
// @baa 0x00d8bd10
void sub_00d8bd10(void) { sub_00d864f0(); }

void sub_00d8a7c0();
// @baa 0x00d8bd30
void sub_00d8bd30(void) { sub_00d8a7c0(); }

// @baa 0x00d8bde0
int sub_005c7a70(...);
int sub_00d8bd40(void);
// @baa 0x00d8bdf0
undefined4 UInput::sub_00d8bdf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d8bd40();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xcc);
  }
  return param_1;
}

int sub_00d8abf0(void);
extern undefined * g_020b7878;
// @baa 0x00d8be20
undefined4 * UInput::sub_00d8be20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d8abf0();
  *param_1 = (undefined4)(&g_020b7878);
  return param_1;
}

// @baa 0x00d8be40
IMPLEMENT_CLASS_AT(UPlayerInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnIn.cpp", 11);

// @baa 0x00d8bea0
// @baa 0x00d8bfa0
int sub_00d8bed0(void);
// @baa 0x00d8bfb0
undefined4 UInput::sub_00d8bfb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d8bed0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1a0);
  }
  return param_1;
}

// @baa 0x00d8c5a0
struct M_00d8df40 { void sub_00d864f0(); };

struct C_00d8df40 { char pad[4]; M_00d8df40 m; void sub_00d8df40(); };

// @baa 0x00d8df40
void C_00d8df40::sub_00d8df40() { m.sub_00d864f0(); }

struct C_00d8df50 {
    undefined4 sub_00d8df50(byte);
    int sub_00d864f0();
};

int sub_0053dfa0(...);
// @baa 0x00d8df50
undefined4 C_00d8df50::sub_00d8df50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d8df50 *)(((char *)this + 4)))->sub_00d864f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00d8e0b0();
// @baa 0x00d8e120
void sub_00d8e120(void) { sub_00d8e0b0(); }

// @baa 0x00d8e130
void sub_00d8e130(void) { sub_00d8e0b0(); }

// @baa 0x00d8e140
void sub_00d8e140(void) { sub_00d8e0b0(); }

struct C_00d8e1d0 {
    undefined4 sub_00d8e1d0(byte);
};

int sub_00d8e150(void);
// @baa 0x00d8e1d0
undefined4 C_00d8e1d0::sub_00d8e1d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d8e150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00d8e250();
// @baa 0x00d8e320
void sub_00d8e320(void) { sub_00d8e250(); }

struct C_00d8e330 { C_00d8e330* sub_00d8e330(void); };

// @baa 0x00d8e330
C_00d8e330* C_00d8e330::sub_00d8e330(void) { return this; }

int sub_005c7a20(void);
extern undefined * g_020b79b0;
// @baa 0x00d8e340
undefined4 * UObject::sub_00d8e340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b79b0);
  return param_1;
}

// @baa 0x00d8e360
// @baa 0x00d8e3e0
// @baa 0x00d8e400
// @baa 0x00d8e420
extern undefined * g_020ee6d8;
// @baa 0x00e28410
undefined4 * UInput::sub_00e28410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d8abf0();
  *param_1 = (undefined4)(&g_020ee6d8);
  return param_1;
}

extern undefined * g_021625d0;
// @baa 0x00f962f0
undefined4 * UInput::sub_00f962f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d8abf0();
  *param_1 = (undefined4)(&g_021625d0);
  return param_1;
}

extern undefined * g_022815e8;
// @baa 0x01422120
undefined4 * UInput::sub_01422120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d8abf0();
  *param_1 = (undefined4)(&g_022815e8);
  return param_1;
}

extern undefined * g_022e0dd8;
// @baa 0x01537ec0
undefined4 * UInput::sub_01537ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d8abf0();
  *param_1 = (undefined4)(&g_022e0dd8);
  return param_1;
}

extern undefined * g_0234cd40;
// @baa 0x016342b0
undefined4 * UInput::sub_016342b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d8abf0();
  *param_1 = (undefined4)(&g_0234cd40);
  return param_1;
}
