// UnrealEd_1290000.cpp (part 1 of 8): 97 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_01290000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01290000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01290000& operator++();
};

TConstSetBitIterator_01290000::TConstSetBitIterator_01290000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01290000
TConstSetBitIterator_01290000& TConstSetBitIterator_01290000::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a20(void);
extern undefined * g_02218f60;
// @baa 0x01290050
undefined4 * UObject::sub_01290050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02218f60);
  return param_1;
}

// @baa 0x01290070
IMPLEMENT_CLASS_AT(UUnrealEdKeyBindings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnrealEdEngine.cpp", 1049);

// @baa 0x012900e0
struct C {
    void sub_012911d0();
    int sub_0128f9d0(int);
};

// @baa 0x012911d0
void C::sub_012911d0(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x10))))->sub_0128f9d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_012911f0 {
    void sub_012911f0();
    int sub_0128fb40(int);
};

// @baa 0x012911f0
void C_012911f0::sub_012911f0(void)
{
    int param_1 = (int)this;
  ((C_012911f0 *)((*(char **)((char *)this + 0x10))))->sub_0128fb40(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01291210 {
    void sub_01291210();
    int sub_0128fca0(int);
};

// @baa 0x01291210
void C_01291210::sub_01291210(void)
{
    int param_1 = (int)this;
  ((C_01291210 *)((*(char **)((char *)this + 0x10))))->sub_0128fca0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_012915d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_012915d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_012915d0& operator++();
};

TConstSetBitIterator_012915d0::TConstSetBitIterator_012915d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x012915d0
TConstSetBitIterator_012915d0& TConstSetBitIterator_012915d0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0128fea0(void);
// @baa 0x01291ff0
int UUnrealEdEngine::sub_01291ff0(void)
{
    int param_1 = (int)this;

  sub_0128fea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0128ff00(void);
// @baa 0x01292010
int UUnrealEdEngine::sub_01292010(void)
{
    int param_1 = (int)this;

  sub_0128ff00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0127cbe0(void);
int sub_012918f0(...);
extern undefined4 g_026d4e14;
// @baa 0x01292030
int sub_01292030(void)
{
  if (g_026d4e14 == 0) {
    g_026d4e14 = sub_012918f0(L"UnrealEd");
    sub_0127cbe0();
  }
  return g_026d4e14;
}

struct C_view {
    int sub_01291ca0(int, int);
};

// @baa 0x01292210
void UUnrealEdEngine::sub_01292210(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01291ca0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_012922e0 {
    int sub_01291d60(int, int);
};

// @baa 0x012922e0
undefined4 UUnrealEdEngine::sub_012922e0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_012922e0 *)(this))->sub_01291d60(param_2, param_3);
  return param_1;
}

struct C_view_012923c0 {
    int sub_01291e80(int, int);
};

// @baa 0x012923c0
int UUnrealEdEngine::sub_012923c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_012923c0 *)(this))->sub_01291e80(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_012923e0 {
    int sub_01291ef0(int, int);
};

// @baa 0x012923e0
int UUnrealEdEngine::sub_012923e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_012923e0 *)(this))->sub_01291ef0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01292400 {
    int sub_01291f70(int, int);
};

