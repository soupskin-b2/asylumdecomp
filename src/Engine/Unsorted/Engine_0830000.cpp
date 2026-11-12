// Engine_0830000.cpp (part 1 of 7): 262 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00b2eb30(void);
// @baa 0x00830f30
undefined4 ULensFlare::sub_00830f30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b2eb30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    int sub_00832a90();
};

// @baa 0x00832a90
int C::sub_00832a90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xf0) * 0xb + *(int *)(param_1 + 0x84)) * 4 + 0x100;
}

struct C_00832ab0 {
    void sub_00832ab0();
};

// @baa 0x00832ab0
void C_00832ab0::sub_00832ab0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00832ce0 { int a, b, c; C_00832ce0(); };

// @baa 0x00832ce0
C_00832ce0::C_00832ce0() : a(0), b(0), c(0) {}

int sub_00832d00(void);
// @baa 0x008335f0
undefined4 ULensFlare::sub_008335f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00832d00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00833680
void sub_00833680(void) {  }

// @baa 0x00833690
float10 sub_00833690(double param_1)
{
  return (float10)param_1;
}

struct C_00833930 {
    uint sub_00833930();
};

// @baa 0x00833930
uint C_00833930::sub_00833930(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x44) >> 2 & 1;
}

struct C_00833940 {
    uint sub_00833940();
};

// @baa 0x00833940
uint C_00833940::sub_00833940(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x44) >> 3 & 1;
}

struct C_00833980 { int a; C_00833980(int); };

// @baa 0x00833980
C_00833980::C_00833980(int x) : a(x) {}

struct C_00833990 {
    bool sub_00833990(int);
};

// @baa 0x00833990
bool C_00833990::sub_00833990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 != param_2;
}

int sub_00650310(void);
int sub_00659100(...);
extern undefined4 g_026aeec4;
// @baa 0x008339a0
int sub_008339a0(void)
{
  if (g_026aeec4 == 0) {
    g_026aeec4 = sub_00659100(L"Engine");
    sub_00650310();
  }
  return g_026aeec4;
}

// @baa 0x008339d0
int sub_008339d0(int a0, int a1) { return a1; }

// @baa 0x008339e0
int sub_008339e0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01f43bb8;
// @baa 0x008339f0
undefined4 * UObject::sub_008339f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f43bb8);
  return param_1;
}

// @baa 0x00833a10
IMPLEMENT_CLASS_AT(UMotionBlurEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMotionBlurEffect.cpp", 10);

// @baa 0x00833a70
int sub_0076f6c0(...);
int sub_00771820(void);
extern undefined4 g_026b3ba4;
// @baa 0x00833a90
int sub_00833a90(void)
{
  if (g_026b3ba4 == 0) {
    g_026b3ba4 = sub_0076f6c0(L"Engine");
    sub_00771820();
  }
  return g_026b3ba4;
}

int sub_0076fb40(...);
int sub_00776df0(void);
extern undefined4 g_026b3bbc;
// @baa 0x00833ac0
int sub_00833ac0(void)
{
  if (g_026b3bbc == 0) {
    g_026b3bbc = sub_0076fb40(L"Engine");
    sub_00776df0();
  }
  return g_026b3bbc;
}

int sub_0076f9c0(...);
int sub_00776b50(void);
extern undefined4 g_026b3bb4;
// @baa 0x00833af0
int sub_00833af0(void)
{
  if (g_026b3bb4 == 0) {
    g_026b3bb4 = sub_0076f9c0(L"Engine");
    sub_00776b50();
  }
  return g_026b3bb4;
}

int sub_0076f900(...);
int sub_00776a00(void);
extern undefined4 g_026b3bb0;
// @baa 0x00833b20
int sub_00833b20(void)
{
  if (g_026b3bb0 == 0) {
    g_026b3bb0 = sub_0076f900(L"Engine");
    sub_00776a00();
  }
  return g_026b3bb0;
}

int sub_0076fa80(...);
int sub_00776ca0(void);
extern undefined4 g_026b3bb8;
// @baa 0x00833b50
int sub_00833b50(void)
{
  if (g_026b3bb8 == 0) {
    g_026b3bb8 = sub_0076fa80(L"Engine");
    sub_00776ca0();
  }
  return g_026b3bb8;
}

int sub_0076f780(...);
int sub_00771970(void);
extern undefined4 g_026b3ba8;
// @baa 0x00833b80
int sub_00833b80(void)
{
  if (g_026b3ba8 == 0) {
    g_026b3ba8 = sub_0076f780(L"Engine");
    sub_00771970();
  }
  return g_026b3ba8;
}

int sub_0076f840(...);
int sub_00771ac0(void);
extern undefined4 g_026b3bac;
// @baa 0x00833bb0
int sub_00833bb0(void)
{
  if (g_026b3bac == 0) {
    g_026b3bac = sub_0076f840(L"Engine");
    sub_00771ac0();
  }
  return g_026b3bac;
}

int sub_0076fe40(...);
int sub_00771d60(void);
extern undefined4 g_026b3c94;
// @baa 0x00833be0
int sub_00833be0(void)
{
  if (g_026b3c94 == 0) {
    g_026b3c94 = sub_0076fe40(L"Engine");
    sub_00771d60();
  }
  return g_026b3c94;
}

struct C_00833c20 {
    C_00833c20* sub_00833c20(int arg1);
};

// @baa 0x00833c20
C_00833c20* C_00833c20::sub_00833c20(int arg1)
{
    return this;
}

struct C_00833c30 { C_00833c30* sub_00833c30(int a0); };

// @baa 0x00833c30
C_00833c30* C_00833c30::sub_00833c30(int a0) { return this; }

// @baa 0x00833cd0
undefined4 sub_00833cd0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00833ce0
int sub_00833ce0(int a0, int a1) { return a1; }

// @baa 0x00833cf0
int sub_00833cf0(int a0, int a1) { return a1; }

int sub_0077bfb0(...);
int sub_00783870(void);
extern undefined4 g_026b3cb4;
// @baa 0x00833d00
int sub_00833d00(void)
{
  if (g_026b3cb4 == 0) {
    g_026b3cb4 = sub_0077bfb0(L"Engine");
    sub_00783870();
  }
  return g_026b3cb4;
}

int sub_0077bb30(...);
int sub_007808e0(void);
extern undefined4 g_026b3c90;
// @baa 0x00833d30
int sub_00833d30(void)
{
  if (g_026b3c90 == 0) {
    g_026b3c90 = sub_0077bb30(L"Engine");
    sub_007808e0();
  }
  return g_026b3c90;
}

int sub_00779f70(...);
int sub_0077f3b0(void);
extern undefined4 g_026b3bdc;
// @baa 0x00833d60
int sub_00833d60(void)
{
  if (g_026b3bdc == 0) {
    g_026b3bdc = sub_00779f70(L"Engine");
    sub_0077f3b0();
  }
  return g_026b3bdc;
}

// @baa 0x00833d90
int sub_00833d90(int a0, int a1) { return a1; }

int sub_00756b90(void);
int sub_00779df0(...);
extern undefined4 g_026b3bd4;
// @baa 0x00833da0
int sub_00833da0(void)
{
  if (g_026b3bd4 == 0) {
    g_026b3bd4 = sub_00779df0(L"Engine");
    sub_00756b90();
  }
  return g_026b3bd4;
}

extern char g_01f43ccc[];
struct C_00833dd0 { void sub_00833dd0(void); };

// @baa 0x00833dd0
void C_00833dd0::sub_00833dd0(void) { *(int*)((char*)this + 0) = (int)g_01f43ccc; }

// @baa 0x00833de0
undefined4 * UMotionBlurEffect::sub_00833de0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f43ccc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00834130
int sub_00834130(int a0, int a1) { return a1; }

int sub_00c4b1c0(void);
int sub_00c5eac0(...);
extern undefined4 g_026c2b70;
// @baa 0x00834140
int sub_00834140(void)
{
  if (g_026c2b70 == 0) {
    g_026c2b70 = sub_00c5eac0(L"Engine");
    sub_00c4b1c0();
  }
  return g_026c2b70;
}

// @baa 0x00834170
void UAnimObject::vf_11c(void) {  }

// @baa 0x00834180
int sub_00834180(int a0, int a1) { return a1; }

// @baa 0x00834190
int sub_00834190(int a0, int a1) { return a1; }

// @baa 0x008341a0
int sub_008341a0(int a0, int a1) { return a1; }

// @baa 0x008341b0
int sub_008341b0(int a0, int a1) { return a1; }

// @baa 0x008341c0
int sub_008341c0(int a0, int a1) { return a1; }

// @baa 0x008341d0
int sub_008341d0(int a0, int a1) { return a1; }

// @baa 0x008341e0
int sub_008341e0(int a0, int a1) { return a1; }

extern undefined * g_01f43d08;
// @baa 0x008341f0
undefined4 * UObject::sub_008341f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f43d08);
  return param_1;
}

