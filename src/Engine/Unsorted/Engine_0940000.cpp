// Engine_0940000.cpp (part 1 of 6): 450 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_0093dda0();
// @baa 0x00940ea0
void sub_00940ea0(void) { sub_0093dda0(); }

void sub_00940cb0();
// @baa 0x00940eb0
void sub_00940eb0(void) { sub_00940cb0(); }

int sub_0053dfa0(...);
int sub_00941740(void);
// @baa 0x009417d0
undefined4 UObject::sub_009417d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00941740();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009417f0
void sub_009417f0(void) { sub_00940cb0(); }

struct C_view {
    int sub_00940620(int);
};

// @baa 0x00941800
undefined4 * UObject::sub_00941800(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_view *)(((char *)this + 8)))->sub_00940620((int)(param_2 + 2));
  return param_1;
}

// @baa 0x00941830
undefined4 UObject::sub_00941830(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00941740();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00941c60 {
    int sub_00941ae0(int);
};

// @baa 0x00941c60
int USkeletalMeshComponent::sub_00941c60(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_00941c60 *)(this))->sub_00941ae0(param_2);
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return param_1;
}

struct C_view_00942190 {
    int sub_00941a60(int);
};

// @baa 0x00942190
void USkeletalMeshComponent::sub_00942190(void)
{
    int param_1 = (int)this;
  ((C_view_00942190 *)((*(char **)((char *)this + 0x10))))->sub_00941a60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00936630(void);
// @baa 0x00942210
int USkeletalMeshComponent::sub_00942210(void)
{
    int param_1 = (int)this;

  sub_00936630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_009421b0();
// @baa 0x00942b60
void sub_00942b60(void) { sub_009421b0(); }

// @baa 0x00942b70
int USkeletalMeshComponent::sub_00942b70(void)
{
    int param_1 = (int)this;

  sub_00936630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00942af0();
// @baa 0x00942b90
void sub_00942b90(void) { sub_00942af0(); }

struct C_view_00943240 {
    int sub_009421b0(int);
};

// @baa 0x00943240
void USkeletalMeshComponent::sub_00943240(void)
{
    int param_1 = (int)this;
  ((C_view_00943240 *)(this))->sub_009421b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

// @baa 0x00943250
int USkeletalMeshComponent::sub_00943250(void)
{
    int param_1 = (int)this;

  sub_00936630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00943270
void sub_00943270(void) { sub_00942af0(); }

// @baa 0x009432a0
int USkeletalMeshComponent::sub_009432a0(void)
{
    int param_1 = (int)this;

  sub_00936630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x009432c0
void sub_009432c0(void) { sub_00942af0(); }

// @baa 0x009432e0
void sub_009432e0(void) {  }

// @baa 0x009432f0
void sub_009432f0(void) {  }

// @baa 0x00943310
int sub_00943310(int param_1, int param_2)
{
  return param_2 * 0x17 + param_1;
}

// @baa 0x00943880
int sub_00943880(int a0, int a1) { return a1; }

// @baa 0x00943890
int sub_00943890(int a0, int a1) { return a1; }

// @baa 0x009438a0
int sub_009438a0(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x009438b0
int sub_009438b0(void) { return (int)g_01e3f3e0; }

// @baa 0x009438c0
int sub_009438c0(int a0, int a1) { return a1; }

// @baa 0x009438d0
int sub_009438d0(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x009438e0
void sub_009438e0(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_005c7a20(void);
extern undefined * g_01f86998;
// @baa 0x00943900
undefined4 * UObject::sub_00943900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f86998);
  return param_1;
}

// @baa 0x00943920
IMPLEMENT_CLASS_AT(USkeletalMeshSocket, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 28);

// @baa 0x00943980
// @baa 0x009439c0
void sub_009439c0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_view_00944a00 {
    int sub_00772150(int);
    int sub_00759430(int);
};

// @baa 0x00944a00
void ASkeletalMeshActor::ForceUpdateComponents(UBOOL param_2, UBOOL param_3)
{
    int param_1 = (int)this;
  ((C_view_00944a00 *)(this))->sub_00772150(param_3);
  if (((param_2 == 0) || ((*(uint *)(*(int *)(param_1 + 0x1ac) + 0x334) & 0x1000) != 0)) ||
     ((*(byte *)(*(int *)(param_1 + 0x1ac) + 0x358) & 1) != 0)) {
    ((C_view_00944a00 *)(this))->sub_00759430(param_2);
  }
  return;
}

// @baa 0x00944a40
undefined4 ASkeletalMeshActor::vf_178(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x1ac) + 0x194) & 0x200) == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00944a70
void ASkeletalMeshActor::vf_270(int a0) {  }

// @baa 0x00944ab0
int ASkeletalMeshActor::vf_284(void) { return *(int*)((char*)this + 436); }

// @baa 0x00944ac0
undefined4 ASkeletalMeshActor::vf_288(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(int *)(param_1 + 0x1e4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x1e4) + 0x1b0), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x134);
  }
  return 0;
}

// @baa 0x00944ae0
void ASkeletalMeshActor::vf_344(int a0) {  }

struct V_00944af0 {
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
    virtual void g(int a0);
    void sub_00944af0(int a0);
};

// @baa 0x00944af0
void V_00944af0::sub_00944af0(int a0) { g(a0); }

extern char g_01ebb560[];
struct C_00944d60 { void sub_00944d60(void); };

// @baa 0x00944d60
void C_00944d60::sub_00944d60(void) { *(int*)((char*)this + 0) = (int)g_01ebb560; }

// @baa 0x00944d70
int __stdcall sub_00944d70(int a0) { return 0; }

// @baa 0x00944d80
void __stdcall sub_00944d80(int a0) {  }

// @baa 0x00944d90
void __stdcall sub_00944d90(int a0) {  }

struct C_00944db0 {
    undefined4 * sub_00944db0(byte);
};

// @baa 0x00944db0
undefined4 * C_00944db0::sub_00944db0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb560);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f86c40[];
struct C_00944dd0 { C_00944dd0* sub_00944dd0(void); };

// @baa 0x00944dd0
C_00944dd0* C_00944dd0::sub_00944dd0(void) { *(int*)((char*)this + 0) = (int)g_01f86c40; return this; }

struct C_00944de0 { void sub_00944de0(void); };

// @baa 0x00944de0
void C_00944de0::sub_00944de0(void) { *(int*)((char*)this + 0) = (int)g_01f86c40; }

struct C_00944df0 {
    undefined4 * sub_00944df0(byte);
};

// @baa 0x00944df0
undefined4 * C_00944df0::sub_00944df0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f86c40);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f7c338[];
// @baa 0x00945380
int sub_00945380(void) { return (int)g_01f7c338; }

struct C_00945390 { C_00945390* sub_00945390(void); };

// @baa 0x00945390
C_00945390* C_00945390::sub_00945390(void) { return this; }

extern undefined4 g_025e30f8;
// @baa 0x009453a0
undefined4 USkeletalMeshComponent::vf_24c(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(*(int *)(param_1 + 0x1b0) + 0x130) & 0x20) == 0) && (g_025e30f8 == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00945730
void sub_00945730(void) {  }

struct C_009457c0 {
    void sub_009457c0();
};

int sub_0071a040(...);
// @baa 0x009457c0
void C_009457c0::sub_009457c0(void)
{
    int param_1 = (int)this;

  sub_0071a040(param_1 + 0x10);
  return;
}

struct Inner {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    void sub_009457d0();
    virtual void v6();
};

struct Outer {
    char pad[0x10];
    Inner in;
    void sub_009457d0();
};

// @baa 0x009457d0
void Outer::sub_009457d0()
{
    in.v6();
}

extern char g_01f7cb10[];
// @baa 0x00945820
int sub_00945820(void) { return (int)g_01f7cb10; }

extern char g_01ebb554[];
struct C_00945830 { void sub_00945830(void); };

// @baa 0x00945830
void C_00945830::sub_00945830(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945840 {
    undefined4 * sub_00945840(byte);
};

// @baa 0x00945840
undefined4 * C_00945840::sub_00945840(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f7e038[];
// @baa 0x00945ad0
int sub_00945ad0(void) { return (int)g_01f7e038; }

struct C_00945ae0 { void sub_00945ae0(void); };

// @baa 0x00945ae0
void C_00945ae0::sub_00945ae0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945af0 {
    undefined4 * sub_00945af0(byte);
};

// @baa 0x00945af0
undefined4 * C_00945af0::sub_00945af0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f7e2e8[];
// @baa 0x00945b30
int sub_00945b30(void) { return (int)g_01f7e2e8; }

struct C_00945b40 { void sub_00945b40(void); };

// @baa 0x00945b40
void C_00945b40::sub_00945b40(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945b50 {
    undefined4 * sub_00945b50(byte);
};

// @baa 0x00945b50
undefined4 * C_00945b50::sub_00945b50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00945b70 {
    int sub_00945b70();
};

// @baa 0x00945b70
int C_00945b70::sub_00945b70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x38) != 0) {
    return *(int *)(param_1 + 0x38) + 0x10;
  }
  return 0;
}

struct C_00945b80 {
    int sub_00945b80();
};

// @baa 0x00945b80
int C_00945b80::sub_00945b80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x38) != 0) {
    return *(int *)(param_1 + 0x38) + 0xac;
  }
  return 0;
}

struct C_00945cb0 {
    char pad[12];
    int f1;
    int f2;
    C_00945cb0* sub_00945cb0();
};

// @baa 0x00945cb0
C_00945cb0* C_00945cb0::sub_00945cb0()
{
    f1 = 0;
    f2 = 0;
    return this;
}

