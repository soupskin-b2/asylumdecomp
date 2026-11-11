// MaterialInstanceConstantEditor.cpp (part 1 of 6): 215 functions
// Placed here by: neighbours 183, class 19, callers 11, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00ddcdc0(void);
extern undefined4 g_026d9b48;
extern undefined4 g_026d9b4c;
extern undefined4 g_026d9b50;
// @baa 0x013dcd60
undefined * sub_013dcd60(void)
{
  if ((g_026d9b50 & 1) == 0) {
    g_026d9b50 = g_026d9b50 | 1;
    g_026d9b48 = sub_00ddcdc0();
    g_026d9b4c = (undefined4)(L"HUIDockHandleHitProxy");
  }
  return (undefined *)(&g_026d9b48);
}

// @baa 0x013dcd90
undefined * sub_013dcd90(void)
{
  if ((g_026d9b50 & 1) == 0) {
    g_026d9b50 = g_026d9b50 | 1;
    g_026d9b48 = sub_00ddcdc0();
    g_026d9b4c = (undefined4)(L"HUIDockHandleHitProxy");
  }
  return (undefined *)(&g_026d9b48);
}

void sub_00c38ac0();
// @baa 0x013dcdc0
void sub_013dcdc0(void) { sub_00c38ac0(); }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_02275460;
// @baa 0x013dcdd0
undefined4 * UUnrealEdEngine::sub_013dcdd0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_3;
  *param_1 = (undefined4)(&g_02275460);
  return param_1;
}

extern undefined4 g_026d9b54;
extern undefined4 g_026d9b58;
extern undefined4 g_026d9b5c;
// @baa 0x013dce00
undefined * sub_013dce00(void)
{
  if ((g_026d9b5c & 1) == 0) {
    g_026d9b5c = g_026d9b5c | 1;
    g_026d9b54 = sub_00ddcdc0();
    g_026d9b58 = (undefined4)(L"HUIFocusChainHandleHitProxy");
  }
  return (undefined *)(&g_026d9b54);
}

struct C {
    undefined4 * sub_013dd740(undefined4, undefined4, undefined4);
    int sub_01408b00(int);
};

extern undefined * g_02274e3c;
// @baa 0x013dd740
undefined4 * C::sub_013dd740(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_01408b00(param_2);
  *param_1 = (undefined4)(&g_02274e3c);
  param_1[0x1c] = param_3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 4;
  param_1[0x22] = param_4;
  return param_1;
}

struct C_013dd780 {
    undefined4 * sub_013dd780(byte);
};

int sub_0053dfa0(...);
int sub_014067f0(void);
// @baa 0x013dd780
undefined4 * C_013dd780::sub_013dd780(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02274e3c);
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  sub_014067f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013dd9e0 {
    undefined4 * sub_013dd9e0(undefined4, undefined4, undefined4);
    int sub_01408b00(int);
};

extern undefined * g_02274e68;
// @baa 0x013dd9e0
undefined4 * C_013dd9e0::sub_013dd9e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_013dd9e0 *)(this))->sub_01408b00(param_2);
  *param_1 = (undefined4)(&g_02274e68);
  param_1[0x1c] = param_3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 4;
  param_1[0x23] = param_4;
  return param_1;
}

// @baa 0x01406180
int sub_01406180(void) { return 0; }

