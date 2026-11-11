// BmEditor_0f70000.cpp (part 1 of 6): 58 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f71990
int sub_00f71990(void) { return 1; }

// @baa 0x00f719a0
int sub_00f719a0(int a0, int a1) { return a1; }

// @baa 0x00f719b0
IMPLEMENT_CLASS_AT(UTransactor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdTran.cpp", 631);

// @baa 0x00f71a10
int sub_005c7a20(void);
extern undefined * g_02162020;
// @baa 0x00f71a30
undefined4 * UObject::sub_00f71a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02162020);
  return param_1;
}

extern char g_0216215c[];
struct C { C* sub_00f71a50(void); };

// @baa 0x00f71a50
C* C::sub_00f71a50(void) { *(int*)((char*)this + 0) = (int)g_0216215c; return this; }

// @baa 0x00f71a60
int sub_00f71a60(int a0, int a1) { return a1; }

struct V_00f71aa0 {
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
    virtual void g(int a0);
};

struct O_00f71aa0 { char pad[1076]; V_00f71aa0* p; void sub_00f71aa0(int a0); };

// @baa 0x00f71aa0
void O_00f71aa0::sub_00f71aa0(int a0) { p->g(a0); }

struct V_00f71ab0 {
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
    virtual void g();
};

struct O_00f71ab0 { char pad[1076]; V_00f71ab0* p; void sub_00f71ab0(); };

// @baa 0x00f71ab0
void O_00f71ab0::sub_00f71ab0() { p->g(); }

struct V_00f71ac0 {
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
    virtual void g(int a0);
};

struct O_00f71ac0 { char pad[1076]; V_00f71ac0* p; void sub_00f71ac0(int a0); };

// @baa 0x00f71ac0
void O_00f71ac0::sub_00f71ac0(int a0) { p->g(a0); }

struct V_00f71ad0 {
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
    virtual void g(int a0);
};

struct O_00f71ad0 { char pad[1076]; V_00f71ad0* p; void sub_00f71ad0(int a0); };

// @baa 0x00f71ad0
void O_00f71ad0::sub_00f71ad0(int a0) { p->g(a0); }

struct V_00f71b40 {
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
    virtual void g();
};

struct O_00f71b40 { char pad[1076]; V_00f71b40* p; void sub_00f71b40(); };

// @baa 0x00f71b40
void O_00f71b40::sub_00f71b40() { p->g(); }

struct C_00f72570 {
    void sub_00f72570(int *);
};

// @baa 0x00f72570
void C_00f72570::sub_00f72570(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0x18);
  return;
}

// @baa 0x00f72580
int sub_00f72580(int a0) { return *(int*)a0; }

struct C_00f725b0 {
    void sub_00f725b0(int *);
};

// @baa 0x00f725b0
void C_00f725b0::sub_00f725b0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4);
  return;
}

// @baa 0x00f725c0
int sub_00f725c0(int a0) { return *(int*)a0; }

// @baa 0x00f725d0
bool sub_00f725d0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f725e0 { int a, b; C_00f725e0(const C_00f725e0 &); };

// @baa 0x00f725e0
C_00f725e0::C_00f725e0(const C_00f725e0 &o) : a(o.a), b(o.b) {}

// @baa 0x00f72620
int sub_00f72620(int a0) { return *(int*)a0; }

// @baa 0x00f72630
bool sub_00f72630(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f72670 {
    void sub_00f72670(undefined4 *);
};

// @baa 0x00f72670
void C_00f72670::sub_00f72670(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

int sub_00627f70(...);
// @baa 0x00f72690
void sub_00f72690(undefined4 param_1)
{
  sub_00627f70(param_1,0x18,0);
  return;
}

int sub_005d88c0(...);
int sub_0090d510(void);
int sub_00940b10(...);
extern undefined4 g_026b5db0;
// @baa 0x00f726c0
void sub_00f726c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b5db0 == 0) {
    g_026b5db0 = sub_00940b10(L"Engine");
    sub_0090d510();
  }
  sub_005d88c0(g_026b5db0,param_1,param_2,param_3);
  return;
}

