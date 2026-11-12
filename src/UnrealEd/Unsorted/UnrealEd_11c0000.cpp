// UnrealEd_11c0000.cpp (part 1 of 3): 224 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

class wxHtmlContainerCell;
class wxHtmlContainerCell {
    public:
    public: __declspec(dllimport) wxHtmlContainerCell(wxHtmlContainerCell *);
    friend struct C;
};

struct C {
    wxHtmlContainerCell * sub_011c0ab0(undefined4, wxHtmlContainerCell *);
};

extern undefined * g_021e8b98;
// @baa 0x011c0ab0
wxHtmlContainerCell * C::sub_011c0ab0(undefined4 param_2, wxHtmlContainerCell * param_3)
{
    wxHtmlContainerCell * param_1 = (wxHtmlContainerCell *)this;

  ((wxHtmlContainerCell *)(param_1))->wxHtmlContainerCell::wxHtmlContainerCell(param_3);
  *(undefined ***)param_1 = &g_021e8b98;
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}

class wxFrame;
class wxFrame {
    public:
    public: __declspec(dllimport) wxFrame();
    friend struct C_011c0af0;
};

struct C_011c0af0 {
    wxFrame * sub_011c0af0();
};

extern undefined * g_021e8bf8;
// @baa 0x011c0af0
wxFrame * C_011c0af0::sub_011c0af0(void)
{
    wxFrame * param_1 = (wxFrame *)this;

  ((wxFrame *)(param_1))->wxFrame::wxFrame();
  *(undefined ***)param_1 = &g_021e8bf8;
  return param_1;
}

extern char g_025e8698[];
// @baa 0x011c0c60
int sub_011c0c60(void) { return (int)g_025e8698; }

extern char g_026d1fc8[];
// @baa 0x011c0c70
int sub_011c0c70(void) { return (int)g_026d1fc8; }

extern char g_026d2008[];
// @baa 0x011c0d30
int sub_011c0d30(void) { return (int)g_026d2008; }

extern char g_025e86a0[];
// @baa 0x011c0d40
int sub_011c0d40(void) { return (int)g_025e86a0; }

extern char g_026d2020[];
// @baa 0x011c0d50
int sub_011c0d50(void) { return (int)g_026d2020; }

extern char g_026d2060[];
// @baa 0x011c0db0
int sub_011c0db0(void) { return (int)g_026d2060; }

extern char g_025e86a8[];
// @baa 0x011c0dc0
int sub_011c0dc0(void) { return (int)g_025e86a8; }

extern char g_026d2078[];
// @baa 0x011c0dd0
int sub_011c0dd0(void) { return (int)g_026d2078; }

struct C_011c0e30 { int sub_011c0e30(void); };

// @baa 0x011c0e30
int C_011c0e30::sub_011c0e30(void) { return *(int*)((char*)this + 416); }

extern char g_025e86b0[];
// @baa 0x011c0e40
int sub_011c0e40(void) { return (int)g_025e86b0; }

extern char g_026d20cc[];
// @baa 0x011c0e50
int sub_011c0e50(void) { return (int)g_026d20cc; }

struct C_011c0e60 {
    undefined4 * sub_011c0e60();
};

int sub_011152a0(void);
extern undefined * g_021e8f50;
// @baa 0x011c0e60
undefined4 * C_011c0e60::sub_011c0e60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011152a0();
  *param_1 = (undefined4)(&g_021e8f50);
  return param_1;
}

extern char g_021dfbd0[];
// @baa 0x011c0f60
int sub_011c0f60(void) { return (int)g_021dfbd0; }

extern char g_026d215c[];
// @baa 0x011c0f70
int sub_011c0f70(void) { return (int)g_026d215c; }

class wxMenu;
class wxMenu {
    public:
    public: __declspec(dllimport) wxMenu(long);
    friend struct C_011c0fd0;
};

struct C_011c0fd0 {
    wxMenu * sub_011c0fd0();
};

extern undefined * g_021e9238;
// @baa 0x011c0fd0
wxMenu * C_011c0fd0::sub_011c0fd0(void)
{
    wxMenu * param_1 = (wxMenu *)this;

  ((wxMenu *)(param_1))->wxMenu::wxMenu(0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined ***)param_1 = &g_021e9238;
  return param_1;
}

extern char g_025e86b8[];
// @baa 0x011c1010
int sub_011c1010(void) { return (int)g_025e86b8; }

extern char g_026d219c[];
// @baa 0x011c1020
int sub_011c1020(void) { return (int)g_026d219c; }

// @baa 0x011c1060
void __stdcall sub_011c1060(int a0) {  }

extern char g_025e86c0[];
// @baa 0x011c1070
int sub_011c1070(void) { return (int)g_025e86c0; }

extern char g_026d2308[];
// @baa 0x011c1080
int sub_011c1080(void) { return (int)g_026d2308; }

struct V_011c1140 {
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
    virtual void g();
    void sub_011c1140();
};