// @baa 0x01406190
int __stdcall sub_01406190(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

// @baa 0x014061a0
int __stdcall sub_014061a0(int a0, int a1) { return 0; }

// @baa 0x014061b0
void __stdcall sub_014061b0(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x014061c0
void __stdcall sub_014061c0(int a0, int a1, int a2) {  }

extern char g_025e9080[];
// @baa 0x014061d0
int sub_014061d0(void) { return (int)g_025e9080; }

extern char g_026da76c[];
// @baa 0x014061e0
int sub_014061e0(void) { return (int)g_026da76c; }

extern char g_025e9088[];
// @baa 0x01406360
int sub_01406360(void) { return (int)g_025e9088; }

extern char g_026da824[];
// @baa 0x01406370
int sub_01406370(void) { return (int)g_026da824; }

// @baa 0x01406510
void sub_01406510(void) {  }

// @baa 0x01406520
void sub_01406520(void) {  }

extern char g_022743f4[];
struct C_01406600 { void sub_01406600(void); };

// @baa 0x01406600
void C_01406600::sub_01406600(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_01406740 {
    void sub_01406740(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01406740
void C_01406740::sub_01406740(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  return;
}

struct C_01406760 { void sub_01406760(int a0); };

// @baa 0x01406760
void C_01406760::sub_01406760(int a0) { *(int*)((char*)this + 80) = a0; }

struct C_014067f0 {
    void sub_014067f0();
};

extern undefined * g_021320b4;
// @baa 0x014067f0
void C_014067f0::sub_014067f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  return;
}

struct C_01406800 {
    void sub_01406800();
};

// @baa 0x01406800
void C_01406800::sub_01406800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  return;
}

struct C_01406810 {
    void sub_01406810();
};

// @baa 0x01406810
void C_01406810::sub_01406810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  return;
}

// @baa 0x01406840
int sub_01406840(int a0, int a1) { return a1; }

struct C_01406850 {
    void sub_01406850();
    int sub_005c7f40();
};

extern undefined * g_0227edd8;
// @baa 0x01406850
void C_01406850::sub_01406850(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_0227edd8);
  ((C_01406850 *)((*(char **)((char *)this + 4))))->sub_005c7f40();
  param_1[1] = 0;
  return;
}

// @baa 0x01406870
void sub_01406870(void) {  }

// @baa 0x01406880
void __stdcall sub_01406880(int a0) {  }

// @baa 0x01406890
void __stdcall sub_01406890(int a0) {  }

// @baa 0x014068a0
int sub_014068a0(void) { return 1; }

// @baa 0x014068b0
void __stdcall sub_014068b0(int a0, int a1) {  }

// @baa 0x014068c0
void __stdcall sub_014068c0(int a0) {  }

// @baa 0x014068d0
void __stdcall sub_014068d0(int a0, int a1, int a2) {  }

// @baa 0x014068e0
void __stdcall sub_014068e0(int a0) {  }

// @baa 0x014068f0
void __stdcall sub_014068f0(int a0, int a1) {  }

// @baa 0x01406900
void sub_01406900(void) {  }

// @baa 0x01406910
void sub_01406910(void) {  }

struct ObjB {
    int sub_00d3b400();
};

struct ObjA {
    int f0;
    ObjB* p4;
    int sub_01406920();
};

// @baa 0x01406920
int ObjA::sub_01406920() { return p4->sub_00d3b400(); }

struct ObjB_01406930 {
    int sub_00d35790();
};

struct ObjA_01406930 {
    int f0;
    ObjB_01406930* p4;
    int sub_01406930();
};

// @baa 0x01406930
int ObjA_01406930::sub_01406930() { return p4->sub_00d35790(); }

struct ObjB_01406940 {
    int sub_00d27ba0();
};

struct ObjA_01406940 {
    int f0;
    ObjB_01406940* p4;
    int sub_01406940();
};

// @baa 0x01406940
int ObjA_01406940::sub_01406940() { return p4->sub_00d27ba0(); }

// @baa 0x01406950
int sub_01406950(void) { return 1; }

struct X {
    void sub_00cc65f0();
};

struct C_01406990 {
    char _0[8];
    X* x;
    void sub_01406990();
};

// @baa 0x01406990
void C_01406990::sub_01406990() {
    x->sub_00cc65f0();
}

extern char g_026da8b8[];
// @baa 0x01406a30
int sub_01406a30(void) { return (int)g_026da8b8; }

extern char g_025e9090[];
// @baa 0x01406a40
int sub_01406a40(void) { return (int)g_025e9090; }

extern char g_026da8d0[];
// @baa 0x01406a50
int sub_01406a50(void) { return (int)g_026da8d0; }

struct C_01406ad0 {
    void sub_01406ad0();
};

// @baa 0x01406ad0
void C_01406ad0::sub_01406ad0(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return;
}

extern char g_025e9098[];
// @baa 0x01406bf0
int sub_01406bf0(void) { return (int)g_025e9098; }

extern char g_026da8f4[];
// @baa 0x01406c00
int sub_01406c00(void) { return (int)g_026da8f4; }

extern char g_02279b20[];
// @baa 0x01406c10
int sub_01406c10(void) { return (int)g_02279b20; }

extern char g_026da934[];
// @baa 0x01406c20
int sub_01406c20(void) { return (int)g_026da934; }

// @baa 0x01406c60
int __stdcall sub_01406c60(int a0, int a1) { return 1; }

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01406ce0;
};

struct C_01406ce0 {
    void sub_01406ce0(wxUpdateUIEvent *);
};

// @baa 0x01406ce0
void C_01406ce0::sub_01406ce0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x1b4) == 4);
  return;
}

struct C_01406d80 {
    void sub_01406d80(uint);
};

// @baa 0x01406d80
void C_01406d80::sub_01406d80(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x334) =
       *(uint *)(param_1 + 0x334) ^ (*(uint *)(param_1 + 0x334) ^ param_2) & 1;
  return;
}

// @baa 0x01406e70
void __stdcall sub_01406e70(int a0) {  }

extern char g_026daa7c[];
// @baa 0x01406f20
int sub_01406f20(void) { return (int)g_026daa7c; }

