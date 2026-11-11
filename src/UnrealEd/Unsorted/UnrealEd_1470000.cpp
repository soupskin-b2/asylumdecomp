// UnrealEd_1470000.cpp (part 1 of 4): 251 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_0146f3e0(void);
// @baa 0x01470590
undefined4 UUnrealEdEngine::sub_01470590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0146f3e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_014744c0(void);
// @baa 0x014753b0
undefined4 UUnrealEdEngine::sub_014753b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014744c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_01476c30 { virtual void sub_01476c40(); char pad[412]; };

struct B_01476c30 { virtual void sub_01476c40(); };

struct C_01476c30 : A_01476c30, B_01476c30 { virtual void sub_01476c40(); C_01476c30(); };

C_01476c30::C_01476c30() {}

// @baa 0x01476c30
void C_01476c30::sub_01476c40() {}

struct C {
    undefined4 sub_01476c40(byte);
};

int sub_01258420(void);
// @baa 0x01476c40
undefined4 C::sub_01476c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01258420();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026dd580;
// @baa 0x01476c60
bool sub_01476c60(void)
{
  return g_026dd580 != 0;
}

extern undefined4 g_026dd588;
// @baa 0x01476c80
undefined4 sub_01476c80(void)
{
  return g_026dd588;
}

// @baa 0x01476cd0
void UFMODReverbLabelRenderer::sub_01476cd0(void) { *(int*)((char*)this + 60) = 1; }

extern char g_022a6c00[];
struct C_01476ce0 { C_01476ce0* sub_01476ce0(void); };

// @baa 0x01476ce0
C_01476ce0* C_01476ce0::sub_01476ce0(void) { *(int*)((char*)this + 0) = (int)g_022a6c00; return this; }

class wxDialogBase;
class wxDialogBase {
    public:
    protected: __declspec(dllimport) void AcceptAndClose();
};

struct C_01476d50 : wxDialogBase {
    void sub_01476d50(int);
};

// @baa 0x01476d50
void C_01476d50::sub_01476d50(int)
{
    AcceptAndClose();
}

extern char g_025e93b4[];
// @baa 0x01476e30
int sub_01476e30(void) { return (int)g_025e93b4; }

extern char g_026dd658[];
// @baa 0x01476e40
int sub_01476e40(void) { return (int)g_026dd658; }

extern char g_025e93bc[];
// @baa 0x01476f10
int sub_01476f10(void) { return (int)g_025e93bc; }

extern char g_026dd6c0[];
// @baa 0x01476f20
int sub_01476f20(void) { return (int)g_026dd6c0; }

extern char g_025e93c4[];
// @baa 0x01476f30
int sub_01476f30(void) { return (int)g_025e93c4; }

extern char g_026dd714[];
// @baa 0x01476f40
int sub_01476f40(void) { return (int)g_026dd714; }

extern char g_025e93cc[];
// @baa 0x01476f90
int sub_01476f90(void) { return (int)g_025e93cc; }

extern char g_026dd794[];
// @baa 0x01476fa0
int sub_01476fa0(void) { return (int)g_026dd794; }

struct C_01476fb0 : wxDialogBase {
    void sub_01476fb0(int);
};

// @baa 0x01476fb0
void C_01476fb0::sub_01476fb0(int)
{
    AcceptAndClose();
}

// @baa 0x01476fe0
undefined1 sub_01476fe0(void)
{
  return 0;
}

class wxTreeItemData;
class wxTreeItemData {
    public:
    public: __declspec(dllimport) wxTreeItemData();
    friend struct C_01476ff0;
};

struct C_01476ff0 {
    wxTreeItemData * sub_01476ff0(undefined4);
};

extern undefined4 g_022a6edc;
// @baa 0x01476ff0
wxTreeItemData * C_01476ff0::sub_01476ff0(undefined4 param_2)
{
    wxTreeItemData * param_1 = (wxTreeItemData *)this;

  ((wxTreeItemData *)(param_1))->wxTreeItemData::wxTreeItemData();
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined ***)param_1 = (undefined **)(&g_022a6edc);
  return param_1;
}

struct C_01477020 { void sub_01477020(int a0); };

// @baa 0x01477020
void C_01477020::sub_01477020(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_01477030 { int sub_01477030(void); };

// @baa 0x01477030
int C_01477030::sub_01477030(void) { return *(int*)((char*)this + 8); }

struct C_01477040 {
    undefined4 sub_01477040();
};

// @baa 0x01477040
undefined4 C_01477040::sub_01477040(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) ^ 1;
  return *(undefined4 *)(param_1 + 8);
}

// @baa 0x01477050
void sub_01477050(void) {  }

struct C_01477100 : wxDialogBase {
    void sub_01477100(int);
};