// @baa 0x00834210
IMPLEMENT_CLASS_AT(UMorphWeightSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 13);

// @baa 0x00834270
// @baa 0x00834290
IMPLEMENT_CLASS_AT(UMorphTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 11);

// @baa 0x00834550
// @baa 0x00834660
int UMorphWeightSequence::vf_000(void) { return 1; }

// @baa 0x00834670
bool UMorphWeightSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008346b0
IMPLEMENT_CLASS_AT(UMorphNodeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 15);

// @baa 0x008347c0
int UMorphNodeBase::vf_000(void) { return 1; }

// @baa 0x008347d0
bool UMorphNodeBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008354a0
void ANavigationPoint::vf_3a4(int a0, int a1) { *(int*)((char*)this + 612) = a0; }

struct B {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
    virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
    virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
    virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74();
    virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84();
    virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
    virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
    virtual void v95(); virtual void v96(); virtual void v97(); virtual void v98(); virtual void v99();
    virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103(); virtual void v104();
    virtual void v105(); virtual void v106(); virtual void v107(); virtual void v108(); virtual void v109();
    virtual void v110(); virtual void v111(); virtual void v112(); virtual void v113(); virtual void v114();
    virtual void v115(); virtual void v116(); virtual void v117(); virtual void v118(); virtual void v119();
    virtual void v120(); virtual void v121(); virtual void v122(); virtual void v123(); virtual void v124();
    virtual void v125(); virtual void v126(); virtual void v127(); virtual void v128(); virtual void v129();
    virtual void v130(); virtual void v131(); virtual void v132(); virtual void v133(); virtual void v134();
    virtual void v135(); virtual void v136(); virtual void v137(); virtual void v138(); virtual void v139();
    virtual void v140(); virtual void v141(); virtual void v142(); virtual void v143(); virtual void v144();
    virtual void v145(); virtual void v146(); virtual void v147(); virtual void v148(); virtual void v149();
    virtual void v150(); virtual void v151(); virtual void v152(); virtual void v153(); virtual void v154();
    virtual void v155(); virtual void v156(); virtual void v157(); virtual void v158(); virtual void v159();
    virtual void v160(); virtual void v161(); virtual void v162(); virtual void v163(); virtual void v164();
    virtual void v165(); virtual void v166(); virtual void v167(); virtual void v168(); virtual void v169();
    virtual void v170(); virtual void v171(); virtual void v172(); virtual void v173(); virtual void v174();
    virtual void v175(); virtual void v176(); virtual void v177(); virtual void v178(); virtual void v179();
    virtual void v180(); virtual void v181(); virtual void v182(); virtual void v183(); virtual void v184();
    virtual void v185(); virtual void v186(); virtual void v187(); virtual void v188(); virtual void v189();
    virtual void v190(); virtual void v191(); virtual void v192(); virtual void v193(); virtual void v194();
    virtual void v195(); virtual void v196(); virtual void v197(); virtual void v198(); virtual void v199();
    virtual void v200(); virtual void v201(); virtual void v202(); virtual void v203(); virtual void v204();
    virtual void v205(); virtual void v206(); virtual void v207(); virtual void v208(); virtual void v209();
    virtual void v210(); virtual void v211(); virtual void v212(); virtual void v213(); virtual void v214();
    virtual void v215(); virtual void v216(); virtual void v217(); virtual void v218(); virtual void v219();
    virtual void baseTarget();
};