extern char g_0227b840[];
// @baa 0x01406f30
int sub_01406f30(void) { return (int)g_0227b840; }

extern char g_026daa94[];
// @baa 0x01406f40
int sub_01406f40(void) { return (int)g_026daa94; }

// @baa 0x01406f50
int sub_01406f50(void) { return 1; }

extern char g_026daad4[];
// @baa 0x01407090
int sub_01407090(void) { return (int)g_026daad4; }

extern char g_0227c130[];
// @baa 0x014070a0
int sub_014070a0(void) { return (int)g_0227c130; }

extern char g_026daaec[];
// @baa 0x014070b0
int sub_014070b0(void) { return (int)g_026daaec; }

extern char g_0227c770[];
// @baa 0x014070c0
int sub_014070c0(void) { return (int)g_0227c770; }

// @baa 0x014070d0
int sub_014070d0(void) { return 1; }

// @baa 0x01407100
int sub_01407100(int param_1)
{
  return param_1 + 0x78;
}

// @baa 0x01407110
int sub_01407110(int param_1)
{
  return param_1 + 0x84;
}

// @baa 0x01407120
int sub_01407120(int param_1)
{
  return param_1 + 0x90;
}

// @baa 0x01407130
int sub_01407130(int param_1)
{
  return param_1 + 0x9c;
}

extern char g_026dab80[];
// @baa 0x01407140
int sub_01407140(void) { return (int)g_026dab80; }

extern char g_0227ca84[];
// @baa 0x01407150
int sub_01407150(void) { return (int)g_0227ca84; }

extern char g_026dab98[];
// @baa 0x01407160
int sub_01407160(void) { return (int)g_026dab98; }

// @baa 0x01407170
int sub_01407170(void) { return 1; }

extern char g_026dabd8[];
// @baa 0x014072b0
int sub_014072b0(void) { return (int)g_026dabd8; }

extern char g_0227d37c[];
// @baa 0x014072c0
int sub_014072c0(void) { return (int)g_0227d37c; }

extern char g_026dabf0[];
// @baa 0x014072d0
int sub_014072d0(void) { return (int)g_026dabf0; }

extern char g_0227d948[];
// @baa 0x014072e0
int sub_014072e0(void) { return (int)g_0227d948; }

// @baa 0x014072f0
int sub_014072f0(void) { return 1; }

struct C_01407320 { int sub_01407320(void); };

// @baa 0x01407320
int C_01407320::sub_01407320(void) { return *(int*)((char*)this + 4); }

struct C_01407330 { int sub_01407330(void); };

// @baa 0x01407330
int C_01407330::sub_01407330(void) { return *(int*)((char*)this + 4); }

struct C_01407340 { int sub_01407340(void); };

// @baa 0x01407340
int C_01407340::sub_01407340(void) { return *(int*)((char*)this + 4); }

struct C_01407350 { int sub_01407350(void); };

// @baa 0x01407350
int C_01407350::sub_01407350(void) { return *(int*)((char*)this + 4); }

struct C_01407360 { int sub_01407360(void); };

// @baa 0x01407360
int C_01407360::sub_01407360(void) { return *(int*)((char*)this + 4); }

struct C_01407370 { int sub_01407370(void); };

// @baa 0x01407370
int C_01407370::sub_01407370(void) { return *(int*)((char*)this + 4); }

struct C_01407380 { int sub_01407380(void); };

// @baa 0x01407380
int C_01407380::sub_01407380(void) { return *(int*)((char*)this + 4); }

struct C_01407390 { int sub_01407390(void); };

// @baa 0x01407390
int C_01407390::sub_01407390(void) { return *(int*)((char*)this + 4); }

struct C_014073a0 { int sub_014073a0(void); };

// @baa 0x014073a0
int C_014073a0::sub_014073a0(void) { return *(int*)((char*)this + 4); }

struct C_014073b0 { int sub_014073b0(void); };

// @baa 0x014073b0
int C_014073b0::sub_014073b0(void) { return *(int*)((char*)this + 4); }

struct C_014073c0 { int sub_014073c0(void); };

// @baa 0x014073c0
int C_014073c0::sub_014073c0(void) { return *(int*)((char*)this + 4); }

struct C_014073d0 { int sub_014073d0(void); };

// @baa 0x014073d0
int C_014073d0::sub_014073d0(void) { return *(int*)((char*)this + 4); }

struct C_014073e0 { int sub_014073e0(void); };

// @baa 0x014073e0
int C_014073e0::sub_014073e0(void) { return *(int*)((char*)this + 4); }

struct C_014073f0 { int sub_014073f0(void); };

// @baa 0x014073f0
int C_014073f0::sub_014073f0(void) { return *(int*)((char*)this + 4); }

