// UnUIEditorWindows.cpp (part 1 of 4): 112 functions
// Placed here by: neighbours 78, callers 8, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00dad3b0(undefined4 *, int);
    int sub_00dab130(int, int);
};

// @baa 0x00dad3b0
int C::sub_00dad3b0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C *)(this))->sub_00dab130(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_0149b530 {
    undefined4 * sub_0149b530();
};

int sub_011bed00(void);
extern undefined4 g_022b1284;
extern undefined * g_022b1290;
// @baa 0x0149b530
undefined4 * C_0149b530::sub_0149b530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011bed00();
  *param_1 = (undefined4)(&g_022b1290);
  param_1[0x86] = (undefined4)(&g_022b1284);
  param_1[0x97] = 0;
  return param_1;
}

extern char g_022b62d4[];
// @baa 0x014c6460
int sub_014c6460(void) { return (int)g_022b62d4; }

// @baa 0x014c6470
int sub_014c6470(void) { return 0; }

extern char g_025e9408[];
// @baa 0x014c6520
int sub_014c6520(void) { return (int)g_025e9408; }

extern char g_026ddf0c[];
// @baa 0x014c6530
int sub_014c6530(void) { return (int)g_026ddf0c; }

struct V_014c6540 {
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
    virtual void g();
};

struct O_014c6540 { char pad[812]; V_014c6540* p; void sub_014c6540(); };

// @baa 0x014c6540
void O_014c6540::sub_014c6540() { p->g(); }

class wxEvent;
class wxUpdateUIEvent;
class wxEvent {
    public:
    public: __declspec(dllimport) int GetId() const;
    friend struct C_014c6550;
};

class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_014c6550;
};

struct C_014c6550 {
    void sub_014c6550(wxEvent *);
};

// @baa 0x014c6550
void C_014c6550::sub_014c6550(wxEvent * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x314) != 0) {
    iVar1 = ((wxEvent *)(param_2))->wxEvent::GetId();
    if (iVar1 == *(int *)(*(int *)(param_1 + 0x314) + 0x54)) {
      ((wxUpdateUIEvent *)((wxUpdateUIEvent *)param_2))->wxUpdateUIEvent::Check(true);
      return;
    }
    ((wxUpdateUIEvent *)((wxUpdateUIEvent *)param_2))->wxUpdateUIEvent::Check(false);
  }
  return;
}

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) int GetSelection() const;
    friend struct C_014c68a0;
};

struct C_014c68a0 {
    void sub_014c68a0(wxCommandEvent *);
    int sub_014a8580(int);
};

// @baa 0x014c68a0
void C_014c68a0::sub_014c68a0(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(int *)(param_1 + 0x324) != 0) {
    iVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::GetSelection();
    ((C_014c68a0 *)((*(char **)((char *)this + 0x324))))->sub_014a8580(iVar1);
  }
  return;
}

// @baa 0x014c6ea0
void __stdcall sub_014c6ea0(int a0) {  }

extern char g_022b7f90[];
// @baa 0x014c6eb0
int sub_014c6eb0(void) { return (int)g_022b7f90; }

extern char g_026de5cc[];
// @baa 0x014c6ec0
int sub_014c6ec0(void) { return (int)g_026de5cc; }

extern char g_022b7f98[];
// @baa 0x014c6f20
int sub_014c6f20(void) { return (int)g_022b7f98; }

extern char g_026de60c[];
// @baa 0x014c6f30
int sub_014c6f30(void) { return (int)g_026de60c; }

// @baa 0x014c6f90
int sub_014c6f90(void) { return 0; }

struct C_014c6fa0 {
    void sub_014c6fa0();
    int sub_0149b580();
};

// @baa 0x014c6fa0
void C_014c6fa0::sub_014c6fa0(void)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  ((C_014c6fa0 *)((*(char **)((char *)this + 0x160))))->sub_0149b580();
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
  return;
}

// @baa 0x014c7020
void __stdcall sub_014c7020(int a0) {  }

// @baa 0x014c7030
void __stdcall sub_014c7030(int a0) {  }

struct C_014c7040 { int sub_014c7040(void); };

// @baa 0x014c7040
int C_014c7040::sub_014c7040(void) { return *(int*)((char*)this + 4); }

struct C_014c7050 { int sub_014c7050(void); };

// @baa 0x014c7050
int C_014c7050::sub_014c7050(void) { return *(int*)((char*)this + 4); }

struct C_014c7060 { int sub_014c7060(void); };

// @baa 0x014c7060
int C_014c7060::sub_014c7060(void) { return *(int*)((char*)this + 4); }