struct C_008358e0 : B { virtual void sub_008358e0(); };

// @baa 0x008358e0
void C_008358e0::sub_008358e0() { baseTarget(); }

// @baa 0x008359e0
undefined4 AActor::vf_2a8(int param_2)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x30) & 0x800) != 0) && (param_2 == param_1)) {
    return 1;
  }
  return 0;
}

// @baa 0x00835b10
undefined4 ANavigationPoint::vf_378(void)
{
    int param_1 = (int)this;

  if ((((*(int *)(param_1 + 0xf8) == 0) ||
       ((*(uint *)(*(int *)(param_1 + 0xf8) + 0x1dc) & 0x1000) == 0)) &&
      ((*(uint *)(param_1 + 0x1a8) & 0x800) == 0)) && (*(int *)(param_1 + 0x24c) != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x00835b50
void ANavigationPoint::vf_38c(int a0) {  }

// @baa 0x00835b60
undefined4 ANavigationPoint::sub_00835b60(int param_2)
{
    int param_1 = (int)this;

  if ((((param_2 != 0) && (*(int *)(param_2 + 0x264) != -1)) && (*(int *)(param_1 + 0x264) != -1))
     && (*(int *)(param_1 + 0x264) != *(int *)(param_2 + 0x264))) {
    return 1;
  }
  return 0;
}

struct C_008366a0 {
    undefined4 sub_008366a0();
};

extern undefined4 g_026b55f8;
// @baa 0x008366a0
undefined4 C_008366a0::sub_008366a0(void)
{
    undefined4 param_1 = (undefined4)this;
  g_026b55f8 = g_026b55f8 + 1;
  return param_1;
}

// @baa 0x008366b0
void sub_008366b0(void)
{
  g_026b55f8 = g_026b55f8 + -1;
  return;
}

// @baa 0x00836700
UINT ALiftCenter::vf_378() { return 1; }

struct C_view {
    int sub_0087b1d0(int, int);
};

// @baa 0x00836aa0
undefined4 ANavigationPoint::vf_2b0(int param_2, float * param_3)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (((((*(byte *)(param_1 + 0x1ab) & 1) != 0) && (*param_3 == *(float *)(param_2 + 0x54))) &&
      (param_3[1] == *(float *)(param_2 + 0x58))) &&
     ((param_3[2] == *(float *)(param_2 + 0x5c) && (*(int *)(param_2 + 0x9c) == param_1)))) {
    return 1;
  }
  uVar1 = ((C_view *)(this))->sub_0087b1d0(param_2, (int)(param_3));
  return uVar1;
}

// @baa 0x00837630
UINT AVolumePathNode::vf_378() { return 0; }

// @baa 0x008376d0
void AVolumePathNode::vf_37c(int a0) {  }

// @baa 0x00837860
int ADoorMarker::vf_2a4(void) { return *(int*)((char*)this + 640); }

// @baa 0x00837870
undefined4 ADoorMarker::vf_2a8(int param_2)
{
    int param_1 = (int)this;

  if ((param_2 != 0) && (param_2 == *(int *)(param_1 + 0x280))) {
    return 1;
  }
  return 0;
}

struct C_view_00837890 {
    int sub_00784170(int, int, int);
};

// @baa 0x00837890
void ADoorMarker::vf_2c0(void)
{
    int param_1 = (int)this;
  int iVar1;
  uint uVar2;
  if (*(int *)(param_1 + 0x280) != 0) {
    *(int *)(*(int *)(param_1 + 0x280) + 0x1e4) = param_1;
    iVar1 = *(int *)(param_1 + 0x280);
    uVar2 = *(uint *)(iVar1 + 0x38) >> 2 & 1;
    if ((uVar2 != 0) && ((*(uint *)(iVar1 + 0x34) & 0x80000000) != 0)) {
      ((C_view_00837890 *)((*(char **)((char *)this + 0x280))))->sub_00784170(0, uVar2, *(uint *)(iVar1 + 0x30) >> 0xe & 1);
      *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) | 0x10;
    }
  }
  return;
}

// @baa 0x008379c0
void ANavigationPoint::vf_3ac(void) {  }

// @baa 0x008379d0
UBOOL ANavigationPoint::CanTeleport(class AActor* a0) { return 0; }

struct C_00837ab0 {
    float10 sub_00837ab0(float *);
};

// @baa 0x00837ab0
float10 C_00837ab0::sub_00837ab0(float * param_2)
{
    float * param_1 = (float *)this;

  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] + (float10)param_2[2] * (float10)param_1[2];
}

struct C_00837df0 {
    void sub_00837df0();
};

// @baa 0x00837df0
void C_00837df0::sub_00837df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

struct C_00837e10 {
    void sub_00837e10();
};

// @baa 0x00837e10
void C_00837e10::sub_00837e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// @baa 0x00837e30
int sub_00837e30(int param_1, int param_2)
{
  return *(int *)(param_1 + 8) * param_2 + *(int *)(param_1 + 0x10);
}

struct C_00838630 { C_00838630* sub_00838630(void); };

// @baa 0x00838630
C_00838630* C_00838630::sub_00838630(void) { *(int*)((char*)this + 0) = (int)g_01f43ccc; return this; }

struct C_00838660 { int a, b; C_00838660(int, int); };

// @baa 0x00838660
C_00838660::C_00838660(int x, int y) : a(x), b(y) {}

struct C_00838680 { int sub_00838680(void); };

// @baa 0x00838680
int C_00838680::sub_00838680(void) { return *(int*)((char*)this + 4); }

struct C_00838690 { int a, b, c; C_00838690(); };

// @baa 0x00838690
C_00838690::C_00838690() : a(0), b(0), c(0) {}

struct C_008386a0 {
    void sub_008386a0();
};

int sub_0053df70(...);
// @baa 0x008386a0
void C_008386a0::sub_008386a0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008386d0 { int sub_008386d0(void); };