extern char g_01f7e960[];
// @baa 0x00945d00
int sub_00945d00(void) { return (int)g_01f7e960; }

struct C_00945d10 { void sub_00945d10(void); };

// @baa 0x00945d10
void C_00945d10::sub_00945d10(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945d20 {
    undefined4 * sub_00945d20(byte);
};

// @baa 0x00945d20
undefined4 * C_00945d20::sub_00945d20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f7ec08[];
// @baa 0x00945db0
int sub_00945db0(void) { return (int)g_01f7ec08; }

extern char g_01f7f7f4[];
// @baa 0x00945de0
int sub_00945de0(void) { return (int)g_01f7f7f4; }

extern char g_01f7f830[];
// @baa 0x00945e20
int sub_00945e20(void) { return (int)g_01f7f830; }

extern char g_01f7f864[];
// @baa 0x00945e50
int sub_00945e50(void) { return (int)g_01f7f864; }

extern char g_01f7f8a0[];
// @baa 0x00945e90
int sub_00945e90(void) { return (int)g_01f7f8a0; }

struct C_00945ea0 { void sub_00945ea0(void); };

// @baa 0x00945ea0
void C_00945ea0::sub_00945ea0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945eb0 { void sub_00945eb0(void); };

// @baa 0x00945eb0
void C_00945eb0::sub_00945eb0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945ec0 { void sub_00945ec0(void); };

// @baa 0x00945ec0
void C_00945ec0::sub_00945ec0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945ed0 { void sub_00945ed0(void); };

// @baa 0x00945ed0
void C_00945ed0::sub_00945ed0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945ee0 {
    undefined4 * sub_00945ee0(byte);
};

// @baa 0x00945ee0
undefined4 * C_00945ee0::sub_00945ee0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00945f00 {
    undefined4 * sub_00945f00(byte);
};

// @baa 0x00945f00
undefined4 * C_00945f00::sub_00945f00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00945f20 {
    undefined4 * sub_00945f20(byte);
};

// @baa 0x00945f20
undefined4 * C_00945f20::sub_00945f20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00945f40 {
    undefined4 * sub_00945f40(byte);
};

// @baa 0x00945f40
undefined4 * C_00945f40::sub_00945f40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f7ffbc[];
// @baa 0x00945f90
int sub_00945f90(void) { return (int)g_01f7ffbc; }

extern char g_01f7fff8[];
// @baa 0x00945fd0
int sub_00945fd0(void) { return (int)g_01f7fff8; }

struct C_00945fe0 { void sub_00945fe0(void); };

// @baa 0x00945fe0
void C_00945fe0::sub_00945fe0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00945ff0 { void sub_00945ff0(void); };

// @baa 0x00945ff0
void C_00945ff0::sub_00945ff0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00946000 {
    undefined4 * sub_00946000(byte);
};

// @baa 0x00946000
undefined4 * C_00946000::sub_00946000(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00946020 {
    undefined4 * sub_00946020(byte);
};

// @baa 0x00946020
undefined4 * C_00946020::sub_00946020(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00946040 {
    int sub_00946040();
};

// @baa 0x00946040
int C_00946040::sub_00946040(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x48) != 0) {
    return *(int *)(param_1 + 0x48) + 0x10;
  }
  return 0;
}

// @baa 0x00946050
int sub_00946050(void) { return 0; }

// @baa 0x00946060
IMPLEMENT_CLASS_AT(AStaticMeshActorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 10);

// @baa 0x00946170
int AStaticMeshActorBase::vf_000(void) { return 1; }

// @baa 0x00946180
bool AStaticMeshActorBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009461c0
int AStaticMeshActor::vf_000(void) { return 1; }

// @baa 0x009461f0
IMPLEMENT_CLASS_AT(ADynamicSMActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 13);

// @baa 0x00946300
int ADynamicSMActor::vf_000(void) { return 1; }

// @baa 0x00946310
bool ADynamicSMActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00946350
IMPLEMENT_CLASS_AT(UStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 14);

// @baa 0x00946460
int UStaticMesh::vf_000(void) { return 1; }

// @baa 0x00946470
bool UStaticMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009464b0
IMPLEMENT_CLASS_AT(AStaticMeshActorBasedOnExtremeContent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 15);

// @baa 0x009465c0
int AStaticMeshActorBasedOnExtremeContent::vf_000(void) { return 1; }

// @baa 0x009465d0
bool AStaticMeshActorBasedOnExtremeContent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00946610
uint ADynamicSMActor::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1a8) + 0x194) >> 9 & 1;
}

// @baa 0x00946630
int sub_00946630(void) { return 368; }

extern char g_01f86ad4[];
struct C_00946ca0 { C_00946ca0* sub_00946ca0(void); };

// @baa 0x00946ca0
C_00946ca0* C_00946ca0::sub_00946ca0(void) { *(int*)((char*)this + 0) = (int)g_01f86ad4; return this; }

extern char g_01f81498[];
// @baa 0x00946f70
int sub_00946f70(void) { return (int)g_01f81498; }

struct C_00946f80 { void sub_00946f80(void); };

// @baa 0x00946f80
void C_00946f80::sub_00946f80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00946f90 { void sub_00946f90(void); };

// @baa 0x00946f90
void C_00946f90::sub_00946f90(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00946fa0 {
    undefined4 * sub_00946fa0(byte);
};

// @baa 0x00946fa0
undefined4 * C_00946fa0::sub_00946fa0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00946fc0 {
    undefined4 * sub_00946fc0(byte);
};

// @baa 0x00946fc0
undefined4 * C_00946fc0::sub_00946fc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00946fe0 {
    void sub_00946fe0();
};

// @baa 0x00946fe0
void C_00946fe0::sub_00946fe0(void)
{
    int param_1 = (int)this;

  sub_0071a040(param_1 + 0x88);
  sub_0071a040(param_1 + 0xbc);
  sub_0071a040(param_1);
  sub_0071a040(param_1 + 0x30);
  sub_0071a040(param_1 + 0x5c);
  sub_0071a040(param_1 + 0x138);
  sub_0071a040(param_1 + 0x378);
  return;
}

// @baa 0x009470b0
void UStaticMesh::vf_05c(void) {  }

// @baa 0x00947340
uint AStaticMeshActor::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1ac) + 0x194) >> 9 & 1;
}

// @baa 0x009473e0
undefined4 UStaticMeshComponent::vf_24c(void)
{
    int param_1 = (int)this;

  if ((*(int *)(*(int *)(param_1 + 0x1b4) + 0xd4) == 0) && (g_025e30f8 == 0)) {
    return 0;
  }
  return 1;
}

typedef uint size_t;

struct C_view_00947480 {
    int sub_005c2270(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00947480
int UObject::sub_00947480(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view_00947480 *)(this))->sub_005c2270(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

// @baa 0x009474c0
bool sub_009474c0(int * param_1)
{
  return *param_1 != 0;
}

struct C_009474d0 { int sub_009474d0(void); };

// @baa 0x009474d0
int C_009474d0::sub_009474d0(void) { return *(int*)((char*)this + 4); }

struct C_009474e0 { int sub_009474e0(void); };

// @baa 0x009474e0
int C_009474e0::sub_009474e0(void) { return *(int*)((char*)this + 4); }

struct C_009474f0 { int sub_009474f0(void); };

// @baa 0x009474f0
int C_009474f0::sub_009474f0(void) { return *(int*)((char*)this + 4); }

struct C_00947500 { int a, b, c; C_00947500(); };

// @baa 0x00947500
C_00947500::C_00947500() : a(0), b(0), c(0) {}

struct C_00947580 { int a, b, c; C_00947580(); };

// @baa 0x00947580
C_00947580::C_00947580() : a(0), b(0), c(0) {}

struct C_00947590 { int sub_00947590(void); };

// @baa 0x00947590
int C_00947590::sub_00947590(void) { return *(int*)((char*)this + 4); }

struct C_009475a0 { int a, b, c; C_009475a0(); };

// @baa 0x009475a0
C_009475a0::C_009475a0() : a(0), b(0), c(0) {}

struct C_009475b0 { int sub_009475b0(void); };

// @baa 0x009475b0
int C_009475b0::sub_009475b0(void) { return *(int*)((char*)this + 4); }

struct C_009475c0 { int a, b, c; C_009475c0(); };

// @baa 0x009475c0
C_009475c0::C_009475c0() : a(0), b(0), c(0) {}

struct C_009475d0 { int a, b, c; C_009475d0(); };

// @baa 0x009475d0
C_009475d0::C_009475d0() : a(0), b(0), c(0) {}

struct C_009475e0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_009475e0(INT Index);
};

// @baa 0x009475e0
UBOOL C_009475e0::sub_009475e0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00947600 { int a, b, c; C_00947600(); };

// @baa 0x00947600
C_00947600::C_00947600() : a(0), b(0), c(0) {}

struct C_00947610 { int sub_00947610(void); };

// @baa 0x00947610
int C_00947610::sub_00947610(void) { return *(int*)((char*)this + 4); }

struct C_00947620 { int a, b, c; C_00947620(); };

// @baa 0x00947620
C_00947620::C_00947620() : a(0), b(0), c(0) {}

struct C_00947970 { int sub_00947970(void); };

// @baa 0x00947970
int C_00947970::sub_00947970(void) { return *(int*)((char*)this + 4); }

struct C_00947bd0 { int a, b, c; C_00947bd0(); };

// @baa 0x00947bd0
C_00947bd0::C_00947bd0() : a(0), b(0), c(0) {}

struct C_00947be0 { int a, b, c; C_00947be0(); };

// @baa 0x00947be0
C_00947be0::C_00947be0() : a(0), b(0), c(0) {}

struct C_00947bf0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00947bf0(INT Index);
};