int sub_005d88c0(...);
int sub_00dca3b0(void);
int sub_00dd8ef0(...);
extern undefined4 g_026c5d94;
// @baa 0x014c70e0
void sub_014c70e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c5d94 == 0) {
    g_026c5d94 = sub_00dd8ef0(L"Engine");
    sub_00dca3b0();
  }
  sub_005d88c0(g_026c5d94,param_1,param_2,param_3);
  return;
}

struct C_014c7120 {
    int Unk0;
    int Unk4;
    int sub_014c7120();
};

// @baa 0x014c7120
int C_014c7120::sub_014c7120()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_014c7130 { int sub_014c7130(void); };

// @baa 0x014c7130
int C_014c7130::sub_014c7130(void) { return *(int*)((char*)this + 4); }

struct C_014c7140 { int sub_014c7140(void); };

// @baa 0x014c7140
int C_014c7140::sub_014c7140(void) { return *(int*)((char*)this + 4); }

struct A_014c7150 { virtual void sub_014c97c0(); char pad[408]; };

struct B_014c7150 { virtual void sub_014c97c0(); };

struct C_014c7150 : A_014c7150, B_014c7150 { virtual void sub_014c97c0(); C_014c7150(); };

C_014c7150::C_014c7150() {}

// @baa 0x014c7150
void C_014c7150::sub_014c97c0() {}

struct V_014c7160 {
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
    virtual void v217();
    virtual void v218();
    virtual void v219();
    virtual void v220();
    virtual void v221();
    virtual void v222();
    virtual void v223();
    virtual void v224();
    virtual void g();
};

// @baa 0x014c7160
void (V_014c7160::*sub_014c7160)() = &V_014c7160::g;

struct A_014c7170 { virtual void sub_014c97c0(); char pad[420]; };

struct B_014c7170 { virtual void sub_014c97c0(); };

struct C_014c7170 : A_014c7170, B_014c7170 { virtual void sub_014c97c0(); C_014c7170(); };

C_014c7170::C_014c7170() {}

// @baa 0x014c7170
void C_014c7170::sub_014c97c0() {}

struct A_014c7180 { virtual void sub_014c97c0(); char pad[796]; };

struct B_014c7180 { virtual void sub_014c97c0(); };

struct C_014c7180 : A_014c7180, B_014c7180 { virtual void sub_014c97c0(); C_014c7180(); };

C_014c7180::C_014c7180() {}

// @baa 0x014c7180
void C_014c7180::sub_014c97c0() {}

struct A_014c7190 { virtual void sub_014c97c0(); char pad[424]; };

struct B_014c7190 { virtual void sub_014c97c0(); };

struct C_014c7190 : A_014c7190, B_014c7190 { virtual void sub_014c97c0(); C_014c7190(); };

C_014c7190::C_014c7190() {}

// @baa 0x014c7190
void C_014c7190::sub_014c97c0() {}

struct A_014c71a0 { virtual void sub_014c8a10(); char pad[352]; };

struct B_014c71a0 { virtual void sub_014c8a10(); };

struct C_014c71a0 : A_014c71a0, B_014c71a0 { virtual void sub_014c8a10(); C_014c71a0(); };

C_014c71a0::C_014c71a0() {}

// @baa 0x014c71a0
void C_014c71a0::sub_014c8a10() {}

struct C_014c71d0 { int sub_014c71d0(void); };

// @baa 0x014c71d0
int C_014c71d0::sub_014c71d0(void) { return *(int*)((char*)this + 0); }

// @baa 0x014c71e0
undefined2 sub_014c71e0(void)
{
  return 0x73;
}

struct C_014c71f0 { C_014c71f0* sub_014c71f0(int a0); };

// @baa 0x014c71f0
C_014c71f0* C_014c71f0::sub_014c71f0(int a0) { return this; }

struct C_014c9640 { void sub_014c9150(); void sub_014c9640(int); };

// @baa 0x014c9640
void C_014c9640::sub_014c9640(int) { sub_014c9150(); }

int sub_0053dfa0(...);
int sub_011ba1b0(void);
extern undefined * g_022b991c;
extern undefined4 g_022b9940;
extern undefined4 g_022b9950;
extern undefined * g_022b9958;
extern undefined * g_022b99e4;
extern undefined4 g_022b99fc;
extern undefined * g_022b9a08;
// @baa 0x014c97c0
undefined4 * UUnrealEdEngine::sub_014c97c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022b9a08);
  param_1[0x67] = (undefined4)(&g_022b99fc);
  param_1[0x68] = (undefined4)(&g_022b99e4);
  param_1[0x69] = (undefined4)(&g_022b9958);
  param_1[0x6a] = (undefined4)(&g_022b9950);
  param_1[0x6b] = (undefined4)(&g_022b9940);
  param_1[200] = (undefined4)(&g_022b991c);
  sub_011ba1b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014c9bb0 { int a, b, c; C_014c9bb0(); };