// @baa 0x01292400
int UUnrealEdEngine::sub_01292400(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01292400 *)(this))->sub_01291f70(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x01292420
int UUnrealEdEngine::sub_01292420(void)
{
    int param_1 = (int)this;

  sub_0128fea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01292440
int UUnrealEdEngine::sub_01292440(void)
{
    int param_1 = (int)this;

  sub_0128ff00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_012920d0();
// @baa 0x01292690
void sub_01292690(void) { sub_012920d0(); }

// @baa 0x01294cb0
int UUnrealEdEngine::sub_01294cb0(void)
{
    int param_1 = (int)this;

  sub_0128ff00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005c7a70(...);
int sub_01294d40(void);
// @baa 0x01294dd0
undefined4 UUnrealEdOptions::sub_01294dd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01294d40();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x88);
  }
  return param_1;
}

// @baa 0x01299230
void sub_01299230(void) { sub_012920d0(); }

int sub_0127ca70(void);
int sub_0129aff0(...);
extern undefined4 g_026d4e10;
// @baa 0x0129b0b0
int sub_0129b0b0(void)
{
  if (g_026d4e10 == 0) {
    g_026d4e10 = sub_0129aff0(L"UnrealEd");
    sub_0127ca70();
  }
  return g_026d4e10;
}

struct C_0129cd70 { void sub_0129cd70(int a0); };

// @baa 0x0129cd70
void C_0129cd70::sub_0129cd70(int a0) { *(int*)((char*)this + 424) = a0; }

struct C_0129cd80 { int a, b; C_0129cd80(int, int); };

// @baa 0x0129cd80
C_0129cd80::C_0129cd80(int x, int y) : a(x), b(y) {}

// @baa 0x0129cda0
int sub_0129cda0(int a0, int a1) { return a1; }

// @baa 0x0129cdb0
int sub_0129cdb0(int a0, int a1) { return a1; }

// @baa 0x0129cdc0
int sub_0129cdc0(int a0, int a1) { return a1; }

// @baa 0x0129cdd0
int sub_0129cdd0(int a0, int a1) { return a1; }

// @baa 0x0129cde0
int sub_0129cde0(int a0, int a1) { return a1; }

extern char g_022232f0[];
struct C_0129d0f0 { void sub_0129d0f0(void); };

// @baa 0x0129d0f0
void C_0129d0f0::sub_0129d0f0(void) { *(int*)((char*)this + 0) = (int)g_022232f0; }

struct C_0129d140 { void sub_0129d140(void); };

// @baa 0x0129d140
void C_0129d140::sub_0129d140(void) { *(int*)((char*)this + 0) = (int)g_022232f0; }

extern char g_022232f8[];
struct C_0129d150 { C_0129d150* sub_0129d150(void); };

// @baa 0x0129d150
C_0129d150* C_0129d150::sub_0129d150(void) { *(int*)((char*)this + 0) = (int)g_022232f8; return this; }

struct C_0129d160 {
    char pad[16];
    int f10;
    bool sub_0129d160();
};

// @baa 0x0129d160
bool C_0129d160::sub_0129d160()
{
    return f10 >= 0;
}

extern char g_025e8d34[];
// @baa 0x0129d170
int sub_0129d170(void) { return (int)g_025e8d34; }

extern char g_026d5640[];
// @baa 0x0129d180
int sub_0129d180(void) { return (int)g_026d5640; }

extern char g_025e8d4c[];
// @baa 0x0129db40
int sub_0129db40(void) { return (int)g_025e8d4c; }

extern char g_026d57e0[];
// @baa 0x0129db50
int sub_0129db50(void) { return (int)g_026d57e0; }

// @baa 0x0129dc50
int sub_0129dc50(void) { return 1; }

extern char g_025e8d54[];
// @baa 0x0129dc60
int sub_0129dc60(void) { return (int)g_025e8d54; }

extern char g_026d580c[];
// @baa 0x0129dc70
int sub_0129dc70(void) { return (int)g_026d580c; }

extern char g_0221c96c[];
// @baa 0x0129dc90
int sub_0129dc90(void) { return (int)g_0221c96c; }

extern char g_026d5838[];
// @baa 0x0129dca0
int sub_0129dca0(void) { return (int)g_026d5838; }

extern char g_0221ce6c[];
// @baa 0x0129dcc0
int sub_0129dcc0(void) { return (int)g_0221ce6c; }

extern char g_026d5864[];
// @baa 0x0129dcd0
int sub_0129dcd0(void) { return (int)g_026d5864; }

struct C_0129dcf0 {
    undefined1 sub_0129dcf0();
};

// @baa 0x0129dcf0
undefined1 C_0129dcf0::sub_0129dcf0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x398);
}