// @baa 0x01477100
void C_01477100::sub_01477100(int)
{
    AcceptAndClose();
}

// @baa 0x01477130
undefined1 sub_01477130(void)
{
  return 0;
}

int sub_0150ea90(void);
int sub_0152eb60(...);
extern undefined4 g_026e0b60;
// @baa 0x01477160
int sub_01477160(void)
{
  if (g_026e0b60 == 0) {
    g_026e0b60 = sub_0152eb60(L"CommonGame");
    sub_0150ea90();
  }
  return g_026e0b60;
}

int sub_0150ebf0(void);
int sub_01537f70(...);
extern undefined4 g_026e0b64;
// @baa 0x01477190
int sub_01477190(void)
{
  if (g_026e0b64 == 0) {
    g_026e0b64 = sub_01537f70(L"CommonGame");
    sub_0150ebf0();
  }
  return g_026e0b64;
}

int sub_0150ed50(void);
int sub_01534f10(...);
extern undefined4 g_026e0b68;
// @baa 0x014771c0
int sub_014771c0(void)
{
  if (g_026e0b68 == 0) {
    g_026e0b68 = sub_01534f10(L"CommonGame");
    sub_0150ed50();
  }
  return g_026e0b68;
}

extern char g_025e93d4[];
// @baa 0x01477270
int sub_01477270(void) { return (int)g_025e93d4; }

extern char g_026dd85c[];
// @baa 0x01477280
int sub_01477280(void) { return (int)g_026dd85c; }

struct C_01477290 : wxDialogBase {
    void sub_01477290(int);
};

// @baa 0x01477290
void C_01477290::sub_01477290(int)
{
    AcceptAndClose();
}

extern char g_025e93dc[];
// @baa 0x014774c0
int sub_014774c0(void) { return (int)g_025e93dc; }

extern char g_026dd89c[];
// @baa 0x014774d0
int sub_014774d0(void) { return (int)g_026dd89c; }

extern char g_025e93e4[];
// @baa 0x014774e0
int sub_014774e0(void) { return (int)g_025e93e4; }

extern char g_026dd8dc[];
// @baa 0x014774f0
int sub_014774f0(void) { return (int)g_026dd8dc; }

struct C_01477640 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01477640* sub_01477640(INT value);
};

// @baa 0x01477640
C_01477640* C_01477640::sub_01477640(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_01477660 {
    char pad[4];
    int field;
    C_01477660 *sub_01477660();
};

// @baa 0x01477660
C_01477660 *C_01477660::sub_01477660()
{
    field += 1;
    return this;
}

struct C_01477670 { int sub_01477670(void); };

// @baa 0x01477670
int C_01477670::sub_01477670(void) { return *(int*)((char*)this + 4); }

struct C_01477680 { int sub_01477680(void); };

// @baa 0x01477680
int C_01477680::sub_01477680(void) { return *(int*)((char*)this + 4); }

struct C_01477690 { int sub_01477690(void); };

// @baa 0x01477690
int C_01477690::sub_01477690(void) { return *(int*)((char*)this + 4); }

struct C_014776a0 { int sub_014776a0(void); };

// @baa 0x014776a0
int C_014776a0::sub_014776a0(void) { return *(int*)((char*)this + 4); }

struct C_014776b0 { int sub_014776b0(void); };

// @baa 0x014776b0
int C_014776b0::sub_014776b0(void) { return *(int*)((char*)this + 4); }

struct C_014776c0 { int sub_014776c0(void); };

// @baa 0x014776c0
int C_014776c0::sub_014776c0(void) { return *(int*)((char*)this + 4); }

struct C_014776d0 { int sub_014776d0(void); };

// @baa 0x014776d0
int C_014776d0::sub_014776d0(void) { return *(int*)((char*)this + 4); }

struct C_014776e0 { int sub_014776e0(void); };

// @baa 0x014776e0
int C_014776e0::sub_014776e0(void) { return *(int*)((char*)this + 4); }

struct C_014776f0 { int sub_014776f0(void); };

// @baa 0x014776f0
int C_014776f0::sub_014776f0(void) { return *(int*)((char*)this + 4); }

struct C_01477700 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_01477700(INT Index);
};