// @baa 0x014c9bb0
C_014c9bb0::C_014c9bb0() : a(0), b(0), c(0) {}

struct C_014c9bc0 { int a, b, c; C_014c9bc0(); };

// @baa 0x014c9bc0
C_014c9bc0::C_014c9bc0() : a(0), b(0), c(0) {}

struct C_014c9bd0 { int a, b, c; C_014c9bd0(); };

// @baa 0x014c9bd0
C_014c9bd0::C_014c9bd0() : a(0), b(0), c(0) {}

struct C_014c9be0 { int a, b, c; C_014c9be0(); };

// @baa 0x014c9be0
C_014c9be0::C_014c9be0() : a(0), b(0), c(0) {}

struct C_014c9bf0 {
    void sub_014c9bf0(int, int);
};

int sub_00627f00(...);
// @baa 0x014c9bf0
void C_014c9bf0::sub_014c9bf0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  return;
}

struct C_014c9c10 { int sub_014c9c10(void); };

// @baa 0x014c9c10
int C_014c9c10::sub_014c9c10(void) { return *(int*)((char*)this + 0); }

struct C_014c9c20 { int sub_014c9c20(void); };

// @baa 0x014c9c20
int C_014c9c20::sub_014c9c20(void) { return *(int*)((char*)this + 0); }

struct C_014c9c30 { int sub_014c9c30(void); };

// @baa 0x014c9c30
int C_014c9c30::sub_014c9c30(void) { return *(int*)((char*)this + 0); }

struct C_014c9cb0 { int sub_014c9cb0(void); };

// @baa 0x014c9cb0
int C_014c9cb0::sub_014c9cb0(void) { return *(int*)((char*)this + 0); }

struct C_014c9cc0 { int sub_014c9cc0(void); };

// @baa 0x014c9cc0
int C_014c9cc0::sub_014c9cc0(void) { return *(int*)((char*)this + 0); }

struct C_014c9cd0 { int sub_014c9cd0(void); };

// @baa 0x014c9cd0
int C_014c9cd0::sub_014c9cd0(void) { return *(int*)((char*)this + 0); }

struct C_014c9ce0 { int sub_014c9ce0(void); };

// @baa 0x014c9ce0
int C_014c9ce0::sub_014c9ce0(void) { return *(int*)((char*)this + 0); }

struct C_014c9cf0 { int sub_014c9cf0(void); };

// @baa 0x014c9cf0
int C_014c9cf0::sub_014c9cf0(void) { return *(int*)((char*)this + 0); }

struct C_014c9e30 { int sub_014c9e30(void); };

// @baa 0x014c9e30
int C_014c9e30::sub_014c9e30(void) { return *(int*)((char*)this + 0); }

struct C_014c9f00 {
    undefined4 sub_014c9f00();
};

int sub_00dba030(...);
int sub_00dbb810(void);
int sub_014c9f4f(...);
extern undefined4 g_026c5cc8;
// @baa 0x014c9f00
undefined4 C_014c9f00::sub_014c9f00(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026c5cc8 == 0) {
      g_026c5cc8 = sub_00dba030(L"Engine");
      sub_00dbb810();
      if (g_026c5cc8 == 0) {
sub_014c9f4f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026c5cc8) goto sub_014c9f4f;
    }
  }
  return 0;
}

// @baa 0x014ca090
IMPLEMENT_CLASS_AT(UUIEvent_MetaObjectHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 78);

// @baa 0x014ca0b0
IMPLEMENT_CLASS_AT(UUISequenceHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 68);

// @baa 0x014ca0d0
IMPLEMENT_CLASS_AT(UUISequenceObjectHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 103);