// @baa 0x00947bf0
UBOOL C_00947bf0::sub_00947bf0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00947c10 { int sub_00947c10(void); };

// @baa 0x00947c10
int C_00947c10::sub_00947c10(void) { return *(int*)((char*)this + 4); }

struct C_00947c20 { int a, b, c; C_00947c20(); };

// @baa 0x00947c20
C_00947c20::C_00947c20() : a(0), b(0), c(0) {}

struct C_00947c30 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00947c30(INT Index);
};

// @baa 0x00947c30
UBOOL C_00947c30::sub_00947c30(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00947c50 { int sub_00947c50(void); };

// @baa 0x00947c50
int C_00947c50::sub_00947c50(void) { return *(int*)((char*)this + 4); }

struct C_00947c60 { int a, b, c; C_00947c60(); };

// @baa 0x00947c60
C_00947c60::C_00947c60() : a(0), b(0), c(0) {}

struct C_00947c70 { int sub_00947c70(void); };

// @baa 0x00947c70
int C_00947c70::sub_00947c70(void) { return *(int*)((char*)this + 4); }

struct C_00947d00 { int a, b, c; C_00947d00(); };

// @baa 0x00947d00
C_00947d00::C_00947d00() : a(0), b(0), c(0) {}

struct T_00947d80 { int x; };

// @baa 0x00947d80
template T_00947d80& TIndirectArray<T_00947d80>::operator()(INT);

struct T_00947dd0 { int x; };

// @baa 0x00947dd0
template const T_00947dd0& TIndirectArray<T_00947dd0>::operator()(INT) const;

struct T_00947e20 { int x; };

// @baa 0x00947e20
template T_00947e20& TIndirectArray<T_00947e20>::operator()(INT);

struct T_00947e70 { int x; };

// @baa 0x00947e70
template T_00947e70& TIndirectArray<T_00947e70>::operator()(INT);

struct T_00947ec0 { int x; };

// @baa 0x00947ec0
template const T_00947ec0& TIndirectArray<T_00947ec0>::operator()(INT) const;

struct T_00947f10 { int x; };

// @baa 0x00947f10
template T_00947f10& TIndirectArray<T_00947f10>::operator()(INT);

struct C_00947f60 { int a; C_00947f60(int); };

// @baa 0x00947f60
C_00947f60::C_00947f60(int x) : a(x) {}

struct C_00947f90 { int sub_00947f90(void); };

// @baa 0x00947f90
int C_00947f90::sub_00947f90(void) { return *(int*)((char*)this + 0); }

struct C_00947fa0 { int sub_00947fa0(void); };

// @baa 0x00947fa0
int C_00947fa0::sub_00947fa0(void) { return *(int*)((char*)this + 0); }

struct C_00947ff0 { int a; C_00947ff0(int); };

// @baa 0x00947ff0
C_00947ff0::C_00947ff0(int x) : a(x) {}

struct C_00948020 { int sub_00948020(void); };

// @baa 0x00948020
int C_00948020::sub_00948020(void) { return *(int*)((char*)this + 0); }

struct C_00948030 { int sub_00948030(void); };

// @baa 0x00948030
int C_00948030::sub_00948030(void) { return *(int*)((char*)this + 0); }

struct C_00948080 { int a, b, c; C_00948080(); };

// @baa 0x00948080
C_00948080::C_00948080() : a(0), b(0), c(0) {}

struct C_00948090 { int sub_00948090(void); };

// @baa 0x00948090
int C_00948090::sub_00948090(void) { return *(int*)((char*)this + 4); }

struct C_009480a0 { int sub_009480a0(void); };

// @baa 0x009480a0
int C_009480a0::sub_009480a0(void) { return *(int*)((char*)this + 4); }

extern char g_01f86aa4[];
struct C_009480b0 { C_009480b0* sub_009480b0(void); };

// @baa 0x009480b0
C_009480b0* C_009480b0::sub_009480b0(void) { *(int*)((char*)this + 0) = (int)g_01f86aa4; return this; }

struct C_009480c0 { C_009480c0* sub_009480c0(void); };

// @baa 0x009480c0
C_009480c0* C_009480c0::sub_009480c0(void) { return this; }

struct C_00948170 { int sub_00948170(void); };

// @baa 0x00948170
int C_00948170::sub_00948170(void) { return *(int*)((char*)this + 0); }

struct C_009481b0 { int sub_009481b0(void); };

// @baa 0x009481b0
int C_009481b0::sub_009481b0(void) { return *(int*)((char*)this + 0); }

struct C_009481c0 { int sub_009481c0(void); };

// @baa 0x009481c0
int C_009481c0::sub_009481c0(void) { return *(int*)((char*)this + 0); }

struct C_00948250 {
    int sub_00948250(int);
};

// @baa 0x00948250
int C_00948250::sub_00948250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00948270 { int sub_00948270(void); };

// @baa 0x00948270
int C_00948270::sub_00948270(void) { return *(int*)((char*)this + 0); }

struct C_009482b0 { C_009482b0* sub_009482b0(int a0); };

// @baa 0x009482b0
C_009482b0* C_009482b0::sub_009482b0(int a0) { return this; }

struct C_009482c0 { int sub_009482c0(void); };

// @baa 0x009482c0
int C_009482c0::sub_009482c0(void) { return *(int*)((char*)this + 0); }

struct C_009482f0 {
    undefined4 sub_009482f0();
};

// @baa 0x009482f0
undefined4 C_009482f0::sub_009482f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_00948330 {
    int sub_00948330(int);
};

// @baa 0x00948330
int C_00948330::sub_00948330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00948340 { int a, b, c; C_00948340(); };

// @baa 0x00948340
C_00948340::C_00948340() : a(0), b(0), c(0) {}

struct C_00948350 { int sub_00948350(void); };

// @baa 0x00948350
int C_00948350::sub_00948350(void) { return *(int*)((char*)this + 0); }

struct C_00948360 { int sub_00948360(void); };

// @baa 0x00948360
int C_00948360::sub_00948360(void) { return *(int*)((char*)this + 0); }

struct C_009483a0 { int sub_009483a0(void); };

// @baa 0x009483a0
int C_009483a0::sub_009483a0(void) { return *(int*)((char*)this + 0); }

struct C_009483b0 { int sub_009483b0(void); };

// @baa 0x009483b0
int C_009483b0::sub_009483b0(void) { return *(int*)((char*)this + 0); }

struct C_009483c0 { int sub_009483c0(void); };

// @baa 0x009483c0
int C_009483c0::sub_009483c0(void) { return *(int*)((char*)this + 0); }

struct C_00948400 {
    int sub_00948400(int);
};

// @baa 0x00948400
int C_00948400::sub_00948400(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00948410 { int sub_00948410(void); };

// @baa 0x00948410
int C_00948410::sub_00948410(void) { return *(int*)((char*)this + 0); }

struct C_00948420 { int sub_00948420(void); };

// @baa 0x00948420
int C_00948420::sub_00948420(void) { return *(int*)((char*)this + 0); }

struct C_00948450 {
    int sub_00948450(int);
};

// @baa 0x00948450
int C_00948450::sub_00948450(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x34 + *param_1;
}

struct C_00948460 { int sub_00948460(void); };

// @baa 0x00948460
int C_00948460::sub_00948460(void) { return *(int*)((char*)this + 0); }

struct C_00948470 { int sub_00948470(void); };

// @baa 0x00948470
int C_00948470::sub_00948470(void) { return *(int*)((char*)this + 0); }

struct C_00948480 { int sub_00948480(void); };

// @baa 0x00948480
int C_00948480::sub_00948480(void) { return *(int*)((char*)this + 4); }

struct C_009484c0 {
    int sub_009484c0(int);
};

// @baa 0x009484c0
int C_009484c0::sub_009484c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_009484d0 { int sub_009484d0(void); };

// @baa 0x009484d0
int C_009484d0::sub_009484d0(void) { return *(int*)((char*)this + 0); }

struct C_009484e0 { int sub_009484e0(void); };

// @baa 0x009484e0
int C_009484e0::sub_009484e0(void) { return *(int*)((char*)this + 0); }

struct C_00948530 { int sub_00948530(void); };

// @baa 0x00948530
int C_00948530::sub_00948530(void) { return *(int*)((char*)this + 0); }

struct C_00948540 { int sub_00948540(void); };

// @baa 0x00948540
int C_00948540::sub_00948540(void) { return *(int*)((char*)this + 0); }

struct C_00948580 { int sub_00948580(void); };

// @baa 0x00948580
int C_00948580::sub_00948580(void) { return *(int*)((char*)this + 0); }

struct C_00948590 { int sub_00948590(void); };

// @baa 0x00948590
int C_00948590::sub_00948590(void) { return *(int*)((char*)this + 0); }

struct C_009485a0 { int sub_009485a0(void); };

// @baa 0x009485a0
int C_009485a0::sub_009485a0(void) { return *(int*)((char*)this + 0); }

struct C_00948640 {
    int sub_00948640(int);
};

// @baa 0x00948640
int C_00948640::sub_00948640(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00948650 { int sub_00948650(void); };

// @baa 0x00948650
int C_00948650::sub_00948650(void) { return *(int*)((char*)this + 0); }

struct C_00948660 { int sub_00948660(void); };

// @baa 0x00948660
int C_00948660::sub_00948660(void) { return *(int*)((char*)this + 0); }

struct C_00948710 {
    int sub_00948710(int);
};

// @baa 0x00948710
int C_00948710::sub_00948710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00948790 {
    void sub_00948790();
};

int sub_0053df70(...);
// @baa 0x00948790
void C_00948790::sub_00948790(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_009488a0 { int sub_009488a0(void); };

// @baa 0x009488a0
int C_009488a0::sub_009488a0(void) { return *(int*)((char*)this + 0); }

struct C_009488b0 { int sub_009488b0(void); };

// @baa 0x009488b0
int C_009488b0::sub_009488b0(void) { return *(int*)((char*)this + 0); }

struct C_00948930 { int sub_00948930(void); };

// @baa 0x00948930
int C_00948930::sub_00948930(void) { return *(int*)((char*)this + 0); }

struct C_009489b0 { int sub_009489b0(void); };

// @baa 0x009489b0
int C_009489b0::sub_009489b0(void) { return *(int*)((char*)this + 0); }

struct C_00948a30 { int sub_00948a30(void); };

// @baa 0x00948a30
int C_00948a30::sub_00948a30(void) { return *(int*)((char*)this + 0); }

struct C_00948a70 { int sub_00948a70(void); };

// @baa 0x00948a70
int C_00948a70::sub_00948a70(void) { return *(int*)((char*)this + 0); }

struct C_00948ac0 { int a, b, c; C_00948ac0(); };

// @baa 0x00948ac0
C_00948ac0::C_00948ac0() : a(0), b(0), c(0) {}

struct C_00948ad0 { int sub_00948ad0(void); };

// @baa 0x00948ad0
int C_00948ad0::sub_00948ad0(void) { return *(int*)((char*)this + 0); }

struct C_00948b10 { int sub_00948b10(void); };

// @baa 0x00948b10
int C_00948b10::sub_00948b10(void) { return *(int*)((char*)this + 0); }

struct C_00948b50 { int a, b, c; C_00948b50(); };

// @baa 0x00948b50
C_00948b50::C_00948b50() : a(0), b(0), c(0) {}

struct C_00948b60 { int sub_00948b60(void); };

// @baa 0x00948b60
int C_00948b60::sub_00948b60(void) { return *(int*)((char*)this + 0); }

struct C_00948b70 { int sub_00948b70(void); };

// @baa 0x00948b70
int C_00948b70::sub_00948b70(void) { return *(int*)((char*)this + 4); }

struct C_00948bb0 { int sub_00948bb0(void); };

// @baa 0x00948bb0
int C_00948bb0::sub_00948bb0(void) { return *(int*)((char*)this + 0); }

struct C_00948c00 { C_00948c00* sub_00948c00(int a0); };

// @baa 0x00948c00
C_00948c00* C_00948c00::sub_00948c00(int a0) { return this; }

struct C_00948c10 { int sub_00948c10(void); };

// @baa 0x00948c10
int C_00948c10::sub_00948c10(void) { return *(int*)((char*)this + 0); }

struct C_00948c20 { C_00948c20* sub_00948c20(int a0); };

// @baa 0x00948c20
C_00948c20* C_00948c20::sub_00948c20(int a0) { return this; }

struct C_00948c30 { C_00948c30* sub_00948c30(int a0); };

// @baa 0x00948c30
C_00948c30* C_00948c30::sub_00948c30(int a0) { return this; }

struct C_00948c40 { int sub_00948c40(void); };

// @baa 0x00948c40
int C_00948c40::sub_00948c40(void) { return *(int*)((char*)this + 0); }

struct C_00948cc0 { int sub_00948cc0(void); };

// @baa 0x00948cc0
int C_00948cc0::sub_00948cc0(void) { return *(int*)((char*)this + 0); }

struct C_00948cd0 { int sub_00948cd0(void); };

// @baa 0x00948cd0
int C_00948cd0::sub_00948cd0(void) { return *(int*)((char*)this + 0); }

struct C_00948ce0 { int sub_00948ce0(void); };

// @baa 0x00948ce0
int C_00948ce0::sub_00948ce0(void) { return *(int*)((char*)this + 4); }

struct C_00948cf0 { int sub_00948cf0(void); };

// @baa 0x00948cf0
int C_00948cf0::sub_00948cf0(void) { return *(int*)((char*)this + 0); }

struct C_00948d00 { int sub_00948d00(void); };

// @baa 0x00948d00
int C_00948d00::sub_00948d00(void) { return *(int*)((char*)this + 0); }

struct C_00948db0 { int sub_00948db0(void); };

// @baa 0x00948db0
int C_00948db0::sub_00948db0(void) { return *(int*)((char*)this + 4); }

struct C_00948dc0 { int sub_00948dc0(void); };

// @baa 0x00948dc0
int C_00948dc0::sub_00948dc0(void) { return *(int*)((char*)this + 0); }

struct C_00948e50 { int sub_00948e50(void); };

// @baa 0x00948e50
int C_00948e50::sub_00948e50(void) { return *(int*)((char*)this + 0); }

struct C_00948e60 { int sub_00948e60(void); };

// @baa 0x00948e60
int C_00948e60::sub_00948e60(void) { return *(int*)((char*)this + 0); }

struct C_00948e70 {
    int sub_00948e70(int);
};

// @baa 0x00948e70
int C_00948e70::sub_00948e70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x490 + *param_1;
}

struct C_00948e80 { int sub_00948e80(void); };

// @baa 0x00948e80
int C_00948e80::sub_00948e80(void) { return *(int*)((char*)this + 0); }

struct C_00948e90 { int sub_00948e90(void); };

// @baa 0x00948e90
int C_00948e90::sub_00948e90(void) { return *(int*)((char*)this + 0); }

struct C_00948ea0 { int sub_00948ea0(void); };

// @baa 0x00948ea0
int C_00948ea0::sub_00948ea0(void) { return *(int*)((char*)this + 0); }

struct C_00948eb0 { int sub_00948eb0(void); };

// @baa 0x00948eb0
int C_00948eb0::sub_00948eb0(void) { return *(int*)((char*)this + 0); }

struct C_00948ec0 {
    int sub_00948ec0(int);
};

// @baa 0x00948ec0
int C_00948ec0::sub_00948ec0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x280 + *param_1;
}

struct C_00948ed0 { int sub_00948ed0(void); };

// @baa 0x00948ed0
int C_00948ed0::sub_00948ed0(void) { return *(int*)((char*)this + 0); }

struct C_00948ee0 { int sub_00948ee0(void); };

// @baa 0x00948ee0
int C_00948ee0::sub_00948ee0(void) { return *(int*)((char*)this + 0); }

struct C_00948ef0 { int sub_00948ef0(void); };

// @baa 0x00948ef0
int C_00948ef0::sub_00948ef0(void) { return *(int*)((char*)this + 4); }

struct C_00948f00 { int sub_00948f00(void); };

// @baa 0x00948f00
int C_00948f00::sub_00948f00(void) { return *(int*)((char*)this + 4); }

struct C_00948f10 { int sub_00948f10(void); };

// @baa 0x00948f10
int C_00948f10::sub_00948f10(void) { return *(int*)((char*)this + 4); }

struct C_00948f20 { int sub_00948f20(void); };

// @baa 0x00948f20
int C_00948f20::sub_00948f20(void) { return *(int*)((char*)this + 4); }

struct C_00948f30 { int sub_00948f30(void); };

// @baa 0x00948f30
int C_00948f30::sub_00948f30(void) { return *(int*)((char*)this + 4); }

struct C_00948f40 { int sub_00948f40(void); };

// @baa 0x00948f40
int C_00948f40::sub_00948f40(void) { return *(int*)((char*)this + 4); }

struct C_00948f50 { int sub_00948f50(void); };

// @baa 0x00948f50
int C_00948f50::sub_00948f50(void) { return *(int*)((char*)this + 4); }

struct C_00948f60 { int sub_00948f60(void); };

// @baa 0x00948f60
int C_00948f60::sub_00948f60(void) { return *(int*)((char*)this + 4); }

struct C_00948f70 { int sub_00948f70(void); };

// @baa 0x00948f70
int C_00948f70::sub_00948f70(void) { return *(int*)((char*)this + 0); }

struct C_00948f80 { int sub_00948f80(void); };

// @baa 0x00948f80
int C_00948f80::sub_00948f80(void) { return *(int*)((char*)this + 0); }

struct C_00949050 { int sub_00949050(void); };

// @baa 0x00949050
int C_00949050::sub_00949050(void) { return *(int*)((char*)this + 0); }

struct C_00949060 {
    int sub_00949060(int);
};

// @baa 0x00949060
int C_00949060::sub_00949060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00949070 { int sub_00949070(void); };

// @baa 0x00949070
int C_00949070::sub_00949070(void) { return *(int*)((char*)this + 0); }

struct C_00949080 { int sub_00949080(void); };

// @baa 0x00949080
int C_00949080::sub_00949080(void) { return *(int*)((char*)this + 0); }

struct C_00949090 { int sub_00949090(void); };

// @baa 0x00949090
int C_00949090::sub_00949090(void) { return *(int*)((char*)this + 0); }

struct C_00949120 { int sub_00949120(void); };

// @baa 0x00949120
int C_00949120::sub_00949120(void) { return *(int*)((char*)this + 0); }

struct C_00949130 { int sub_00949130(void); };

// @baa 0x00949130
int C_00949130::sub_00949130(void) { return *(int*)((char*)this + 0); }

struct C_00949140 { int sub_00949140(void); };

// @baa 0x00949140
int C_00949140::sub_00949140(void) { return *(int*)((char*)this + 0); }

struct C_00949150 { int sub_00949150(void); };

// @baa 0x00949150
int C_00949150::sub_00949150(void) { return *(int*)((char*)this + 0); }

struct C_00949160 { int sub_00949160(void); };

// @baa 0x00949160
int C_00949160::sub_00949160(void) { return *(int*)((char*)this + 0); }

struct C_00949170 { int sub_00949170(void); };

// @baa 0x00949170
int C_00949170::sub_00949170(void) { return *(int*)((char*)this + 0); }

struct C_00949180 { int sub_00949180(void); };

// @baa 0x00949180
int C_00949180::sub_00949180(void) { return *(int*)((char*)this + 0); }

struct C_009491b0 {
    undefined4 sub_009491b0();
};

// @baa 0x009491b0
undefined4 C_009491b0::sub_009491b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_009491f0 { int sub_009491f0(void); };

// @baa 0x009491f0
int C_009491f0::sub_009491f0(void) { return *(int*)((char*)this + 0); }

struct C_00949200 { int sub_00949200(void); };

// @baa 0x00949200
int C_00949200::sub_00949200(void) { return *(int*)((char*)this + 0); }

struct C_00949210 { int sub_00949210(void); };

// @baa 0x00949210
int C_00949210::sub_00949210(void) { return *(int*)((char*)this + 0); }

struct C_009492b0 { int sub_009492b0(void); };

// @baa 0x009492b0
int C_009492b0::sub_009492b0(void) { return *(int*)((char*)this + 0); }

struct C_009492c0 { int sub_009492c0(void); };

// @baa 0x009492c0
int C_009492c0::sub_009492c0(void) { return *(int*)((char*)this + 0); }

struct C_009492d0 { int sub_009492d0(void); };

// @baa 0x009492d0
int C_009492d0::sub_009492d0(void) { return *(int*)((char*)this + 0); }

struct C_009492e0 { int a, b, c; C_009492e0(); };

// @baa 0x009492e0
C_009492e0::C_009492e0() : a(0), b(0), c(0) {}

struct C_009492f0 { int sub_009492f0(void); };

// @baa 0x009492f0
int C_009492f0::sub_009492f0(void) { return *(int*)((char*)this + 0); }

struct C_00949300 {
    int sub_00949300(int);
};

// @baa 0x00949300
int C_00949300::sub_00949300(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00949310 { int a, b, c; C_00949310(); };

// @baa 0x00949310
C_00949310::C_00949310() : a(0), b(0), c(0) {}

struct C_00949320 { int sub_00949320(void); };

// @baa 0x00949320
int C_00949320::sub_00949320(void) { return *(int*)((char*)this + 0); }

struct C_00949330 { int sub_00949330(void); };

// @baa 0x00949330
int C_00949330::sub_00949330(void) { return *(int*)((char*)this + 0); }

struct C_00949340 {
    int sub_00949340(int);
};

// @baa 0x00949340
int C_00949340::sub_00949340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00949350 { int sub_00949350(void); };

// @baa 0x00949350
int C_00949350::sub_00949350(void) { return *(int*)((char*)this + 0); }

struct C_00949360 { int sub_00949360(void); };

// @baa 0x00949360
int C_00949360::sub_00949360(void) { return *(int*)((char*)this + 0); }

struct C_00949370 { int sub_00949370(void); };

// @baa 0x00949370
int C_00949370::sub_00949370(void) { return *(int*)((char*)this + 0); }

struct C_00949380 { int sub_00949380(void); };

// @baa 0x00949380
int C_00949380::sub_00949380(void) { return *(int*)((char*)this + 0); }

struct C_00949390 { int sub_00949390(void); };

// @baa 0x00949390
int C_00949390::sub_00949390(void) { return *(int*)((char*)this + 0); }

struct C_009493a0 { int sub_009493a0(void); };

// @baa 0x009493a0
int C_009493a0::sub_009493a0(void) { return *(int*)((char*)this + 0); }

struct C_009493b0 { int sub_009493b0(void); };

// @baa 0x009493b0
int C_009493b0::sub_009493b0(void) { return *(int*)((char*)this + 0); }

struct C_009493c0 { int a, b, c; C_009493c0(); };

// @baa 0x009493c0
C_009493c0::C_009493c0() : a(0), b(0), c(0) {}

struct C_009493d0 { int sub_009493d0(void); };

// @baa 0x009493d0
int C_009493d0::sub_009493d0(void) { return *(int*)((char*)this + 0); }

struct C_009493e0 { int sub_009493e0(void); };

// @baa 0x009493e0
int C_009493e0::sub_009493e0(void) { return *(int*)((char*)this + 0); }

struct C_009493f0 {
    int sub_009493f0(int);
};

// @baa 0x009493f0
int C_009493f0::sub_009493f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00949400 { int a, b, c; C_00949400(); };

// @baa 0x00949400
C_00949400::C_00949400() : a(0), b(0), c(0) {}

struct C_00949410 { int sub_00949410(void); };

// @baa 0x00949410
int C_00949410::sub_00949410(void) { return *(int*)((char*)this + 0); }

struct C_00949420 { int sub_00949420(void); };

// @baa 0x00949420
int C_00949420::sub_00949420(void) { return *(int*)((char*)this + 0); }

struct C_00949430 {
    int sub_00949430(int);
};

// @baa 0x00949430
int C_00949430::sub_00949430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00949440 { int a, b, c; C_00949440(); };

// @baa 0x00949440
C_00949440::C_00949440() : a(0), b(0), c(0) {}

struct C_00949450 { int sub_00949450(void); };

// @baa 0x00949450
int C_00949450::sub_00949450(void) { return *(int*)((char*)this + 0); }

struct C_00949460 { int sub_00949460(void); };

// @baa 0x00949460
int C_00949460::sub_00949460(void) { return *(int*)((char*)this + 0); }

struct C_00949470 {
    int sub_00949470(int);
};

// @baa 0x00949470
int C_00949470::sub_00949470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00949480 { int a, b, c; C_00949480(); };

// @baa 0x00949480
C_00949480::C_00949480() : a(0), b(0), c(0) {}

struct C_00949490 { int sub_00949490(void); };

// @baa 0x00949490
int C_00949490::sub_00949490(void) { return *(int*)((char*)this + 0); }

struct C_009494a0 { int sub_009494a0(void); };

// @baa 0x009494a0
int C_009494a0::sub_009494a0(void) { return *(int*)((char*)this + 0); }

struct C_009494b0 {
    int sub_009494b0(int);
};

// @baa 0x009494b0
int C_009494b0::sub_009494b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_009494d0 { int a, b, c; C_009494d0(); };

// @baa 0x009494d0
C_009494d0::C_009494d0() : a(0), b(0), c(0) {}

struct C_009494e0 { int sub_009494e0(void); };

// @baa 0x009494e0
int C_009494e0::sub_009494e0(void) { return *(int*)((char*)this + 0); }

struct C_009494f0 { int sub_009494f0(void); };

// @baa 0x009494f0
int C_009494f0::sub_009494f0(void) { return *(int*)((char*)this + 0); }

struct C_00949500 {
    int sub_00949500(int);
};

// @baa 0x00949500
int C_00949500::sub_00949500(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00949510 { int a, b, c; C_00949510(); };

// @baa 0x00949510
C_00949510::C_00949510() : a(0), b(0), c(0) {}

struct C_00949520 { int sub_00949520(void); };

// @baa 0x00949520
int C_00949520::sub_00949520(void) { return *(int*)((char*)this + 0); }

struct C_00949530 { int sub_00949530(void); };

// @baa 0x00949530
int C_00949530::sub_00949530(void) { return *(int*)((char*)this + 0); }

struct C_00949540 {
    int sub_00949540(int);
};

// @baa 0x00949540
int C_00949540::sub_00949540(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00949560 { int a, b, c; C_00949560(); };

// @baa 0x00949560
C_00949560::C_00949560() : a(0), b(0), c(0) {}

struct C_00949570 { int sub_00949570(void); };

// @baa 0x00949570
int C_00949570::sub_00949570(void) { return *(int*)((char*)this + 0); }

struct C_00949580 { int sub_00949580(void); };

// @baa 0x00949580
int C_00949580::sub_00949580(void) { return *(int*)((char*)this + 0); }

struct C_00949590 {
    int sub_00949590(int);
};

// @baa 0x00949590
int C_00949590::sub_00949590(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_009495a0 { int a, b, c; C_009495a0(); };

// @baa 0x009495a0
C_009495a0::C_009495a0() : a(0), b(0), c(0) {}

struct C_009495b0 { int sub_009495b0(void); };

// @baa 0x009495b0
int C_009495b0::sub_009495b0(void) { return *(int*)((char*)this + 0); }

struct C_009495c0 { int sub_009495c0(void); };

// @baa 0x009495c0
int C_009495c0::sub_009495c0(void) { return *(int*)((char*)this + 0); }

struct C_009495d0 {
    int sub_009495d0(int);
};

// @baa 0x009495d0
int C_009495d0::sub_009495d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_009495e0 { int sub_009495e0(void); };

// @baa 0x009495e0
int C_009495e0::sub_009495e0(void) { return *(int*)((char*)this + 0); }

struct C_009495f0 { int sub_009495f0(void); };

// @baa 0x009495f0
int C_009495f0::sub_009495f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00949600
bool sub_00949600(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00949610
bool sub_00949610(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00949620 { int sub_00949620(void); };

// @baa 0x00949620
int C_00949620::sub_00949620(void) { return *(int*)((char*)this + 0); }

// @baa 0x00949630
undefined8 sub_00949630(undefined8 * param_1)
{
  return *param_1;
}

// @baa 0x00949640
undefined4 sub_00949640(int param_1, int param_2, int param_3, int param_4)
{
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

// @baa 0x00949660
int sub_00949660(int param_1, int param_2)
{
  return param_2 * 0x17 + param_1;
}

struct C_00949670 { int sub_00949670(void); };

// @baa 0x00949670
int C_00949670::sub_00949670(void) { return *(int*)((char*)this + 0); }

struct C_00949ca0 {
    int sub_00949ca0(int);
};

// @baa 0x00949ca0
int C_00949ca0::sub_00949ca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00949cb0 { int sub_00949cb0(void); };

// @baa 0x00949cb0
int C_00949cb0::sub_00949cb0(void) { return *(int*)((char*)this + 0); }

struct C_00949d20 {
    int sub_00949d20(int);
};

// @baa 0x00949d20
int C_00949d20::sub_00949d20(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_00949ef0 { int sub_00949ef0(void); };

// @baa 0x00949ef0
int C_00949ef0::sub_00949ef0(void) { return *(int*)((char*)this + 20); }

struct S_0094a760 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0094a760(INT Index) const;
};

// @baa 0x0094a760
const DWORD* S_0094a760::sub_0094a760(INT Index) const
{
    return &Items(Index);
}

struct C_0094ae60 { int a, b, c; C_0094ae60(); };

// @baa 0x0094ae60
C_0094ae60::C_0094ae60() : a(0), b(0), c(0) {}

struct C_0094b070 { int sub_0094b070(void); };

// @baa 0x0094b070
int C_0094b070::sub_0094b070(void) { return *(int*)((char*)this + 0); }

struct C_0094b080 { int sub_0094b080(void); };

// @baa 0x0094b080
int C_0094b080::sub_0094b080(void) { return *(int*)((char*)this + 0); }

struct C_0094b090 { int sub_0094b090(void); };

// @baa 0x0094b090
int C_0094b090::sub_0094b090(void) { return *(int*)((char*)this + 0); }

struct C_0094b0a0 { int sub_0094b0a0(void); };

// @baa 0x0094b0a0
int C_0094b0a0::sub_0094b0a0(void) { return *(int*)((char*)this + 0); }

struct C_0094b0b0 { int sub_0094b0b0(void); };

// @baa 0x0094b0b0
int C_0094b0b0::sub_0094b0b0(void) { return *(int*)((char*)this + 0); }

struct C_0094b0c0 { int sub_0094b0c0(void); };

// @baa 0x0094b0c0
int C_0094b0c0::sub_0094b0c0(void) { return *(int*)((char*)this + 0); }

struct C_0094b0d0 { int sub_0094b0d0(void); };

// @baa 0x0094b0d0
int C_0094b0d0::sub_0094b0d0(void) { return *(int*)((char*)this + 0); }

struct C_0094b0e0 { int sub_0094b0e0(void); };

// @baa 0x0094b0e0
int C_0094b0e0::sub_0094b0e0(void) { return *(int*)((char*)this + 0); }

struct C_0094b0f0 { int sub_0094b0f0(void); };

// @baa 0x0094b0f0
int C_0094b0f0::sub_0094b0f0(void) { return *(int*)((char*)this + 4); }

struct C_0094b100 { int sub_0094b100(void); };

// @baa 0x0094b100
int C_0094b100::sub_0094b100(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[36]; };

struct S_0094b110 {
    TArray<E> Items; // 0x00
    const E* sub_0094b110(INT Index) const;
};

// @baa 0x0094b110
const E* S_0094b110::sub_0094b110(INT Index) const
{
    return &Items(Index);
}

struct C_0094b160 { int sub_0094b160(void); };

// @baa 0x0094b160
int C_0094b160::sub_0094b160(void) { return *(int*)((char*)this + 0); }

struct C_0094b170 { int sub_0094b170(void); };

// @baa 0x0094b170
int C_0094b170::sub_0094b170(void) { return *(int*)((char*)this + 4); }

struct E_0094b180 { BYTE Bytes[20]; };

struct S_0094b180 {
    TArray<E_0094b180> Items; // 0x00
    const E_0094b180* sub_0094b180(INT Index) const;
};

// @baa 0x0094b180
const E_0094b180* S_0094b180::sub_0094b180(INT Index) const
{
    return &Items(Index);
}

struct C_0094b1d0 { int sub_0094b1d0(void); };

// @baa 0x0094b1d0
int C_0094b1d0::sub_0094b1d0(void) { return *(int*)((char*)this + 4); }

struct C_0094b230 { int sub_0094b230(void); };

// @baa 0x0094b230
int C_0094b230::sub_0094b230(void) { return *(int*)((char*)this + 4); }

struct S_0094b240 {
    TArray<E> Items; // 0x00
    const E* sub_0094b240(INT Index) const;
};

// @baa 0x0094b240
const E* S_0094b240::sub_0094b240(INT Index) const
{
    return &Items(Index);
}

struct C_0094b290 { int sub_0094b290(void); };

// @baa 0x0094b290
int C_0094b290::sub_0094b290(void) { return *(int*)((char*)this + 4); }

struct E_0094b2a0 { BYTE Bytes[44]; };

struct S_0094b2a0 {
    TArray<E_0094b2a0> Items; // 0x00
    const E_0094b2a0* sub_0094b2a0(INT Index) const;
};

// @baa 0x0094b2a0
const E_0094b2a0* S_0094b2a0::sub_0094b2a0(INT Index) const
{
    return &Items(Index);
}

void sub_009434f0();
// @baa 0x0094b5d0
void sub_0094b5d0(void) { sub_009434f0(); }

struct S_0094d980 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0094d980(INT Index) const;
};

// @baa 0x0094d980
const DWORD* S_0094d980::sub_0094d980(INT Index) const
{
    return &Items(Index);
}

struct S_0094dac0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0094dac0(INT Index) const;
};

// @baa 0x0094dac0
const QWORD* S_0094dac0::sub_0094dac0(INT Index) const
{
    return &Items(Index);
}

struct C_0094db50 {
    int sub_0094db50(int);
    int sub_007d9a30(int);
};

// @baa 0x0094db50
int C_0094db50::sub_0094db50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0094db50 *)(this))->sub_007d9a30(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_0094db90 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0094db90(INT Index) const;
};

// @baa 0x0094db90
const QWORD* S_0094db90::sub_0094db90(INT Index) const
{
    return &Items(Index);
}

struct S_0094dbe0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0094dbe0(INT Index) const;
};

// @baa 0x0094dbe0
const QWORD* S_0094dbe0::sub_0094dbe0(INT Index) const
{
    return &Items(Index);
}

struct E_0094dc30 { BYTE Bytes[12]; };

struct S_0094dc30 {
    TArray<E_0094dc30> Items; // 0x00
    E_0094dc30* sub_0094dc30(INT Index);
};

// @baa 0x0094dc30
E_0094dc30* S_0094dc30::sub_0094dc30(INT Index)
{
    return &Items(Index);
}

struct E_0094dc80 { BYTE Bytes[12]; };

struct S_0094dc80 {
    TArray<E_0094dc80> Items; // 0x00
    const E_0094dc80* sub_0094dc80(INT Index) const;
};

// @baa 0x0094dc80
const E_0094dc80* S_0094dc80::sub_0094dc80(INT Index) const
{
    return &Items(Index);
}

struct E_0094dcd0 { BYTE Bytes[52]; };

struct S_0094dcd0 {
    TArray<E_0094dcd0> Items; // 0x00
    const E_0094dcd0* sub_0094dcd0(INT Index) const;
};

// @baa 0x0094dcd0
const E_0094dcd0* S_0094dcd0::sub_0094dcd0(INT Index) const
{
    return &Items(Index);
}

struct E_0094dd20 { BYTE Bytes[12]; };

struct S_0094dd20 {
    TArray<E_0094dd20> Items; // 0x00
    const E_0094dd20* sub_0094dd20(INT Index) const;
};

// @baa 0x0094dd20
const E_0094dd20* S_0094dd20::sub_0094dd20(INT Index) const
{
    return &Items(Index);
}

struct E_0094dd70 { BYTE Bytes[16]; };

struct S_0094dd70 {
    TArray<E_0094dd70> Items; // 0x00
    E_0094dd70* sub_0094dd70(INT Index);
};

// @baa 0x0094dd70
E_0094dd70* S_0094dd70::sub_0094dd70(INT Index)
{
    return &Items(Index);
}

struct S_0094ddc0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0094ddc0(INT Index);
};

// @baa 0x0094ddc0
DWORD* S_0094ddc0::sub_0094ddc0(INT Index)
{
    return &Items(Index);
}

struct E_0094de10 { BYTE Bytes[32]; };

struct S_0094de10 {
    TArray<E_0094de10> Items; // 0x00
    E_0094de10* sub_0094de10(INT Index);
};

// @baa 0x0094de10
E_0094de10* S_0094de10::sub_0094de10(INT Index)
{
    return &Items(Index);
}

struct E_0094de60 { BYTE Bytes[32]; };

struct S_0094de60 {
    TArray<E_0094de60> Items; // 0x00
    const E_0094de60* sub_0094de60(INT Index) const;
};

// @baa 0x0094de60
const E_0094de60* S_0094de60::sub_0094de60(INT Index) const
{
    return &Items(Index);
}

struct C_0094deb0 {
    int sub_0094deb0(int);
    int sub_009485d0(int);
};

// @baa 0x0094deb0
int C_0094deb0::sub_0094deb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0094deb0 *)(this))->sub_009485d0(param_2);
  sub_01a37612((void *)(iVar1 * 0x20 + *param_1),0,param_2 << 5);
  return iVar1;
}