// @baa 0x008386d0
int C_008386d0::sub_008386d0(void) { return *(int*)((char*)this + 4); }

struct C_008386e0 { int a, b, c; C_008386e0(); };

// @baa 0x008386e0
C_008386e0::C_008386e0() : a(0), b(0), c(0) {}

struct C_008386f0 { int a, b, c; C_008386f0(); };

// @baa 0x008386f0
C_008386f0::C_008386f0() : a(0), b(0), c(0) {}

struct C_00838700 { int sub_00838700(void); };

// @baa 0x00838700
int C_00838700::sub_00838700(void) { return *(int*)((char*)this + 4); }

struct C_00838710 { int sub_00838710(void); };

// @baa 0x00838710
int C_00838710::sub_00838710(void) { return *(int*)((char*)this + 4); }

struct C_00838720 { int a, b, c; C_00838720(); };

// @baa 0x00838720
C_00838720::C_00838720() : a(0), b(0), c(0) {}

struct C_00838730 { int sub_00838730(void); };

// @baa 0x00838730
int C_00838730::sub_00838730(void) { return *(int*)((char*)this + 4); }

struct C_00838740 { int sub_00838740(void); };

// @baa 0x00838740
int C_00838740::sub_00838740(void) { return *(int*)((char*)this + 4); }

struct T_00838750 { int x; };

// @baa 0x00838750
template T_00838750& TIndirectArray<T_00838750>::operator()(INT);

struct C_008387a0 { int a, b, c; C_008387a0(); };

// @baa 0x008387a0
C_008387a0::C_008387a0() : a(0), b(0), c(0) {}

struct C_008387b0 { int sub_008387b0(void); };

// @baa 0x008387b0
int C_008387b0::sub_008387b0(void) { return *(int*)((char*)this + 4); }

struct C_008387c0 { int a, b, c; C_008387c0(); };

// @baa 0x008387c0
C_008387c0::C_008387c0() : a(0), b(0), c(0) {}

struct C_008387d0 { int sub_008387d0(void); };

// @baa 0x008387d0
int C_008387d0::sub_008387d0(void) { return *(int*)((char*)this + 4); }

struct C_008387e0 {
    void sub_008387e0();
};

// @baa 0x008387e0
void C_008387e0::sub_008387e0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00838810 { int a, b, c; C_00838810(); };

// @baa 0x00838810
C_00838810::C_00838810() : a(0), b(0), c(0) {}

struct C_00838820 { int sub_00838820(void); };

// @baa 0x00838820
int C_00838820::sub_00838820(void) { return *(int*)((char*)this + 4); }

struct C_00838830 { int sub_00838830(void); };

// @baa 0x00838830
int C_00838830::sub_00838830(void) { return *(int*)((char*)this + 4); }

struct C_00838840 { int sub_00838840(void); };

// @baa 0x00838840
int C_00838840::sub_00838840(void) { return *(int*)((char*)this + 4); }

struct C_00838850 { int sub_00838850(void); };

// @baa 0x00838850
int C_00838850::sub_00838850(void) { return *(int*)((char*)this + 4); }

struct C_00838860 { int sub_00838860(void); };

// @baa 0x00838860
int C_00838860::sub_00838860(void) { return *(int*)((char*)this + 4); }

struct C_00838870 { int a, b, c; C_00838870(); };

// @baa 0x00838870
C_00838870::C_00838870() : a(0), b(0), c(0) {}

struct C_00838880 { int sub_00838880(void); };

// @baa 0x00838880
int C_00838880::sub_00838880(void) { return *(int*)((char*)this + 0); }

struct C_00838890 { int sub_00838890(void); };

// @baa 0x00838890
int C_00838890::sub_00838890(void) { return *(int*)((char*)this + 0); }

struct C_008388a0 { int sub_008388a0(void); };

// @baa 0x008388a0
int C_008388a0::sub_008388a0(void) { return *(int*)((char*)this + 0); }

struct C_008388b0 { int sub_008388b0(void); };

// @baa 0x008388b0
int C_008388b0::sub_008388b0(void) { return *(int*)((char*)this + 0); }

struct C_008388c0 { int sub_008388c0(void); };

// @baa 0x008388c0
int C_008388c0::sub_008388c0(void) { return *(int*)((char*)this + 0); }

struct C_008388f0 { int sub_008388f0(void); };

// @baa 0x008388f0
int C_008388f0::sub_008388f0(void) { return *(int*)((char*)this + 4); }

struct C_00838900 { int sub_00838900(void); };

// @baa 0x00838900
int C_00838900::sub_00838900(void) { return *(int*)((char*)this + 8); }

struct C_00838910 { int sub_00838910(void); };

// @baa 0x00838910
int C_00838910::sub_00838910(void) { return *(int*)((char*)this + 12); }

struct C_00838920 { void sub_00838920(int a0); };

// @baa 0x00838920
void C_00838920::sub_00838920(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_00838930 { int a; C_00838930(int); };

// @baa 0x00838930
C_00838930::C_00838930(int x) : a(x) {}

struct C_00838950 {
    C_00838950 *sub_00838950();
};

// @baa 0x00838950
C_00838950 *C_00838950::sub_00838950()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_00838960 {
    int *f;
    C_00838960 *sub_00838960();
};

// @baa 0x00838960
C_00838960 *C_00838960::sub_00838960()
{
    f = (int*)f[2];
    return this;
}

struct C_00838970 { int sub_00838970(void); };

// @baa 0x00838970
int C_00838970::sub_00838970(void) { return *(int*)((char*)this + 0); }

struct C_00838980 { int sub_00838980(void); };

// @baa 0x00838980
int C_00838980::sub_00838980(void) { return *(int*)((char*)this + 4); }

struct C_00838990 { int sub_00838990(void); };

// @baa 0x00838990
int C_00838990::sub_00838990(void) { return *(int*)((char*)this + 4); }

struct C_008389a0 { int a, b, c; C_008389a0(); };

// @baa 0x008389a0
C_008389a0::C_008389a0() : a(0), b(0), c(0) {}

struct C_008389b0 { int sub_008389b0(void); };

// @baa 0x008389b0
int C_008389b0::sub_008389b0(void) { return *(int*)((char*)this + 4); }

// @baa 0x008389c0
int sub_008389c0(int a0) { return a0; }

struct C_008389d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_008389d0* sub_008389d0(INT value);
};