// @baa 0x014ca2b0
IMPLEMENT_CLASS_AT(USequenceOpHelper_CalloutInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorWindows.cpp", 114);

// @baa 0x014ca2d0
// @baa 0x014ca390
// @baa 0x014ca450
// @baa 0x014ca510
struct C_014cacd0 {
    void sub_014cacd0(int, int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x014cacd0
void C_014cacd0::sub_014cacd0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  }
  return;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014cad50(INT Index);
};

// @baa 0x014cad50
DWORD* S::sub_014cad50(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_014cada0(INT Index);
};

// @baa 0x014cada0
FFaceFXElement* UFxRenderWidget::sub_014cada0(INT Index)
{
	return &BoneArray(Index);
}

typedef uint size_t;

struct C_014cadf0 {
    int sub_014cadf0(int);
    int sub_014c9c40(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x014cadf0
int C_014cadf0::sub_014cadf0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_014cadf0 *)(this))->sub_014c9c40(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct E { BYTE Bytes[16]; };

struct S_014cae30 {
    TArray<E> Items; // 0x00
    E* sub_014cae30(INT Index);
};

// @baa 0x014cae30
E* S_014cae30::sub_014cae30(INT Index)
{
    return &Items(Index);
}

struct C_014cae80 {
    int sub_014cae80(int);
};

// @baa 0x014cae80
int C_014cae80::sub_014cae80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x014cae90
void __stdcall sub_014cae90(int a0, int a1) {  }

struct C_014caea0 {
    int sub_014caea0(int);
};

// @baa 0x014caea0
int C_014caea0::sub_014caea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_014caeb0 {
    int sub_014caeb0(int);
};

// @baa 0x014caeb0
int C_014caeb0::sub_014caeb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x014caec0
void __stdcall sub_014caec0(int a0, int a1) {  }

struct C_014caed0 {
    int sub_014caed0(int);
};

// @baa 0x014caed0
int C_014caed0::sub_014caed0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_014caee0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014caee0(INT Index);
};

// @baa 0x014caee0
DWORD* S_014caee0::sub_014caee0(INT Index)
{
    return &Items(Index);
}

struct T {
    void sub_014cb3f0(int);
};

struct S_014ccec0 {
    char pad[4];
    T* p;
    void sub_014ccec0();
};

// @baa 0x014ccec0
void S_014ccec0::sub_014ccec0() {
    p->sub_014cb3f0(1);
}

struct C_view {
    int sub_014acd80(int, int);
};

// @baa 0x014d8810
int UTexture2D::sub_014d8810(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_014acd80((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_014d8850 {
    int sub_014d8850(int);
    int sub_014acde0(int, int);
};

// @baa 0x014d8850
int C_014d8850::sub_014d8850(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_014d8850 *)(this))->sub_014acde0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0x50 + *param_1, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_014d8f40 {
    int sub_014d8f40();
};

int sub_014d7a20(void);
// @baa 0x014d8f40
int C_014d8f40::sub_014d8f40(void)
{
    int param_1 = (int)this;

  sub_014d7a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014d9220 {
    int sub_014d9220();
};

// @baa 0x014d9220
int C_014d9220::sub_014d9220(void)
{
    int param_1 = (int)this;

  sub_014d7a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014d90d0();
// @baa 0x014d9240
void sub_014d9240(void) { sub_014d90d0(); }

void sub_014d9140();
// @baa 0x014d9250
void sub_014d9250(void) { sub_014d9140(); }

void sub_014d91b0();
// @baa 0x014d9260
void sub_014d9260(void) { sub_014d91b0(); }

struct C_014d9270 {
    int sub_014d9270();
};

// @baa 0x014d9270
int C_014d9270::sub_014d9270(void)
{
    int param_1 = (int)this;

  sub_014d7a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x014d9290
void sub_014d9290(void) { sub_014d9140(); }

// @baa 0x014d92a0
void sub_014d92a0(void) { sub_014d90d0(); }

struct C_014d9a50 {
    int sub_014d9a50();
};

// @baa 0x014d9a50
int C_014d9a50::sub_014d9a50(void)
{
    int param_1 = (int)this;

  sub_014d7a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x014d9aa0
void sub_014d9aa0(void) { sub_014d90d0(); }

int sub_014b33e0(void);
// @baa 0x014d9ae0
int UTexture2D::sub_014d9ae0(void)
{
    int param_1 = (int)this;

  sub_014b33e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return param_1;
}

struct C_014dae60 { void sub_014dad00(); void sub_014dae60(int); };

// @baa 0x014dae60
void C_014dae60::sub_014dae60(int) { sub_014dad00(); }

int sub_014d7a80(void);
// @baa 0x014db190
int UTexture2D::sub_014db190(void)
{
    int param_1 = (int)this;

  sub_014d7a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014db0a0();
// @baa 0x014db1b0
void sub_014db1b0(void) { sub_014db0a0(); }

// @baa 0x014db230
int UTexture2D::sub_014db230(void)
{
    int param_1 = (int)this;

  sub_014d7a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014db1c0();
// @baa 0x014db250
void sub_014db250(void) { sub_014db1c0(); }

struct C_014d36b0 {
    void sub_014c9290(int);
    void sub_014d2ae0();
    void sub_014d36b0(int);
};

// @baa 0x014d36b0
void C_014d36b0::sub_014d36b0(int a)
{
    sub_014c9290(a);
    sub_014d2ae0();
}

struct U {
    void sub_014c9290(int arg);
    void sub_014d28b0();
    void sub_014d3690(int arg);
};

// @baa 0x014d3690
void U::sub_014d3690(int arg)
{
    sub_014c9290(arg);
    sub_014d28b0();
}

struct sub_014c5ef0_sub {
    virtual void sub_00000000();
    virtual void sub_00000001();
};

struct sub_014c5ef0_owner {
    char _pad[0x1a4];
    sub_014c5ef0_sub _sub;
    void sub_014c5ef0(sub_014c5ef0_owner* arg);
};

// @baa 0x014c5ef0
void sub_014c5ef0_owner::sub_014c5ef0(sub_014c5ef0_owner* arg)
{
    arg->_sub.sub_00000001();
}

extern char g_022b5294[];
// @baa 0x014c5f30
int sub_014c5f30(void) { return (int)g_022b5294; }

extern char g_026ddecc[];
// @baa 0x014c5f40
int sub_014c5f40(void) { return (int)g_026ddecc; }

struct C_014c6160 {
    uint sub_014c6160();
};

// @baa 0x014c6160
uint C_014c6160::sub_014c6160(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x314) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x314) + 0x50) & 1;
  }
  return uVar1;
}

struct C_014c6180 {
    uint sub_014c6180();
};

// @baa 0x014c6180
uint C_014c6180::sub_014c6180(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x314) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x314) + 0x50) >> 1 & 1;
  }
  return uVar1;
}

struct C_014c61a0 {
    uint sub_014c61a0();
};

// @baa 0x014c61a0
uint C_014c61a0::sub_014c61a0(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x170) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x170) + 0x50) >> 3 & 1;
  }
  return uVar1;
}