struct C_01407400 { int sub_01407400(void); };

// @baa 0x01407400
int C_01407400::sub_01407400(void) { return *(int*)((char*)this + 4); }

struct V_01407590 {
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
    virtual void v142();
    virtual void v143();
    virtual void v144();
    virtual void v145();
    virtual void v146();
    virtual void v147();
    virtual void v148();
    virtual void v149();
    virtual void v150();
    virtual void v151();
    virtual void v152();
    virtual void v153();
    virtual void v154();
    virtual void v155();
    virtual void v156();
    virtual void v157();
    virtual void v158();
    virtual void v159();
    virtual void v160();
    virtual void v161();
    virtual void v162();
    virtual void v163();
    virtual void v164();
    virtual void v165();
    virtual void v166();
    virtual void v167();
    virtual void v168();
    virtual void v169();
    virtual void v170();
    virtual void v171();
    virtual void v172();
    virtual void v173();
    virtual void v174();
    virtual void v175();
    virtual void v176();
    virtual void v177();
    virtual void v178();
    virtual void v179();
    virtual void v180();
    virtual void v181();
    virtual void v182();
    virtual void v183();
    virtual void v184();
    virtual void v185();
    virtual void v186();
    virtual void v187();
    virtual void v188();
    virtual void v189();
    virtual void v190();
    virtual void v191();
    virtual void v192();
    virtual void v193();
    virtual void v194();
    virtual void v195();
    virtual void v196();
    virtual void v197();
    virtual void v198();
    virtual void v199();
    virtual void v200();
    virtual void v201();
    virtual void v202();
    virtual void v203();
    virtual void v204();
    virtual void v205();
    virtual void v206();
    virtual void v207();
    virtual void v208();
    virtual void v209();
    virtual void v210();
    virtual void v211();
    virtual void v212();
    virtual void v213();
    virtual void v214();
    virtual void v215();
    virtual void v216();
    virtual void g();
};

// @baa 0x01407590
void (V_01407590::*sub_01407590)() = &V_01407590::g;

// @baa 0x014075c0
float10 sub_014075c0(double param_1)
{
  return (float10)param_1;
}

struct C_014075e0 {
    float10 sub_014075e0();
};

// @baa 0x014075e0
float10 C_014075e0::sub_014075e0(void)
{
    float * param_1 = (float *)this;

  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1];
}

// @baa 0x014075f0
undefined2 sub_014075f0(void)
{
  return 0x69;
}

// @baa 0x01407600
undefined2 sub_01407600(void)
{
  return 0x66;
}

// @baa 0x01407610
undefined2 sub_01407610(void)
{
  return 0x73;
}

// @baa 0x01407690
int sub_01407690(int a0, int a1) { return a1; }