struct S_0094dee0 {
    TArray<E> Items; // 0x00
    const E* sub_0094dee0(INT Index) const;
};

// @baa 0x0094dee0
const E* S_0094dee0::sub_0094dee0(INT Index) const
{
    return &Items(Index);
}

struct C_0094df30 {
    int sub_0094df30(int);
    int sub_009486a0(int);
};

// @baa 0x0094df30
int C_0094df30::sub_0094df30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0094df30 *)(this))->sub_009486a0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x24),0,param_2 * 0x24);
  return iVar1;
}

struct S_0094df70 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0094df70(INT Index);
};

// @baa 0x0094df70
QWORD* S_0094df70::sub_0094df70(INT Index)
{
    return &Items(Index);
}

struct S_0094dfc0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0094dfc0(INT Index) const;
};

// @baa 0x0094dfc0
const QWORD* S_0094dfc0::sub_0094dfc0(INT Index) const
{
    return &Items(Index);
}

struct E_0094e070 { BYTE Bytes[12]; };

struct S_0094e070 {
    TArray<E_0094e070> Items; // 0x00
    E_0094e070* sub_0094e070(INT Index);
};

// @baa 0x0094e070
E_0094e070* S_0094e070::sub_0094e070(INT Index)
{
    return &Items(Index);
}

