// UnrealEd_11f0000.cpp (part 1 of 5): 141 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct A_011f04a0 { virtual void sub_011f0510(); char pad[320]; };

struct B_011f04a0 { virtual void sub_011f0510(); };

struct C_011f04a0 : A_011f04a0, B_011f04a0 { virtual void sub_011f0510(); C_011f04a0(); };

C_011f04a0::C_011f04a0() {}

// @baa 0x011f04a0
void C_011f04a0::sub_011f0510() {}

struct C {
    undefined4 sub_011f0510(byte);
};

int sub_0053dfa0(...);
int sub_011f04b0(void);
// @baa 0x011f0510
undefined4 C::sub_011f0510(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011f04b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x011f1860
int sub_011f1860(int a0, int a1) { return a1; }

extern char g_026d2b38[];
// @baa 0x011f2110
int sub_011f2110(void) { return (int)g_026d2b38; }

extern char g_021edc18[];
// @baa 0x011f2120
int sub_011f2120(void) { return (int)g_021edc18; }

extern char g_026d2b50[];
// @baa 0x011f2130
int sub_011f2130(void) { return (int)g_026d2b50; }

extern char g_025e871c[];
// @baa 0x011f2520
int sub_011f2520(void) { return (int)g_025e871c; }

extern char g_026d2bcc[];
// @baa 0x011f2530
int sub_011f2530(void) { return (int)g_026d2bcc; }

extern char g_021f517c[];
struct C_011f2670 { void sub_011f2670(void); };

// @baa 0x011f2670
void C_011f2670::sub_011f2670(void) { *(int*)((char*)this + 0) = (int)g_021f517c; }

struct C_011f26f0 { void sub_011f26f0(void); };

// @baa 0x011f26f0
void C_011f26f0::sub_011f26f0(void) { *(int*)((char*)this + 0) = (int)g_021f517c; }

struct C_011f2700 { void sub_011f2700(void); };

// @baa 0x011f2700
void C_011f2700::sub_011f2700(void) { *(int*)((char*)this + 0) = (int)g_021f517c; }

struct C_011f2710 { void sub_011f2710(void); };

// @baa 0x011f2710
void C_011f2710::sub_011f2710(void) { *(int*)((char*)this + 0) = (int)g_021f517c; }

struct C_011f27a0 { char* sub_011f27a0(void); };

// @baa 0x011f27a0
char* C_011f27a0::sub_011f27a0(void) { return (char*)this + 8; }

struct C_011f27b0 { char* sub_011f27b0(void); };

// @baa 0x011f27b0
char* C_011f27b0::sub_011f27b0(void) { return (char*)this + 12; }

extern char g_025e8724[];
// @baa 0x011f2830
int sub_011f2830(void) { return (int)g_025e8724; }

extern char g_026d2d38[];
// @baa 0x011f2840
int sub_011f2840(void) { return (int)g_026d2d38; }

class wxTreeItemId {
public:
    __declspec(dllimport) bool IsOk() const;
    void *m_pItem;
};

struct G {
    int sub_009c84b0(void);
};

extern G *g_026b62b8;
#define V8(b) virtual void v##b##0(void); virtual void v##b##1(void); virtual void v##b##2(void); virtual void v##b##3(void); virtual void v##b##4(void); virtual void v##b##5(void); virtual void v##b##6(void); virtual void v##b##7(void);
#define V1(n) virtual void w##n(void);
struct VA {
    V8(0) V8(1) V8(2) V8(3) V8(4) V8(5) V8(6) V8(7) V8(8) V8(9) V8(10) V8(11)
    V8(12) V8(13) V8(14) V8(15) V8(16) V8(17) V8(18) V8(19) V8(20) V8(21) V8(22)
    virtual int s184(wxTreeItemId *p);
    V1(185) V1(186) V1(187) V1(188) V1(189) V1(190) V1(191) V1(192) V1(193) V1(194)
    V1(195) V1(196) V1(197) V1(198) V1(199) V1(200) V1(201) V1(202) V1(203)
    virtual void s204(wxTreeItemId *p);
};

struct VB {
    V8(0) V8(1) V8(2) V8(3) V8(4) V8(5) V8(6) V8(7) V8(8) V8(9) V8(10) V8(11)
    V8(12) V8(13) V8(14) V8(15) V8(16) V8(17) V8(18) V8(19) V8(20) V8(21) V8(22)
    V1(184) V1(185) V1(186) V1(187) V1(188) V1(189)
    virtual void s190(int id, bool flag);
};

struct C_011f2850 {
    void sub_011f2850();
};

// @baa 0x011f2850
void C_011f2850::sub_011f2850()
{
    int edi = 0;
    wxTreeItemId item;
    if (g_026b62b8 == 0 || g_026b62b8->sub_009c84b0() == 0) {
        VA *a = *(VA **)((char *)this + 0x158);
        a->s204(&item);
        if (item.IsOk()) {
            a = *(VA **)((char *)this + 0x158);
            if (a->s184(&item) != 0) {
                edi = 1;
            }
        }
    }
    VB *b = *(VB **)((char *)this + 0x154);
    b->s190(0x435e, edi == 1);
}

struct C_011f29c0 {
    bool sub_011f29c0();
};

// @baa 0x011f29c0
bool C_011f29c0::sub_011f29c0(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) != 0;
}