// @baa 0x011c1140
void V_011c1140::sub_011c1140() { g(); }

extern char g_021e3594[];
// @baa 0x011c1150
int sub_011c1150(void) { return (int)g_021e3594; }

extern char g_026d2320[];
// @baa 0x011c1160
int sub_011c1160(void) { return (int)g_026d2320; }

extern char g_021e35cc[];
// @baa 0x011c1180
int sub_011c1180(void) { return (int)g_021e35cc; }

extern char g_026d2338[];
// @baa 0x011c1190
int sub_011c1190(void) { return (int)g_026d2338; }

extern char g_021e49e8[];
// @baa 0x011c1200
int sub_011c1200(void) { return (int)g_021e49e8; }

extern char g_026d2364[];
// @baa 0x011c1210
int sub_011c1210(void) { return (int)g_026d2364; }

extern char g_021e4a20[];
// @baa 0x011c1230
int sub_011c1230(void) { return (int)g_021e4a20; }

extern char g_026d2390[];
// @baa 0x011c1240
int sub_011c1240(void) { return (int)g_026d2390; }

struct C_011c1250 { int sub_011c1250(void); };

// @baa 0x011c1250
int C_011c1250::sub_011c1250(void) { return *(int*)((char*)this + 4); }

struct C_011c1260 { void sub_011c1260(void); };

// @baa 0x011c1260
void C_011c1260::sub_011c1260(void) { *(int*)((char*)this + 4) = 1; }

struct C_011c1270 { int sub_011c1270(void); };

// @baa 0x011c1270
int C_011c1270::sub_011c1270(void) { return *(int*)((char*)this + 404); }

struct C_011c1280 { void sub_011c1280(int a0); };

// @baa 0x011c1280
void C_011c1280::sub_011c1280(int a0) { *(int*)((char*)this + 404) = a0; }

struct C_011c1290 { int sub_011c1290(void); };

// @baa 0x011c1290
int C_011c1290::sub_011c1290(void) { return *(int*)((char*)this + 484); }

struct C_011c12a0 { int sub_011c12a0(void); };

// @baa 0x011c12a0
int C_011c12a0::sub_011c12a0(void) { return *(int*)((char*)this + 500); }

struct C_011c12b0 { int sub_011c12b0(void); };

// @baa 0x011c12b0
int C_011c12b0::sub_011c12b0(void) { return *(int*)((char*)this + 504); }

// @baa 0x011c12c0
void __stdcall sub_011c12c0(int a0) {  }

struct C_011c12d0 { char* sub_011c12d0(void); };

// @baa 0x011c12d0
char* C_011c12d0::sub_011c12d0(void) { return (char*)this + 488; }

// @baa 0x011c12e0
void __stdcall sub_011c12e0(int a0) {  }

struct C_011c12f0 { int sub_011c12f0(void); };

// @baa 0x011c12f0
int C_011c12f0::sub_011c12f0(void) { return *(int*)((char*)this + 396); }

struct C_011c1300 {
    void sub_011c1300(int);
};

// @baa 0x011c1300
void C_011c1300::sub_011c1300(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + param_2;
  return;
}

struct C_011c1310 { int sub_011c1310(void); };

// @baa 0x011c1310
int C_011c1310::sub_011c1310(void) { return *(int*)((char*)this + 408); }

struct C_011c1320 { void sub_011c1320(void); };

// @baa 0x011c1320
void C_011c1320::sub_011c1320(void) { *(int*)((char*)this + 408) = 1; }

struct C_011c1330 { void sub_011c1330(void); };

// @baa 0x011c1330
void C_011c1330::sub_011c1330(void) { *(int*)((char*)this + 408) = 0; }

struct C_011c1340 { int sub_011c1340(void); };

// @baa 0x011c1340
int C_011c1340::sub_011c1340(void) { return *(int*)((char*)this + 400); }

struct C_011c1350 {
    void sub_011c1350(undefined4);
};

// @baa 0x011c1350
void C_011c1350::sub_011c1350(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 400) = param_2;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}

struct C_011c1370 { int sub_011c1370(void); };

// @baa 0x011c1370
int C_011c1370::sub_011c1370(void) { return *(int*)((char*)this + 460); }

struct C_011c1380 { int sub_011c1380(void); };

// @baa 0x011c1380
int C_011c1380::sub_011c1380(void) { return *(int*)((char*)this + 412); }

struct C_011c1390 { void sub_011c1390(int a0); };

// @baa 0x011c1390
void C_011c1390::sub_011c1390(int a0) { *(int*)((char*)this + 412) = a0; }

struct C_011c13a0 { int sub_011c13a0(void); };

// @baa 0x011c13a0
int C_011c13a0::sub_011c13a0(void) { return *(int*)((char*)this + 428); }

struct C_011c13b0 { int sub_011c13b0(void); };

// @baa 0x011c13b0
int C_011c13b0::sub_011c13b0(void) { return *(int*)((char*)this + 416); }

struct C_011c13c0 { void sub_011c13c0(int a0); };