// @baa 0x014076a0
int sub_014076a0(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014076b0
void sub_014076b0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x014076d0
int sub_014076d0(int a0, int a1) { return a1; }

// @baa 0x014076e0
void sub_014076e0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01407700 { C_01407700* sub_01407700(void); };

// @baa 0x01407700
C_01407700* C_01407700::sub_01407700(void) { *(int*)((char*)this + 12) = 0; return this; }

// @baa 0x014077f0
int sub_014077f0(int a0, int a1) { return a1; }

// @baa 0x01407800
void sub_01407800(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x01407820
int sub_01407820(int a0, int a1) { return a1; }

// @baa 0x01407830
void sub_01407830(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01407850 { C_01407850* sub_01407850(int a0); };

// @baa 0x01407850
C_01407850* C_01407850::sub_01407850(int a0) { return this; }

struct C_01407860 { C_01407860* sub_01407860(int a0); };

// @baa 0x01407860
C_01407860* C_01407860::sub_01407860(int a0) { return this; }

struct C_01407870 { C_01407870* sub_01407870(int a0); };

// @baa 0x01407870
C_01407870* C_01407870::sub_01407870(int a0) { return this; }

struct C_01407880 { C_01407880* sub_01407880(int a0); };

// @baa 0x01407880
C_01407880* C_01407880::sub_01407880(int a0) { return this; }

struct C_01407890 { C_01407890* sub_01407890(int a0); };

// @baa 0x01407890
C_01407890* C_01407890::sub_01407890(int a0) { return this; }

struct C_014078a0 { C_014078a0* sub_014078a0(int a0); };

// @baa 0x014078a0
C_014078a0* C_014078a0::sub_014078a0(int a0) { return this; }

struct C_014078b0 { C_014078b0* sub_014078b0(int a0); };

// @baa 0x014078b0
C_014078b0* C_014078b0::sub_014078b0(int a0) { return this; }

struct C_014078c0 { C_014078c0* sub_014078c0(int a0); };

// @baa 0x014078c0
C_014078c0* C_014078c0::sub_014078c0(int a0) { return this; }

struct C_014078d0 { C_014078d0* sub_014078d0(int a0); };

// @baa 0x014078d0
C_014078d0* C_014078d0::sub_014078d0(int a0) { return this; }

struct C_014078e0 { C_014078e0* sub_014078e0(int a0); };

// @baa 0x014078e0
C_014078e0* C_014078e0::sub_014078e0(int a0) { return this; }

struct C_014078f0 { C_014078f0* sub_014078f0(int a0); };

// @baa 0x014078f0
C_014078f0* C_014078f0::sub_014078f0(int a0) { return this; }

struct C_01407900 { C_01407900* sub_01407900(int a0); };

// @baa 0x01407900
C_01407900* C_01407900::sub_01407900(int a0) { return this; }

struct C_01407910 { int sub_01407910(void); };

// @baa 0x01407910
int C_01407910::sub_01407910(void) { return *(int*)((char*)this + 0); }

struct C_01407920 { int sub_01407920(void); };

// @baa 0x01407920
int C_01407920::sub_01407920(void) { return *(int*)((char*)this + 0); }

struct C_01407930 { int sub_01407930(void); };

// @baa 0x01407930
int C_01407930::sub_01407930(void) { return *(int*)((char*)this + 0); }

struct C_01407940 { int sub_01407940(void); };

// @baa 0x01407940
int C_01407940::sub_01407940(void) { return *(int*)((char*)this + 0); }

struct C_01407950 { int sub_01407950(void); };

// @baa 0x01407950
int C_01407950::sub_01407950(void) { return *(int*)((char*)this + 0); }

struct C_01407960 { int sub_01407960(void); };

// @baa 0x01407960
int C_01407960::sub_01407960(void) { return *(int*)((char*)this + 0); }

struct C_01407970 { int sub_01407970(void); };

// @baa 0x01407970
int C_01407970::sub_01407970(void) { return *(int*)((char*)this + 0); }

struct C_01407980 { int sub_01407980(void); };

// @baa 0x01407980
int C_01407980::sub_01407980(void) { return *(int*)((char*)this + 0); }

struct C_01407990 { int sub_01407990(void); };

// @baa 0x01407990
int C_01407990::sub_01407990(void) { return *(int*)((char*)this + 0); }

struct C_014079a0 { int sub_014079a0(void); };

// @baa 0x014079a0
int C_014079a0::sub_014079a0(void) { return *(int*)((char*)this + 0); }

struct C_014079b0 { int sub_014079b0(void); };

// @baa 0x014079b0
int C_014079b0::sub_014079b0(void) { return *(int*)((char*)this + 0); }

struct C_014079c0 { int sub_014079c0(void); };

// @baa 0x014079c0
int C_014079c0::sub_014079c0(void) { return *(int*)((char*)this + 0); }

struct C_014079d0 { int sub_014079d0(void); };

// @baa 0x014079d0
int C_014079d0::sub_014079d0(void) { return *(int*)((char*)this + 0); }

struct C_014079e0 { int sub_014079e0(void); };

// @baa 0x014079e0
int C_014079e0::sub_014079e0(void) { return *(int*)((char*)this + 0); }

struct C_014079f0 { int sub_014079f0(void); };

// @baa 0x014079f0
int C_014079f0::sub_014079f0(void) { return *(int*)((char*)this + 0); }

struct C_01407a00 { int sub_01407a00(void); };

// @baa 0x01407a00
int C_01407a00::sub_01407a00(void) { return *(int*)((char*)this + 0); }

struct C_01407a10 { int sub_01407a10(void); };

// @baa 0x01407a10
int C_01407a10::sub_01407a10(void) { return *(int*)((char*)this + 0); }

struct C_01407a20 { int sub_01407a20(void); };

// @baa 0x01407a20
int C_01407a20::sub_01407a20(void) { return *(int*)((char*)this + 0); }

struct C_01407a30 { int sub_01407a30(void); };

// @baa 0x01407a30
int C_01407a30::sub_01407a30(void) { return *(int*)((char*)this + 0); }

struct C_01407a40 { int sub_01407a40(void); };

// @baa 0x01407a40
int C_01407a40::sub_01407a40(void) { return *(int*)((char*)this + 0); }

struct C_01407a50 { int sub_01407a50(void); };

// @baa 0x01407a50
int C_01407a50::sub_01407a50(void) { return *(int*)((char*)this + 0); }

struct C_01407a60 { int sub_01407a60(void); };

// @baa 0x01407a60
int C_01407a60::sub_01407a60(void) { return *(int*)((char*)this + 0); }

struct C_01407a70 { int sub_01407a70(void); };

// @baa 0x01407a70
int C_01407a70::sub_01407a70(void) { return *(int*)((char*)this + 0); }

struct C_01407a80 { int sub_01407a80(void); };

// @baa 0x01407a80
int C_01407a80::sub_01407a80(void) { return *(int*)((char*)this + 0); }

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026dac80;
extern undefined4 g_026dac84;
extern undefined4 g_026dac88;
// @baa 0x01407ad0
undefined * sub_01407ad0(void)
{
  if ((g_026dac88 & 1) == 0) {
    g_026dac88 = g_026dac88 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026dac80 = (undefined4)(&g_026af518);
    g_026dac84 = (undefined4)(L"HSelectionHandle");
  }
  return (undefined *)(&g_026dac80);
}

struct C_01407b80 {
    undefined4 * sub_01407b80(byte);
};

extern undefined * g_0227e858;
// @baa 0x01407b80
undefined4 * C_01407b80::sub_01407b80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0227e858);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_01407c30 { virtual void sub_01407c40(); char pad[4]; };

struct B_01407c30 { virtual void sub_01407c40(); };

struct C_01407c30 : A_01407c30, B_01407c30 { virtual void sub_01407c40(); C_01407c30(); };

C_01407c30::C_01407c30() {}

// @baa 0x01407c30
void C_01407c30::sub_01407c40() {}

struct C_01407c40 {
    undefined4 sub_01407c40(byte);
};

int sub_01407ba0(void);
// @baa 0x01407c40
undefined4 C_01407c40::sub_01407c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01407ba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01408230 {
    void sub_01408230(float *);
};

// @baa 0x01408230
void C_01408230::sub_01408230(float * param_2)
{
    int param_1 = (int)this;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - *param_2;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) - param_2[1];
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - param_2[2];
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - *param_2;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - param_2[1];
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - param_2[2];
  return;
}

// @baa 0x01408430
int __stdcall sub_01408430(int a0) { return 1; }

struct C_01408440 {
    undefined4 * sub_01408440(byte);
};

// @baa 0x01408440
undefined4 * C_01408440::sub_01408440(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014087c0 {
    undefined4 * sub_014087c0(byte);
};

// @baa 0x014087c0
undefined4 * C_014087c0::sub_014087c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01408b40 {
    undefined4 * sub_01408b40(byte);
};

// @baa 0x01408b40
undefined4 * C_01408b40::sub_01408b40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01408d20 {
    undefined4 * sub_01408d20(byte);
};

// @baa 0x01408d20
undefined4 * C_01408d20::sub_01408d20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01408e70 {
    undefined4 * sub_01408e70(byte);
};

// @baa 0x01408e70
undefined4 * C_01408e70::sub_01408e70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01408ea0 {
    void sub_01408ea0(undefined4, undefined4);
    int sub_014087f0(int, int);
};

int sub_00c97150(...);
// @baa 0x01408ea0
void C_01408ea0::sub_01408ea0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_01408ea0 *)(this))->sub_014087f0(param_2, param_3);
  iVar1 = sub_00c97150(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 8));
  *(uint *)(param_1 + 0x74) = (uint)(iVar1 == 1);
  *(undefined4 *)(param_1 + 0x70) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x330) + 0x50);
  return;
}

