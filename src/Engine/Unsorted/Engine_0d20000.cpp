// Engine_0d20000.cpp (part 1 of 3): 63 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d20060
int USelection::vf_000(void) { return 1; }

// @baa 0x00d20070
bool USelection::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00629c10(...);
int sub_0062d5a0(...);
extern undefined4 g_025d6818;
// @baa 0x00d200b0
int sub_00d200b0(void)
{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iVar1 = g_025d6818;
  iStack_4 = 0;
  uVar2 = sub_00629c10(L"-gABC=",&iStack_4);
  sub_0062d5a0(uVar2);
  if (iStack_4 == 0) {
    iStack_4 = iVar1;
  }
  return iStack_4;
}

// @baa 0x00d20120
void AGameInfo::vf_368(void) {  }

struct V_00d20130 {
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
    virtual void g();
    void sub_00d20130();
};

// @baa 0x00d20130
void V_00d20130::sub_00d20130() { g(); }

struct C {
    void sub_00d20240(int *);
};

// @baa 0x00d20240
void C::sub_00d20240(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x38);
  param_2[1] = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x3c);
  return;
}

struct C_00d20840 { int sub_00d20840(void); };

// @baa 0x00d20840
int C_00d20840::sub_00d20840(void) { return *(int*)((char*)this + 4); }

struct C_00d20850 { int sub_00d20850(void); };

// @baa 0x00d20850
int C_00d20850::sub_00d20850(void) { return *(int*)((char*)this + 4); }

struct C_00d20860 { int sub_00d20860(void); };

// @baa 0x00d20860
int C_00d20860::sub_00d20860(void) { return *(int*)((char*)this + 4); }

struct C_00d20870 { int a, b, c; C_00d20870(); };

// @baa 0x00d20870
C_00d20870::C_00d20870() : a(0), b(0), c(0) {}

struct C_00d20880 { int sub_00d20880(void); };

// @baa 0x00d20880
int C_00d20880::sub_00d20880(void) { return *(int*)((char*)this + 4); }

struct C_00d20890 { int sub_00d20890(void); };

// @baa 0x00d20890
int C_00d20890::sub_00d20890(void) { return *(int*)((char*)this + 4); }

struct C_00d208a0 { int sub_00d208a0(void); };

// @baa 0x00d208a0
int C_00d208a0::sub_00d208a0(void) { return *(int*)((char*)this + 4); }

struct C_00d208b0 { int a, b, c; C_00d208b0(); };

// @baa 0x00d208b0
C_00d208b0::C_00d208b0() : a(0), b(0), c(0) {}

struct C_00d208c0 { int sub_00d208c0(void); };

// @baa 0x00d208c0
int C_00d208c0::sub_00d208c0(void) { return *(int*)((char*)this + 4); }

struct C_00d208d0 { int sub_00d208d0(void); };

// @baa 0x00d208d0
int C_00d208d0::sub_00d208d0(void) { return *(int*)((char*)this + 4); }

struct C_00d208e0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d208e0(INT Index);
};

// @baa 0x00d208e0
UBOOL C_00d208e0::sub_00d208e0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d20900 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d20900(INT Index);
};

// @baa 0x00d20900
UBOOL C_00d20900::sub_00d20900(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d20920 { int a, b, c; C_00d20920(); };

// @baa 0x00d20920
C_00d20920::C_00d20920() : a(0), b(0), c(0) {}

struct C_00d20930 { int a, b, c; C_00d20930(); };

// @baa 0x00d20930
C_00d20930::C_00d20930() : a(0), b(0), c(0) {}

struct C_00d209b0 { int a, b, c; C_00d209b0(); };

// @baa 0x00d209b0
C_00d209b0::C_00d209b0() : a(0), b(0), c(0) {}

struct C_00d209c0 { int sub_00d209c0(void); };

// @baa 0x00d209c0
int C_00d209c0::sub_00d209c0(void) { return *(int*)((char*)this + 4); }

struct C_00d209d0 { int a, b, c; C_00d209d0(); };

// @baa 0x00d209d0
C_00d209d0::C_00d209d0() : a(0), b(0), c(0) {}

struct C_00d209e0 { int sub_00d209e0(void); };

// @baa 0x00d209e0
int C_00d209e0::sub_00d209e0(void) { return *(int*)((char*)this + 4); }

struct T_00d209f0 { int x; };

// @baa 0x00d209f0
template T_00d209f0& TIndirectArray<T_00d209f0>::operator()(INT);

struct T_00d20a40 { int x; };

// @baa 0x00d20a40
template T_00d20a40& TIndirectArray<T_00d20a40>::operator()(INT);

struct C_00d20a90 { int sub_00d20a90(void); };

// @baa 0x00d20a90
int C_00d20a90::sub_00d20a90(void) { return *(int*)((char*)this + 4); }

struct C_00d20aa0 { int a, b, c; C_00d20aa0(); };

// @baa 0x00d20aa0
C_00d20aa0::C_00d20aa0() : a(0), b(0), c(0) {}

struct C_00d20ab0 { int sub_00d20ab0(void); };

// @baa 0x00d20ab0
int C_00d20ab0::sub_00d20ab0(void) { return *(int*)((char*)this + 4); }

struct C_00d20ac0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00d20ac0* sub_00d20ac0(INT value);
};

// @baa 0x00d20ac0
C_00d20ac0* C_00d20ac0::sub_00d20ac0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00d20ae0 {
    char pad[4];
    int f4;
    C_00d20ae0& sub_00d20ae0();
};

// @baa 0x00d20ae0
C_00d20ae0& C_00d20ae0::sub_00d20ae0()
{
    f4++;
    return *this;
}

struct C_00d20af0 { int a, b, c; C_00d20af0(); };