int sub_00627f00(...);
// @baa 0x00f72700
void sub_00f72700(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x00f72720
void sub_00f72720(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x00f72740
void sub_00f72740(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x00f72760
void sub_00f72760(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_00f72780 { int a, b; C_00f72780(const C_00f72780 &); };

// @baa 0x00f72780
C_00f72780::C_00f72780(const C_00f72780 &o) : a(o.a), b(o.b) {}

struct C_00f727e0 { int a, b; C_00f727e0(const C_00f727e0 &); };

// @baa 0x00f727e0
C_00f727e0::C_00f727e0(const C_00f727e0 &o) : a(o.a), b(o.b) {}

struct C_00f72800 { int a, b; C_00f72800(const C_00f72800 &); };

// @baa 0x00f72800
C_00f72800::C_00f72800(const C_00f72800 &o) : a(o.a), b(o.b) {}

// @baa 0x00f72850
void sub_00f72850(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00f72870
void sub_00f72870(void) {  }

// @baa 0x00f72880
float10 sub_00f72880(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00f72930
undefined2 sub_00f72930(void)
{
  return 0x69;
}

// @baa 0x00f72940
undefined2 sub_00f72940(void)
{
  return 0x73;
}

// @baa 0x00f72950
void __stdcall sub_00f72950(int a0, int a1) {  }

struct C_00f72960 { C_00f72960* sub_00f72960(int a0); };

// @baa 0x00f72960
C_00f72960* C_00f72960::sub_00f72960(int a0) { return this; }

struct C_00f72970 { C_00f72970* sub_00f72970(int a0); };

// @baa 0x00f72970
C_00f72970* C_00f72970::sub_00f72970(int a0) { return this; }

extern char g_01e72a60[];
struct C_00f73200 { void sub_00f73200(void); };

// @baa 0x00f73200
void C_00f73200::sub_00f73200(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_00f73210 { void sub_00f73210(void); };

// @baa 0x00f73210
void C_00f73210::sub_00f73210(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_00f762f0 {
    void sub_00f762f0(undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00f762f0
void C_00f762f0::sub_00f762f0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00f76450
void sub_00f76450(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00f76470
void sub_00f76470(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
  }
  return;
}

// @baa 0x00f764b0
void sub_00f764b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00f764d0
void sub_00f764d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00f76680
void sub_00f76680(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_00f767d0 { int sub_00f767d0(void); };

// @baa 0x00f767d0
int C_00f767d0::sub_00f767d0(void) { return *(int*)((char*)this + 52); }

struct T_00f7d900;
// @baa 0x00f7d900
template INT TArray<T_00f7d900*>::RemoveItem(T_00f7d900* const&);

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00f7db60
undefined4 * UObject::sub_00f7db60(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

// @baa 0x00f7dba0
int UObject::sub_00f7dba0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00f7dbb0
int UObject::sub_00f7dbb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00f7dbd0
int UObject::sub_00f7dbd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00f7e040
int UState::sub_00f7e040(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00f7e0c0
int UState::sub_00f7e0c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00f7e160
int UState::sub_00f7e160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00f7e1f0 {
    int sub_00f7e1f0();
};

// @baa 0x00f7e1f0
int C_00f7e1f0::sub_00f7e1f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

void sub_00c51210();
// @baa 0x00f7e6d0
void sub_00f7e6d0(void) { sub_00c51210(); }

struct C_00f7e820 {
    undefined4 sub_00f7e820(undefined4);
    int sub_005cb920(int);
    int sub_0053ea70(int, int);
};

// @baa 0x00f7e820
undefined4 C_00f7e820::sub_00f7e820(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  param_2 = ((C_00f7e820 *)((*(char **)((char *)this + 0x84))))->sub_005cb920(param_2);
  ((C_00f7e820 *)(this))->sub_0053ea70((int)(&param_2), 4);
  return param_1;
}