extern char g_0221da90[];
// @baa 0x0129dd30
int sub_0129dd30(void) { return (int)g_0221da90; }

extern char g_026d58a8[];
// @baa 0x0129dd40
int sub_0129dd40(void) { return (int)g_026d58a8; }

extern char g_0222424c[];
struct C_0129dd50 { C_0129dd50* sub_0129dd50(void); };

// @baa 0x0129dd50
C_0129dd50* C_0129dd50::sub_0129dd50(void) { *(int*)((char*)this + 0) = (int)g_0222424c; return this; }

// @baa 0x0129dea0
void sub_0129dea0(void) {  }

// @baa 0x0129dee0
void __stdcall sub_0129dee0(int a0) {  }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_0129e2e0;
};

struct C_0129e2e0 {
    void sub_0129e2e0(wxCommandEvent *);
};

// @baa 0x0129e2e0
void C_0129e2e0::sub_0129e2e0(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 0x368) = (uint)bVar1;
  *(uint *)(*(int *)(param_1 + 0x314) + 0x3ac) = (uint)bVar1;
  return;
}

// @baa 0x0129e900
void __stdcall sub_0129e900(int a0) {  }

// @baa 0x0129e910
void __stdcall sub_0129e910(int a0) {  }

// @baa 0x0129e920
void __stdcall sub_0129e920(int a0, int a1) {  }

// @baa 0x0129e9b0
void sub_0129e9b0(void) {  }

// @baa 0x0129e9c0
void sub_0129e9c0(void) {  }

struct C_0129e9d0 { void sub_0129e9d0(int a0); };

// @baa 0x0129e9d0
void C_0129e9d0::sub_0129e9d0(int a0) { *(int*)((char*)this + 836) = a0; }

extern char g_02221a94[];
// @baa 0x0129ea00
int sub_0129ea00(void) { return (int)g_02221a94; }

// @baa 0x0129ea10
int sub_0129ea10(void) { return 0; }

struct C_0129ea20 { int sub_0129ea20(void); };

// @baa 0x0129ea20
int C_0129ea20::sub_0129ea20(void) { return *(int*)((char*)this + 4); }

struct C_0129ea30 { int sub_0129ea30(void); };

// @baa 0x0129ea30
int C_0129ea30::sub_0129ea30(void) { return *(int*)((char*)this + 4); }

struct C_0129ea40 { int sub_0129ea40(void); };

// @baa 0x0129ea40
int C_0129ea40::sub_0129ea40(void) { return *(int*)((char*)this + 4); }

struct C_0129ea50 { int sub_0129ea50(void); };

// @baa 0x0129ea50
int C_0129ea50::sub_0129ea50(void) { return *(int*)((char*)this + 4); }

struct C_0129ea60 { int sub_0129ea60(void); };

// @baa 0x0129ea60
int C_0129ea60::sub_0129ea60(void) { return *(int*)((char*)this + 4); }

struct A_0129eaa0 { virtual void sub_012a0490(); char pad[320]; };

struct B_0129eaa0 { virtual void sub_012a0490(); };

struct C_0129eaa0 : A_0129eaa0, B_0129eaa0 { virtual void sub_012a0490(); C_0129eaa0(); };

C_0129eaa0::C_0129eaa0() {}

// @baa 0x0129eaa0
void C_0129eaa0::sub_012a0490() {}

struct A_0129eab0 { virtual void sub_012a06a0(); char pad[408]; };

struct B_0129eab0 { virtual void sub_012a06a0(); };

struct C_0129eab0 : A_0129eab0, B_0129eab0 { virtual void sub_012a06a0(); C_0129eab0(); };

C_0129eab0::C_0129eab0() {}

// @baa 0x0129eab0
void C_0129eab0::sub_012a06a0() {}

struct V_0129eac0 {
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
    virtual void g();
};

