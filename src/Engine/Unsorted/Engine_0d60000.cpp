// Engine_0d60000.cpp (part 1 of 3): 249 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d66f10
void sub_00d66f10(void) {  }

// @baa 0x00d66f20
undefined8 sub_00d66f20(undefined8 param_1)
{
  return param_1;
}

// @baa 0x00d66f30
float10 sub_00d66f30(double param_1)
{
  return (float10)param_1;
}

struct C { C* sub_00d66f40(void); };

// @baa 0x00d66f40
C* C::sub_00d66f40(void) { return this; }

struct C_00d66f50 { C_00d66f50* sub_00d66f50(int a0); };

// @baa 0x00d66f50
C_00d66f50* C_00d66f50::sub_00d66f50(int a0) { return this; }

struct C_00d66f60 { C_00d66f60* sub_00d66f60(int a0); };

// @baa 0x00d66f60
C_00d66f60* C_00d66f60::sub_00d66f60(int a0) { return this; }

// @baa 0x00d67020
int sub_00d67020(int a0, int a1) { return a1; }

// @baa 0x00d67030
int sub_00d67030(int a0, int a1) { return a1; }

// @baa 0x00d67040
int sub_00d67040(int a0, int a1) { return a1; }

// @baa 0x00d67050
int sub_00d67050(int a0, int a1) { return a1; }