// @baa 0x008389d0
C_008389d0* C_008389d0::sub_008389d0(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

struct C_00838d70 { C_00838d70* sub_00838d70(int a0); };

// @baa 0x00838d70
C_00838d70* C_00838d70::sub_00838d70(int a0) { return this; }

struct C_00838f30 { C_00838f30* sub_00838f30(int a0); };

// @baa 0x00838f30
C_00838f30* C_00838f30::sub_00838f30(int a0) { return this; }

struct C_00838f40 { int sub_00838f40(void); };

// @baa 0x00838f40
int C_00838f40::sub_00838f40(void) { return *(int*)((char*)this + 0); }

struct C_00838f50 { int sub_00838f50(void); };

// @baa 0x00838f50
int C_00838f50::sub_00838f50(void) { return *(int*)((char*)this + 0); }

struct C_00838f60 { int sub_00838f60(void); };

// @baa 0x00838f60
int C_00838f60::sub_00838f60(void) { return *(int*)((char*)this + 0); }

struct C_00838fe0 { int sub_00838fe0(void); };

// @baa 0x00838fe0
int C_00838fe0::sub_00838fe0(void) { return *(int*)((char*)this + 0); }

struct C_00838ff0 { int sub_00838ff0(void); };

// @baa 0x00838ff0
int C_00838ff0::sub_00838ff0(void) { return *(int*)((char*)this + 0); }

struct C_00839000 { int sub_00839000(void); };

// @baa 0x00839000
int C_00839000::sub_00839000(void) { return *(int*)((char*)this + 0); }

struct C_00839010 { int sub_00839010(void); };

// @baa 0x00839010
int C_00839010::sub_00839010(void) { return *(int*)((char*)this + 0); }

struct C_00839090 {
    int sub_00839090(int);
};

// @baa 0x00839090
int C_00839090::sub_00839090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_008390a0 { int sub_008390a0(void); };

// @baa 0x008390a0
int C_008390a0::sub_008390a0(void) { return *(int*)((char*)this + 0); }

struct C_008390b0 { int sub_008390b0(void); };

// @baa 0x008390b0
int C_008390b0::sub_008390b0(void) { return *(int*)((char*)this + 0); }

struct C_00839160 { int sub_00839160(void); };

// @baa 0x00839160
int C_00839160::sub_00839160(void) { return *(int*)((char*)this + 0); }

struct C_00839170 { int sub_00839170(void); };

// @baa 0x00839170
int C_00839170::sub_00839170(void) { return *(int*)((char*)this + 0); }

struct C_008391a0 {
    undefined4 sub_008391a0();
};

// @baa 0x008391a0
undefined4 C_008391a0::sub_008391a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_008391b0 { C_008391b0* sub_008391b0(int a0); };

// @baa 0x008391b0
C_008391b0* C_008391b0::sub_008391b0(int a0) { return this; }

struct C_008391c0 { int sub_008391c0(void); };

// @baa 0x008391c0
int C_008391c0::sub_008391c0(void) { return *(int*)((char*)this + 0); }

struct C_008391d0 { C_008391d0* sub_008391d0(int a0); };

// @baa 0x008391d0
C_008391d0* C_008391d0::sub_008391d0(int a0) { return this; }

struct C_008391e0 { int sub_008391e0(void); };

// @baa 0x008391e0
int C_008391e0::sub_008391e0(void) { return *(int*)((char*)this + 0); }

struct C_008391f0 { C_008391f0* sub_008391f0(int a0); };

// @baa 0x008391f0
C_008391f0* C_008391f0::sub_008391f0(int a0) { return this; }

struct C_00839200 { int sub_00839200(void); };

// @baa 0x00839200
int C_00839200::sub_00839200(void) { return *(int*)((char*)this + 0); }

struct C_00839210 { int sub_00839210(void); };

// @baa 0x00839210
int C_00839210::sub_00839210(void) { return *(int*)((char*)this + 0); }

struct C_00839370 { C_00839370* sub_00839370(void); };

// @baa 0x00839370
C_00839370* C_00839370::sub_00839370(void) { return this; }

struct C_00839380 { int sub_00839380(void); };

// @baa 0x00839380
int C_00839380::sub_00839380(void) { return *(int*)((char*)this + 0); }

struct C_00839390 { int sub_00839390(void); };

// @baa 0x00839390
int C_00839390::sub_00839390(void) { return *(int*)((char*)this + 0); }

struct C_008393a0 {
    int sub_008393a0();
};

// @baa 0x008393a0
int C_008393a0::sub_008393a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_008393b0 { int a, b; C_008393b0(int, int); };

// @baa 0x008393b0
C_008393b0::C_008393b0(int x, int y) : a(x), b(y) {}

struct C_008393d0 {
    int sub_008393d0();
};

// @baa 0x008393d0
int C_008393d0::sub_008393d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_008393e0 { int a, b; C_008393e0(int, int); };

// @baa 0x008393e0
C_008393e0::C_008393e0(int x, int y) : a(x), b(y) {}

// @baa 0x00839400
bool sub_00839400(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00839410 { int sub_00839410(void); };

// @baa 0x00839410
int C_00839410::sub_00839410(void) { return *(int*)((char*)this + 0); }

struct C_00839420 { int sub_00839420(void); };

// @baa 0x00839420
int C_00839420::sub_00839420(void) { return *(int*)((char*)this + 0); }

struct C_00839430 { int sub_00839430(void); };

// @baa 0x00839430
int C_00839430::sub_00839430(void) { return *(int*)((char*)this + 0); }

struct C_00839440 { int sub_00839440(void); };

// @baa 0x00839440
int C_00839440::sub_00839440(void) { return *(int*)((char*)this + 0); }

struct C_00839450 { int sub_00839450(void); };

// @baa 0x00839450
int C_00839450::sub_00839450(void) { return *(int*)((char*)this + 0); }

struct C_00839460 { int sub_00839460(void); };

// @baa 0x00839460
int C_00839460::sub_00839460(void) { return *(int*)((char*)this + 0); }

struct C_00839470 { int sub_00839470(void); };

// @baa 0x00839470
int C_00839470::sub_00839470(void) { return *(int*)((char*)this + 0); }

struct C_00839480 { int sub_00839480(void); };

// @baa 0x00839480
int C_00839480::sub_00839480(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[48]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00839490(INT Index);
};

// @baa 0x00839490
E* S::sub_00839490(INT Index)
{
    return &Items(Index);
}

struct C_008394e0 { int sub_008394e0(void); };

// @baa 0x008394e0
int C_008394e0::sub_008394e0(void) { return *(int*)((char*)this + 0); }

struct C_008394f0 { int sub_008394f0(void); };

// @baa 0x008394f0
int C_008394f0::sub_008394f0(void) { return *(int*)((char*)this + 0); }

struct C_00839500 { int sub_00839500(void); };

// @baa 0x00839500
int C_00839500::sub_00839500(void) { return *(int*)((char*)this + 0); }

struct C_00839580 { int sub_00839580(void); };

// @baa 0x00839580
int C_00839580::sub_00839580(void) { return *(int*)((char*)this + 0); }

struct C_00839590 { int sub_00839590(void); };

// @baa 0x00839590
int C_00839590::sub_00839590(void) { return *(int*)((char*)this + 0); }

struct C_008395a0 { int sub_008395a0(void); };

// @baa 0x008395a0
int C_008395a0::sub_008395a0(void) { return *(int*)((char*)this + 0); }

struct C_008395b0 { int sub_008395b0(void); };

// @baa 0x008395b0
int C_008395b0::sub_008395b0(void) { return *(int*)((char*)this + 0); }

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
	FFaceFXElement* sub_008395c0(INT Index);
};

// @baa 0x008395c0
FFaceFXElement* UFxRenderWidget::sub_008395c0(INT Index)
{
	return &BoneArray(Index);
}

struct C_00839610 { int sub_00839610(void); };

// @baa 0x00839610
int C_00839610::sub_00839610(void) { return *(int*)((char*)this + 0); }

// @baa 0x00839690
int sub_00839690(int a0) { return *(int*)a0; }

// @baa 0x008396a0
bool sub_008396a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_008396b0 {
    void sub_008396b0(undefined4 *);
};

// @baa 0x008396b0
void C_008396b0::sub_008396b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x008396d0
int sub_008396d0(int a0) { return *(int*)a0; }

// @baa 0x008396e0
bool sub_008396e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_008396f0 {
    void sub_008396f0(undefined4 *);
};

// @baa 0x008396f0
void C_008396f0::sub_008396f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00839710 {
    int sub_00839710(int);
};

// @baa 0x00839710
int C_00839710::sub_00839710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00839720 { int sub_00839720(void); };

// @baa 0x00839720
int C_00839720::sub_00839720(void) { return *(int*)((char*)this + 20); }

struct C_00839730 { int sub_00839730(void); };

// @baa 0x00839730
int C_00839730::sub_00839730(void) { return *(int*)((char*)this + 20); }

int sub_00627f00(...);
// @baa 0x00839a40
void sub_00839a40(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

int sub_005d88c0(...);
int sub_006dac50(void);
int sub_006fa4e0(...);
extern undefined4 g_026b12a8;
// @baa 0x00839a60
void sub_00839a60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b12a8 == 0) {
    g_026b12a8 = sub_006fa4e0(L"Engine");
    sub_006dac50();
  }
  sub_005d88c0(g_026b12a8,param_1,param_2,param_3);
  return;
}