// @baa 0x014c61c0
int sub_014c61c0(void) { return 1; }

// @baa 0x014c61d0
int __stdcall sub_014c61d0(int a0, int a1, int a2, int a3) { return 0; }

struct C_014c61e0 {
    undefined4 sub_014c61e0();
};

// @baa 0x014c61e0
undefined4 C_014c61e0::sub_014c61e0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x314) + 0x58);
}

struct C_014c61f0 {
    uint sub_014c61f0();
};

// @baa 0x014c61f0
uint C_014c61f0::sub_014c61f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x314) + 0x50) >> 9 & 1;
}

struct OuterNameObj;
struct GObj {
    OuterNameObj * GetOutermost();
};

struct C_014c6200 {
    char pad_0x16c[0x16c];
    GObj * gobj;
    OuterNameObj * sub_014c6200();
};

// @baa 0x014c6200
OuterNameObj * C_014c6200::sub_014c6200()
{
    return gobj->GetOutermost();
}

// @baa 0x014c62b0
void sub_014c62b0(void) {  }

struct T_014c62d0 {
    char pad[0x318];
    void *sub;
    void sub_014c62d0();
};

struct O {
    void sub_014a8a30();
};

// @baa 0x014c62d0
void T_014c62d0::sub_014c62d0() { ((O *)sub)->sub_014a8a30(); }

struct FOO {
  int __thiscall sub_00f71ad0(void);
};

extern undefined4 g_026cce28;
// @baa 0x014c62e0
void sub_014c62e0(void)
{
  ((FOO *)g_026cce28)->sub_00f71ad0();
}

struct FOO_014c62f0 {
  int __thiscall sub_00f71ab0(void);
};

// @baa 0x014c62f0
void sub_014c62f0(void)
{
  ((FOO_014c62f0 *)g_026cce28)->sub_00f71ab0();
}

// @baa 0x014c7270
int sub_014c7270(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_022b9d90;
// @baa 0x014c7280
undefined4 * UObject::sub_014c7280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9d90);
  return param_1;
}

extern undefined * g_022b9ea8;
// @baa 0x014c7330
undefined4 * UObject::sub_014c7330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9ea8);
  return param_1;
}

extern undefined * g_022b9fc0;
// @baa 0x014c73e0
undefined4 * UObject::sub_014c73e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9fc0);
  return param_1;
}

int sub_014c5f50(void);
// @baa 0x014c8a10
undefined4 USoundNodeWave::sub_014c8a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014c5f50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