// @baa 0x01477700
UBOOL C_01477700::sub_01477700(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_01477720 { int a, b; C_01477720(int, int); };

// @baa 0x01477720
C_01477720::C_01477720(int x, int y) : a(x), b(y) {}

struct C_01477740 { int a, b; C_01477740(int, int); };

// @baa 0x01477740
C_01477740::C_01477740(int x, int y) : a(x), b(y) {}

struct C_01477760 { int a, b; C_01477760(int, int); };

// @baa 0x01477760
C_01477760::C_01477760(int x, int y) : a(x), b(y) {}

// @baa 0x01477780
int sub_01477780(int a0) { return *(int*)a0; }

struct C_01477790 {
    void sub_01477790(int *);
};

// @baa 0x01477790
void C_01477790::sub_01477790(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 4;
  return;
}

// @baa 0x014777a0
int sub_014777a0(int a0) { return *(int*)a0; }

struct C_014777b0 {
    void sub_014777b0(int *);
};

// @baa 0x014777b0
void C_014777b0::sub_014777b0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x014777c0
int sub_014777c0(int a0) { return *(int*)a0; }

struct C_014777d0 {
    void sub_014777d0(int *);
};

// @baa 0x014777d0
void C_014777d0::sub_014777d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x014777e0
int sub_014777e0(int a0) { return a0; }

// @baa 0x014777f0
int sub_014777f0(int a0) { return a0; }

// @baa 0x01477800
int sub_01477800(int a0) { return *(int*)a0; }

// @baa 0x01477810
int sub_01477810(int a0) { return *(int*)a0; }

// @baa 0x014778c0
int sub_014778c0(void) { return 0; }

// @baa 0x014778d0
int sub_014778d0(void) { return 0; }

// @baa 0x014778e0
int sub_014778e0(void) { return 0; }

// @baa 0x014778f0
int sub_014778f0(void) { return 0; }

// @baa 0x01477900
int sub_01477900(int a0) { return a0; }

// @baa 0x01477910
int sub_01477910(int a0) { return a0; }

struct V_01477920 {
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
    virtual void g();
};

// @baa 0x01477920
void (V_01477920::*sub_01477920)() = &V_01477920::g;

struct V_01477930 {
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
    virtual void g();
};

// @baa 0x01477930
void (V_01477930::*sub_01477930)() = &V_01477930::g;

// @baa 0x01477960
void sub_01477960(void) {  }

// @baa 0x01477970
float10 sub_01477970(double param_1)
{
  return (float10)param_1;
}

struct C_01477990 { void sub_01477990(int a0); };

// @baa 0x01477990
void C_01477990::sub_01477990(int a0) { *(int*)((char*)this + 48) = a0; }

// @baa 0x014779a0
undefined2 sub_014779a0(void)
{
  return 0x73;
}

extern int g_027ca508;
int sub_01acb390();
// @baa 0x014779b0
int sub_014779b0() { if (!g_027ca508) g_027ca508 = sub_01acb390(); return g_027ca508; }

// @baa 0x014779d0
int sub_014779d0(int a0, int a1) { return a1; }

// @baa 0x014779e0
int sub_014779e0(int a0, int a1) { return a1; }

// @baa 0x014779f0
int sub_014779f0(int a0, int a1) { return a1; }

// @baa 0x01477a00
int sub_01477a00(int a0, int a1) { return a1; }

// @baa 0x01477a10
int sub_01477a10(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_022a6ee0;
// @baa 0x01477a20
undefined4 * UObject::sub_01477a20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a6ee0);
  return param_1;
}

// @baa 0x01477a40
IMPLEMENT_CLASS_AT(UFMODReverbLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\FMODReverbLabelRenderer.cpp", 13);

// @baa 0x01477aa0
// @baa 0x01477ac0
undefined4 sub_01477ac0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022a6ff8;
// @baa 0x01477ad0
undefined4 * UObject::sub_01477ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a6ff8);
  return param_1;
}

// @baa 0x01477af0
IMPLEMENT_CLASS_AT(UFMODSoundLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\FMODSoundLabelRenderer.cpp", 11);

// @baa 0x01477b50
// @baa 0x01477b70
undefined4 sub_01477b70(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022a7110;
// @baa 0x01477b80
undefined4 * UObject::sub_01477b80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a7110);
  return param_1;
}