// @baa 0x00839aa0
void sub_00839aa0(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

struct S_00839ab0 {
    TArray<E> Items; // 0x00
    const E* sub_00839ab0(INT Index) const;
};

// @baa 0x00839ab0
const E* S_00839ab0::sub_00839ab0(INT Index) const
{
    return &Items(Index);
}

struct E_00839b00 { BYTE Bytes[12]; };

struct S_00839b00 {
    TArray<E_00839b00> Items; // 0x00
    const E_00839b00* sub_00839b00(INT Index) const;
};

// @baa 0x00839b00
const E_00839b00* S_00839b00::sub_00839b00(INT Index) const
{
    return &Items(Index);
}

struct E_00839b50 { BYTE Bytes[12]; };

struct S_00839b50 {
    TArray<E_00839b50> Items; // 0x00
    const E_00839b50* sub_00839b50(INT Index) const;
};

// @baa 0x00839b50
const E_00839b50* S_00839b50::sub_00839b50(INT Index) const
{
    return &Items(Index);
}

struct E_00839ba0 { BYTE Bytes[16]; };

struct S_00839ba0 {
    TArray<E_00839ba0> Items; // 0x00
    const E_00839ba0* sub_00839ba0(INT Index) const;
};

// @baa 0x00839ba0
const E_00839ba0* S_00839ba0::sub_00839ba0(INT Index) const
{
    return &Items(Index);
}

struct E_00839bf0 { BYTE Bytes[184]; };

struct S_00839bf0 {
    TArray<E_00839bf0> Items; // 0x00
    const E_00839bf0* sub_00839bf0(INT Index) const;
};

// @baa 0x00839bf0
const E_00839bf0* S_00839bf0::sub_00839bf0(INT Index) const
{
    return &Items(Index);
}

struct S_00839d10 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00839d10(INT Index) const;
};