struct C_0094e0c0 {
    int sub_0094e0c0(int);
    int sub_00948940(int);
};

// @baa 0x0094e0c0
int C_0094e0c0::sub_0094e0c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0094e0c0 *)(this))->sub_00948940(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_0094e100 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0094e100(INT Index);
};

// @baa 0x0094e100
DWORD* S_0094e100::sub_0094e100(INT Index)
{
    return &Items(Index);
}

struct E_0094e1b0 { BYTE Bytes[20]; };

struct S_0094e1b0 {
    TArray<E_0094e1b0> Items; // 0x00
    const E_0094e1b0* sub_0094e1b0(INT Index) const;
};

// @baa 0x0094e1b0
const E_0094e1b0* S_0094e1b0::sub_0094e1b0(INT Index) const
{
    return &Items(Index);
}

struct E_0094e200 { BYTE Bytes[12]; };

struct S_0094e200 {
    TArray<E_0094e200> Items; // 0x00
    E_0094e200* sub_0094e200(INT Index);
};

// @baa 0x0094e200
E_0094e200* S_0094e200::sub_0094e200(INT Index)
{
    return &Items(Index);
}

struct S_0094e250 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0094e250(INT Index);
};

// @baa 0x0094e250
DWORD* S_0094e250::sub_0094e250(INT Index)
{
    return &Items(Index);
}