// @baa 0x00d20af0
C_00d20af0::C_00d20af0() : a(0), b(0), c(0) {}

struct C_00d20b00 { int sub_00d20b00(void); };

// @baa 0x00d20b00
int C_00d20b00::sub_00d20b00(void) { return *(int*)((char*)this + 4); }

// @baa 0x00d21260
int __stdcall sub_00d21260(int a0) { return 0; }

// @baa 0x00d21270
int sub_00d21270(void) { return 4; }

struct C_00d21310 {
    void sub_00d21310(int);
};

// @baa 0x00d21310
void C_00d21310::sub_00d21310(int param_2)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\x01') {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  }
  return;
}

struct C_00d21320 {
    void sub_00d21320(float);
};

// @baa 0x00d21320
void C_00d21320::sub_00d21320(float param_2)
{
    char * param_1 = (char *)this;
  if (*param_1 == '\x05') {
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - param_2;
  }
  return;
}

struct C_00d21340 {
    void sub_00d21340(int);
};

// @baa 0x00d21340
void C_00d21340::sub_00d21340(int param_2)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\x01') {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  }
  return;
}

void sub_00572b30();
// @baa 0x00d21350
void sub_00d21350(void) { sub_00572b30(); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00d21420(INT Index) const;
};

// @baa 0x00d21420
const DWORD* S::sub_00d21420(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[16]; };

struct S_00d21470 {
    TArray<E> Items; // 0x00
    const E* sub_00d21470(INT Index) const;
};

// @baa 0x00d21470
const E* S_00d21470::sub_00d21470(INT Index) const
{
    return &Items(Index);
}

struct E_00d214c0 { BYTE Bytes[20]; };

struct S_00d214c0 {
    TArray<E_00d214c0> Items; // 0x00
    const E_00d214c0* sub_00d214c0(INT Index) const;
};

// @baa 0x00d214c0
const E_00d214c0* S_00d214c0::sub_00d214c0(INT Index) const
{
    return &Items(Index);
}

struct E_00d21580 { BYTE Bytes[44]; };

struct S_00d21580 {
    TArray<E_00d21580> Items; // 0x00
    const E_00d21580* sub_00d21580(INT Index) const;
};

// @baa 0x00d21580
const E_00d21580* S_00d21580::sub_00d21580(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00d215d0
void sub_00d215d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_00d259f0 { C_00d259f0* sub_00d259f0(void); };

// @baa 0x00d259f0
C_00d259f0* C_00d259f0::sub_00d259f0(void) { return this; }

void sub_00d23580();
// @baa 0x00d25a00
void sub_00d25a00(void) { sub_00d23580(); }

struct M_00d278f0 { void sub_0040fcc0(); };

struct C_00d278f0 { char pad[8]; M_00d278f0 m; void sub_00d278f0(); };

// @baa 0x00d278f0
void C_00d278f0::sub_00d278f0() { m.sub_0040fcc0(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00d28db0 { void* Data; int Num; int Max; void sub_00d28db0(); };

// @baa 0x00d28db0
void C_00d28db0::sub_00d28db0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d28e10 { void* Data; int Num; int Max; void sub_00d28e10(); };

// @baa 0x00d28e10
void C_00d28e10::sub_00d28e10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d28e70 {
    void sub_00d28e70(int);
};

int sub_0053df70(...);
// @baa 0x00d28e70
void C_00d28e70::sub_00d28e70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xd,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00d28eb0 { void* Data; int Num; int Max; void sub_00d28eb0(); };

// @baa 0x00d28eb0
void C_00d28eb0::sub_00d28eb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00d28f10
undefined4 * UObject::sub_00d28f10(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct M_00d28fa0 { void sub_00d28e10(); };

struct C_00d28fa0 { char pad[24]; M_00d28fa0 m; void sub_00d28fa0(); };

// @baa 0x00d28fa0
void C_00d28fa0::sub_00d28fa0() { m.sub_00d28e10(); }

struct C_00d29170 {
    undefined4 sub_00d29170(byte);
};

int sub_0053dfa0(...);
int sub_00547480(void);
// @baa 0x00d29170
undefined4 C_00d29170::sub_00d29170(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00547480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d29190 {
    undefined4 sub_00d29190(byte);
    int sub_0040fcc0();
};

// @baa 0x00d29190
undefined4 C_00d29190::sub_00d29190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d29190 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00d291c0 { void sub_0040fcc0(); };

struct C_00d291c0 { char pad[12]; M_00d291c0 m; void sub_00d291c0(); };

// @baa 0x00d291c0
void C_00d291c0::sub_00d291c0() { m.sub_0040fcc0(); }

struct C_00d291e0 {
    int sub_00d291e0();
};

// @baa 0x00d291e0
int C_00d291e0::sub_00d291e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d291f0 {
    int sub_00d291f0();
};

// @baa 0x00d291f0
int C_00d291f0::sub_00d291f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

void sub_00d28db0();
// @baa 0x00d29d90
void sub_00d29d90(void) { sub_00d28db0(); }

// @baa 0x00d29e80
IMPLEMENT_CLASS_AT(UOnlineStats, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 7);

// @baa 0x00d29ef0
struct C_00d29f10 {
    undefined4 sub_00d29f10(byte);
};

int sub_00d25ae0(void);
// @baa 0x00d29f10
undefined4 C_00d29f10::sub_00d29f10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d25ae0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d291d0
{
    INT field_00;
    INT field_04;
    INT field_08;
    INT field_0c;
    INT field_10;
    INT Value;

    INT* sub_00d291d0(INT* Out);
};

// @baa 0x00d291d0
INT* C_00d291d0::sub_00d291d0(INT* Out)
{
    *Out = Value;
    return Out;
}