// @baa 0x00839d10
const DWORD* S_00839d10::sub_00839d10(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00839d60
void sub_00839d60(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct A_00839d80 { virtual void sub_0083a2e0(); char pad[16]; };

struct B_00839d80 { virtual void sub_0083a2e0(); };

struct C_00839d80 : A_00839d80, B_00839d80 { virtual void sub_0083a2e0(); C_00839d80(); };

C_00839d80::C_00839d80() {}

// @baa 0x00839d80
void C_00839d80::sub_0083a2e0() {}

struct A_00839d90 { virtual void sub_0083a370(); char pad[16]; };

struct B_00839d90 { virtual void sub_0083a370(); };

struct C_00839d90 : A_00839d90, B_00839d90 { virtual void sub_0083a370(); C_00839d90(); };

C_00839d90::C_00839d90() {}

// @baa 0x00839d90
void C_00839d90::sub_0083a370() {}

struct A_00839da0 { virtual void sub_0083a400(); char pad[16]; };

struct B_00839da0 { virtual void sub_0083a400(); };

struct C_00839da0 : A_00839da0, B_00839da0 { virtual void sub_0083a400(); C_00839da0(); };

C_00839da0::C_00839da0() {}

// @baa 0x00839da0
void C_00839da0::sub_0083a400() {}

struct C_00839db0 {
    undefined4 sub_00839db0(int *);
};

// @baa 0x00839db0
undefined4 C_00839db0::sub_00839db0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_2 != 0) && (*param_2 == *param_1)) {
    return 1;
  }
  return 0;
}

// @baa 0x00839e10
undefined4 sub_00839e10(float * param_1, float param_2, float * param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  fVar1 = *param_1;
  fVar3 = *param_3;
  fVar2 = 0.0;
  if ((fVar1 < fVar3) || (fVar3 = param_3[3], fVar3 < fVar1)) {
    fVar2 = (fVar1 - fVar3) * (fVar1 - fVar3);
  }
  fVar1 = param_1[1];
  fVar3 = param_3[1];
  if ((fVar1 < fVar3) || (fVar3 = param_3[4], fVar3 < fVar1)) {
    fVar2 = (fVar1 - fVar3) * (fVar1 - fVar3) + fVar2;
  }
  fVar1 = param_1[2];
  fVar3 = param_3[2];
  if ((fVar1 < fVar3) || (fVar3 = param_3[5], fVar3 < fVar1)) {
    fVar2 = (fVar1 - fVar3) * (fVar1 - fVar3) + fVar2;
  }
  if (fVar2 <= param_2) {
    return 1;
  }
  return 0;
}

int sub_007249d0(void);
// @baa 0x0083a2e0
undefined4 UMorphWeightSequence::sub_0083a2e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0083a370
undefined4 UMorphWeightSequence::sub_0083a370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0083a400
undefined4 UMorphWeightSequence::sub_0083a400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ebbe1c;
// @baa 0x0083a420
undefined4 * UMorphWeightSequence::sub_0083a420(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebbe1c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_007aa380(class AActor* A);
// @baa 0x0083a480
UBOOL ATeleporter::CanTeleport(class AActor* A)
{
    if (A == NULL || !A->bCanTeleport)
    {
        return FALSE;
    }
    if (!bCanTeleportVehicles && sub_007aa380(A))  // A->IsA(AVehicle::StaticClass())
    {
        return FALSE;
    }
    return TRUE;
}

struct ObjB {
    int sub_0083b3e0();
};

struct ObjA {
    int f0;
    ObjB* p4;
    int sub_0083c190();
};

// @baa 0x0083c190
int ObjA::sub_0083c190() { return p4->sub_0083b3e0(); }

typedef uint size_t;

struct C_0083c650 {
    int sub_0083c650(int);
    int sub_00838d00(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0083c650
int C_0083c650::sub_0083c650(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0083c650 *)(this))->sub_00838d00(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct S_0083c680 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0083c680(INT Index);
};

// @baa 0x0083c680
DWORD* S_0083c680::sub_0083c680(INT Index)
{
    return &Items(Index);
}

struct S_0083c6d0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0083c6d0(INT Index);
};

// @baa 0x0083c6d0
QWORD* S_0083c6d0::sub_0083c6d0(INT Index)
{
    return &Items(Index);
}

struct S_0083c720 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0083c720(INT Index);
};

// @baa 0x0083c720
QWORD* S_0083c720::sub_0083c720(INT Index)
{
    return &Items(Index);
}

struct E_0083c7d0 { BYTE Bytes[72]; };

struct S_0083c7d0 {
    TArray<E_0083c7d0> Items; // 0x00
    E_0083c7d0* sub_0083c7d0(INT Index);
};

// @baa 0x0083c7d0
E_0083c7d0* S_0083c7d0::sub_0083c7d0(INT Index)
{
    return &Items(Index);
}

struct E_0083c820 { BYTE Bytes[36]; };

struct S_0083c820 {
    TArray<E_0083c820> Items; // 0x00
    const E_0083c820* sub_0083c820(INT Index) const;
};

// @baa 0x0083c820
const E_0083c820* S_0083c820::sub_0083c820(INT Index) const
{
    return &Items(Index);
}

struct E_0083c870 { BYTE Bytes[40]; };

struct S_0083c870 {
    TArray<E_0083c870> Items; // 0x00
    const E_0083c870* sub_0083c870(INT Index) const;
};

// @baa 0x0083c870
const E_0083c870* S_0083c870::sub_0083c870(INT Index) const
{
    return &Items(Index);
}

struct E_0083c8c0 { BYTE Bytes[52]; };

struct S_0083c8c0 {
    TArray<E_0083c8c0> Items; // 0x00
    E_0083c8c0* sub_0083c8c0(INT Index);
};

// @baa 0x0083c8c0
E_0083c8c0* S_0083c8c0::sub_0083c8c0(INT Index)
{
    return &Items(Index);
}

struct S_0083cb80 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0083cb80(INT Index);
};

// @baa 0x0083cb80
QWORD* S_0083cb80::sub_0083cb80(INT Index)
{
    return &Items(Index);
}

struct S_0083cbd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0083cbd0(INT Index);
};

// @baa 0x0083cbd0
DWORD* S_0083cbd0::sub_0083cbd0(INT Index)
{
    return &Items(Index);
}

struct C_0083cc80 {
    void sub_0083cc80();
};

int sub_00839300(void);
extern undefined4 g_01f43ec4;
// @baa 0x0083cc80
void C_0083cc80::sub_0083cc80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f43ec4);
  sub_00839300();
  return;
}