struct C_01409050 {
    void sub_01409050();
};

int sub_01408980(void);
// @baa 0x01409050
void C_01409050::sub_01409050(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x70) = 0;
  sub_01408980();
  return;
}

struct C_01409240 {
    void sub_01409240();
};

// @baa 0x01409240
void C_01409240::sub_01409240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  return;
}

struct C_01409250 {
    undefined4 * sub_01409250(byte);
};

// @baa 0x01409250
undefined4 * C_01409250::sub_01409250(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[0x1b] = 0;
  *param_1 = (undefined4)(&g_021320b4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x014094c0
IMPLEMENT_CLASS_AT(UObjectEditorViewportInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnObjectEditor.cpp", 11);

// @baa 0x014095d0
int UObjectEditorViewportInput::vf_000(void) { return 1; }

// @baa 0x014095e0
bool UObjectEditorViewportInput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_014097c0 {
    undefined4 * sub_014097c0(byte);
    int sub_005c7f40();
};

// @baa 0x014097c0
undefined4 * C_014097c0::sub_014097c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_0227edd8);
  ((C_014097c0 *)((*(char **)((char *)this + 4))))->sub_005c7f40();
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01409f30 {
    undefined4 sub_01409f30(byte);
};

int sub_01406a60(void);
// @baa 0x01409f30
undefined4 C_01409f30::sub_01409f30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01406a60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0140a0d0
IMPLEMENT_CLASS_AT(UFaceFXStudioSkelComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\FaceFXStudioSkeletalComponent.cpp", 67);

// @baa 0x0140a1e0
int UFaceFXStudioSkelComponent::vf_000(void) { return 1; }

// @baa 0x0140a1f0
bool UFaceFXStudioSkelComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0140a410 {
    undefined4 sub_0140a410();
};

// @baa 0x0140a410
undefined4 C_0140a410::sub_0140a410(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x18);
}

// @baa 0x0140a7c0
IMPLEMENT_CLASS_AT(UMaterialEditorMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\MaterialEditorPreviewScene.cpp", 198);

// @baa 0x0140a8d0
int UMaterialEditorMeshComponent::vf_000(void) { return 1; }

// @baa 0x0140a8e0
bool UMaterialEditorMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0140a920
IMPLEMENT_CLASS_AT(UMaterialEditorSkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\MaterialEditorPreviewScene.cpp", 232);

// @baa 0x0140aa30
int UMaterialEditorSkeletalMeshComponent::vf_000(void) { return 1; }

// @baa 0x0140aa40
bool UMaterialEditorSkeletalMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0140ab70
IMPLEMENT_CLASS_AT(UMaterialEditorInstanceConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\MaterialInstanceConstantEditor.cpp", 22);

// @baa 0x0140ac80
int UMaterialEditorInstanceConstant::vf_000(void) { return 1; }

// @baa 0x0140ac90
bool UMaterialEditorInstanceConstant::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01414270 { void* Data; int Num; int Max; void sub_01414270(); };

// @baa 0x01414270
void C_01414270::sub_01414270() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014142d0 { void* Data; int Num; int Max; void sub_014142d0(); };

// @baa 0x014142d0
void C_014142d0::sub_014142d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01414330 { void* Data; int Num; int Max; void sub_01414330(); };

// @baa 0x01414330
void C_01414330::sub_01414330() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01414390 { void* Data; int Num; int Max; void sub_01414390(); };

// @baa 0x01414390
void C_01414390::sub_01414390() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014143f0 { void* Data; int Num; int Max; void sub_014143f0(); };

// @baa 0x014143f0
void C_014143f0::sub_014143f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01414450 { void* Data; int Num; int Max; void sub_01414450(); };

// @baa 0x01414450
void C_01414450::sub_01414450() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct A_014191e0 { virtual void sub_01419270(); char pad[4]; };

struct B_014191e0 { virtual void sub_01419270(); };

struct C_014191e0 : A_014191e0, B_014191e0 { virtual void sub_01419270(); C_014191e0(); };

C_014191e0::C_014191e0() {}

// @baa 0x014191e0
void C_014191e0::sub_01419270() {}

struct C_01419270 {
    undefined4 sub_01419270(byte);
};

int sub_014191f0(void);
// @baa 0x01419270
undefined4 C_01419270::sub_01419270(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014191f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01419a60 {
    undefined4 * sub_01419a60(undefined4, undefined4);
    int sub_014189b0(int);
};

extern undefined4 g_02280ae8;
extern undefined * g_02280af0;
// @baa 0x01419a60
undefined4 * C_01419a60::sub_01419a60(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01419a60 *)(this))->sub_014189b0(param_2);
  *param_1 = (undefined4)(&g_02280af0);
  param_1[2] = (undefined4)(&g_02280ae8);
  param_1[0x17] = param_3;
  return param_1;
}

struct A_01419a90 { virtual void sub_01419ab0(); char pad[4]; };

struct B_01419a90 { virtual void sub_01419ab0(); };

struct C_01419a90 : A_01419a90, B_01419a90 { virtual void sub_01419ab0(); C_01419a90(); };

C_01419a90::C_01419a90() {}

// @baa 0x01419a90
void C_01419a90::sub_01419ab0() {}

struct C_0141a370 {
    undefined4 sub_0141a370(byte);
};

int sub_01414df0(void);
// @baa 0x0141a370
undefined4 C_0141a370::sub_0141a370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01414df0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_014176b0(void);
// @baa 0x0141b390
undefined4 UUnrealEdEngine::sub_0141b390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014176b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0141b940 { void sub_0141b810(); void sub_0141b940(int); };

// @baa 0x0141b940
void C_0141b940::sub_0141b940(int) { sub_0141b810(); }

int sub_01417f60(void);
// @baa 0x0141b950
undefined4 UUnrealEdEngine::sub_0141b950(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01417f60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0141bea0 { void sub_0141bd70(); void sub_0141bea0(int); };

// @baa 0x0141bea0
void C_0141bea0::sub_0141bea0(int) { sub_0141bd70(); }

struct A_0141c020 { virtual void sub_0141c030(); char pad[4]; };

struct B_0141c020 { virtual void sub_0141c030(); };

struct C_0141c020 : A_0141c020, B_0141c020 { virtual void sub_0141c030(); C_0141c020(); };

C_0141c020::C_0141c020() {}

// @baa 0x0141c020
void C_0141c020::sub_0141c030() {}

int sub_01407f00(void);
// @baa 0x0141c030
undefined4 UMaterialEditorInstanceConstant::sub_0141c030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01407f00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_0141c050 { virtual void sub_0141b970(); char pad[448]; };

struct B_0141c050 { virtual void sub_0141b970(); };

struct C_0141c050 : A_0141c050, B_0141c050 { virtual void sub_0141b970(); C_0141c050(); };

C_0141c050::C_0141c050() {}

// @baa 0x0141c050
void C_0141c050::sub_0141b970() {}

struct A_0141c060 { virtual void sub_0141b3b0(); char pad[448]; };

struct B_0141c060 { virtual void sub_0141b3b0(); };

struct C_0141c060 : A_0141c060, B_0141c060 { virtual void sub_0141b3b0(); C_0141c060(); };

C_0141c060::C_0141c060() {}

// @baa 0x0141c060
void C_0141c060::sub_0141b3b0() {}

int sub_009369a0(void);
extern undefined * g_02280be0;
// @baa 0x0141c070
undefined4 * USkeletalMeshComponent::sub_0141c070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009369a0();
  *param_1 = (undefined4)(&g_02280be0);
  return param_1;
}

// @baa 0x0141c090
// @baa 0x0141c0f0
extern undefined * g_02280e50;
// @baa 0x0141c120
undefined4 * USkeletalMeshComponent::sub_0141c120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009369a0();
  *param_1 = (undefined4)(&g_02280e50);
  return param_1;
}

// @baa 0x0141c140
// @baa 0x0141c1a0
int sub_005c7a20(void);
extern undefined * g_022810c0;
// @baa 0x0141c1d0
undefined4 * UObject::sub_0141c1d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022810c0);
  return param_1;
}

// @baa 0x0141c1f0
// @baa 0x0141c2b0
struct M_0141c2e0 { void sub_006f17f0(); };

struct C_0141c2e0 { char pad[52]; M_0141c2e0 m; void sub_0141c2e0(); };

// @baa 0x0141c2e0
void C_0141c2e0::sub_0141c2e0() { m.sub_006f17f0(); }

struct M_0141c2f0 { void sub_006c4cf0(); };

struct C_0141c2f0 { char pad[40]; M_0141c2f0 m; void sub_0141c2f0(); };

// @baa 0x0141c2f0
void C_0141c2f0::sub_0141c2f0() { m.sub_006c4cf0(); }

struct C_view_0141c400 {
    int sub_0141beb0(int);
};

extern undefined * g_022811cc;
extern undefined * g_022811d4;
// @baa 0x0141c400
undefined4 * UMaterialEditorInstanceConstant::sub_0141c400(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_0141c400 *)(this))->sub_0141beb0(param_2);
  *param_1 = (undefined4)(&g_022811d4);
  param_1[2] = (undefined4)(&g_022811cc);
  return param_1;
}