// @baa 0x011c13c0
void C_011c13c0::sub_011c13c0(int a0) { *(int*)((char*)this + 416) = a0; }

struct C_011c13d0 { int sub_011c13d0(void); };

// @baa 0x011c13d0
int C_011c13d0::sub_011c13d0(void) { return *(int*)((char*)this + 420); }

struct C_011c13e0 { void sub_011c13e0(int a0); };

// @baa 0x011c13e0
void C_011c13e0::sub_011c13e0(int a0) { *(int*)((char*)this + 420) = a0; }

struct C_011c13f0 { int sub_011c13f0(void); };

// @baa 0x011c13f0
int C_011c13f0::sub_011c13f0(void) { return *(int*)((char*)this + 424); }

struct C_011c1400 { void sub_011c1400(int a0); };

// @baa 0x011c1400
void C_011c1400::sub_011c1400(int a0) { *(int*)((char*)this + 432) = a0; }

struct C_011c1410 { int sub_011c1410(void); };

// @baa 0x011c1410
int C_011c1410::sub_011c1410(void) { return *(int*)((char*)this + 424); }

// @baa 0x011c1420
int sub_011c1420(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x011c1430
void sub_011c1430(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x011c1470
int sub_011c1470(void) { return 1; }

struct C_011c1480 {
    void sub_011c1480(undefined4 *);
};

// @baa 0x011c1480
void C_011c1480::sub_011c1480(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x174) = *param_2;
  *(undefined4 *)(param_1 + 0x178) = param_2[1];
  *(undefined4 *)(param_1 + 0x17c) = param_2[2];
  return;
}

struct C_011c14b0 { int sub_011c14b0(void); };

// @baa 0x011c14b0
int C_011c14b0::sub_011c14b0(void) { return *(int*)((char*)this + 376); }

// @baa 0x011c14c0
void __stdcall sub_011c14c0(int a0) {  }

extern char g_025e86c8[];
// @baa 0x011c1500
int sub_011c1500(void) { return (int)g_025e86c8; }

extern char g_026d23e4[];
// @baa 0x011c1510
int sub_011c1510(void) { return (int)g_026d23e4; }

extern char g_021e9560[];
struct C_011c1520 { C_011c1520* sub_011c1520(void); };

// @baa 0x011c1520
C_011c1520* C_011c1520::sub_011c1520(void) { *(int*)((char*)this + 0) = (int)g_021e9560; return this; }

// @baa 0x011c1530
void sub_011c1530(void) {  }

// @baa 0x011c1540
void sub_011c1540(void) {  }

// @baa 0x011c1550
void __stdcall sub_011c1550(int a0, int a1) {  }

// @baa 0x011c1560
void __stdcall sub_011c1560(int a0, int a1) {  }

// @baa 0x011c1570
void __stdcall sub_011c1570(int a0) {  }

// @baa 0x011c1580
void __stdcall sub_011c1580(int a0) {  }

// @baa 0x011c1590
int sub_011c1590(void) { return 1; }

// @baa 0x011c15a0
int __stdcall sub_011c15a0(int a0, int a1, int a2) { return 1; }

// @baa 0x011c15b0
void __stdcall sub_011c15b0(int a0) {  }

// @baa 0x011c15c0
void __stdcall sub_011c15c0(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x011c15d0
void sub_011c15d0(void) {  }

// @baa 0x011c15e0
void sub_011c15e0(void) {  }

// @baa 0x011c15f0
void sub_011c15f0(void) {  }

// @baa 0x011c1600
void sub_011c1600(void) {  }

// @baa 0x011c1610
void sub_011c1610(void) {  }

// @baa 0x011c1620
void sub_011c1620(void) {  }

// @baa 0x011c1630
void __stdcall sub_011c1630(int a0, int a1) {  }

// @baa 0x011c1640
void __stdcall sub_011c1640(int a0, int a1) {  }

// @baa 0x011c1650
int __stdcall sub_011c1650(int a0) { return 0; }

// @baa 0x011c1660
int sub_011c1660(void) { return 0; }

// @baa 0x011c1670
void sub_011c1670(void) {  }

// @baa 0x011c1680
void sub_011c1680(void) {  }

// @baa 0x011c1690
int sub_011c1690(void) { return 0; }

// @baa 0x011c16a0
void __stdcall sub_011c16a0(int a0) {  }

// @baa 0x011c16b0
int sub_011c16b0(void) { return 0; }

// @baa 0x011c16c0
int __stdcall sub_011c16c0(int a0) { return 1; }

// @baa 0x011c16d0
void __stdcall sub_011c16d0(int a0) {  }

// @baa 0x011c16e0
void __stdcall sub_011c16e0(int a0) {  }

// @baa 0x011c16f0
void __stdcall sub_011c16f0(int a0) {  }

extern char g_021e5698[];
// @baa 0x011c17b0
int sub_011c17b0(void) { return (int)g_021e5698; }

// @baa 0x011c17c0
int sub_011c17c0(void) { return 0; }

// @baa 0x011c17d0
int sub_011c17d0(int a0, int a1) { return a1; }

extern char g_02019ce8[];
// @baa 0x011c17e0
int sub_011c17e0(void) { return (int)g_02019ce8; }

int sub_011f4cb0(...);
int sub_011f4d70(void);
extern undefined4 g_026d2a54;
// @baa 0x011c17f0
int sub_011c17f0(void)
{
  if (g_026d2a54 == 0) {
    g_026d2a54 = sub_011f4cb0(L"UnrealEd");
    sub_011f4d70();
  }
  return g_026d2a54;
}

// @baa 0x011c1820
void sub_011c1820(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_011f4ed0(...);
int sub_011f8e00(void);
extern undefined4 g_026d2a58;
// @baa 0x011c1840
int sub_011c1840(void)
{
  if (g_026d2a58 == 0) {
    g_026d2a58 = sub_011f4ed0(L"UnrealEd");
    sub_011f8e00();
  }
  return g_026d2a58;
}

int sub_011f4fa0(...);
int sub_011f8f50(void);
extern undefined4 g_026d2a5c;
// @baa 0x011c1870
int sub_011c1870(void)
{
  if (g_026d2a5c == 0) {
    g_026d2a5c = sub_011f4fa0(L"UnrealEd");
    sub_011f8f50();
  }
  return g_026d2a5c;
}

int sub_011f5070(...);
int sub_011f90a0(void);
extern undefined4 g_026d2a60;
// @baa 0x011c18a0
int sub_011c18a0(void)
{
  if (g_026d2a60 == 0) {
    g_026d2a60 = sub_011f5070(L"UnrealEd");
    sub_011f90a0();
  }
  return g_026d2a60;
}

int sub_011f5140(...);
int sub_011f91f0(void);
extern undefined4 g_026d2a64;
// @baa 0x011c18d0
int sub_011c18d0(void)
{
  if (g_026d2a64 == 0) {
    g_026d2a64 = sub_011f5140(L"UnrealEd");
    sub_011f91f0();
  }
  return g_026d2a64;
}

int sub_011f5210(...);
int sub_011f9340(void);
extern undefined4 g_026d2a68;
// @baa 0x011c1900
int sub_011c1900(void)
{
  if (g_026d2a68 == 0) {
    g_026d2a68 = sub_011f5210(L"UnrealEd");
    sub_011f9340();
  }
  return g_026d2a68;
}

int sub_011f4be0(...);
int sub_011f8cb0(void);
extern undefined4 g_026d2a50;
// @baa 0x011c1930
int sub_011c1930(void)
{
  if (g_026d2a50 == 0) {
    g_026d2a50 = sub_011f4be0(L"UnrealEd");
    sub_011f8cb0();
  }
  return g_026d2a50;
}

struct C_011c1960 { int a, b; C_011c1960(int, int); };

// @baa 0x011c1960
C_011c1960::C_011c1960(int x, int y) : a(x), b(y) {}

int sub_011f52e0(void);
int sub_0120a600(...);
extern undefined4 g_026d2a6c;
// @baa 0x011c1980
int sub_011c1980(void)
{
  if (g_026d2a6c == 0) {
    g_026d2a6c = sub_0120a600(L"UnrealEd");
    sub_011f52e0();
  }
  return g_026d2a6c;
}

// @baa 0x011c19b0
void sub_011c19b0(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_0120a6c0(...);
int sub_0120fab0(void);
extern undefined4 g_026d2a70;
// @baa 0x011c19d0
int sub_011c19d0(void)
{
  if (g_026d2a70 == 0) {
    g_026d2a70 = sub_0120a6c0(L"UnrealEd");
    sub_0120fab0();
  }
  return g_026d2a70;
}

int sub_0120a900(...);
int sub_01211c80(void);
extern undefined4 g_026d2a7c;
// @baa 0x011c1a00
int sub_011c1a00(void)
{
  if (g_026d2a7c == 0) {
    g_026d2a7c = sub_0120a900(L"UnrealEd");
    sub_01211c80();
  }
  return g_026d2a7c;
}

int sub_0120a840(...);
int sub_01211b30(void);
extern undefined4 g_026d2a78;
// @baa 0x011c1a30
int sub_011c1a30(void)
{
  if (g_026d2a78 == 0) {
    g_026d2a78 = sub_0120a840(L"UnrealEd");
    sub_01211b30();
  }
  return g_026d2a78;
}

int sub_0120a9c0(...);
int sub_01211dd0(void);
extern undefined4 g_026d2a80;
// @baa 0x011c1a60
int sub_011c1a60(void)
{
  if (g_026d2a80 == 0) {
    g_026d2a80 = sub_0120a9c0(L"UnrealEd");
    sub_01211dd0();
  }
  return g_026d2a80;
}

int sub_0120ab40(...);
int sub_01211f20(void);
extern undefined4 g_026d2a88;
// @baa 0x011c1a90
int sub_011c1a90(void)
{
  if (g_026d2a88 == 0) {
    g_026d2a88 = sub_0120ab40(L"UnrealEd");
    sub_01211f20();
  }
  return g_026d2a88;
}

int sub_0120aa80(...);
int sub_01213090(void);
extern undefined4 g_026d2a84;
// @baa 0x011c1ac0
int sub_011c1ac0(void)
{
  if (g_026d2a84 == 0) {
    g_026d2a84 = sub_0120aa80(L"UnrealEd");
    sub_01213090();
  }
  return g_026d2a84;
}

int sub_0120acc0(...);
int sub_012144b0(void);
extern undefined4 g_026d2a90;
// @baa 0x011c1af0
int sub_011c1af0(void)
{
  if (g_026d2a90 == 0) {
    g_026d2a90 = sub_0120acc0(L"UnrealEd");
    sub_012144b0();
  }
  return g_026d2a90;
}

int sub_0120ac00(...);
int sub_01214360(void);
extern undefined4 g_026d2a8c;
// @baa 0x011c1b20
int sub_011c1b20(void)
{
  if (g_026d2a8c == 0) {
    g_026d2a8c = sub_0120ac00(L"UnrealEd");
    sub_01214360();
  }
  return g_026d2a8c;
}

int sub_0120ae40(...);
int sub_012121c0(void);
extern undefined4 g_026d2a98;
// @baa 0x011c1b50
int sub_011c1b50(void)
{
  if (g_026d2a98 == 0) {
    g_026d2a98 = sub_0120ae40(L"UnrealEd");
    sub_012121c0();
  }
  return g_026d2a98;
}

int sub_0120ad80(...);
int sub_01212070(void);
extern undefined4 g_026d2a94;
// @baa 0x011c1b80
int sub_011c1b80(void)
{
  if (g_026d2a94 == 0) {
    g_026d2a94 = sub_0120ad80(L"UnrealEd");
    sub_01212070();
  }
  return g_026d2a94;
}

struct C_011c1bb0 { int sub_011c1bb0(void); };

// @baa 0x011c1bb0
int C_011c1bb0::sub_011c1bb0(void) { return *(int*)((char*)this + 200); }

struct C_011c1bc0 { int sub_011c1bc0(void); };

// @baa 0x011c1bc0
int C_011c1bc0::sub_011c1bc0(void) { return *(int*)((char*)this + 204); }

// @baa 0x011c2dc0
float10 sub_011c2dc0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x011c2e70
undefined2 sub_011c2e70(void)
{
  return 0x69;
}

// @baa 0x011c2e80
undefined2 sub_011c2e80(void)
{
  return 0x73;
}

// @baa 0x011c2e90
void sub_011c2e90(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_011c2eb0 { char* sub_011c2eb0(void); };

// @baa 0x011c2eb0
char* C_011c2eb0::sub_011c2eb0(void) { return (char*)this + 40; }

// @baa 0x011c2ec0
void sub_011c2ec0(void) {  }

// @baa 0x011c2ed0
void sub_011c2ed0(void) {  }

struct C_011c2f00 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_011c2f00* sub_011c2f00(INT value);
};

// @baa 0x011c2f00
C_011c2f00* C_011c2f00::sub_011c2f00(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct A_011c2fe0 { virtual void sub_011c5610(); char pad[332]; };

struct B_011c2fe0 { virtual void sub_011c5610(); };

struct C_011c2fe0 : A_011c2fe0, B_011c2fe0 { virtual void sub_011c5610(); C_011c2fe0(); };

C_011c2fe0::C_011c2fe0() {}

// @baa 0x011c2fe0
void C_011c2fe0::sub_011c5610() {}

struct C_011c37c0 {
    undefined4 sub_011c37c0(byte);
};

int sub_0053dfa0(...);
int sub_01115380(void);
// @baa 0x011c37c0
undefined4 C_011c37c0::sub_011c37c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01115380();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_011c39d0 { virtual void sub_011c57e0(); char pad[332]; };

struct B_011c39d0 { virtual void sub_011c57e0(); };

struct C_011c39d0 : A_011c39d0, B_011c39d0 { virtual void sub_011c57e0(); C_011c39d0(); };

C_011c39d0::C_011c39d0() {}

// @baa 0x011c39d0
void C_011c39d0::sub_011c57e0() {}

struct A_011c39e0 { virtual void sub_011c57e0(); char pad[336]; };

struct B_011c39e0 { virtual void sub_011c57e0(); };

struct C_011c39e0 : A_011c39e0, B_011c39e0 { virtual void sub_011c57e0(); C_011c39e0(); };

C_011c39e0::C_011c39e0() {}

// @baa 0x011c39e0
void C_011c39e0::sub_011c57e0() {}

struct C_011c3d50 {
    void sub_011c3d50(int *);
};

// @baa 0x011c3d50
void C_011c3d50::sub_011c3d50(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x1e8;
  param_2[1] = 0;
  return;
}

struct C_011c3d70 { int sub_011c3d70(void); };

// @baa 0x011c3d70
int C_011c3d70::sub_011c3d70(void) { return *(int*)((char*)this + 492); }

struct C_011c3d80 {
    void sub_011c3d80(int *);
};

// @baa 0x011c3d80
void C_011c3d80::sub_011c3d80(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(int *)(param_1 + 0x1cc) + 0x1e8;
  param_2[1] = 0;
  return;
}

struct C_011c3f40 {
    undefined4 * sub_011c3f40();
};

int sub_005c7a20(void);
extern undefined * g_021ea878;
// @baa 0x011c3f40
undefined4 * C_011c3f40::sub_011c3f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x10] = 100;
  param_1[0xf] = 100;
  *param_1 = (undefined4)(&g_021ea878);
  return param_1;
}

// @baa 0x011c3f60
IMPLEMENT_CLASS_AT(USceneRenderTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PostProcessEditor.cpp", 58);

// @baa 0x011c3fc0
// @baa 0x011c40f0
int USceneRenderTarget::vf_000(void) { return 1; }

// @baa 0x011c4100
bool USceneRenderTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_011c4140 { int sub_011c4140(void); };

// @baa 0x011c4140
int C_011c4140::sub_011c4140(void) { return *(int*)((char*)this + 360); }

struct C_011c4950 { int a, b, c; C_011c4950(); };

// @baa 0x011c4950
C_011c4950::C_011c4950() : a(0), b(0), c(0) {}

struct C_011c4960 { int a, b, c; C_011c4960(); };

// @baa 0x011c4960
C_011c4960::C_011c4960() : a(0), b(0), c(0) {}

struct C_011c4970 { int a, b, c; C_011c4970(); };

// @baa 0x011c4970
C_011c4970::C_011c4970() : a(0), b(0), c(0) {}

struct C_011c4980 { int a, b, c; C_011c4980(); };

// @baa 0x011c4980
C_011c4980::C_011c4980() : a(0), b(0), c(0) {}

struct C_011c4990 { int a, b, c; C_011c4990(); };

// @baa 0x011c4990
C_011c4990::C_011c4990() : a(0), b(0), c(0) {}

struct C_011c49a0 { int a, b, c; C_011c49a0(); };

// @baa 0x011c49a0
C_011c49a0::C_011c49a0() : a(0), b(0), c(0) {}

struct C_011c4b00 { int sub_011c4b00(void); };

// @baa 0x011c4b00
int C_011c4b00::sub_011c4b00(void) { return *(int*)((char*)this + 0); }

struct C_011c4b80 { int sub_011c4b80(void); };

// @baa 0x011c4b80
int C_011c4b80::sub_011c4b80(void) { return *(int*)((char*)this + 0); }

struct C_011c4c00 { C_011c4c00* sub_011c4c00(int a0); };

// @baa 0x011c4c00
C_011c4c00* C_011c4c00::sub_011c4c00(int a0) { return this; }

struct C_011c4c10 { int sub_011c4c10(void); };

// @baa 0x011c4c10
int C_011c4c10::sub_011c4c10(void) { return *(int*)((char*)this + 0); }

struct C_011c4c20 { C_011c4c20* sub_011c4c20(int a0); };

// @baa 0x011c4c20
C_011c4c20* C_011c4c20::sub_011c4c20(int a0) { return this; }

struct C_011c4c30 { int sub_011c4c30(void); };

// @baa 0x011c4c30
int C_011c4c30::sub_011c4c30(void) { return *(int*)((char*)this + 0); }

struct C_011c4c40 { C_011c4c40* sub_011c4c40(int a0); };

// @baa 0x011c4c40
C_011c4c40* C_011c4c40::sub_011c4c40(int a0) { return this; }

struct C_011c4c50 { int sub_011c4c50(void); };

// @baa 0x011c4c50
int C_011c4c50::sub_011c4c50(void) { return *(int*)((char*)this + 0); }

struct C_011c4c60 { C_011c4c60* sub_011c4c60(int a0); };

// @baa 0x011c4c60
C_011c4c60* C_011c4c60::sub_011c4c60(int a0) { return this; }

struct C_011c4c70 { int sub_011c4c70(void); };

// @baa 0x011c4c70
int C_011c4c70::sub_011c4c70(void) { return *(int*)((char*)this + 0); }

struct C_011c4c80 { int sub_011c4c80(void); };

// @baa 0x011c4c80
int C_011c4c80::sub_011c4c80(void) { return *(int*)((char*)this + 0); }

struct C_011c4d00 { int sub_011c4d00(void); };

// @baa 0x011c4d00
int C_011c4d00::sub_011c4d00(void) { return *(int*)((char*)this + 0); }

struct C_011c4d80 { int sub_011c4d80(void); };

// @baa 0x011c4d80
int C_011c4d80::sub_011c4d80(void) { return *(int*)((char*)this + 0); }

struct C_011c4e00 {
    int sub_011c4e00();
};

// @baa 0x011c4e00
int C_011c4e00::sub_011c4e00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_011c4e10 { int sub_011c4e10(void); };

// @baa 0x011c4e10
int C_011c4e10::sub_011c4e10(void) { return *(int*)((char*)this + 0); }

struct C_011c4e20 { int sub_011c4e20(void); };

// @baa 0x011c4e20
int C_011c4e20::sub_011c4e20(void) { return *(int*)((char*)this + 0); }

// @baa 0x011c4e30
undefined4 sub_011c4e30(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_011c4e50 { int sub_011c4e50(void); };

// @baa 0x011c4e50
int C_011c4e50::sub_011c4e50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011c4e60 { int sub_011c4e60(void); };

// @baa 0x011c4e60
int C_011c4e60::sub_011c4e60(void) { return *(int*)((char*)this + 0); }

struct C_011c4e70 { int sub_011c4e70(void); };

// @baa 0x011c4e70
int C_011c4e70::sub_011c4e70(void) { return *(int*)((char*)this + 0); }

struct C_011c4e80 { int sub_011c4e80(void); };

// @baa 0x011c4e80
int C_011c4e80::sub_011c4e80(void) { return *(int*)((char*)this + 0); }

struct C_011c4e90 { int sub_011c4e90(void); };

// @baa 0x011c4e90
int C_011c4e90::sub_011c4e90(void) { return *(int*)((char*)this + 0); }

struct C_011c4ea0 { int sub_011c4ea0(void); };

// @baa 0x011c4ea0
int C_011c4ea0::sub_011c4ea0(void) { return *(int*)((char*)this + 0); }

struct S_011c4eb0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_011c4eb0(INT Index);
};

// @baa 0x011c4eb0
QWORD* S_011c4eb0::sub_011c4eb0(INT Index)
{
    return &Items(Index);
}

struct C_011c4f00 { int sub_011c4f00(void); };

// @baa 0x011c4f00
int C_011c4f00::sub_011c4f00(void) { return *(int*)((char*)this + 0); }

struct C_011c4f10 { int sub_011c4f10(void); };

// @baa 0x011c4f10
int C_011c4f10::sub_011c4f10(void) { return *(int*)((char*)this + 0); }

// @baa 0x011c4f20
int sub_011c4f20(int a0) { return a0; }

struct C_011c4f50 {
    int sub_011c4f50(int);
};

// @baa 0x011c4f50
int C_011c4f50::sub_011c4f50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011c4f80 {
    int sub_011c4f80(int);
};

// @baa 0x011c4f80
int C_011c4f80::sub_011c4f80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011c4f90 {
    int sub_011c4f90(int);
};

// @baa 0x011c4f90
int C_011c4f90::sub_011c4f90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_011c4fb0 { int sub_011c4fb0(void); };

// @baa 0x011c4fb0
int C_011c4fb0::sub_011c4fb0(void) { return *(int*)((char*)this + 20); }

struct C_011c4fc0 { int sub_011c4fc0(void); };

// @baa 0x011c4fc0
int C_011c4fc0::sub_011c4fc0(void) { return *(int*)((char*)this + 20); }

// @baa 0x011c5590
void sub_011c5590(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_011c55b0 {
    void sub_011c55b0(int *);
};

// @baa 0x011c55b0
void C_011c55b0::sub_011c55b0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x3c;
  param_2[1] = 0;
  return;
}

struct C_011c55d0 {
    void sub_011c55d0();
};

int sub_011c2f20(void);
extern undefined * g_021e9974;
// @baa 0x011c55d0
void C_011c55d0::sub_011c55d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021e9974);
  sub_011c2f20();
  return;
}

struct C_011c55e0 {
    undefined4 * sub_011c55e0(byte);
};

// @baa 0x011c55e0
undefined4 * C_011c55e0::sub_011c55e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021e9974);
  sub_011c2f20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011c5610 {
    undefined4 sub_011c5610(byte);
};

int sub_011c3610(void);
// @baa 0x011c5610
undefined4 C_011c5610::sub_011c5610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011c3610();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011c5790 { void sub_011c3690(); void sub_011c5790(int); };

// @baa 0x011c5790
void C_011c5790::sub_011c5790(int) { sub_011c3690(); }

struct C_011c57e0 {
    undefined4 sub_011c57e0(byte);
};

int sub_011c3920(void);
// @baa 0x011c57e0
undefined4 C_011c57e0::sub_011c57e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011c3920();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011c5800 {
    undefined4 sub_011c5800(byte);
};

int sub_011c3c80(void);
// @baa 0x011c5800
undefined4 C_011c5800::sub_011c5800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011c3c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011c5b10 {
    undefined4 sub_011c5b10(byte);
};

int sub_011c42d0(void);
// @baa 0x011c5b10
undefined4 C_011c5b10::sub_011c5b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011c42d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_011c61f0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_011c61f0(INT Index) const;
};