struct E_0094e300 { BYTE Bytes[20]; };

struct S_0094e300 {
    TArray<E_0094e300> Items; // 0x00
    const E_0094e300* sub_0094e300(INT Index) const;
};

// @baa 0x0094e300
const E_0094e300* S_0094e300::sub_0094e300(INT Index) const
{
    return &Items(Index);
}

struct E_0094e350 { BYTE Bytes[32]; };

struct S_0094e350 {
    TArray<E_0094e350> Items; // 0x00
    E_0094e350* sub_0094e350(INT Index);
};

// @baa 0x0094e350
E_0094e350* S_0094e350::sub_0094e350(INT Index)
{
    return &Items(Index);
}

struct S_0094e3a0 {
    TArray<E> Items; // 0x00
    E* sub_0094e3a0(INT Index);
};

// @baa 0x0094e3a0
E* S_0094e3a0::sub_0094e3a0(INT Index)
{
    return &Items(Index);
}

struct E_0094e3f0 { BYTE Bytes[12]; };

struct S_0094e3f0 {
    TArray<E_0094e3f0> Items; // 0x00
    E_0094e3f0* sub_0094e3f0(INT Index);
};

// @baa 0x0094e3f0
E_0094e3f0* S_0094e3f0::sub_0094e3f0(INT Index)
{
    return &Items(Index);
}