// @baa 0x00d67620
IMPLEMENT_CLASS_AT(UOnlineSubsystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineSubsystem.cpp", 9);

// @baa 0x00d680c0
int __stdcall sub_00d680c0(int a0, int a1) { return 1; }

// @baa 0x00d680d0
int __stdcall sub_00d680d0(int a0, int a1, int a2) { return 1; }

// @baa 0x00d680e0
int __stdcall sub_00d680e0(int a0) { return 0; }

// @baa 0x00d680f0
int __stdcall sub_00d680f0(int a0) { return 0; }

// @baa 0x00d68100
void __stdcall sub_00d68100(int a0, int a1, int a2) {  }

// @baa 0x00d68110
int __stdcall sub_00d68110(int a0) { return 0; }

// @baa 0x00d68120
int __stdcall sub_00d68120(int a0, int a1) { return -2147467263; }

// @baa 0x00d68130
int __stdcall sub_00d68130(int a0, int a1) { return -2147467263; }

extern char g_020b0978[];
// @baa 0x00d69120
int sub_00d69120(void) { return (int)g_020b0978; }

extern char g_01ebb554[];
struct C_00d69130 { void sub_00d69130(void); };

// @baa 0x00d69130
void C_00d69130::sub_00d69130(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00d69140 {
    undefined4 * sub_00d69140(byte);
};

int sub_0053dfa0(...);
// @baa 0x00d69140
undefined4 * C_00d69140::sub_00d69140(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d6aff0 { int sub_00d6aff0(void); };

// @baa 0x00d6aff0
int C_00d6aff0::sub_00d6aff0(void) { return *(int*)((char*)this + 4); }

// @baa 0x00d6b060
int sub_00d6b060(int a0, int a1) { return a1; }

// @baa 0x00d6b070
int sub_00d6b070(int a0, int a1) { return a1; }

// @baa 0x00d6b080
int sub_00d6b080(int a0, int a1) { return a1; }

// @baa 0x00d6b090
int sub_00d6b090(int a0, int a1) { return a1; }

// @baa 0x00d6b0a0
int sub_00d6b0a0(int a0, int a1) { return a1; }

// @baa 0x00d6b0b0
int sub_00d6b0b0(int a0, int a1) { return a1; }

// @baa 0x00d6b0c0
int sub_00d6b0c0(int a0, int a1) { return a1; }

// @baa 0x00d6b0d0
int sub_00d6b0d0(int a0, int a1) { return a1; }

// @baa 0x00d6b0e0
int sub_00d6b0e0(int a0, int a1) { return a1; }

struct C_00d6b130 { C_00d6b130* sub_00d6b130(void); };

// @baa 0x00d6b130
C_00d6b130* C_00d6b130::sub_00d6b130(void) { return this; }

struct D {
    virtual void sub_01();
    virtual void sub_02();
    virtual void sub_03();
    virtual void sub_04();
};

struct C_00d6b190 {
    int f0;
    D* p;
    void sub_00d6b190();
};

// @baa 0x00d6b190
void C_00d6b190::sub_00d6b190() {
    p->sub_04();
}

struct T {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void sub_target();
};

struct C_00d6b1a0 {
    char pad[4];
    T* t;
    void sub_00d6b1a0();
};

// @baa 0x00d6b1a0
void C_00d6b1a0::sub_00d6b1a0() { t->sub_target(); }

struct B {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct C_00d6b1b0 {
    virtual void c0();
    B *b;
    void sub_00d6b1b0();
};

// @baa 0x00d6b1b0
void C_00d6b1b0::sub_00d6b1b0() { b->v5(); }

// @baa 0x00d6b1c0
IMPLEMENT_CLASS_AT(ANxForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 14);

// @baa 0x00d6b2d0
int ANxForceField::vf_000(void) { return 1; }

// @baa 0x00d6b2e0
bool ANxForceField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d6b320
int ANxRadialForceField::vf_000(void) { return 1; }

// @baa 0x00d6b330
int ANxCylindricalForceField::vf_000(void) { return 1; }

// @baa 0x00d6b340
int ANxCylindricalForceFieldCapsule::vf_000(void) { return 1; }

// @baa 0x00d6b350
int ANxGenericForceField::vf_000(void) { return 1; }

// @baa 0x00d6b360
int ANxGenericForceFieldBox::vf_000(void) { return 1; }

// @baa 0x00d6b370
int ANxGenericForceFieldCapsule::vf_000(void) { return 1; }

// @baa 0x00d6b380
IMPLEMENT_CLASS_AT(ANxGenericForceFieldBrush, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 21);

// @baa 0x00d6b490
int ANxGenericForceFieldBrush::vf_000(void) { return 1; }

// @baa 0x00d6b4a0
bool ANxGenericForceFieldBrush::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d6b4e0
IMPLEMENT_CLASS_AT(ARB_ForceFieldExcludeVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 25);

// @baa 0x00d6b5f0
int ARB_ForceFieldExcludeVolume::vf_000(void) { return 1; }

// @baa 0x00d6b600
bool ARB_ForceFieldExcludeVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct V_00d6b760 {
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
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
    virtual void v121();
    virtual void v122();
    virtual void v123();
    virtual void v124();
    virtual void v125();
    virtual void v126();
    virtual void v127();
    virtual void v128();
    virtual void v129();
    virtual void v130();
    virtual void v131();
    virtual void v132();
    virtual void v133();
    virtual void v134();
    virtual void v135();
    virtual void v136();
    virtual void v137();
    virtual void v138();
    virtual void v139();
    virtual void v140();
    virtual void v141();
    virtual void g();
    void sub_00d6b760();
};

// @baa 0x00d6b760
void V_00d6b760::sub_00d6b760() { g(); }

// @baa 0x00d6b770
undefined4 ANxForceField::sub_00d6b770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d6b790
void __stdcall sub_00d6b790(int a0) {  }

// @baa 0x00d6b7a0
int ANxForceField::vf_35c(void) { return 0; }

// @baa 0x00d6b7b0
void __stdcall sub_00d6b7b0(int a0) {  }

// @baa 0x00d6b7c0
int ANxGenericForceField::vf_35c(void) { return 0; }

struct C_00d6c9b0 { int sub_00d6c9b0(void); };

// @baa 0x00d6c9b0
int C_00d6c9b0::sub_00d6c9b0(void) { return *(int*)((char*)this + 4); }

struct C_00d6c9c0 { int sub_00d6c9c0(void); };

// @baa 0x00d6c9c0
int C_00d6c9c0::sub_00d6c9c0(void) { return *(int*)((char*)this + 4); }

typedef uint size_t;

struct C_00d6ca40 {
    int sub_00d6ca40(int);
    int sub_00d6c9d0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00d6ca40
int C_00d6ca40::sub_00d6ca40(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d6ca40 *)(this))->sub_00d6c9d0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_00d6ca80 { int sub_00d6ca80(void); };

// @baa 0x00d6ca80
int C_00d6ca80::sub_00d6ca80(void) { return *(int*)((char*)this + 4); }

struct C_00d6ca90 { int sub_00d6ca90(void); };

// @baa 0x00d6ca90
int C_00d6ca90::sub_00d6ca90(void) { return *(int*)((char*)this + 4); }

struct C_00d6caa0 { int sub_00d6caa0(void); };

// @baa 0x00d6caa0
int C_00d6caa0::sub_00d6caa0(void) { return *(int*)((char*)this + 4); }

struct C_00d6cab0 { int sub_00d6cab0(void); };

// @baa 0x00d6cab0
int C_00d6cab0::sub_00d6cab0(void) { return *(int*)((char*)this + 4); }

struct C_00d6cac0 { int sub_00d6cac0(void); };

// @baa 0x00d6cac0
int C_00d6cac0::sub_00d6cac0(void) { return *(int*)((char*)this + 4); }

struct C_00d6cad0 { int sub_00d6cad0(void); };

// @baa 0x00d6cad0
int C_00d6cad0::sub_00d6cad0(void) { return *(int*)((char*)this + 4); }

struct C_00d6cae0 { int sub_00d6cae0(void); };

// @baa 0x00d6cae0
int C_00d6cae0::sub_00d6cae0(void) { return *(int*)((char*)this + 4); }

struct C_00d6cc30 {
    void sub_00d6cc30(undefined1);
};

// @baa 0x00d6cc30
void C_00d6cc30::sub_00d6cc30(undefined1 param_2)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  *(undefined1 *)(param_1 + 0xb) = param_2;
  return;
}

struct C_00d6cc80 { int sub_00d6cc80(void); };

// @baa 0x00d6cc80
int C_00d6cc80::sub_00d6cc80(void) { return *(int*)((char*)this + 4); }

struct C_00d6cc90 { int a, b, c; C_00d6cc90(); };

// @baa 0x00d6cc90
C_00d6cc90::C_00d6cc90() : a(0), b(0), c(0) {}

struct C_00d6cca0 { int sub_00d6cca0(void); };

// @baa 0x00d6cca0
int C_00d6cca0::sub_00d6cca0(void) { return *(int*)((char*)this + 4); }

struct C_00d6ccb0 { C_00d6ccb0* sub_00d6ccb0(int a0); };

// @baa 0x00d6ccb0
C_00d6ccb0* C_00d6ccb0::sub_00d6ccb0(int a0) { return this; }

struct C_00d6cd30 { C_00d6cd30* sub_00d6cd30(int a0); };

// @baa 0x00d6cd30
C_00d6cd30* C_00d6cd30::sub_00d6cd30(int a0) { return this; }

struct C_00d6cdb0 { C_00d6cdb0* sub_00d6cdb0(int a0); };

// @baa 0x00d6cdb0
C_00d6cdb0* C_00d6cdb0::sub_00d6cdb0(int a0) { return this; }

struct C_00d6cdc0 { int sub_00d6cdc0(void); };

// @baa 0x00d6cdc0
int C_00d6cdc0::sub_00d6cdc0(void) { return *(int*)((char*)this + 0); }

struct C_00d6cdd0 { C_00d6cdd0* sub_00d6cdd0(int a0); };

// @baa 0x00d6cdd0
C_00d6cdd0* C_00d6cdd0::sub_00d6cdd0(int a0) { return this; }

struct C_00d6cde0 { int sub_00d6cde0(void); };

// @baa 0x00d6cde0
int C_00d6cde0::sub_00d6cde0(void) { return *(int*)((char*)this + 0); }

struct C_00d6cdf0 { int sub_00d6cdf0(void); };

// @baa 0x00d6cdf0
int C_00d6cdf0::sub_00d6cdf0(void) { return *(int*)((char*)this + 0); }

struct C_00d6ce00 {
    int sub_00d6ce00(int);
};

// @baa 0x00d6ce00
int C_00d6ce00::sub_00d6ce00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00d6ce10 { C_00d6ce10* sub_00d6ce10(int a0); };

// @baa 0x00d6ce10
C_00d6ce10* C_00d6ce10::sub_00d6ce10(int a0) { return this; }

struct C_00d6ce20 { int sub_00d6ce20(void); };

// @baa 0x00d6ce20
int C_00d6ce20::sub_00d6ce20(void) { return *(int*)((char*)this + 0); }

struct C_00d6cea0 { C_00d6cea0* sub_00d6cea0(int a0); };

// @baa 0x00d6cea0
C_00d6cea0* C_00d6cea0::sub_00d6cea0(int a0) { return this; }

struct C_00d6ceb0 { int sub_00d6ceb0(void); };

// @baa 0x00d6ceb0
int C_00d6ceb0::sub_00d6ceb0(void) { return *(int*)((char*)this + 0); }

struct C_00d6cec0 { C_00d6cec0* sub_00d6cec0(int a0); };

// @baa 0x00d6cec0
C_00d6cec0* C_00d6cec0::sub_00d6cec0(int a0) { return this; }

struct C_00d6ced0 { int sub_00d6ced0(void); };

// @baa 0x00d6ced0
int C_00d6ced0::sub_00d6ced0(void) { return *(int*)((char*)this + 0); }

struct C_00d6cee0 { C_00d6cee0* sub_00d6cee0(int a0); };

// @baa 0x00d6cee0
C_00d6cee0* C_00d6cee0::sub_00d6cee0(int a0) { return this; }

struct C_00d6cef0 { C_00d6cef0* sub_00d6cef0(int a0); };

// @baa 0x00d6cef0
C_00d6cef0* C_00d6cef0::sub_00d6cef0(int a0) { return this; }

struct C_00d6cf00 { C_00d6cf00* sub_00d6cf00(int a0); };

// @baa 0x00d6cf00
C_00d6cf00* C_00d6cf00::sub_00d6cf00(int a0) { return this; }

struct C_00d6cf10 { C_00d6cf10* sub_00d6cf10(int a0); };

// @baa 0x00d6cf10
C_00d6cf10* C_00d6cf10::sub_00d6cf10(int a0) { return this; }

struct C_00d6cf20 { C_00d6cf20* sub_00d6cf20(int a0); };

// @baa 0x00d6cf20
C_00d6cf20* C_00d6cf20::sub_00d6cf20(int a0) { return this; }

struct C_00d6cf30 { C_00d6cf30* sub_00d6cf30(int a0); };

// @baa 0x00d6cf30
C_00d6cf30* C_00d6cf30::sub_00d6cf30(int a0) { return this; }

struct C_00d6cf40 { C_00d6cf40* sub_00d6cf40(int a0); };

// @baa 0x00d6cf40
C_00d6cf40* C_00d6cf40::sub_00d6cf40(int a0) { return this; }

struct C_00d6cf50 { C_00d6cf50* sub_00d6cf50(int a0); };

// @baa 0x00d6cf50
C_00d6cf50* C_00d6cf50::sub_00d6cf50(int a0) { return this; }

struct C_00d6cf60 { C_00d6cf60* sub_00d6cf60(int a0); };

// @baa 0x00d6cf60
C_00d6cf60* C_00d6cf60::sub_00d6cf60(int a0) { return this; }

struct C_00d6cf70 { int sub_00d6cf70(void); };

// @baa 0x00d6cf70
int C_00d6cf70::sub_00d6cf70(void) { return *(int*)((char*)this + 0); }

struct C_00d6cf80 { int sub_00d6cf80(void); };

// @baa 0x00d6cf80
int C_00d6cf80::sub_00d6cf80(void) { return *(int*)((char*)this + 0); }

struct C_00d6d010 {
    int sub_00d6d010(int);
};

// @baa 0x00d6d010
int C_00d6d010::sub_00d6d010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d6d020 { C_00d6d020* sub_00d6d020(int a0); };

// @baa 0x00d6d020
C_00d6d020* C_00d6d020::sub_00d6d020(int a0) { return this; }

struct C_00d6d030 { int sub_00d6d030(void); };

// @baa 0x00d6d030
int C_00d6d030::sub_00d6d030(void) { return *(int*)((char*)this + 0); }

struct C_00d6d040 { int sub_00d6d040(void); };

// @baa 0x00d6d040
int C_00d6d040::sub_00d6d040(void) { return *(int*)((char*)this + 0); }

struct C_00d6d050 {
    int sub_00d6d050(int);
};

// @baa 0x00d6d050
int C_00d6d050::sub_00d6d050(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d6d060 { C_00d6d060* sub_00d6d060(int a0); };

// @baa 0x00d6d060
C_00d6d060* C_00d6d060::sub_00d6d060(int a0) { return this; }

struct C_00d6d070 { int sub_00d6d070(void); };

// @baa 0x00d6d070
int C_00d6d070::sub_00d6d070(void) { return *(int*)((char*)this + 0); }

struct C_00d6d080 { C_00d6d080* sub_00d6d080(int a0); };

// @baa 0x00d6d080
C_00d6d080* C_00d6d080::sub_00d6d080(int a0) { return this; }

struct C_00d6d090 { int sub_00d6d090(void); };

// @baa 0x00d6d090
int C_00d6d090::sub_00d6d090(void) { return *(int*)((char*)this + 0); }

struct C_00d6d0a0 {
    int sub_00d6d0a0(int);
};

// @baa 0x00d6d0a0
int C_00d6d0a0::sub_00d6d0a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00d6d220 { int sub_00d6d220(void); };

// @baa 0x00d6d220
int C_00d6d220::sub_00d6d220(void) { return *(int*)((char*)this + 0); }

struct C_00d6d230 {
    int sub_00d6d230();
};

// @baa 0x00d6d230
int C_00d6d230::sub_00d6d230(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d6d240 {
    int sub_00d6d240();
};

// @baa 0x00d6d240
int C_00d6d240::sub_00d6d240(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d6d250 { int a, b; C_00d6d250(int, int); };

// @baa 0x00d6d250
C_00d6d250::C_00d6d250(int x, int y) : a(x), b(y) {}

struct C_00d6d270 {
    int sub_00d6d270();
};

// @baa 0x00d6d270
int C_00d6d270::sub_00d6d270(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d6d280 { int a, b; C_00d6d280(int, int); };

// @baa 0x00d6d280
C_00d6d280::C_00d6d280(int x, int y) : a(x), b(y) {}

struct C_00d6d2a0 {
    int sub_00d6d2a0();
};

// @baa 0x00d6d2a0
int C_00d6d2a0::sub_00d6d2a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d6d2b0 { int a, b; C_00d6d2b0(int, int); };

// @baa 0x00d6d2b0
C_00d6d2b0::C_00d6d2b0(int x, int y) : a(x), b(y) {}

struct C_00d6d2d0 {
    int sub_00d6d2d0();
};

// @baa 0x00d6d2d0
int C_00d6d2d0::sub_00d6d2d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d6d2e0 { int a, b; C_00d6d2e0(int, int); };

// @baa 0x00d6d2e0
C_00d6d2e0::C_00d6d2e0(int x, int y) : a(x), b(y) {}

struct C_00d6d300 {
    int sub_00d6d300();
};

// @baa 0x00d6d300
int C_00d6d300::sub_00d6d300(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d6d310 { int a, b; C_00d6d310(int, int); };

// @baa 0x00d6d310
C_00d6d310::C_00d6d310(int x, int y) : a(x), b(y) {}

struct C_00d6d330 {
    int sub_00d6d330();
};

// @baa 0x00d6d330
int C_00d6d330::sub_00d6d330(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d6d340 { int a, b; C_00d6d340(int, int); };

// @baa 0x00d6d340
C_00d6d340::C_00d6d340(int x, int y) : a(x), b(y) {}

struct C_00d6d360 { int sub_00d6d360(void); };

// @baa 0x00d6d360
int C_00d6d360::sub_00d6d360(void) { return *(int*)((char*)this + 0); }

struct C_00d6d370 { int sub_00d6d370(void); };

// @baa 0x00d6d370
int C_00d6d370::sub_00d6d370(void) { return *(int*)((char*)this + 0); }

struct C_00d6d380 { int sub_00d6d380(void); };

// @baa 0x00d6d380
int C_00d6d380::sub_00d6d380(void) { return *(int*)((char*)this + 0); }

struct C_00d6d390 { int sub_00d6d390(void); };

// @baa 0x00d6d390
int C_00d6d390::sub_00d6d390(void) { return *(int*)((char*)this + 0); }

struct C_00d6d3a0 { int sub_00d6d3a0(void); };

// @baa 0x00d6d3a0
int C_00d6d3a0::sub_00d6d3a0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d3b0 { int sub_00d6d3b0(void); };

// @baa 0x00d6d3b0
int C_00d6d3b0::sub_00d6d3b0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d3c0 { int sub_00d6d3c0(void); };

// @baa 0x00d6d3c0
int C_00d6d3c0::sub_00d6d3c0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d3d0 { int sub_00d6d3d0(void); };

// @baa 0x00d6d3d0
int C_00d6d3d0::sub_00d6d3d0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d3e0 { int sub_00d6d3e0(void); };

// @baa 0x00d6d3e0
int C_00d6d3e0::sub_00d6d3e0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d3f0 { int sub_00d6d3f0(void); };

// @baa 0x00d6d3f0
int C_00d6d3f0::sub_00d6d3f0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d400 { int sub_00d6d400(void); };

// @baa 0x00d6d400
int C_00d6d400::sub_00d6d400(void) { return *(int*)((char*)this + 0); }

struct C_00d6d410 { int sub_00d6d410(void); };

// @baa 0x00d6d410
int C_00d6d410::sub_00d6d410(void) { return *(int*)((char*)this + 0); }

struct C_00d6d420 { int sub_00d6d420(void); };

// @baa 0x00d6d420
int C_00d6d420::sub_00d6d420(void) { return *(int*)((char*)this + 0); }

struct C_00d6d430 { int sub_00d6d430(void); };

// @baa 0x00d6d430
int C_00d6d430::sub_00d6d430(void) { return *(int*)((char*)this + 0); }

struct C_00d6d440 { int sub_00d6d440(void); };

// @baa 0x00d6d440
int C_00d6d440::sub_00d6d440(void) { return *(int*)((char*)this + 0); }

struct C_00d6d450 { int sub_00d6d450(void); };

// @baa 0x00d6d450
int C_00d6d450::sub_00d6d450(void) { return *(int*)((char*)this + 0); }

struct C_00d6d460 { int sub_00d6d460(void); };

// @baa 0x00d6d460
int C_00d6d460::sub_00d6d460(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d6d470
int sub_00d6d470(int a0) { return *(int*)a0; }

// @baa 0x00d6d480
undefined4 sub_00d6d480(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00d6d4a0 { int sub_00d6d4a0(void); };

// @baa 0x00d6d4a0
int C_00d6d4a0::sub_00d6d4a0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d4b0 { int sub_00d6d4b0(void); };

// @baa 0x00d6d4b0
int C_00d6d4b0::sub_00d6d4b0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d4c0 { int sub_00d6d4c0(void); };

// @baa 0x00d6d4c0
int C_00d6d4c0::sub_00d6d4c0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d6d4d0
int sub_00d6d4d0(int a0) { return *(int*)a0; }

// @baa 0x00d6d4e0
undefined4 sub_00d6d4e0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00d6d520 {
    void sub_00d6d520(int *);
};

// @baa 0x00d6d520
void C_00d6d520::sub_00d6d520(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00d6d530 { int sub_00d6d530(void); };

// @baa 0x00d6d530
int C_00d6d530::sub_00d6d530(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00d6d570
int sub_00d6d570(int a0) { return *(int*)a0; }

// @baa 0x00d6d580
bool sub_00d6d580(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00d6d590 { int a, b; C_00d6d590(const C_00d6d590 &); };

// @baa 0x00d6d590
C_00d6d590::C_00d6d590(const C_00d6d590 &o) : a(o.a), b(o.b) {}

// @baa 0x00d6d5f0
int sub_00d6d5f0(int a0) { return *(int*)a0; }

// @baa 0x00d6d600
undefined4 sub_00d6d600(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00d6d650 {
    void sub_00d6d650(int *);
};

// @baa 0x00d6d650
void C_00d6d650::sub_00d6d650(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00d6d690 { int sub_00d6d690(void); };

// @baa 0x00d6d690
int C_00d6d690::sub_00d6d690(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d6d6a0
int sub_00d6d6a0(int a0) { return *(int*)a0; }

// @baa 0x00d6d6b0
bool sub_00d6d6b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00d6d6c0 { int a, b; C_00d6d6c0(const C_00d6d6c0 &); };

// @baa 0x00d6d6c0
C_00d6d6c0::C_00d6d6c0(const C_00d6d6c0 &o) : a(o.a), b(o.b) {}

// @baa 0x00d6d720
int sub_00d6d720(int a0) { return *(int*)a0; }

// @baa 0x00d6d730
bool sub_00d6d730(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00d6d740
int sub_00d6d740(int a0) { return a0; }

struct C_00d6d750 { int a, b; C_00d6d750(const C_00d6d750 &); };

// @baa 0x00d6d750
C_00d6d750::C_00d6d750(const C_00d6d750 &o) : a(o.a), b(o.b) {}

// @baa 0x00d6d7b0
int sub_00d6d7b0(int a0) { return *(int*)a0; }

// @baa 0x00d6d7c0
bool sub_00d6d7c0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00d6d7d0 {
    void sub_00d6d7d0(undefined4 *);
};

// @baa 0x00d6d7d0
void C_00d6d7d0::sub_00d6d7d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00d6d7f0 { int sub_00d6d7f0(void); };

// @baa 0x00d6d7f0
int C_00d6d7f0::sub_00d6d7f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d6d800 { int sub_00d6d800(void); };

// @baa 0x00d6d800
int C_00d6d800::sub_00d6d800(void) { return *(int*)((char*)this + 0); }

struct C_00d6d810 { int sub_00d6d810(void); };

// @baa 0x00d6d810
int C_00d6d810::sub_00d6d810(void) { return *(int*)((char*)this + 0); }

struct C_00d6d820 { int sub_00d6d820(void); };

// @baa 0x00d6d820
int C_00d6d820::sub_00d6d820(void) { return *(int*)((char*)this + 0); }

struct C_00d6d830 { int sub_00d6d830(void); };

// @baa 0x00d6d830
int C_00d6d830::sub_00d6d830(void) { return *(int*)((char*)this + 0); }

struct C_00d6d840 { int sub_00d6d840(void); };

// @baa 0x00d6d840
int C_00d6d840::sub_00d6d840(void) { return *(int*)((char*)this + 0); }

struct C_00d6d850 { int sub_00d6d850(void); };

// @baa 0x00d6d850
int C_00d6d850::sub_00d6d850(void) { return *(int*)((char*)this + 0); }

struct C_00d6d860 { int sub_00d6d860(void); };

// @baa 0x00d6d860
int C_00d6d860::sub_00d6d860(void) { return *(int*)((char*)this + 0); }

struct C_00d6d870 { int sub_00d6d870(void); };

// @baa 0x00d6d870
int C_00d6d870::sub_00d6d870(void) { return *(int*)((char*)this + 0); }

struct C_00d6d880 { int sub_00d6d880(void); };

// @baa 0x00d6d880
int C_00d6d880::sub_00d6d880(void) { return *(int*)((char*)this + 0); }

struct C_00d6d890 { int sub_00d6d890(void); };

// @baa 0x00d6d890
int C_00d6d890::sub_00d6d890(void) { return *(int*)((char*)this + 0); }

struct C_00d6d8a0 { int sub_00d6d8a0(void); };

// @baa 0x00d6d8a0
int C_00d6d8a0::sub_00d6d8a0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d8b0 { int sub_00d6d8b0(void); };

// @baa 0x00d6d8b0
int C_00d6d8b0::sub_00d6d8b0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d8e0 { int sub_00d6d8e0(void); };

// @baa 0x00d6d8e0
int C_00d6d8e0::sub_00d6d8e0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d930 { int sub_00d6d930(void); };

// @baa 0x00d6d930
int C_00d6d930::sub_00d6d930(void) { return *(int*)((char*)this + 4); }

struct C_00d6d9b0 { int sub_00d6d9b0(void); };

// @baa 0x00d6d9b0
int C_00d6d9b0::sub_00d6d9b0(void) { return *(int*)((char*)this + 0); }

struct C_00d6d9c0 { int sub_00d6d9c0(void); };

// @baa 0x00d6d9c0
int C_00d6d9c0::sub_00d6d9c0(void) { return *(int*)((char*)this + 20); }

struct C_00d6d9d0 { int sub_00d6d9d0(void); };

// @baa 0x00d6d9d0
int C_00d6d9d0::sub_00d6d9d0(void) { return *(int*)((char*)this + 20); }

struct C_00d6d9e0 { int sub_00d6d9e0(void); };

// @baa 0x00d6d9e0
int C_00d6d9e0::sub_00d6d9e0(void) { return *(int*)((char*)this + 20); }

struct C_00d6d9f0 { int sub_00d6d9f0(void); };

// @baa 0x00d6d9f0
int C_00d6d9f0::sub_00d6d9f0(void) { return *(int*)((char*)this + 20); }

struct C_00d6da00 { int sub_00d6da00(void); };

// @baa 0x00d6da00
int C_00d6da00::sub_00d6da00(void) { return *(int*)((char*)this + 20); }

struct C_00d6da10 { int a, b; C_00d6da10(int, int); };

// @baa 0x00d6da10
C_00d6da10::C_00d6da10(int x, int y) : a(x), b(y) {}

struct C_00d6da30 {
    int sub_00d6da30();
};

// @baa 0x00d6da30
int C_00d6da30::sub_00d6da30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6da50 {
    int sub_00d6da50();
};

// @baa 0x00d6da50
int C_00d6da50::sub_00d6da50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6da70 {
    int sub_00d6da70();
};

// @baa 0x00d6da70
int C_00d6da70::sub_00d6da70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6da90 {
    int sub_00d6da90();
};

// @baa 0x00d6da90
int C_00d6da90::sub_00d6da90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dab0 {
    int sub_00d6dab0();
};

// @baa 0x00d6dab0
int C_00d6dab0::sub_00d6dab0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dad0 {
    int sub_00d6dad0();
};

// @baa 0x00d6dad0
int C_00d6dad0::sub_00d6dad0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6daf0 {
    int sub_00d6daf0(int);
};

// @baa 0x00d6daf0
int C_00d6daf0::sub_00d6daf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d6db10 {
    int sub_00d6db10(int);
};

// @baa 0x00d6db10
int C_00d6db10::sub_00d6db10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d6db20 { int sub_00d6db20(void); };

// @baa 0x00d6db20
int C_00d6db20::sub_00d6db20(void) { return *(int*)((char*)this + 0); }

struct C_00d6db30 { int sub_00d6db30(void); };

// @baa 0x00d6db30
int C_00d6db30::sub_00d6db30(void) { return *(int*)((char*)this + 0); }

struct C_00d6db40 {
    int sub_00d6db40(int);
};

// @baa 0x00d6db40
int C_00d6db40::sub_00d6db40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d6db50 { int sub_00d6db50(void); };

// @baa 0x00d6db50
int C_00d6db50::sub_00d6db50(void) { return *(int*)((char*)this + 20); }

struct C_00d6db60 { int sub_00d6db60(void); };

// @baa 0x00d6db60
int C_00d6db60::sub_00d6db60(void) { return *(int*)((char*)this + 20); }

struct C_00d6db70 { int sub_00d6db70(void); };

// @baa 0x00d6db70
int C_00d6db70::sub_00d6db70(void) { return *(int*)((char*)this + 20); }

struct C_00d6db80 { int sub_00d6db80(void); };

// @baa 0x00d6db80
int C_00d6db80::sub_00d6db80(void) { return *(int*)((char*)this + 20); }

struct C_00d6db90 { int sub_00d6db90(void); };

// @baa 0x00d6db90
int C_00d6db90::sub_00d6db90(void) { return *(int*)((char*)this + 20); }

struct C_00d6dba0 { int sub_00d6dba0(void); };

// @baa 0x00d6dba0
int C_00d6dba0::sub_00d6dba0(void) { return *(int*)((char*)this + 20); }

struct C_00d6dbb0 { int sub_00d6dbb0(void); };

// @baa 0x00d6dbb0
int C_00d6dbb0::sub_00d6dbb0(void) { return *(int*)((char*)this + 20); }

struct C_00d6dbc0 {
    int sub_00d6dbc0();
};

// @baa 0x00d6dbc0
int C_00d6dbc0::sub_00d6dbc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dbe0 { int sub_00d6dbe0(void); };

// @baa 0x00d6dbe0
int C_00d6dbe0::sub_00d6dbe0(void) { return *(int*)((char*)this + 20); }

struct C_00d6dbf0 {
    int sub_00d6dbf0();
};

// @baa 0x00d6dbf0
int C_00d6dbf0::sub_00d6dbf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dc10 { int sub_00d6dc10(void); };

// @baa 0x00d6dc10
int C_00d6dc10::sub_00d6dc10(void) { return *(int*)((char*)this + 20); }

struct C_00d6dc20 {
    int sub_00d6dc20();
};

// @baa 0x00d6dc20
int C_00d6dc20::sub_00d6dc20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dc40 { int sub_00d6dc40(void); };

// @baa 0x00d6dc40
int C_00d6dc40::sub_00d6dc40(void) { return *(int*)((char*)this + 20); }

struct C_00d6dc50 {
    int sub_00d6dc50();
};

// @baa 0x00d6dc50
int C_00d6dc50::sub_00d6dc50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dc70 { int sub_00d6dc70(void); };

// @baa 0x00d6dc70
int C_00d6dc70::sub_00d6dc70(void) { return *(int*)((char*)this + 20); }

struct C_00d6dc80 {
    int sub_00d6dc80();
};

// @baa 0x00d6dc80
int C_00d6dc80::sub_00d6dc80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dca0 { int sub_00d6dca0(void); };

// @baa 0x00d6dca0
int C_00d6dca0::sub_00d6dca0(void) { return *(int*)((char*)this + 20); }

struct C_00d6dcb0 {
    int sub_00d6dcb0();
};

// @baa 0x00d6dcb0
int C_00d6dcb0::sub_00d6dcb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6dcd0 { int sub_00d6dcd0(void); };

// @baa 0x00d6dcd0
int C_00d6dcd0::sub_00d6dcd0(void) { return *(int*)((char*)this + 0); }

struct C_00d6dce0 {
    int sub_00d6dce0(int);
};

// @baa 0x00d6dce0
int C_00d6dce0::sub_00d6dce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d6dcf0 { int a, b, c; C_00d6dcf0(); };

// @baa 0x00d6dcf0
C_00d6dcf0::C_00d6dcf0() : a(0), b(0), c(0) {}

struct C_00d6dd00 { int sub_00d6dd00(void); };

// @baa 0x00d6dd00
int C_00d6dd00::sub_00d6dd00(void) { return *(int*)((char*)this + 0); }

struct C_00d6dd10 { int sub_00d6dd10(void); };

// @baa 0x00d6dd10
int C_00d6dd10::sub_00d6dd10(void) { return *(int*)((char*)this + 0); }

struct C_00d6dd20 {
    int sub_00d6dd20(int);
};

// @baa 0x00d6dd20
int C_00d6dd20::sub_00d6dd20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d6dd30 { int sub_00d6dd30(void); };

// @baa 0x00d6dd30
int C_00d6dd30::sub_00d6dd30(void) { return *(int*)((char*)this + 0); }

int sub_005c80f0(void);
int sub_005cb6d0(...);
int sub_005eb8e0(...);
extern undefined4 g_026a1c70;
// @baa 0x00d6dd40
void sub_00d6dd40(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026a1c70 == 0) {
    g_026a1c70 = sub_005cb6d0(L"Core");
    sub_005c80f0();
  }
  sub_005eb8e0(g_026a1c70,param_1,param_2,param_3,param_4,param_5);
  return;
}

void sub_00572b30();
// @baa 0x00d6dd90
void sub_00d6dd90(void) { sub_00572b30(); }

int sub_005eae70(...);
int sub_00dca3b0(void);
int sub_00dd8ef0(...);
extern undefined4 g_026c5d94;
// @baa 0x00d6dda0
void sub_00d6dda0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5d94 == 0) {
    g_026c5d94 = sub_00dd8ef0(L"Engine");
    sub_00dca3b0();
  }
  sub_005eae70(g_026c5d94,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

// @baa 0x00d6ddf0
void sub_00d6ddf0(void) { sub_00572b30(); }

// @baa 0x00d6de00
void sub_00d6de00(void) { sub_00572b30(); }

int sub_00627f00(...);
// @baa 0x00d6de10
void sub_00d6de10(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_00d6de50 { int a, b; C_00d6de50(const C_00d6de50 &); };

// @baa 0x00d6de50
C_00d6de50::C_00d6de50(const C_00d6de50 &o) : a(o.a), b(o.b) {}

struct C_00d6dea0 { int a, b; C_00d6dea0(const C_00d6dea0 &); };

// @baa 0x00d6dea0
C_00d6dea0::C_00d6dea0(const C_00d6dea0 &o) : a(o.a), b(o.b) {}

struct C_00d6dec0 { int a, b; C_00d6dec0(const C_00d6dec0 &); };

// @baa 0x00d6dec0
C_00d6dec0::C_00d6dec0(const C_00d6dec0 &o) : a(o.a), b(o.b) {}

struct C_00d6df50 {
    int sub_00d6df50();
};

// @baa 0x00d6df50
int C_00d6df50::sub_00d6df50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d6df70 { int a, b; C_00d6df70(int, int); };

// @baa 0x00d6df70
C_00d6df70::C_00d6df70(int x, int y) : a(x), b(y) {}

// @baa 0x00d6df90
int sub_00d6df90(int a0) { return *(int*)a0; }

// @baa 0x00d6dff0
undefined4 sub_00d6dff0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00d6e030 {
    void sub_00d6e030(int *);
};

// @baa 0x00d6e030
void C_00d6e030::sub_00d6e030(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00d6e040 {
    int sub_00d6e040(int);
};

// @baa 0x00d6e040
int C_00d6e040::sub_00d6e040(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d6e050 { int sub_00d6e050(void); };

// @baa 0x00d6e050
int C_00d6e050::sub_00d6e050(void) { return *(int*)((char*)this + 20); }

struct C_00d6e060 {
    int sub_00d6e060();
};

// @baa 0x00d6e060
int C_00d6e060::sub_00d6e060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00d6ece0
int sub_00d6ece0(void) { return 1690; }

void sub_006efb40();
// @baa 0x00d6ecf0
void sub_00d6ecf0(void) { sub_006efb40(); }

struct C_00d6ed00 {
    int sub_00d6ed00();
};

// @baa 0x00d6ed00
int C_00d6ed00::sub_00d6ed00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

extern char g_01fb3844[];
struct C_00d6ee10 { void sub_00d6ee10(void); };

// @baa 0x00d6ee10
void C_00d6ee10::sub_00d6ee10(void) { *(int*)((char*)this + 0) = (int)g_01fb3844; }

struct C_00d6ee20 {
    BYTE sub_00d6ee20();
};

// @baa 0x00d6ee20
BYTE C_00d6ee20::sub_00d6ee20(void)
{
    return BYTE(*(DWORD *)(this + 0x40) != 0);
}

struct C_00d6ee30 {
    undefined4 * sub_00d6ee30(byte);
};

// @baa 0x00d6ee30
undefined4 * C_00d6ee30::sub_00d6ee30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fb3844);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020b536c[];
struct C_00d6ee50 { C_00d6ee50* sub_00d6ee50(void); };

// @baa 0x00d6ee50
C_00d6ee50* C_00d6ee50::sub_00d6ee50(void) { *(int*)((char*)this + 0) = (int)g_020b536c; return this; }

// @baa 0x00d6ee90
undefined1 sub_00d6ee90(undefined1 param_1)
{
  return param_1;
}

// @baa 0x00d6eea0
void sub_00d6eea0(void) {  }

// @baa 0x00d6eeb0
int sub_00d6eeb0(void) { return 1; }

extern char g_01fc07a8[];
struct C_00d6eee0 { void sub_00d6eee0(void); };

// @baa 0x00d6eee0
void C_00d6eee0::sub_00d6eee0(void) { *(int*)((char*)this + 0) = (int)g_01fc07a8; }