struct C_0083cdd0 {
    void sub_0083cdd0(int *);
};

// @baa 0x0083cdd0
void C_0083cdd0::sub_0083cdd0(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *param_2) {
        return;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
  }
  return;
}

struct C_0083cdf0 { int sub_0083cdf0(void); };

// @baa 0x0083cdf0
int C_0083cdf0::sub_0083cdf0(void) { return *(int*)((char*)this + 0); }

struct S_0083ce00 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0083ce00(INT Index);
};

// @baa 0x0083ce00
DWORD* S_0083ce00::sub_0083ce00(INT Index)
{
    return &Items(Index);
}

struct S_0083ce50 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0083ce50(INT Index);
};

// @baa 0x0083ce50
QWORD* S_0083ce50::sub_0083ce50(INT Index)
{
    return &Items(Index);
}

struct C_0083cea0 {
    undefined4 * sub_0083cea0(byte);
};

// @baa 0x0083cea0
undefined4 * C_0083cea0::sub_0083cea0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f43ec4);
  sub_00839300();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0083d0b0 {
    int sub_0083d0b0(int);
};

// @baa 0x0083d0b0
int C_0083d0b0::sub_0083d0b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0083d0c0 {
    int sub_0083d0c0(int);
};

// @baa 0x0083d0c0
int C_0083d0c0::sub_0083d0c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0083d0d0
void __stdcall sub_0083d0d0(int a0, int a1) {  }

struct C_0083d0e0 {
    int sub_0083d0e0(int);
};

// @baa 0x0083d0e0
int C_0083d0e0::sub_0083d0e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0083d0f0
void __stdcall sub_0083d0f0(int a0, int a1) {  }

struct C_0083d100 {
    int sub_0083d100(int);
};

// @baa 0x0083d100
int C_0083d100::sub_0083d100(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0083d170 {
    int sub_0083d170(int);
};

// @baa 0x0083d170
int C_0083d170::sub_0083d170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0083d180
void __stdcall sub_0083d180(int a0, int a1) {  }

int sub_005413d0(...);
// @baa 0x0083d1c0
void sub_0083d1c0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0083d1d0 {
    int sub_0083d1d0(int);
};

// @baa 0x0083d1d0
int C_0083d1d0::sub_0083d1d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

struct C_0083d1e0 { int sub_0083d1e0(void); };

// @baa 0x0083d1e0
int C_0083d1e0::sub_0083d1e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0083d1f0 { int sub_0083d1f0(void); };

// @baa 0x0083d1f0
int C_0083d1f0::sub_0083d1f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0083d230
void sub_0083d230(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0083d240 {
    int sub_0083d240(int);
};

// @baa 0x0083d240
int C_0083d240::sub_0083d240(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x20 + *param_1;
}

// @baa 0x0083d280
void sub_0083d280(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0083d290 {
    int sub_0083d290(int);
};

// @baa 0x0083d290
int C_0083d290::sub_0083d290(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x20 + *param_1;
}

struct C_0083d2a0 { int sub_0083d2a0(void); };

// @baa 0x0083d2a0
int C_0083d2a0::sub_0083d2a0(void) { return *(int*)((char*)this + 20); }

struct C_0083d2b0 { int sub_0083d2b0(void); };

// @baa 0x0083d2b0
int C_0083d2b0::sub_0083d2b0(void) { return *(int*)((char*)this + 20); }

struct C_0083d2c0 { int sub_0083d2c0(void); };

// @baa 0x0083d2c0
int C_0083d2c0::sub_0083d2c0(void) { return *(int*)((char*)this + 20); }

struct C_0083d2d0 {
    int sub_0083d2d0();
};

// @baa 0x0083d2d0
int C_0083d2d0::sub_0083d2d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0083d2f0 {
    int sub_0083d2f0();
};

// @baa 0x0083d2f0
int C_0083d2f0::sub_0083d2f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_0083d300 {
    int sub_0083d300(int);
};

// @baa 0x0083d300
int C_0083d300::sub_0083d300(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0083d310 {
    int sub_0083d310(int);
};

// @baa 0x0083d310
int C_0083d310::sub_0083d310(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0083d320 {
    int sub_0083d320();
};

// @baa 0x0083d320
int C_0083d320::sub_0083d320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0083d340 {
    int sub_0083d340();
};

// @baa 0x0083d340
int C_0083d340::sub_0083d340(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0083d5b0
void sub_0083d5b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0083d5d0
IMPLEMENT_CLASS_AT(UAnimObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 9);

// @baa 0x0083d640
void* UAnimObject::vf_10c() { return 0; }

// @baa 0x0083d650
void* UAnimObject::vf_110() { return 0; }

// @baa 0x0083d660
void* UAnimObject::vf_114() { return 0; }

// @baa 0x0083d670
void __stdcall sub_0083d670(int a0, int a1, int a2, int a3) {  }

// @baa 0x0083d680
extern undefined * g_01f43ed8;
// @baa 0x0083d6a0
undefined4 * UObject::sub_0083d6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f43ed8);
  return param_1;
}

// @baa 0x0083d6c0
// @baa 0x0083d720
void* UMorphNodeBase::vf_110() { return this; }

// @baa 0x0083d730
void UMorphNodeBase::vf_120(int a0) {  }

// @baa 0x0083d760
void UMorphNodeBase::vf_12c(int a0, int a1, int a2) {  }

// @baa 0x0083d770
FLOAT UMorphNodeBase::vf_134() {
  return (float10)0;
}

// @baa 0x0083d780
void UMorphNodeBase::vf_138(int a0) {  }

// @baa 0x0083d790
void UMorphNodeBase::vf_13c(int a0, int a1) {  }

// @baa 0x0083d7a0
void UMorphNodeBase::vf_140(int a0, int a1, int a2) {  }

// @baa 0x0083d810
IMPLEMENT_CLASS_AT(UMorphNodePose, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 18);

// @baa 0x0083d870
// @baa 0x0083daa0
FString UMorphWeightSequence::GetDesc()
{
    return TEXT("");
}