// @baa 0x01477ba0
IMPLEMENT_CLASS_AT(UMixBinLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\MixBinLabelRenderer.cpp", 12);

// @baa 0x01477c00
// @baa 0x01477c20
void UFMODReverbLabelRenderer::sub_01477c20(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x38) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

// @baa 0x01477c40
// @baa 0x01477d50
int UFMODReverbLabelRenderer::vf_000(void) { return 1; }

// @baa 0x01477d60
bool UFMODReverbLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01477da0
// @baa 0x01477eb0
int UFMODSoundLabelRenderer::vf_000(void) { return 1; }

// @baa 0x01477ec0
bool UFMODSoundLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01477f00
// @baa 0x01478010
int UMixBinLabelRenderer::vf_000(void) { return 1; }

// @baa 0x01478020
bool UMixBinLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01478060
IMPLEMENT_CLASS_AT(URGenericBrowserType_FMODReverb, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\RGenericBrowserType_FMODReverb.cpp", 12);

// @baa 0x01478170
int URGenericBrowserType_FMODReverb::vf_000(void) { return 1; }

// @baa 0x01478180
bool URGenericBrowserType_FMODReverb::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014781c0
IMPLEMENT_CLASS_AT(URGenericBrowserType_FMODSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\RGenericBrowserType_FMODSound.cpp", 10);

// @baa 0x014782d0
int URGenericBrowserType_FMODSound::vf_000(void) { return 1; }

// @baa 0x014782e0
bool URGenericBrowserType_FMODSound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01478320
IMPLEMENT_CLASS_AT(URGenericBrowserType_MixBin, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\RGenericBrowserType_MixBin.cpp", 11);

// @baa 0x01478430
int URGenericBrowserType_MixBin::vf_000(void) { return 1; }

// @baa 0x01478440
bool URGenericBrowserType_MixBin::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01478620 { C_01478620* sub_01478620(void); };

// @baa 0x01478620
C_01478620* C_01478620::sub_01478620(void) { return this; }

struct C_014787f0 { C_014787f0* sub_014787f0(void); };

// @baa 0x014787f0
C_014787f0* C_014787f0::sub_014787f0(void) { return this; }

// @baa 0x01478800
IMPLEMENT_CLASS_AT(UScriptDataBaseCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ScriptDatabaseBuilder.cpp", 3431);

// @baa 0x01478910
int UScriptDataBaseCommandlet::vf_000(void) { return 1; }

// @baa 0x01478920
bool UScriptDataBaseCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01478960 { int a, b, c; C_01478960(); };

// @baa 0x01478960
C_01478960::C_01478960() : a(0), b(0), c(0) {}

struct C_014789a0 { int a, b, c; C_014789a0(); };

// @baa 0x014789a0
C_014789a0::C_014789a0() : a(0), b(0), c(0) {}

struct C_014789b0 { int a, b, c; C_014789b0(); };

// @baa 0x014789b0
C_014789b0::C_014789b0() : a(0), b(0), c(0) {}

struct C_014789c0 { int a, b, c; C_014789c0(); };

// @baa 0x014789c0
C_014789c0::C_014789c0() : a(0), b(0), c(0) {}

struct C_014789d0 { int a, b, c; C_014789d0(); };

// @baa 0x014789d0
C_014789d0::C_014789d0() : a(0), b(0), c(0) {}

struct C_014789e0 { int a, b, c; C_014789e0(); };

// @baa 0x014789e0
C_014789e0::C_014789e0() : a(0), b(0), c(0) {}

struct C_014789f0 { int a, b, c; C_014789f0(); };

// @baa 0x014789f0
C_014789f0::C_014789f0() : a(0), b(0), c(0) {}

struct C_01478a80 {
    void sub_01478a80(int, int);
};

int sub_00627f00(...);
// @baa 0x01478a80
void C_01478a80::sub_01478a80(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  return;
}

struct C_01478aa0 { int sub_01478aa0(void); };

// @baa 0x01478aa0
int C_01478aa0::sub_01478aa0(void) { return *(int*)((char*)this + 0); }

struct C_01478b30 { int sub_01478b30(void); };

// @baa 0x01478b30
int C_01478b30::sub_01478b30(void) { return *(int*)((char*)this + 0); }

struct C_01478c30 { int sub_01478c30(void); };

// @baa 0x01478c30
int C_01478c30::sub_01478c30(void) { return *(int*)((char*)this + 0); }

struct C_01478cb0 { int sub_01478cb0(void); };

// @baa 0x01478cb0
int C_01478cb0::sub_01478cb0(void) { return *(int*)((char*)this + 0); }

struct C_01478cc0 { int sub_01478cc0(void); };

// @baa 0x01478cc0
int C_01478cc0::sub_01478cc0(void) { return *(int*)((char*)this + 0); }

struct C_01478cd0 { int sub_01478cd0(void); };

// @baa 0x01478cd0
int C_01478cd0::sub_01478cd0(void) { return *(int*)((char*)this + 0); }

struct C_01478ce0 { int sub_01478ce0(void); };

// @baa 0x01478ce0
int C_01478ce0::sub_01478ce0(void) { return *(int*)((char*)this + 0); }

struct C_01478cf0 { int sub_01478cf0(void); };

// @baa 0x01478cf0
int C_01478cf0::sub_01478cf0(void) { return *(int*)((char*)this + 0); }

struct C_01478e30 { int sub_01478e30(void); };

// @baa 0x01478e30
int C_01478e30::sub_01478e30(void) { return *(int*)((char*)this + 0); }

struct C_01478f80 { int sub_01478f80(void); };

// @baa 0x01478f80
int C_01478f80::sub_01478f80(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_01478f90{
void sub_01478f90(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
undefined4 sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01478f90
void C_01478f90::sub_01478f90(int param_2,int param_3)
{
int*param_1=(int*)this;
undefined4 iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0x14);
param_1[2]=iVar2;
if((*param_1)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,0x14*iVar2,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*0x14),(void*)(*param_1+param_2*0x14),
(iVar1-param_2)*0x14);
return;
}

struct C_014790b0 {
    int sub_014790b0();
};

// @baa 0x014790b0
int C_014790b0::sub_014790b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_014790c0 {
    int sub_014790c0();
};

// @baa 0x014790c0
int C_014790c0::sub_014790c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_014790d0 {
    int sub_014790d0();
};

// @baa 0x014790d0
int C_014790d0::sub_014790d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_014790e0 {
    int sub_014790e0();
};

// @baa 0x014790e0
int C_014790e0::sub_014790e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_014790f0 { int sub_014790f0(void); };

// @baa 0x014790f0
int C_014790f0::sub_014790f0(void) { return *(int*)((char*)this + 0); }

struct C_01479100 { int sub_01479100(void); };

// @baa 0x01479100
int C_01479100::sub_01479100(void) { return *(int*)((char*)this + 0); }

struct C_01479180 { int sub_01479180(void); };

// @baa 0x01479180
int C_01479180::sub_01479180(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01479190 { int sub_01479190(void); };

// @baa 0x01479190
int C_01479190::sub_01479190(void) { return *(int*)((char*)this + 0); }

struct C_014791a0 { int sub_014791a0(void); };

// @baa 0x014791a0
int C_014791a0::sub_014791a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x014791b0
bool sub_014791b0(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

struct C_014791d0 { int sub_014791d0(void); };

// @baa 0x014791d0
int C_014791d0::sub_014791d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014791e0 { int sub_014791e0(void); };

// @baa 0x014791e0
int C_014791e0::sub_014791e0(void) { return *(int*)((char*)this + 0); }

struct C_01479260 { int sub_01479260(void); };

// @baa 0x01479260
int C_01479260::sub_01479260(void) { return *(int*)((char*)this + 0); }

struct C_014792e0 { int sub_014792e0(void); };

// @baa 0x014792e0
int C_014792e0::sub_014792e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014792f0 { int sub_014792f0(void); };

// @baa 0x014792f0
int C_014792f0::sub_014792f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01479300 { int sub_01479300(void); };

// @baa 0x01479300
int C_01479300::sub_01479300(void) { return *(int*)((char*)this + 0); }

struct C_01479390 {
    int sub_01479390(int);
};

// @baa 0x01479390
int C_01479390::sub_01479390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_014793a0 {
    int sub_014793a0(int);
};

// @baa 0x014793a0
int C_014793a0::sub_014793a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_014793b0 { int sub_014793b0(void); };

// @baa 0x014793b0
int C_014793b0::sub_014793b0(void) { return *(int*)((char*)this + 20); }

struct C_014793c0 { int sub_014793c0(void); };

// @baa 0x014793c0
int C_014793c0::sub_014793c0(void) { return *(int*)((char*)this + 20); }

struct C_014793d0 { int sub_014793d0(void); };

// @baa 0x014793d0
int C_014793d0::sub_014793d0(void) { return *(int*)((char*)this + 0); }

struct C_014793e0 {
    int sub_014793e0(int);
};

// @baa 0x014793e0
int C_014793e0::sub_014793e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_014793f0 { int sub_014793f0(void); };

// @baa 0x014793f0
int C_014793f0::sub_014793f0(void) { return *(int*)((char*)this + 20); }

struct C_01479400 { int sub_01479400(void); };

// @baa 0x01479400
int C_01479400::sub_01479400(void) { return *(int*)((char*)this + 20); }

struct C_01479410 { int sub_01479410(void); };

// @baa 0x01479410
int C_01479410::sub_01479410(void) { return *(int*)((char*)this + 20); }

struct C_01479420 { int sub_01479420(void); };

// @baa 0x01479420
int C_01479420::sub_01479420(void) { return *(int*)((char*)this + 20); }

struct C_01479430 { int sub_01479430(void); };

// @baa 0x01479430
int C_01479430::sub_01479430(void) { return *(int*)((char*)this + 20); }

struct E { BYTE Bytes[20]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_01479500(INT Index) const;
};

// @baa 0x01479500
const E* S::sub_01479500(INT Index) const
{
    return &Items(Index);
}

struct E_01479550 { BYTE Bytes[16]; };

struct S_01479550 {
    TArray<E_01479550> Items; // 0x00
    const E_01479550* sub_01479550(INT Index) const;
};

// @baa 0x01479550
const E_01479550* S_01479550::sub_01479550(INT Index) const
{
    return &Items(Index);
}

// @baa 0x01479620
int sub_01479620(int a0) { return *(int*)a0; }

// @baa 0x01479630
int sub_01479630(int a0) { return *(int*)a0; }

struct C_01479ee0 {
    int sub_01479ee0(int);
    int sub_01478b40(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01479ee0
int C_01479ee0::sub_01479ee0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01479ee0 *)(this))->sub_01478b40(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct C_01479f20{
int sub_01479f20(undefined4*);
};

// @baa 0x01479f20
int C_01479f20::sub_01479f20(undefined4*param_2)
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

struct S_01479f80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01479f80(INT Index);
};

// @baa 0x01479f80
DWORD* S_01479f80::sub_01479f80(INT Index)
{
    return &Items(Index);
}

struct C_01479fd0{
int sub_01479fd0(undefined4*);
};

// @baa 0x01479fd0
int C_01479fd0::sub_01479fd0(undefined4*param_2)
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
	FFaceFXElement* sub_0147a030(INT Index);
};

// @baa 0x0147a030
FFaceFXElement* UFxRenderWidget::sub_0147a030(INT Index)
{
	return &BoneArray(Index);
}

struct E_0147a080 { BYTE Bytes[16]; };

struct S_0147a080 {
    TArray<E_0147a080> Items; // 0x00
    E_0147a080* sub_0147a080(INT Index);
};

// @baa 0x0147a080
E_0147a080* S_0147a080::sub_0147a080(INT Index)
{
    return &Items(Index);
}

struct E_0147a0d0 { BYTE Bytes[220]; };

struct S_0147a0d0 {
    TArray<E_0147a0d0> Items; // 0x00
    E_0147a0d0* sub_0147a0d0(INT Index);
};

// @baa 0x0147a0d0
E_0147a0d0* S_0147a0d0::sub_0147a0d0(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_0147a120
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0147a120(INT Index);
};

// @baa 0x0147a120
FFaceFXElement* UFxRenderWidget_0147a120::sub_0147a120(INT Index)
{
	return &BoneArray(Index);
}

struct E_0147a170 { BYTE Bytes[24]; };

struct S_0147a170 {
    TArray<E_0147a170> Items; // 0x00
    E_0147a170* sub_0147a170(INT Index);
};

// @baa 0x0147a170
E_0147a170* S_0147a170::sub_0147a170(INT Index)
{
    return &Items(Index);
}

struct C_0147a1c0 {
    void sub_0147a1c0(int, int);
    int sub_01478d00(int, int);
};

// @baa 0x0147a1c0
void C_0147a1c0::sub_0147a1c0(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_0147a1c0 *)(this))->sub_01478d00(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x18),0,param_3 * 0x18);
  return;
}

struct C_0147a250 {
    void sub_0147a250(int, int);
    int sub_01478e40(int, int);
};

// @baa 0x0147a250
void C_0147a250::sub_0147a250(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_0147a250 *)(this))->sub_01478e40(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x1c),0,param_3 * 0x1c);
  return;
}

struct UFxRenderWidget_0147a2a0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0147a2a0(INT Index);
};

