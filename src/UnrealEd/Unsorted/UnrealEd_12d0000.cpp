// UnrealEd_12d0000.cpp (part 1 of 3): 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_012d8d30(byte);
};

int sub_0053dfa0(...);
int sub_012d39f0(void);
// @baa 0x012d8d30
undefined4 C::sub_012d8d30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012d39f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012d8f20 {
    undefined4 sub_012d8f20(byte);
};

int sub_012d4360(void);
// @baa 0x012d8f20
undefined4 C_012d8f20::sub_012d8f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012d4360();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_02232158;
// @baa 0x012d9720
undefined4 * UObject::sub_012d9720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02232158);
  return param_1;
}

// @baa 0x012d9740
IMPLEMENT_CLASS_AT(UInterpEdOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditor.cpp", 16);

// @baa 0x012d97b0
struct C_012db0e0 {
    undefined4 sub_012db0e0(byte);
};

int sub_012da060(void);
// @baa 0x012db0e0
undefined4 C_012db0e0::sub_012db0e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012da060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_0223f554;
// @baa 0x012de590
undefined4 * UUnrealEdEngine::sub_012de590(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  *param_1 = (undefined4)(&g_0223f554);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x012de5b0
void sub_012de5b0(void) { sub_00c38ac0(); }

extern undefined4 g_0223f564;
// @baa 0x012de5c0
undefined4 * UUnrealEdEngine::sub_012de5c0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f564);
  return param_1;
}

// @baa 0x012de5e0
void sub_012de5e0(void) { sub_00c38ac0(); }

extern undefined4 g_0223f574;
// @baa 0x012de5f0
undefined4 * UUnrealEdEngine::sub_012de5f0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f574);
  return param_1;
}

// @baa 0x012de610
void sub_012de610(void) { sub_00c38ac0(); }

extern undefined4 g_0223f584;
// @baa 0x012de620
undefined4 * UUnrealEdEngine::sub_012de620(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f584);
  return param_1;
}

// @baa 0x012de640
void sub_012de640(void) { sub_00c38ac0(); }

extern undefined4 g_0223f594;
// @baa 0x012de650
undefined4 * UUnrealEdEngine::sub_012de650(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f594);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012de680
void sub_012de680(void) { sub_00c38ac0(); }

extern undefined4 g_0223f5a4;
// @baa 0x012de690
undefined4 * UUnrealEdEngine::sub_012de690(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f5a4);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012de6c0
void sub_012de6c0(void) { sub_00c38ac0(); }

extern undefined4 g_0223f5b4;
// @baa 0x012de6d0
undefined4 * UUnrealEdEngine::sub_012de6d0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f5b4);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012de700
void sub_012de700(void) { sub_00c38ac0(); }

extern undefined4 g_0223f5c4;
// @baa 0x012de710
undefined4 * UUnrealEdEngine::sub_012de710(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f5c4);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012de740
void sub_012de740(void) { sub_00c38ac0(); }

extern undefined4 g_0223f5d4;
// @baa 0x012de750
undefined4 * UUnrealEdEngine::sub_012de750(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f5d4);
  param_1[5] = param_3;
  param_1[6] = param_4;
  return param_1;
}

// @baa 0x012de780
void sub_012de780(void) { sub_00c38ac0(); }

extern undefined4 g_0223f5e4;
// @baa 0x012de790
undefined4 * UUnrealEdEngine::sub_012de790(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  *param_1 = (undefined4)(&g_0223f5e4);
  return param_1;
}

// @baa 0x012de7b0
void sub_012de7b0(void) { sub_00c38ac0(); }

extern undefined4 g_0223f5f4;
// @baa 0x012de7c0
undefined4 * UUnrealEdEngine::sub_012de7c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  *param_1 = (undefined4)(&g_0223f5f4);
  return param_1;
}

// @baa 0x012de7e0
void sub_012de7e0(void) { sub_00c38ac0(); }

extern undefined4 g_0223f604;
// @baa 0x012de7f0
undefined4 * UUnrealEdEngine::sub_012de7f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  *param_1 = (undefined4)(&g_0223f604);
  return param_1;
}

// @baa 0x012de810
void sub_012de810(void) { sub_00c38ac0(); }

extern undefined4 g_0223f614;
// @baa 0x012de820
undefined4 * UUnrealEdEngine::sub_012de820(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f614);
  return param_1;
}

// @baa 0x012de840
void sub_012de840(void) { sub_00c38ac0(); }

extern undefined4 g_0223f624;
// @baa 0x012de850
undefined4 * UUnrealEdEngine::sub_012de850(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223f624);
  return param_1;
}

// @baa 0x012de870
void sub_012de870(void) { sub_00c38ac0(); }

// @baa 0x012de880
int UUnrealEdEngine::sub_012de880(void) { return *(int*)((char*)this + 964); }

struct C_012de920 { C_012de920* sub_012de920(int a0); };

// @baa 0x012de920
C_012de920* C_012de920::sub_012de920(int a0) { return this; }

struct C_012de930 { C_012de930* sub_012de930(int a0); };

// @baa 0x012de930
C_012de930* C_012de930::sub_012de930(int a0) { return this; }

// @baa 0x012de9f0
int UUnrealEdEngine::sub_012de9f0(void) { return *(int*)((char*)this + 4); }

// @baa 0x012dea00
void UUnrealEdEngine::sub_012dea00(int a0) { *(int*)((char*)this + 12) = a0; }

// @baa 0x012dea10
char* UUnrealEdEngine::sub_012dea10(void) { return (char*)this + 420; }

struct C_012dea60 { void sub_012c5570(); void sub_012dea60(int); };

// @baa 0x012dea60
void C_012dea60::sub_012dea60(int) { sub_012c5570(); }

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_012dec10;
};

struct C_012dec10 {
    void sub_012dec10(wxUpdateUIEvent *);
};

// @baa 0x012dec10
void C_012dec10::sub_012dec10(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check((*(uint *)(*(int *)(param_1 + 0x328) + 0x16c) & 0x8000) == 0x8000);
  return;
}

struct V_012df1c0 {
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
    virtual void g();
};

struct O_012df1c0 { char pad[912]; V_012df1c0* p; void sub_012df1c0(); };

// @baa 0x012df1c0
void O_012df1c0::sub_012df1c0() { p->g(); }

extern undefined4 g_026d6b54;
extern undefined4 g_026d6b58;
// @baa 0x012df480
void sub_012df480(undefined4 param_1, undefined4 param_2)
{
  g_026d6b54 = param_1;
  g_026d6b58 = param_2;
  return;
}