// @baa 0x0129eac0
void (V_0129eac0::*sub_0129eac0)() = &V_0129eac0::g;

// @baa 0x0129eaf0
float10 sub_0129eaf0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x0129eb80
undefined2 sub_0129eb80(void)
{
  return 0x69;
}

// @baa 0x0129eb90
undefined2 sub_0129eb90(void)
{
  return 0x73;
}

struct C_0129eba0 { void sub_0129eba0(int a0); };

// @baa 0x0129eba0
void C_0129eba0::sub_0129eba0(int a0) { *(int*)((char*)this + 780) = a0; }

// @baa 0x0129ebb0
int sub_0129ebb0(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0129ebc0
void sub_0129ebc0(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_02158c10[];
// @baa 0x0129ebe0
int sub_0129ebe0(void) { return (int)g_02158c10; }

// @baa 0x0129ebf0
int sub_0129ebf0(int a0, int a1) { return a1; }

void sub_00c38ac0();
// @baa 0x0129ec60
void sub_0129ec60(void) { sub_00c38ac0(); }

// @baa 0x0129ec70
int sub_0129ec70(int a0, int a1) { return a1; }

struct C_0129ec80 {
    undefined4 * sub_0129ec80(byte);
};

int sub_0053dfa0(...);
// @baa 0x0129ec80
undefined4 * C_0129ec80::sub_0129ec80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022232f0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0129ecd0 {
    undefined4 * sub_0129ecd0(byte);
};

// @baa 0x0129ecd0
undefined4 * C_0129ecd0::sub_0129ecd0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022232f0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0129ecf0 { C_0129ecf0* sub_0129ecf0(int a0); };

// @baa 0x0129ecf0
C_0129ecf0* C_0129ecf0::sub_0129ecf0(int a0) { *(int*)((char*)this + 0) = (int)g_022232f8; return this; }

struct C_0129ed00 { int sub_0129ed00(void); };

// @baa 0x0129ed00
int C_0129ed00::sub_0129ed00(void) { return *(int*)((char*)this + 488); }

// @baa 0x0129ed10
void sub_0129ed10(void) {  }

// @baa 0x0129ed20
void sub_0129ed20(void) {  }

// @baa 0x0129ed30
void sub_0129ed30(void) {  }

// @baa 0x0129ed40
void sub_0129ed40(void) {  }

// @baa 0x0129ed50
void __stdcall sub_0129ed50(int a0) {  }

struct C_0129ed60 { C_0129ed60* sub_0129ed60(int a0); };

// @baa 0x0129ed60
C_0129ed60* C_0129ed60::sub_0129ed60(int a0) { return this; }

struct C_0129ed70 {
    int sub_0129ed70(int);
};

// @baa 0x0129ed70
int C_0129ed70::sub_0129ed70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0129ed80 { int sub_0129ed80(void); };

// @baa 0x0129ed80
int C_0129ed80::sub_0129ed80(void) { return *(int*)((char*)this + 0); }

struct C_0129ed90 { int sub_0129ed90(void); };

// @baa 0x0129ed90
int C_0129ed90::sub_0129ed90(void) { return *(int*)((char*)this + 0); }

struct C_0129eda0 { int sub_0129eda0(void); };

// @baa 0x0129eda0
int C_0129eda0::sub_0129eda0(void) { return *(int*)((char*)this + 0); }

struct C_0129edb0 { int sub_0129edb0(void); };

// @baa 0x0129edb0
int C_0129edb0::sub_0129edb0(void) { return *(int*)((char*)this + 0); }

// @baa 0x0129f070
int UTexAlignerPlanar::vf_000(void) { return 1; }

// @baa 0x0129f3e0
int UTexAlignerDefault::vf_000(void) { return 1; }

// @baa 0x0129f560
int UTexAlignerBox::vf_000(void) { return 1; }

// @baa 0x0129f690
int UTexAlignerFit::vf_000(void) { return 1; }