// @baa 0x0147a2a0
FFaceFXElement* UFxRenderWidget_0147a2a0::sub_0147a2a0(INT Index)
{
	return &BoneArray(Index);
}

struct C_0147a2f0 {
    void sub_0147a2f0(int, int);
    int sub_01478f90(int, int);
};

// @baa 0x0147a2f0
void C_0147a2f0::sub_0147a2f0(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_0147a2f0 *)(this))->sub_01478f90(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x14),0,param_3 * 0x14);
  return;
}

struct S_0147a330 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0147a330(INT Index);
};

// @baa 0x0147a330
DWORD* S_0147a330::sub_0147a330(INT Index)
{
    return &Items(Index);
}

struct C_0147a380{
int sub_0147a380(undefined4*);
};

// @baa 0x0147a380
int C_0147a380::sub_0147a380(undefined4*param_2)
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

struct C_0147a3e0 {
    int sub_0147a3e0(int);
};

// @baa 0x0147a3e0
int C_0147a3e0::sub_0147a3e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0147a3f0
void __stdcall sub_0147a3f0(int a0, int a1) {  }

struct C_0147a400 {
    int sub_0147a400(int);
};

// @baa 0x0147a400
int C_0147a400::sub_0147a400(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0147a420 {
    int sub_0147a420(int);
};

// @baa 0x0147a420
int C_0147a420::sub_0147a420(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0147a430
void __stdcall sub_0147a430(int a0, int a1) {  }

struct C_0147a440{
int sub_0147a440(undefined4*);
};

// @baa 0x0147a440
int C_0147a440::sub_0147a440(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,0x14*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x14);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

struct C_0147a4c0 {
    int sub_0147a4c0(int);
};

// @baa 0x0147a4c0
int C_0147a4c0::sub_0147a4c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0147a4d0
void __stdcall sub_0147a4d0(int a0, int a1) {  }

struct C_0147a4e0 {
    int sub_0147a4e0(int);
};

// @baa 0x0147a4e0
int C_0147a4e0::sub_0147a4e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0147a4f0 { int sub_0147a4f0(void); };

// @baa 0x0147a4f0
int C_0147a4f0::sub_0147a4f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0147a500 {
    int sub_0147a500(int);
};

// @baa 0x0147a500
int C_0147a500::sub_0147a500(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xdc + *param_1;
}

// @baa 0x0147a590
void __stdcall sub_0147a590(int a0, int a1) {  }

struct C_0147a5a0 { int sub_0147a5a0(void); };

// @baa 0x0147a5a0
int C_0147a5a0::sub_0147a5a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_0147a640 { int sub_00544d40(int); };

// @baa 0x0147a640
int sub_0147a640(S_0147a640 *s, int a) { return s->sub_00544d40(a); }

struct C_0147a650 {
    int sub_0147a650(int);
};

// @baa 0x0147a650
int C_0147a650::sub_0147a650(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct S_0147a690 { int sub_00544d40(int); };

// @baa 0x0147a690
int sub_0147a690(S_0147a690 *s, int a) { return s->sub_00544d40(a); }

struct C_0147a6a0 {
    int sub_0147a6a0(int);
};

// @baa 0x0147a6a0
int C_0147a6a0::sub_0147a6a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0147a6b0 {
    int sub_0147a6b0();
};

// @baa 0x0147a6b0
int C_0147a6b0::sub_0147a6b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147a6d0 {
    int sub_0147a6d0();
};

// @baa 0x0147a6d0
int C_0147a6d0::sub_0147a6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_0147a6e0 {
    int sub_0147a6e0();
};

// @baa 0x0147a6e0
int C_0147a6e0::sub_0147a6e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147a700 {
    int sub_0147a700();
};

// @baa 0x0147a700
int C_0147a700::sub_0147a700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_0147a710 {
    int sub_0147a710(int);
};

// @baa 0x0147a710
int C_0147a710::sub_0147a710(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_0147a720 {
    int sub_0147a720(int);
};

// @baa 0x0147a720
int C_0147a720::sub_0147a720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0147a770 {
    int sub_0147a770(int);
};

// @baa 0x0147a770
int C_0147a770::sub_0147a770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0147a820 {
    int sub_0147a820();
};

// @baa 0x0147a820
int C_0147a820::sub_0147a820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_0147a830 {
    int sub_0147a830();
};

// @baa 0x0147a830
int C_0147a830::sub_0147a830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_0147a840 {
    int sub_0147a840();
};

// @baa 0x0147a840
int C_0147a840::sub_0147a840(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147a860 {
    int sub_0147a860(int);
};

// @baa 0x0147a860
int C_0147a860::sub_0147a860(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0147a870 {
    int sub_0147a870(int);
};

// @baa 0x0147a870
int C_0147a870::sub_0147a870(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0147a880 {
    int sub_0147a880();
};

// @baa 0x0147a880
int C_0147a880::sub_0147a880(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147a8a0 {
    int sub_0147a8a0();
};

// @baa 0x0147a8a0
int C_0147a8a0::sub_0147a8a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147a8c0 {
    int sub_0147a8c0();
};

// @baa 0x0147a8c0
int C_0147a8c0::sub_0147a8c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0147a8d0 {
    int sub_0147a8d0();
};

// @baa 0x0147a8d0
int C_0147a8d0::sub_0147a8d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147a8f0 {
    int sub_0147a8f0();
};

// @baa 0x0147a8f0
int C_0147a8f0::sub_0147a8f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct M_0147aae0 { void sub_0040fcc0(); };

struct C_0147aae0 { char pad[12]; M_0147aae0 m; void sub_0147aae0(); };

// @baa 0x0147aae0
void C_0147aae0::sub_0147aae0() { m.sub_0040fcc0(); }

struct C_0147ac60 {
    undefined4 sub_0147ac60();
};

// @baa 0x0147ac60
undefined4 C_0147ac60::sub_0147ac60(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0147d1c0 {
    undefined4 sub_0147d1c0(byte);
};

int sub_0147d160(void);
// @baa 0x0147d1c0
undefined4 C_0147d1c0::sub_0147d1c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0147d160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0147da90 { int a, b, c; C_0147da90(); };

// @baa 0x0147da90
C_0147da90::C_0147da90() : a(0), b(0), c(0) {}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0147e0f0 { void* Data; int Num; int Max; void sub_0147e0f0(); };

// @baa 0x0147e0f0
void C_0147e0f0::sub_0147e0f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0147e280 { void* Data; int Num; int Max; void sub_0147e280(); };

// @baa 0x0147e280
void C_0147e280::sub_0147e280() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0147e2e0 { void* Data; int Num; int Max; void sub_0147e2e0(); };

// @baa 0x0147e2e0
void C_0147e2e0::sub_0147e2e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0147e340 {
    int sub_0147a440(unsigned int *p);
    int sub_0147e340(unsigned int *p);
};

// @baa 0x0147e340
int C_0147e340::sub_0147e340(unsigned int *p) {
    return sub_0147a440(p);
}

struct C_0147e350 { int sub_0147e350(void); };

// @baa 0x0147e350
int C_0147e350::sub_0147e350(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_0147a510();
// @baa 0x0147e360
void sub_0147e360(void) { sub_0147a510(); }

struct C_0147e450 { int sub_0147e450(void); };

// @baa 0x0147e450
int C_0147e450::sub_0147e450(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0147e550 {
    int sub_0147e550(int);
};

// @baa 0x0147e550
int C_0147e550::sub_0147e550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0147e560 {
    int sub_0147e560(int);
};

// @baa 0x0147e560
int C_0147e560::sub_0147e560(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0147e570 {
    int sub_0147e570(int);
};

// @baa 0x0147e570
int C_0147e570::sub_0147e570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0147e580 {
    int sub_0147e580();
};

// @baa 0x0147e580
int C_0147e580::sub_0147e580(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147e5a0 {
    int sub_0147e5a0();
};

// @baa 0x0147e5a0
int C_0147e5a0::sub_0147e5a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_0147e5b0 {
    int sub_0147e5b0();
};

// @baa 0x0147e5b0
int C_0147e5b0::sub_0147e5b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0147e5d0 {
    int sub_0147e5d0();
};

// @baa 0x0147e5d0
int C_0147e5d0::sub_0147e5d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct M_0147e5e0 { void sub_0147abe0(); };

struct C_0147e5e0 { char pad[4]; M_0147e5e0 m; void sub_0147e5e0(); };

// @baa 0x0147e5e0
void C_0147e5e0::sub_0147e5e0() { m.sub_0147abe0(); }

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x0147e5f0
undefined4 * UObject::sub_0147e5f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x0147e630
undefined4 UObject::sub_0147e630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0147e740
int UObject::sub_0147e740(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

// @baa 0x0147e7c0
int UObject::sub_0147e7c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x0147e8e0
int UObject::sub_0147e8e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x0147e990
int UObject::sub_0147e990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct M_0147eb70 { void sub_0147abe0(); };

struct C_0147eb70 { char pad[4]; M_0147eb70 m; void sub_0147eb70(); };

// @baa 0x0147eb70
void C_0147eb70::sub_0147eb70() { m.sub_0147abe0(); }

// @baa 0x0147eb80
int UObject::sub_0147eb80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x0147eb90
int UObject::sub_0147eb90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x0147eba0
int UObject::sub_0147eba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

// @baa 0x0147ec10
int UObject::sub_0147ec10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

// @baa 0x0147ec20
int UObject::sub_0147ec20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x0147ec30
int UObject::sub_0147ec30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_view_0147f0d0 {
    int sub_0147abe0();
};

// @baa 0x0147f0d0
undefined4 UObject::sub_0147f0d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0147f0d0 *)(((char *)this + 4)))->sub_0147abe0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_0147f100 {
    int sub_0040fcc0();
};

// @baa 0x0147f100
undefined4 UObject::sub_0147f100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0147f100 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_0147f130 {
    int sub_0147ea40(int);
};

// @baa 0x0147f130
undefined4 * UObject::sub_0147f130(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_0147f130 *)(((char *)this + 4)))->sub_0147ea40((int)(param_2 + 1));
  return param_1;
}

struct C_view_0147f230 {
    int sub_00547da0(int);
};

// @baa 0x0147f230
int URFMODSound::sub_0147f230(int param_2)
{
    int param_1 = (int)this;
  ((C_view_0147f230 *)(this))->sub_00547da0(param_2);
  ((C_view_0147f230 *)(((char *)this + 0xc)))->sub_00547da0(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

struct C_0147f560 {
    undefined4 sub_0147f560(byte);
    int sub_0040fcc0();
};

// @baa 0x0147f560
undefined4 C_0147f560::sub_0147f560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0147f560 *)(((char *)this + 0xc)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0147fc80 {
    undefined4 sub_0147fc80(byte);
};

int sub_0119b200(void);
// @baa 0x0147fc80
undefined4 C_0147fc80::sub_0147fc80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0119b200();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