struct E_0094e590 { BYTE Bytes[736]; };

struct S_0094e590 {
    TArray<E_0094e590> Items; // 0x00
    E_0094e590* sub_0094e590(INT Index);
};

// @baa 0x0094e590
E_0094e590* S_0094e590::sub_0094e590(INT Index)
{
    return &Items(Index);
}

struct E_0094e5e0 { BYTE Bytes[1168]; };

struct S_0094e5e0 {
    TArray<E_0094e5e0> Items; // 0x00
    E_0094e5e0* sub_0094e5e0(INT Index);
};

// @baa 0x0094e5e0
E_0094e5e0* S_0094e5e0::sub_0094e5e0(INT Index)
{
    return &Items(Index);
}

struct E_0094e630 { BYTE Bytes[1168]; };

struct S_0094e630 {
    TArray<E_0094e630> Items; // 0x00
    const E_0094e630* sub_0094e630(INT Index) const;
};

// @baa 0x0094e630
const E_0094e630* S_0094e630::sub_0094e630(INT Index) const
{
    return &Items(Index);
}

struct S_0094e6d0 {
    TArray<BYTE> Items; // 0x00
    BYTE* sub_0094e6d0(INT Index);
};

// @baa 0x0094e6d0
BYTE* S_0094e6d0::sub_0094e6d0(INT Index)
{
    return &Items(Index);
}

struct E_0094e710 { BYTE Bytes[640]; };

struct S_0094e710 {
    TArray<E_0094e710> Items; // 0x00
    E_0094e710* sub_0094e710(INT Index);
};

// @baa 0x0094e710
E_0094e710* S_0094e710::sub_0094e710(INT Index)
{
    return &Items(Index);
}

struct E_0094e760 { BYTE Bytes[640]; };

struct S_0094e760 {
    TArray<E_0094e760> Items; // 0x00
    const E_0094e760* sub_0094e760(INT Index) const;
};

// @baa 0x0094e760
const E_0094e760* S_0094e760::sub_0094e760(INT Index) const
{
    return &Items(Index);
}

struct E_0094e7b0 { BYTE Bytes[12]; };

struct S_0094e7b0 {
    TArray<E_0094e7b0> Items; // 0x00
    E_0094e7b0* sub_0094e7b0(INT Index);
};

// @baa 0x0094e7b0
E_0094e7b0* S_0094e7b0::sub_0094e7b0(INT Index)
{
    return &Items(Index);
}

struct E_0094e800 { BYTE Bytes[64]; };

struct S_0094e800 {
    TArray<E_0094e800> Items; // 0x00
    const E_0094e800* sub_0094e800(INT Index) const;
};

// @baa 0x0094e800
const E_0094e800* S_0094e800::sub_0094e800(INT Index) const
{
    return &Items(Index);
}

struct S_0094e850 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0094e850(INT Index);
};

// @baa 0x0094e850
DWORD* S_0094e850::sub_0094e850(INT Index)
{
    return &Items(Index);
}

struct C_0094e8a0 { C_0094e8a0* sub_0094e8a0(void); };

// @baa 0x0094e8a0
C_0094e8a0* C_0094e8a0::sub_0094e8a0(void) { return this; }

struct C_0094e8b0 { int a, b, c; C_0094e8b0(); };

// @baa 0x0094e8b0
C_0094e8b0::C_0094e8b0() : a(0), b(0), c(0) {}

// @baa 0x0094e8c0
void __stdcall sub_0094e8c0(int a0, int a1) {  }

struct C_0094e8d0 {
    int sub_0094e8d0(int);
};

// @baa 0x0094e8d0
int C_0094e8d0::sub_0094e8d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0094e8e0
void __stdcall sub_0094e8e0(int a0, int a1) {  }

struct S_0094e8f0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0094e8f0(INT Index);
};

// @baa 0x0094e8f0
QWORD* S_0094e8f0::sub_0094e8f0(INT Index)
{
    return &Items(Index);
}

// @baa 0x0094e940
void __stdcall sub_0094e940(int a0, int a1) {  }

struct E_0094e950 { BYTE Bytes[12]; };

struct S_0094e950 {
    TArray<E_0094e950> Items; // 0x00
    E_0094e950* sub_0094e950(INT Index);
};

// @baa 0x0094e950
E_0094e950* S_0094e950::sub_0094e950(INT Index)
{
    return &Items(Index);
}

struct C_0094e9a0 {
    int sub_0094e9a0(int);
};

// @baa 0x0094e9a0
int C_0094e9a0::sub_0094e9a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0094e9b0
void __stdcall sub_0094e9b0(int a0, int a1) {  }

struct C_0094ea80 {
    int sub_0094ea80(int);
};

// @baa 0x0094ea80
int C_0094ea80::sub_0094ea80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0094eaa0
void __stdcall sub_0094eaa0(int a0, int a1) {  }

struct C_0094eae0 {
    int sub_0094eae0(int);
};

// @baa 0x0094eae0
int C_0094eae0::sub_0094eae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0094eaf0 {
    int sub_0094eaf0(int);
};

// @baa 0x0094eaf0
int C_0094eaf0::sub_0094eaf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0094eb00
void __stdcall sub_0094eb00(int a0, int a1) {  }

struct C_0094eb10 {
    int sub_0094eb10(int);
};

// @baa 0x0094eb10
int C_0094eb10::sub_0094eb10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0094eb20 {
    int sub_0094eb20(int);
};

// @baa 0x0094eb20
int C_0094eb20::sub_0094eb20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0094eb30 {
    int sub_0094eb30(int);
};

// @baa 0x0094eb30
int C_0094eb30::sub_0094eb30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct E_0094ecf0 { BYTE Bytes[32]; };

struct S_0094ecf0 {
    TArray<E_0094ecf0> Items; // 0x00
    const E_0094ecf0* sub_0094ecf0(INT Index) const;
};