extern char g_025e872c[];
// @baa 0x011f2a00
int sub_011f2a00(void) { return (int)g_025e872c; }

extern char g_026d2df0[];
// @baa 0x011f2a10
int sub_011f2a10(void) { return (int)g_026d2df0; }

extern char g_021f5198[];
struct C_011f2c90 { C_011f2c90* sub_011f2c90(void); };

// @baa 0x011f2c90
C_011f2c90* C_011f2c90::sub_011f2c90(void) { *(int*)((char*)this + 0) = (int)g_021f5198; return this; }

// @baa 0x011f2ca0
void sub_011f2ca0(void) {  }

// @baa 0x011f2cb0
void sub_011f2cb0(void) {  }

// @baa 0x011f2ce0
void sub_011f2ce0(void) {  }

// @baa 0x011f2cf0
void sub_011f2cf0(void) {  }

struct C_011f2d00 { void sub_011f2d00(void); };

// @baa 0x011f2d00
void C_011f2d00::sub_011f2d00(void) { *(int*)((char*)this + 0) = (int)g_021f5198; }

// @baa 0x011f2d50
int sub_011f2d50(int a0) { return a0; }

struct C_011f2d60 { void sub_011f2d60(int a0); };

// @baa 0x011f2d60
void C_011f2d60::sub_011f2d60(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_011f2d70 { void sub_011f2d70(int a0); };

// @baa 0x011f2d70
void C_011f2d70::sub_011f2d70(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_011f2d90 { void sub_011f2d90(void); };

// @baa 0x011f2d90
void C_011f2d90::sub_011f2d90(void) { *(int*)((char*)this + 148) = 1; }

struct C_011f2da0 { void sub_011f2da0(void); };

// @baa 0x011f2da0
void C_011f2da0::sub_011f2da0(void) { *(int*)((char*)this + 148) = 0; }

// @baa 0x011f2ec0
int __stdcall sub_011f2ec0(int a0) { return 0; }

class wxPanel;
class wxPanel {
    public:
    public: __declspec(dllimport) wxPanel();
    friend struct C_011f2fb0;
};

struct C_011f2fb0 {
    wxPanel * sub_011f2fb0(undefined4);
};

extern undefined * g_021f5218;
// @baa 0x011f2fb0
wxPanel * C_011f2fb0::sub_011f2fb0(undefined4 param_2)
{
    wxPanel * param_1 = (wxPanel *)this;

  ((wxPanel *)(param_1))->wxPanel::wxPanel();
  *(undefined4 *)(param_1 + 0x150) = param_2;
  *(undefined ***)param_1 = &g_021f5218;
  return param_1;
}

// @baa 0x011f2fd0
void __stdcall sub_011f2fd0(int a0) {  }

struct C_011f2ff0 { int sub_011f2ff0(void); };

// @baa 0x011f2ff0
int C_011f2ff0::sub_011f2ff0(void) { return *(int*)((char*)this + 336); }

// @baa 0x011f3770
void __stdcall sub_011f3770(int a0) {  }

extern char g_025e873c[];
// @baa 0x011f37a0
int sub_011f37a0(void) { return (int)g_025e873c; }

extern char g_026d30dc[];
// @baa 0x011f37b0
int sub_011f37b0(void) { return (int)g_026d30dc; }

extern char g_025e8744[];
// @baa 0x011f37c0
int sub_011f37c0(void) { return (int)g_025e8744; }

extern char g_026d311c[];
// @baa 0x011f37d0
int sub_011f37d0(void) { return (int)g_026d311c; }

extern char g_021f2a78[];
// @baa 0x011f37e0
int sub_011f37e0(void) { return (int)g_021f2a78; }

extern char g_021f2ad4[];
// @baa 0x011f3830
int sub_011f3830(void) { return (int)g_021f2ad4; }

extern char g_026d3134[];
// @baa 0x011f3840
int sub_011f3840(void) { return (int)g_026d3134; }

extern char g_025e874c[];
// @baa 0x011f3850
int sub_011f3850(void) { return (int)g_025e874c; }

extern char g_026d3268[];
// @baa 0x011f3860
int sub_011f3860(void) { return (int)g_026d3268; }

// @baa 0x011f39e0
void __stdcall sub_011f39e0(int dummy) {}

// @baa 0x011f3af0
void __stdcall sub_011f3af0(int a0) {  }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_021f5804;
// @baa 0x011f3b00
undefined4 * UUnrealEdEngine::sub_011f3b00(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_021f5804);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x011f3b20
void sub_011f3b20(void) { sub_00c38ac0(); }

struct Inner {
    virtual void f0() {}
    virtual void f1() {}
};

struct C_011f3b50 {
    Inner *m_p;
    __declspec(dllexport) void sub_011f3b50() {
        m_p->f1();
    }
};

// @baa 0x011f3b50
int main() {
    return 0;
}

struct C_011f3b70 { int sub_011f3b70(void); };

// @baa 0x011f3b70
int C_011f3b70::sub_011f3b70(void) { return *(int*)((char*)this + 0); }

extern char g_025e8754[];
// @baa 0x011f3b80
int sub_011f3b80(void) { return (int)g_025e8754; }

extern char g_026d32a8[];
// @baa 0x011f3b90
int sub_011f3b90(void) { return (int)g_026d32a8; }

struct C_011f3d60 { int sub_011f3d60(void); };

// @baa 0x011f3d60
int C_011f3d60::sub_011f3d60(void) { return *(int*)((char*)this + 4); }

struct C_011f3d70 { int sub_011f3d70(void); };

// @baa 0x011f3d70
int C_011f3d70::sub_011f3d70(void) { return *(int*)((char*)this + 4); }

struct C_011f3d80 { int sub_011f3d80(void); };

// @baa 0x011f3d80
int C_011f3d80::sub_011f3d80(void) { return *(int*)((char*)this + 4); }

struct C_011f3d90 { int sub_011f3d90(void); };

// @baa 0x011f3d90
int C_011f3d90::sub_011f3d90(void) { return *(int*)((char*)this + 4); }

struct C_011f3da0 { int sub_011f3da0(void); };

// @baa 0x011f3da0
int C_011f3da0::sub_011f3da0(void) { return *(int*)((char*)this + 4); }

struct C_011f3db0 { int sub_011f3db0(void); };

// @baa 0x011f3db0
int C_011f3db0::sub_011f3db0(void) { return *(int*)((char*)this + 4); }

struct C_011f3dc0 { int a, b; C_011f3dc0(int, int); };

// @baa 0x011f3dc0
C_011f3dc0::C_011f3dc0(int x, int y) : a(x), b(y) {}

struct C_011f3de0 { int a, b; C_011f3de0(int, int); };

// @baa 0x011f3de0
C_011f3de0::C_011f3de0(int x, int y) : a(x), b(y) {}

struct C_011f3e00 { int a, b; C_011f3e00(int, int); };

// @baa 0x011f3e00
C_011f3e00::C_011f3e00(int x, int y) : a(x), b(y) {}

struct C_011f3e20 { int a, b; C_011f3e20(int, int); };

// @baa 0x011f3e20
C_011f3e20::C_011f3e20(int x, int y) : a(x), b(y) {}

struct C_011f3e60 { int a, b; C_011f3e60(const C_011f3e60 &); };

// @baa 0x011f3e60
C_011f3e60::C_011f3e60(const C_011f3e60 &o) : a(o.a), b(o.b) {}

// @baa 0x011f3e80
int sub_011f3e80(int a0) { return *(int*)a0; }

struct C_011f3e90 {
    void sub_011f3e90(int *);
};

// @baa 0x011f3e90
void C_011f3e90::sub_011f3e90(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x011f3ea0
int sub_011f3ea0(int a0) { return *(int*)a0; }

struct C_011f3eb0 {
    void sub_011f3eb0(int *);
};

// @baa 0x011f3eb0
void C_011f3eb0::sub_011f3eb0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x011f3ec0
int sub_011f3ec0(int a0) { return *(int*)a0; }

struct C_011f3ed0 {
    void sub_011f3ed0(int *);
};

// @baa 0x011f3ed0
void C_011f3ed0::sub_011f3ed0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

// @baa 0x011f3ee0
int sub_011f3ee0(int a0) { return *(int*)a0; }

// @baa 0x011f3ef0
bool sub_011f3ef0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_011f3f00 { int a, b; C_011f3f00(const C_011f3f00 &); };

// @baa 0x011f3f00
C_011f3f00::C_011f3f00(const C_011f3f00 &o) : a(o.a), b(o.b) {}

// @baa 0x011f3f40
int sub_011f3f40(int a0) { return *(int*)a0; }

// @baa 0x011f3f60
int sub_011f3f60(int a0) { return a0; }

class wxWindow;
class wxWindowBase;
class wxWindow {
    public:
};

class wxWindowBase {
    public:
    public: __declspec(dllimport) wxWindow * FindWindow(long) const;
    friend struct C_011f3f70;
};

struct C_011f3f70 {
    void sub_011f3f70(undefined4 *, long);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x011f3f70
void C_011f3f70::sub_011f3f70(undefined4 * param_2, long param_3)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  wxWindow *pwVar1;
  
  pwVar1 = ((wxWindowBase *)(param_1))->wxWindowBase::FindWindow(param_3);
  *param_2 = (undefined4)(pwVar1);
  if (pwVar1 == (wxWindow *)0x0) {
    sub_006311e0("NULL != Control",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\unrealed\\inc\\RemoteControlPage.h"
                 ,0x31,&g_01e3f3dc);
  }
  return;
}

struct C_011f4070 { int a, b; C_011f4070(const C_011f4070 &); };

// @baa 0x011f4070
C_011f4070::C_011f4070(const C_011f4070 &o) : a(o.a), b(o.b) {}

struct C_011f4090 { int a, b; C_011f4090(const C_011f4090 &); };

// @baa 0x011f4090
C_011f4090::C_011f4090(const C_011f4090 &o) : a(o.a), b(o.b) {}

struct V_011f40b0 {
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
    virtual void v225();
    virtual void v226();
    virtual void v227();
    virtual void v228();
    virtual void g();
};

// @baa 0x011f40b0
void (V_011f40b0::*sub_011f40b0)() = &V_011f40b0::g;

struct A_011f40c0 { virtual void sub_011f7760(); char pad[332]; };

struct B_011f40c0 { virtual void sub_011f7760(); };

struct C_011f40c0 : A_011f40c0, B_011f40c0 { virtual void sub_011f7760(); C_011f40c0(); };

C_011f40c0::C_011f40c0() {}

// @baa 0x011f40c0
void C_011f40c0::sub_011f7760() {}

// @baa 0x011f5600
int UPropertyWindowManager::vf_000(void) { return 1; }

// @baa 0x011f5610
bool UPropertyWindowManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_011f5650 {
    undefined4 * sub_011f5650(byte);
};

// @baa 0x011f5650
undefined4 * C_011f5650::sub_011f5650(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021f517c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011f5670 {
    undefined4 sub_011f5670(byte);
};

int sub_011f27c0(void);
// @baa 0x011f5670
undefined4 C_011f5670::sub_011f5670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011f27c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011f5990 {
    undefined4 * sub_011f5990(byte);
};

// @baa 0x011f5990
undefined4 * C_011f5990::sub_011f5990(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021f5198);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d34f0;
extern undefined4 g_026d34f4;
extern undefined4 g_026d34f8;
// @baa 0x011f78f0
undefined * sub_011f78f0(void)
{
  if ((g_026d34f8 & 1) == 0) {
    g_026d34f8 = g_026d34f8 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d34f0 = (undefined4)(&g_026af518);
    g_026d34f4 = (undefined4)(L"HSentinelStatProxy");
  }
  return (undefined *)(&g_026d34f0);
}

struct C_011f7e30 { int a, b, c; C_011f7e30(); };

// @baa 0x011f7e30
C_011f7e30::C_011f7e30() : a(0), b(0), c(0) {}

struct C_011f7e40 { int a, b, c; C_011f7e40(); };

// @baa 0x011f7e40
C_011f7e40::C_011f7e40() : a(0), b(0), c(0) {}

struct C_011f7e50 { int a, b, c; C_011f7e50(); };

// @baa 0x011f7e50
C_011f7e50::C_011f7e50() : a(0), b(0), c(0) {}

struct C_011f7e60 { int a, b, c; C_011f7e60(); };

// @baa 0x011f7e60
C_011f7e60::C_011f7e60() : a(0), b(0), c(0) {}

struct C_011f7e70 { int a, b, c; C_011f7e70(); };

// @baa 0x011f7e70
C_011f7e70::C_011f7e70() : a(0), b(0), c(0) {}

struct C_011f7e80 { int a, b, c; C_011f7e80(); };

// @baa 0x011f7e80
C_011f7e80::C_011f7e80() : a(0), b(0), c(0) {}

struct C_011f7e90 { int sub_011f7e90(void); };

// @baa 0x011f7e90
int C_011f7e90::sub_011f7e90(void) { return *(int*)((char*)this + 0); }

struct C_011f7f10 { int sub_011f7f10(void); };

// @baa 0x011f7f10
int C_011f7f10::sub_011f7f10(void) { return *(int*)((char*)this + 0); }

struct C_011f7f90 { int sub_011f7f90(void); };

// @baa 0x011f7f90
int C_011f7f90::sub_011f7f90(void) { return *(int*)((char*)this + 0); }

struct C_011f7fa0 { int sub_011f7fa0(void); };

// @baa 0x011f7fa0
int C_011f7fa0::sub_011f7fa0(void) { return *(int*)((char*)this + 0); }

struct C_011f8020 { int sub_011f8020(void); };

// @baa 0x011f8020
int C_011f8020::sub_011f8020(void) { return *(int*)((char*)this + 0); }

struct C_011f8030 { int sub_011f8030(void); };

// @baa 0x011f8030
int C_011f8030::sub_011f8030(void) { return *(int*)((char*)this + 0); }

struct C_011f80c0 {
    int sub_011f80c0();
};

// @baa 0x011f80c0
int C_011f80c0::sub_011f80c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_011f80d0 {
    int sub_011f80d0();
};

// @baa 0x011f80d0
int C_011f80d0::sub_011f80d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_011f80e0 {
    int sub_011f80e0();
};

// @baa 0x011f80e0
int C_011f80e0::sub_011f80e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_011f80f0 {
    int sub_011f80f0();
};

// @baa 0x011f80f0
int C_011f80f0::sub_011f80f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_011f8100 {
    int sub_011f8100();
};

// @baa 0x011f8100
int C_011f8100::sub_011f8100(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_011f8110 {
    int sub_011f8110();
};

// @baa 0x011f8110
int C_011f8110::sub_011f8110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_011f8120 { int sub_011f8120(void); };

// @baa 0x011f8120
int C_011f8120::sub_011f8120(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011f8150 { int sub_011f8150(void); };

// @baa 0x011f8150
int C_011f8150::sub_011f8150(void) { return *(int*)((char*)this + 0); }

struct C_011f8160 { int sub_011f8160(void); };

// @baa 0x011f8160
int C_011f8160::sub_011f8160(void) { return *(int*)((char*)this + 0); }

struct C_011f8170 { int sub_011f8170(void); };

// @baa 0x011f8170
int C_011f8170::sub_011f8170(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011f8180 { int sub_011f8180(void); };

// @baa 0x011f8180
int C_011f8180::sub_011f8180(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011f8190 { int sub_011f8190(void); };

// @baa 0x011f8190
int C_011f8190::sub_011f8190(void) { return *(int*)((char*)this + 0); }

struct C_011f81a0 { int sub_011f81a0(void); };

// @baa 0x011f81a0
int C_011f81a0::sub_011f81a0(void) { return *(int*)((char*)this + 0); }

struct C_011f81b0 { int sub_011f81b0(void); };

// @baa 0x011f81b0
int C_011f81b0::sub_011f81b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011f81c0 { int sub_011f81c0(void); };

// @baa 0x011f81c0
int C_011f81c0::sub_011f81c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011f81f0 { int sub_011f81f0(void); };

// @baa 0x011f81f0
int C_011f81f0::sub_011f81f0(void) { return *(int*)((char*)this + 0); }

struct C_011f8270 { int sub_011f8270(void); };

// @baa 0x011f8270
int C_011f8270::sub_011f8270(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011f8280 { int sub_011f8280(void); };

// @baa 0x011f8280
int C_011f8280::sub_011f8280(void) { return *(int*)((char*)this + 0); }

struct C_011f8290 {
    int sub_011f8290(int);
};

// @baa 0x011f8290
int C_011f8290::sub_011f8290(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x011f82b0
int* sub_011f82b0(int* a, int b)
{
  *a = b;
  return a;
}

struct C_011f82c0 {
    int sub_011f82c0(int);
};

// @baa 0x011f82c0
int C_011f82c0::sub_011f82c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011f82d0 {
    int sub_011f82d0(int);
};

// @baa 0x011f82d0
int C_011f82d0::sub_011f82d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011f82e0 {
    int sub_011f82e0(int);
};

// @baa 0x011f82e0
int C_011f82e0::sub_011f82e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011f82f0 {
    int sub_011f82f0(int);
};

// @baa 0x011f82f0
int C_011f82f0::sub_011f82f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011f8300 { int sub_011f8300(void); };

// @baa 0x011f8300
int C_011f8300::sub_011f8300(void) { return *(int*)((char*)this + 20); }

struct C_011f8310 { int sub_011f8310(void); };

// @baa 0x011f8310
int C_011f8310::sub_011f8310(void) { return *(int*)((char*)this + 20); }

struct C_011f8320 {
    int sub_011f8320(int);
};

// @baa 0x011f8320
int C_011f8320::sub_011f8320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011f8330 {
    int sub_011f8330(int);
};

// @baa 0x011f8330
int C_011f8330::sub_011f8330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011f8340 {
    int sub_011f8340(int);
};

// @baa 0x011f8340
int C_011f8340::sub_011f8340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011f8350 {
    int sub_011f8350(int);
};

// @baa 0x011f8350
int C_011f8350::sub_011f8350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_011f8370 { int sub_011f8370(void); };

// @baa 0x011f8370
int C_011f8370::sub_011f8370(void) { return *(int*)((char*)this + 20); }

struct C_011f8380 { int sub_011f8380(void); };

// @baa 0x011f8380
int C_011f8380::sub_011f8380(void) { return *(int*)((char*)this + 20); }

struct C_011f8390 { int sub_011f8390(void); };

// @baa 0x011f8390
int C_011f8390::sub_011f8390(void) { return *(int*)((char*)this + 20); }

struct C_011f83a0 { int sub_011f83a0(void); };

// @baa 0x011f83a0
int C_011f83a0::sub_011f83a0(void) { return *(int*)((char*)this + 20); }

struct C_011f83b0 { int sub_011f83b0(void); };

// @baa 0x011f83b0
int C_011f83b0::sub_011f83b0(void) { return *(int*)((char*)this + 20); }

struct C_011f83c0 { int sub_011f83c0(void); };

// @baa 0x011f83c0
int C_011f83c0::sub_011f83c0(void) { return *(int*)((char*)this + 20); }

struct C_011f83d0 { int sub_011f83d0(void); };

// @baa 0x011f83d0
int C_011f83d0::sub_011f83d0(void) { return *(int*)((char*)this + 20); }

struct C_011f83e0 { int sub_011f83e0(void); };

// @baa 0x011f83e0
int C_011f83e0::sub_011f83e0(void) { return *(int*)((char*)this + 20); }

struct C_011f83f0 { int sub_011f83f0(void); };

// @baa 0x011f83f0
int C_011f83f0::sub_011f83f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x011f8400
void sub_011f8400(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x011f8420
void sub_011f8420(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_011fccc0 {
    undefined4 sub_011fccc0(byte);
};

int sub_011fcc00(void);
// @baa 0x011fccc0
undefined4 C_011fccc0::sub_011fccc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011fcc00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011fe8c0 {
    undefined4 sub_011fe8c0(byte);
};

int sub_011fe860(void);
// @baa 0x011fe8c0
undefined4 C_011fe8c0::sub_011fe8c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011fe860();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