struct A_0141c420 { virtual void sub_0141c440(); char pad[4]; };

struct B_0141c420 { virtual void sub_0141c440(); };

struct C_0141c420 : A_0141c420, B_0141c420 { virtual void sub_0141c440(); C_0141c420(); };

C_0141c420::C_0141c420() {}

// @baa 0x0141c420
void C_0141c420::sub_0141c440() {}

// @baa 0x0141c460
// @baa 0x0141c480
// @baa 0x0141c4a0
// @baa 0x0141c6a0
struct C_view_0141f900 {
    int sub_0141e7f0();
    int sub_0141f590();
    int sub_006bbfd0();
};

int sub_006311e0(...);
extern undefined4 g_0227b748;
// @baa 0x0141f900
void UMaterialEditorInstanceConstant::sub_0141f900(int param_2)
{
    int param_1 = (int)this;
  if (param_2 == 0) {
    sub_006311e0("MaterialInterface",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\MaterialInstanceConstantEditor.cpp"
                 ,0x15e,&g_0227b748);
  }
  *(int *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x40);
  ((C_view_0141f900 *)(this))->sub_0141e7f0();
  ((C_view_0141f900 *)(this))->sub_0141f590();
  ((C_view_0141f900 *)((*(char **)((char *)this + 0x80))))->sub_006bbfd0();
  return;
}

struct C_014bf9e0 {
    void sub_014bf9e0(undefined4, undefined4);
};

int sub_014bdb90(void);
// @baa 0x014bf9e0
void C_014bf9e0::sub_014bf9e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_014bdb90();
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  return;
}