// @baa 0x0094ecf0
const E_0094ecf0* S_0094ecf0::sub_0094ecf0(INT Index) const
{
    return &Items(Index);
}

struct C_0094ed40 {
    int sub_0094ed40(int);
};

// @baa 0x0094ed40
int C_0094ed40::sub_0094ed40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x0094ed50
void __stdcall sub_0094ed50(int a0, int a1) {  }

// @baa 0x0094ed60
void __stdcall sub_0094ed60(int a0, int a1) {  }

struct C_0094ed70 {
    int sub_0094ed70(int);
};

// @baa 0x0094ed70
int C_0094ed70::sub_0094ed70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0094ed80 {
    int sub_0094ed80(int);
};

// @baa 0x0094ed80
int C_0094ed80::sub_0094ed80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0094ed90
void __stdcall sub_0094ed90(int a0, int a1) {  }

struct C_0094edd0 {
    int sub_0094edd0(int);
};

// @baa 0x0094edd0
int C_0094edd0::sub_0094edd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x0094ede0
void __stdcall sub_0094ede0(int a0, int a1) {  }

struct C_0094edf0 {
    int sub_0094edf0(int);
};

// @baa 0x0094edf0
int C_0094edf0::sub_0094edf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0094ee00 {
    int sub_0094ee00(int);
};

// @baa 0x0094ee00
int C_0094ee00::sub_0094ee00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0094ee10
void __stdcall sub_0094ee10(int a0, int a1) {  }

struct E_0094ee20 { BYTE Bytes[32]; };

struct S_0094ee20 {
    TArray<E_0094ee20> Items; // 0x00
    const E_0094ee20* sub_0094ee20(INT Index) const;
};

// @baa 0x0094ee20
const E_0094ee20* S_0094ee20::sub_0094ee20(INT Index) const
{
    return &Items(Index);
}

struct S_0094ee70 {
    TArray<E> Items; // 0x00
    E* sub_0094ee70(INT Index);
};

// @baa 0x0094ee70
E* S_0094ee70::sub_0094ee70(INT Index)
{
    return &Items(Index);
}

struct S_0094eec0 {
    TArray<E> Items; // 0x00
    const E* sub_0094eec0(INT Index) const;
};

// @baa 0x0094eec0
const E* S_0094eec0::sub_0094eec0(INT Index) const
{
    return &Items(Index);
}

struct C_0094ef10 {
    int sub_0094ef10(int);
};

// @baa 0x0094ef10
int C_0094ef10::sub_0094ef10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x0094ef20
void __stdcall sub_0094ef20(int a0, int a1) {  }

struct C_0094ef80 {
    int sub_0094ef80(int);
};

// @baa 0x0094ef80
int C_0094ef80::sub_0094ef80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

// @baa 0x0094efa0
void __stdcall sub_0094efa0(int a0, int a1) {  }

struct C_0094efb0 {
    int sub_0094efb0(int);
};

// @baa 0x0094efb0
int C_0094efb0::sub_0094efb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2e0 + *param_1;
}

struct C_0094efc0 {
    int sub_0094efc0(int);
};

// @baa 0x0094efc0
int C_0094efc0::sub_0094efc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0094efe0
void __stdcall sub_0094efe0(int a0, int a1) {  }

struct C_0094eff0 {
    int sub_0094eff0(int);
};

// @baa 0x0094eff0
int C_0094eff0::sub_0094eff0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

// @baa 0x0094f000
void __stdcall sub_0094f000(int a0, int a1) {  }

struct C_0094f010 { int a, b, c; C_0094f010(); };

// @baa 0x0094f010
C_0094f010::C_0094f010() : a(0), b(0), c(0) {}

struct C_0094f020 {
    int sub_0094f020(int);
};

// @baa 0x0094f020
int C_0094f020::sub_0094f020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x0094f030
void __stdcall sub_0094f030(int a0, int a1) {  }

struct E_0094f040 { BYTE Bytes[16]; };

struct S_0094f040 {
    TArray<E_0094f040> Items; // 0x00
    E_0094f040* sub_0094f040(INT Index);
};

// @baa 0x0094f040
E_0094f040* S_0094f040::sub_0094f040(INT Index)
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
	FFaceFXElement* sub_0094f090(INT Index);
};

// @baa 0x0094f090
FFaceFXElement* UFxRenderWidget::sub_0094f090(INT Index)
{
	return &BoneArray(Index);
}

struct E_0094f0e0 { BYTE Bytes[24]; };

struct S_0094f0e0 {
    TArray<E_0094f0e0> Items; // 0x00
    E_0094f0e0* sub_0094f0e0(INT Index);
};

// @baa 0x0094f0e0
E_0094f0e0* S_0094f0e0::sub_0094f0e0(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_0094f180
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0094f180(INT Index);
};

// @baa 0x0094f180
FFaceFXElement* UFxRenderWidget_0094f180::sub_0094f180(INT Index)
{
	return &BoneArray(Index);
}

struct E_0094f1d0 { BYTE Bytes[20]; };

struct S_0094f1d0 {
    TArray<E_0094f1d0> Items; // 0x00
    const E_0094f1d0* sub_0094f1d0(INT Index) const;
};

// @baa 0x0094f1d0
const E_0094f1d0* S_0094f1d0::sub_0094f1d0(INT Index) const
{
    return &Items(Index);
}

struct S_0094f2c0 {
    TArray<E> Items; // 0x00
    E* sub_0094f2c0(INT Index);
};

// @baa 0x0094f2c0
E* S_0094f2c0::sub_0094f2c0(INT Index)
{
    return &Items(Index);
}

struct S_0094f310 {
    TArray<E> Items; // 0x00
    const E* sub_0094f310(INT Index) const;
};

// @baa 0x0094f310
const E* S_0094f310::sub_0094f310(INT Index) const
{
    return &Items(Index);
}

struct E_0094f360 { BYTE Bytes[44]; };

struct S_0094f360 {
    TArray<E_0094f360> Items; // 0x00
    E_0094f360* sub_0094f360(INT Index);
};

// @baa 0x0094f360
E_0094f360* S_0094f360::sub_0094f360(INT Index)
{
    return &Items(Index);
}

struct E_0094f3b0 { BYTE Bytes[44]; };

struct S_0094f3b0 {
    TArray<E_0094f3b0> Items; // 0x00
    const E_0094f3b0* sub_0094f3b0(INT Index) const;
};

// @baa 0x0094f3b0
const E_0094f3b0* S_0094f3b0::sub_0094f3b0(INT Index) const
{
    return &Items(Index);
}

struct C_0094f400 { int a, b, c; C_0094f400(); };

// @baa 0x0094f400
C_0094f400::C_0094f400() : a(0), b(0), c(0) {}

struct C_0094f410 {
    int sub_0094f410(int);
};

// @baa 0x0094f410
int C_0094f410::sub_0094f410(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0094f420
void __stdcall sub_0094f420(int a0, int a1) {  }

struct S_0094f470 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0094f470(INT Index);
};

// @baa 0x0094f470
QWORD* S_0094f470::sub_0094f470(INT Index)
{
    return &Items(Index);
}

// @baa 0x0094f4c0
void __stdcall sub_0094f4c0(int a0, int a1) {  }

struct E_0094f4d0 { BYTE Bytes[24]; };

struct S_0094f4d0 {
    TArray<E_0094f4d0> Items; // 0x00
    E_0094f4d0* sub_0094f4d0(INT Index);
};

// @baa 0x0094f4d0
E_0094f4d0* S_0094f4d0::sub_0094f4d0(INT Index)
{
    return &Items(Index);
}

struct E_0094f520 { BYTE Bytes[24]; };

struct S_0094f520 {
    TArray<E_0094f520> Items; // 0x00
    E_0094f520* sub_0094f520(INT Index);
};

// @baa 0x0094f520
E_0094f520* S_0094f520::sub_0094f520(INT Index)
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0094f930 { void* Data; int Num; int Max; void sub_0094f930(); };

// @baa 0x0094f930
void C_0094f930::sub_0094f930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S_0094f990 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0094f990(INT Index);
};

// @baa 0x0094f990
QWORD* S_0094f990::sub_0094f990(INT Index)
{
    return &Items(Index);
}

// @baa 0x0094f9e0
void __stdcall sub_0094f9e0(int a0, int a1) {  }

// @baa 0x0094f9f0
void __stdcall sub_0094f9f0(int a0, int a1) {  }

// @baa 0x0094fa00
void __stdcall sub_0094fa00(int a0, int a1) {  }

// @baa 0x0094fa10
void __stdcall sub_0094fa10(int a0, int a1) {  }

// @baa 0x0094fa20
void __stdcall sub_0094fa20(int a0, int a1) {  }

// @baa 0x0094fa30
void __stdcall sub_0094fa30(int a0, int a1) {  }

// @baa 0x0094fa40
void __stdcall sub_0094fa40(int a0, int a1) {  }

// @baa 0x0094fa50
void __stdcall sub_0094fa50(int a0, int a1) {  }

// @baa 0x0094fa60
void __stdcall sub_0094fa60(int a0, int a1) {  }

// @baa 0x0094fa70
void __stdcall sub_0094fa70(int a0, int a1) {  }

struct C_0094fad0 {
    int sub_0094fad0(int);
};

// @baa 0x0094fad0
int C_0094fad0::sub_0094fad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0094fae0 {
    int sub_0094fae0(int);
};

// @baa 0x0094fae0
int C_0094fae0::sub_0094fae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0094fbb0 {
    int sub_0094fbb0();
};

// @baa 0x0094fbb0
int C_0094fbb0::sub_0094fbb0(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}