// @baa 0x011c61f0
const DWORD* S_011c61f0::sub_011c61f0(INT Index) const
{
    return &Items(Index);
}

struct S_011c6240 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_011c6240(INT Index);
};

// @baa 0x011c6240
DWORD* S_011c6240::sub_011c6240(INT Index)
{
    return &Items(Index);
}

struct S_011c62f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_011c62f0(INT Index);
};

// @baa 0x011c62f0
DWORD* S_011c62f0::sub_011c62f0(INT Index)
{
    return &Items(Index);
}

struct C_011c6340{
int sub_011c6340(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x011c6340
int C_011c6340::sub_011c6340(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E { BYTE Bytes[32]; };

struct S_011c63a0 {
    TArray<E> Items; // 0x00
    E* sub_011c63a0(INT Index);
};

// @baa 0x011c63a0
E* S_011c63a0::sub_011c63a0(INT Index)
{
    return &Items(Index);
}

struct E_011c63f0 { BYTE Bytes[40]; };

struct S_011c63f0 {
    TArray<E_011c63f0> Items; // 0x00
    E_011c63f0* sub_011c63f0(INT Index);
};

// @baa 0x011c63f0
E_011c63f0* S_011c63f0::sub_011c63f0(INT Index)
{
    return &Items(Index);
}

struct S_011c6440 {
    TArray<E> Items; // 0x00
    E* sub_011c6440(INT Index);
};

// @baa 0x011c6440
E* S_011c6440::sub_011c6440(INT Index)
{
    return &Items(Index);
}

struct E_011c6490 { BYTE Bytes[40]; };

struct S_011c6490 {
    TArray<E_011c6490> Items; // 0x00
    E_011c6490* sub_011c6490(INT Index);
};

// @baa 0x011c6490
E_011c6490* S_011c6490::sub_011c6490(INT Index)
{
    return &Items(Index);
}

struct S_011c6540 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_011c6540(INT Index);
};

// @baa 0x011c6540
DWORD* S_011c6540::sub_011c6540(INT Index)
{
    return &Items(Index);
}

struct C_011c66a0 {
    int sub_011c66a0(int);
};

// @baa 0x011c66a0
int C_011c66a0::sub_011c66a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x011c66b0
void __stdcall sub_011c66b0(int a0, int a1) {  }

struct C_011c66c0 {
    int sub_011c66c0(int);
};

// @baa 0x011c66c0
int C_011c66c0::sub_011c66c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x011c66d0
void __stdcall sub_011c66d0(int a0, int a1) {  }

struct C_011c66e0 {
    int sub_011c66e0(int);
};

// @baa 0x011c66e0
int C_011c66e0::sub_011c66e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_011c66f0 {
    int sub_011c66f0(int);
};

// @baa 0x011c66f0
int C_011c66f0::sub_011c66f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_011c6700 {
    int sub_011c6700(int);
};

// @baa 0x011c6700
int C_011c6700::sub_011c6700(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_011c6710 {
    int sub_011c6710(int);
};

// @baa 0x011c6710
int C_011c6710::sub_011c6710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_011c6720 {
    int sub_011c6720(int);
};

// @baa 0x011c6720
int C_011c6720::sub_011c6720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x011c6730
void __stdcall sub_011c6730(int a0, int a1) {  }

struct C_011c6740 {
    int sub_011c6740(int);
};

// @baa 0x011c6740
int C_011c6740::sub_011c6740(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x011c6750
void __stdcall sub_011c6750(int a0, int a1) {  }

struct C_011c6760 {
    int sub_011c6760(int);
};

// @baa 0x011c6760
int C_011c6760::sub_011c6760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x011c6770
void __stdcall sub_011c6770(int a0, int a1) {  }

struct C_011c6780 {
    int sub_011c6780(int);
};

// @baa 0x011c6780
int C_011c6780::sub_011c6780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011c67c0 {
    int sub_011c67c0(int);
};

// @baa 0x011c67c0
int C_011c67c0::sub_011c67c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011c6800 {
    int sub_011c6800(int);
};

// @baa 0x011c6800
int C_011c6800::sub_011c6800(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_011c6820 {
    int sub_011c6820();
};

// @baa 0x011c6820
int C_011c6820::sub_011c6820(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_011c6840 {
    int sub_011c6840();
};

// @baa 0x011c6840
int C_011c6840::sub_011c6840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_011c6850 {
    int sub_011c6850();
};

// @baa 0x011c6850
int C_011c6850::sub_011c6850(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_011c6870 {
    int sub_011c6870();
};

// @baa 0x011c6870
int C_011c6870::sub_011c6870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_011c6b30 {
    void sub_011c6b30();
};

// @baa 0x011c6b30
void C_011c6b30::sub_011c6b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021e9974);
  sub_011c2f20();
  return;
}

struct C_011cb5b0 {
    undefined4 sub_011cb5b0(byte);
};

int sub_011cb330(void);
// @baa 0x011cb5b0
undefined4 C_011cb5b0::sub_011cb5b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011cb330();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
