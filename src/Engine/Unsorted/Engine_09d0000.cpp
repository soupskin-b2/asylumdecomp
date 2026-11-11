// Engine_09d0000.cpp (part 1 of 4): 203 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_009d3a60(byte);
};

int sub_0053dfa0(...);
int sub_009d3920(void);
// @baa 0x009d3a60
undefined4 C::sub_009d3a60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009d3920();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_009d3a80(int);
};

// @baa 0x009d4180
undefined4 ULensFlare::sub_009d4180(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 4))))->sub_009d3a80(*(undefined4 *)(param_1 + 8));
  return 0xc;
}

int sub_009d40a0(void);
// @baa 0x009d41a0
undefined4 ULensFlare::sub_009d41a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009d40a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009d4490
void sub_009d4490(void) {  }

// @baa 0x009d46d0
int sub_009d46d0(int a0, int a1) { return a1; }

struct C_009d46e0 { int sub_009d46e0(void); };

// @baa 0x009d46e0
int C_009d46e0::sub_009d46e0(void) { return *(int*)((char*)this + 64); }

// @baa 0x009d46f0
int sub_009d46f0(int a0, int a1) { return a1; }

// @baa 0x009d4700
int sub_009d4700(int a0, int a1) { return a1; }

// @baa 0x009d4710
int sub_009d4710(int a0, int a1) { return a1; }

// @baa 0x009d4720
int sub_009d4720(int a0, int a1) { return a1; }

// @baa 0x009d4740
int sub_009d4740(int a0, int a1) { return a1; }

// @baa 0x009d4750
int sub_009d4750(int a0, int a1) { return a1; }

// @baa 0x009d4760
int sub_009d4760(int a0, int a1) { return a1; }

struct C_009d4770 { C_009d4770* sub_009d4770(void); };

// @baa 0x009d4770
C_009d4770* C_009d4770::sub_009d4770(void) { return this; }

struct C_009d4780 { C_009d4780* sub_009d4780(int a0); };

// @baa 0x009d4780
C_009d4780* C_009d4780::sub_009d4780(int a0) { return this; }

// @baa 0x009d47f0
int sub_009d47f0(int a0, int a1) { return a1; }

struct C_009d4820 {
    float10 sub_009d4820(int);
};

// @baa 0x009d4820
float10 C_009d4820::sub_009d4820(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + param_2 * 4);
}

struct C_009d4830 {
    void sub_009d4830(float *, float *);
};

// @baa 0x009d4830
void C_009d4830::sub_009d4830(float * param_2, float * param_3)
{
    float * param_1 = (float *)this;
  *param_1 = *param_2 + *param_3;
  param_1[1] = param_2[1] + param_3[1];
  param_1[2] = param_2[2] + param_3[2];
  return;
}

struct C_009d4870 {
    void sub_009d4870(float *, float *);
};

// @baa 0x009d4870
void C_009d4870::sub_009d4870(float * param_2, float * param_3)
{
    float * param_1 = (float *)this;
  *param_1 = *param_2 - *param_3;
  param_1[1] = param_2[1] - param_3[1];
  param_1[2] = param_2[2] - param_3[2];
  return;
}

struct C_009d49c0 {
    void sub_009d49c0();
};

// @baa 0x009d49c0
void C_009d49c0::sub_009d49c0(void)
{
    float * param_1 = (float *)this;
  *param_1 = -0.0 - *param_1;
  param_1[1] = -0.0 - param_1[1];
  param_1[2] = -0.0 - param_1[2];
  return;
}

struct C_009d4bf0 {
    int sub_009d4bf0(int, int);
};

// @baa 0x009d4bf0
int C_009d4bf0::sub_009d4bf0(int param_2, int param_3)
{
    int param_1 = (int)this;

  return param_1 + param_3 * 4 + param_2 * 0xc;
}

// @baa 0x009d4c10
void sub_009d4c10(void) {  }

struct C_009d4c70 {
    void sub_009d4c70(float *);
};

// @baa 0x009d4c70
void C_009d4c70::sub_009d4c70(float * param_2)
{
    float * param_1 = (float *)this;
  *param_2 = param_1[3] + *param_1;
  param_2[1] = param_1[4] + param_1[1];
  param_2[2] = param_1[5] + param_1[2];
  *param_2 = *param_2 * 0.5;
  param_2[1] = param_2[1] * 0.5;
  param_2[2] = param_2[2] * 0.5;
  return;
}

extern "C" int g_026c4efc;
extern "C" int g_026c4f00;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_009d6e40();
};

// @baa 0x009d6e40
void UObjectThunk::sub_009d6e40()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4efc, g_026c4f00, 0), 0, 0);
}

// @baa 0x009d6e70
int sub_009d6e70(int a0, int a1) { return a1; }

// @baa 0x009d6e80
int sub_009d6e80(int a0, int a1) { return a1; }

// @baa 0x009d6e90
int sub_009d6e90(int a0, int a1) { return a1; }

// @baa 0x009d6ea0
int sub_009d6ea0(int a0, int a1) { return a1; }

// @baa 0x009d6eb0
int sub_009d6eb0(int a0, int a1) { return a1; }

// @baa 0x009d6ec0
int sub_009d6ec0(int a0, int a1) { return a1; }

// @baa 0x009d6ed0
int sub_009d6ed0(int a0, int a1) { return a1; }

// @baa 0x009d6ee0
IMPLEMENT_CLASS_AT(APhysXEmitterSpawnable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 28);

// @baa 0x009d6ff0
int APhysXEmitterSpawnable::vf_000(void) { return 1; }

// @baa 0x009d7000
bool APhysXEmitterSpawnable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct V_009d7690 {
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
    virtual void g(int);
    void sub_009d7690();
};

// @baa 0x009d7690
void V_009d7690::sub_009d7690() { g(0); }

// @baa 0x009d76a0
IMPLEMENT_CLASS_AT(AApexDestructibleActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1912);

// @baa 0x009d77b0
int AApexDestructibleActor::vf_000(void) { return 1; }

// @baa 0x009d77c0
bool AApexDestructibleActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d7810
void AApexDestructibleActor::vf_25c(void) {  }

// @baa 0x009d8780
int sub_009d8780(int a0, int a1) { return a1; }

// @baa 0x009d8790
int sub_009d8790(int a0, int a1) { return a1; }

int sub_008f1840(...);
int sub_008fa050(void);
extern undefined4 g_026b5b94;
// @baa 0x009d87a0
int sub_009d87a0(void)
{
  if (g_026b5b94 == 0) {
    g_026b5b94 = sub_008f1840(L"Engine");
    sub_008fa050();
  }
  return g_026b5b94;
}

// @baa 0x009d87d0
IMPLEMENT_CLASS_AT(UKMeshProps, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 30);

// @baa 0x009d88e0
int UKMeshProps::vf_000(void) { return 1; }

// @baa 0x009d88f0
bool UKMeshProps::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d9ba0
uint AKAsset::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1a8) + 0x194) >> 9 & 1;
}

// @baa 0x009d9bc0
int AActor::vf_248(int a0, int a1) { return 1; }

// @baa 0x009d9dc0
uint sub_009d9dc0(undefined1 param_1, uint * param_2)
{
  switch(param_1) {
  case 0:
    return *param_2 & 1;
  case 1:
    return 0;
  case 2:
    return *param_2 >> 2 & 1;
  case 3:
    return *param_2 >> 3 & 1;
  case 4:
    return *param_2 >> 4 & 1;
  case 5:
    return *param_2 >> 5 & 1;
  case 6:
    return *param_2 >> 6 & 1;
  case 7:
    return *param_2 >> 7 & 1;
  case 8:
    return *param_2 >> 8 & 1;
  case 9:
    return *param_2 >> 9 & 1;
  case 10:
    return *param_2 >> 10 & 1;
  case 0xb:
    return *param_2 >> 0xb & 1;
  case 0xc:
    return *param_2 >> 0xc & 1;
  case 0xd:
    return *param_2 >> 0xd & 1;
  case 0xe:
    return *param_2 >> 0xe & 1;
  case 0xf:
    return *param_2 >> 0xf & 1;
  case 0x10:
    return *(byte *)((int)param_2 + 2) & 1;
  case 0x11:
    return *param_2 >> 0x11 & 1;
  case 0x12:
    return *param_2 >> 0x12 & 1;
  case 0x13:
    return *param_2 >> 0x13 & 1;
  case 0x14:
    return *param_2 >> 0x14 & 1;
  case 0x15:
    return *param_2 >> 0x15 & 1;
  case 0x16:
    return *param_2 >> 0x16 & 1;
  case 0x17:
    return *param_2 >> 0x17 & 1;
  case 0x18:
    return *(byte *)((int)param_2 + 3) & 1;
  default:
    return 1;
  }
}

struct C_009d9f80 { void sub_009d9f80(void); };

// @baa 0x009d9f80
void C_009d9f80::sub_009d9f80(void) { *(int*)((char*)this + 192) = 0; }

struct C_009d9f90 {
    int sub_009d9f90(int);
};

// @baa 0x009d9f90
int C_009d9f90::sub_009d9f90(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0xc;
}

struct C_009d9fa0 { int sub_009d9fa0(void); };

// @baa 0x009d9fa0
int C_009d9fa0::sub_009d9fa0(void) { return *(int*)((char*)this + 192); }

struct C_009d9fb0 {
    void sub_009d9fb0(int, int);
};

void * sub_0053df30(void *, void *, size_t);
// @baa 0x009d9fb0
void C_009d9fb0::sub_009d9fb0(int param_2, int param_3)
{
    int param_1 = (int)this;

  sub_0053df30((void *)(param_2 * 0x10 + param_1),(void *)((param_2 + param_3) * 0x10 + param_1),
          ((*(int *)(param_1 + 0x100) - param_2) - param_3) * 0x10);
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) - param_3;
  return;
}

struct C_009d9ff0 {
    int sub_009d9ff0(int);
};

// @baa 0x009d9ff0
int C_009d9ff0::sub_009d9ff0(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + param_1;
}

struct C_009da000 { int sub_009da000(void); };

// @baa 0x009da000
int C_009da000::sub_009da000(void) { return *(int*)((char*)this + 256); }

struct C_009da010 { int a, b, c; C_009da010(); };

// @baa 0x009da010
C_009da010::C_009da010() : a(0), b(0), c(0) {}

struct C_009da020 { int a, b, c; C_009da020(); };

// @baa 0x009da020
C_009da020::C_009da020() : a(0), b(0), c(0) {}

struct C_009da030 { int sub_009da030(void); };

// @baa 0x009da030
int C_009da030::sub_009da030(void) { return *(int*)((char*)this + 4); }

struct C_009da060 {
    void sub_009da060(int *);
};

// @baa 0x009da060
void C_009da060::sub_009da060(int * param_2)
{
    int param_1 = (int)this;

  if (*param_2 != 0) {
    *(int *)(*param_2 + 8) = param_1 + 4;
  }
  *(int *)(param_1 + 4) = *param_2;
  *(int **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  return;
}

struct C_009da080 { int sub_009da080(void); };

// @baa 0x009da080
int C_009da080::sub_009da080(void) { return *(int*)((char*)this + 4); }

struct C_009da090 { int sub_009da090(void); };

// @baa 0x009da090
int C_009da090::sub_009da090(void) { return *(int*)((char*)this + 4); }

struct C_009da0a0 { int sub_009da0a0(void); };

// @baa 0x009da0a0
int C_009da0a0::sub_009da0a0(void) { return *(int*)((char*)this + 4); }

struct C_009da0b0 { int a, b, c; C_009da0b0(); };

// @baa 0x009da0b0
C_009da0b0::C_009da0b0() : a(0), b(0), c(0) {}

struct C_009da0c0 {
    int sub_009da0c0();
};

// @baa 0x009da0c0
int C_009da0c0::sub_009da0c0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1 >> 2;
}

struct C_009da0d0 {
    int sub_009da0d0(int);
};

// @baa 0x009da0d0
int C_009da0d0::sub_009da0d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009da0e0 {
    int sub_009da0e0();
};

// @baa 0x009da0e0
int C_009da0e0::sub_009da0e0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1 >> 2;
}

struct C_009da0f0 {
    int sub_009da0f0(int);
};

// @baa 0x009da0f0
int C_009da0f0::sub_009da0f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009da100 {
    int sub_009da100(int);
};

// @baa 0x009da100
int C_009da100::sub_009da100(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009da110 { int a, b, c; C_009da110(); };

// @baa 0x009da110
C_009da110::C_009da110() : a(0), b(0), c(0) {}

struct C_009da120 { int a, b, c; C_009da120(); };

// @baa 0x009da120
C_009da120::C_009da120() : a(0), b(0), c(0) {}

struct C_009da130 { int a, b, c; C_009da130(); };

// @baa 0x009da130
C_009da130::C_009da130() : a(0), b(0), c(0) {}

struct C_009da140 { int a, b, c; C_009da140(); };

// @baa 0x009da140
C_009da140::C_009da140() : a(0), b(0), c(0) {}

struct C_009da150 { int a, b, c; C_009da150(); };

// @baa 0x009da150
C_009da150::C_009da150() : a(0), b(0), c(0) {}

struct C_009da160 { int a, b, c; C_009da160(); };

// @baa 0x009da160
C_009da160::C_009da160() : a(0), b(0), c(0) {}

struct C_009da170 { int a, b, c; C_009da170(); };

// @baa 0x009da170
C_009da170::C_009da170() : a(0), b(0), c(0) {}

struct C_009da180 { int a, b, c; C_009da180(); };

// @baa 0x009da180
C_009da180::C_009da180() : a(0), b(0), c(0) {}

struct C_009da190 { int a, b, c; C_009da190(); };

// @baa 0x009da190
C_009da190::C_009da190() : a(0), b(0), c(0) {}

struct C_009da1a0 { int a, b, c; C_009da1a0(); };

// @baa 0x009da1a0
C_009da1a0::C_009da1a0() : a(0), b(0), c(0) {}

struct C_009da1b0 { int a, b, c; C_009da1b0(); };

// @baa 0x009da1b0
C_009da1b0::C_009da1b0() : a(0), b(0), c(0) {}

struct C_009da1c0 {
    int sub_009da1c0();
};

// @baa 0x009da1c0
int C_009da1c0::sub_009da1c0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1;
}

struct C_009da1d0 {
    int sub_009da1d0(int);
};

// @baa 0x009da1d0
int C_009da1d0::sub_009da1d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_009da1e0 { int sub_009da1e0(void); };

// @baa 0x009da1e0
int C_009da1e0::sub_009da1e0(void) { return *(int*)((char*)this + 0); }

struct C_009da1f0 { int a, b, c; C_009da1f0(); };

// @baa 0x009da1f0
C_009da1f0::C_009da1f0() : a(0), b(0), c(0) {}

struct C_009da240 {
    int sub_009da240(int);
};

// @baa 0x009da240
int C_009da240::sub_009da240(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_009da260 { C_009da260* sub_009da260(int a0); };

// @baa 0x009da260
C_009da260* C_009da260::sub_009da260(int a0) { return this; }

struct C_009da2e0 { C_009da2e0* sub_009da2e0(int a0); };

// @baa 0x009da2e0
C_009da2e0* C_009da2e0::sub_009da2e0(int a0) { return this; }

struct C_009da2f0 { int sub_009da2f0(void); };

// @baa 0x009da2f0
int C_009da2f0::sub_009da2f0(void) { return *(int*)((char*)this + 0); }

struct C_009da300 { int sub_009da300(void); };

// @baa 0x009da300
int C_009da300::sub_009da300(void) { return *(int*)((char*)this + 0); }

struct C_009da380 {
    int sub_009da380(int);
};

// @baa 0x009da380
int C_009da380::sub_009da380(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009da390 { C_009da390* sub_009da390(int a0); };

// @baa 0x009da390
C_009da390* C_009da390::sub_009da390(int a0) { return this; }

struct C_009da3a0 { int sub_009da3a0(void); };

// @baa 0x009da3a0
int C_009da3a0::sub_009da3a0(void) { return *(int*)((char*)this + 0); }

struct C_009da420 { C_009da420* sub_009da420(int a0); };

// @baa 0x009da420
C_009da420* C_009da420::sub_009da420(int a0) { return this; }

struct C_009da430 { int sub_009da430(void); };

// @baa 0x009da430
int C_009da430::sub_009da430(void) { return *(int*)((char*)this + 0); }

struct C_009da4b0 { C_009da4b0* sub_009da4b0(int a0); };

// @baa 0x009da4b0
C_009da4b0* C_009da4b0::sub_009da4b0(int a0) { return this; }

struct C_009da4c0 { int sub_009da4c0(void); };

// @baa 0x009da4c0
int C_009da4c0::sub_009da4c0(void) { return *(int*)((char*)this + 0); }

struct C_009da540 { int sub_009da540(void); };

// @baa 0x009da540
int C_009da540::sub_009da540(void) { return *(int*)((char*)this + 0); }

struct C_009da550 { int sub_009da550(void); };

// @baa 0x009da550
int C_009da550::sub_009da550(void) { return *(int*)((char*)this + 4); }

// @baa 0x009da590
void __stdcall sub_009da590(int a0, int a1) {  }

struct C_009da5a0 { int sub_009da5a0(void); };

// @baa 0x009da5a0
int C_009da5a0::sub_009da5a0(void) { return *(int*)((char*)this + 0); }

struct C_009da620 { int a, b, c; C_009da620(); };

// @baa 0x009da620
C_009da620::C_009da620() : a(0), b(0), c(0) {}

struct C_009da630 { int sub_009da630(void); };

// @baa 0x009da630
int C_009da630::sub_009da630(void) { return *(int*)((char*)this + 4); }

// @baa 0x009da640
void __stdcall sub_009da640(int a0, int a1) {  }

struct C_009da650 { int a, b, c; C_009da650(); };

// @baa 0x009da650
C_009da650::C_009da650() : a(0), b(0), c(0) {}

struct C_009da660 {
    int sub_009da660();
};

// @baa 0x009da660
int C_009da660::sub_009da660(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return 0;
  }
  return (param_1[2] - *param_1) / 0xc;
}

struct C_009da680 {
    int sub_009da680();
};

// @baa 0x009da680
int C_009da680::sub_009da680(void)
{
    int * param_1 = (int *)this;

  return (param_1[1] - *param_1) / 0xc;
}

// @baa 0x009da6d0
void __stdcall sub_009da6d0(int a0, int a1) {  }

struct C_009da6e0 { int sub_009da6e0(void); };

// @baa 0x009da6e0
int C_009da6e0::sub_009da6e0(void) { return *(int*)((char*)this + 0); }

struct C_009da760 { int sub_009da760(void); };

// @baa 0x009da760
int C_009da760::sub_009da760(void) { return *(int*)((char*)this + 0); }

struct C_009da770 { int sub_009da770(void); };

// @baa 0x009da770
int C_009da770::sub_009da770(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009da780(INT Index);
};

// @baa 0x009da780
DWORD* S::sub_009da780(INT Index)
{
    return &Items(Index);
}

struct C_009da7d0 { int sub_009da7d0(void); };

// @baa 0x009da7d0
int C_009da7d0::sub_009da7d0(void) { return *(int*)((char*)this + 0); }

struct C_009da7e0 { int sub_009da7e0(void); };

// @baa 0x009da7e0
int C_009da7e0::sub_009da7e0(void) { return *(int*)((char*)this + 0); }

struct S_009da7f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009da7f0(INT Index);
};

// @baa 0x009da7f0
DWORD* S_009da7f0::sub_009da7f0(INT Index)
{
    return &Items(Index);
}

struct C_009da840 { int sub_009da840(void); };

// @baa 0x009da840
int C_009da840::sub_009da840(void) { return *(int*)((char*)this + 0); }

struct C_009da850 { int sub_009da850(void); };

// @baa 0x009da850
int C_009da850::sub_009da850(void) { return *(int*)((char*)this + 0); }

struct C_009da860 { int sub_009da860(void); };

// @baa 0x009da860
int C_009da860::sub_009da860(void) { return *(int*)((char*)this + 0); }

struct C_009da870 { int sub_009da870(void); };

// @baa 0x009da870
int C_009da870::sub_009da870(void) { return *(int*)((char*)this + 0); }

struct C_009da880 { int sub_009da880(void); };

// @baa 0x009da880
int C_009da880::sub_009da880(void) { return *(int*)((char*)this + 0); }

struct C_009da890 { int sub_009da890(void); };

// @baa 0x009da890
int C_009da890::sub_009da890(void) { return *(int*)((char*)this + 0); }

struct C_009da8a0 { int sub_009da8a0(void); };

// @baa 0x009da8a0
int C_009da8a0::sub_009da8a0(void) { return *(int*)((char*)this + 0); }

struct C_009da8b0 { int sub_009da8b0(void); };

// @baa 0x009da8b0
int C_009da8b0::sub_009da8b0(void) { return *(int*)((char*)this + 0); }

struct C_009da8c0 { int sub_009da8c0(void); };

// @baa 0x009da8c0
int C_009da8c0::sub_009da8c0(void) { return *(int*)((char*)this + 0); }

struct C_009da8d0 { int sub_009da8d0(void); };

// @baa 0x009da8d0
int C_009da8d0::sub_009da8d0(void) { return *(int*)((char*)this + 0); }

struct C_009da8e0 {
    int sub_009da8e0();
};

// @baa 0x009da8e0
int C_009da8e0::sub_009da8e0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return 0;
  }
  return param_1[2] - *param_1;
}

struct C_009da950 { int sub_009da950(void); };

// @baa 0x009da950
int C_009da950::sub_009da950(void) { return *(int*)((char*)this + 0); }

struct C_009da960 { int sub_009da960(void); };

// @baa 0x009da960
int C_009da960::sub_009da960(void) { return *(int*)((char*)this + 0); }

struct C_009da970 { int sub_009da970(void); };

// @baa 0x009da970
int C_009da970::sub_009da970(void) { return *(int*)((char*)this + 0); }

struct C_009da980 { int sub_009da980(void); };

// @baa 0x009da980
int C_009da980::sub_009da980(void) { return *(int*)((char*)this + 0); }

struct C_009da990 { int sub_009da990(void); };

// @baa 0x009da990
int C_009da990::sub_009da990(void) { return *(int*)((char*)this + 0); }

// @baa 0x009da9d0
int sub_009da9d0(int a0) { return *(int*)a0; }

// @baa 0x009da9e0
bool sub_009da9e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x009da9f0
int sub_009da9f0(int a0) { return a0; }

struct C_009daa00 { int sub_009daa00(void); };

// @baa 0x009daa00
int C_009daa00::sub_009daa00(void) { return *(int*)((char*)this + 0); }

struct C_009daa10 { int sub_009daa10(void); };

// @baa 0x009daa10
int C_009daa10::sub_009daa10(void) { return *(int*)((char*)this + 0); }

struct C_009daa20 { int sub_009daa20(void); };

// @baa 0x009daa20
int C_009daa20::sub_009daa20(void) { return *(int*)((char*)this + 0); }

struct C_009daa30 { int sub_009daa30(void); };

// @baa 0x009daa30
int C_009daa30::sub_009daa30(void) { return *(int*)((char*)this + 0); }

struct C_009daa40 { int sub_009daa40(void); };

// @baa 0x009daa40
int C_009daa40::sub_009daa40(void) { return *(int*)((char*)this + 0); }

struct C_009daa50 { int sub_009daa50(void); };

// @baa 0x009daa50
int C_009daa50::sub_009daa50(void) { return *(int*)((char*)this + 0); }

struct C_009daa60 { int sub_009daa60(void); };

// @baa 0x009daa60
int C_009daa60::sub_009daa60(void) { return *(int*)((char*)this + 0); }

struct C_009daa70 { int sub_009daa70(void); };

// @baa 0x009daa70
int C_009daa70::sub_009daa70(void) { return *(int*)((char*)this + 0); }

struct C_009daa80 { int sub_009daa80(void); };

// @baa 0x009daa80
int C_009daa80::sub_009daa80(void) { return *(int*)((char*)this + 0); }

struct C_009daa90 { int sub_009daa90(void); };

// @baa 0x009daa90
int C_009daa90::sub_009daa90(void) { return *(int*)((char*)this + 0); }

// @baa 0x009daaa0
int __stdcall sub_009daaa0(int a0) { return a0; }

// @baa 0x009daab0
void __stdcall sub_009daab0(int a0, int a1) {  }

struct C_009daad0 { int sub_009daad0(void); };

// @baa 0x009daad0
int C_009daad0::sub_009daad0(void) { return *(int*)((char*)this + 0); }

// @baa 0x009dab00
void __stdcall sub_009dab00(int a0, int a1) {  }

struct C_009dab20 { int sub_009dab20(void); };

// @baa 0x009dab20
int C_009dab20::sub_009dab20(void) { return *(int*)((char*)this + 0); }

struct C_009dab30 { int a, b; C_009dab30(int, int); };

// @baa 0x009dab30
C_009dab30::C_009dab30(int x, int y) : a(x), b(y) {}

struct C_009dab50 { int sub_009dab50(void); };

// @baa 0x009dab50
int C_009dab50::sub_009dab50(void) { return *(int*)((char*)this + 20); }

struct C_009dab60 { int sub_009dab60(void); };

// @baa 0x009dab60
int C_009dab60::sub_009dab60(void) { return *(int*)((char*)this + 20); }

struct C_009dab70 {
    int sub_009dab70(int);
};

// @baa 0x009dab70
int C_009dab70::sub_009dab70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_009dae60 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_009dae60(INT Index) const;
};

// @baa 0x009dae60
const DWORD* S_009dae60::sub_009dae60(INT Index) const
{
    return &Items(Index);
}

struct C_009dbd50 { C_009dbd50* sub_009dbd50(void); };

// @baa 0x009dbd50
C_009dbd50* C_009dbd50::sub_009dbd50(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_009dbe20 {
    undefined4 * sub_009dbe20(byte);
};

extern undefined * g_01fa3e7c;
// @baa 0x009dbe20
undefined4 * C_009dbe20::sub_009dbe20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3e7c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009dbe40 {
    undefined4 * sub_009dbe40(byte);
};

// @baa 0x009dbe40
undefined4 * C_009dbe40::sub_009dbe40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3e7c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009dbe60 {
    int sub_009dbe60();
};

// @baa 0x009dbe60
int C_009dbe60::sub_009dbe60(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_009dbe70 {
    int sub_009dbe70();
};

// @baa 0x009dbe70
int C_009dbe70::sub_009dbe70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xc0;
}

int sub_006efb40(void);
extern undefined * g_01fa3f70;
// @baa 0x009dd0d0
undefined4 * ULensFlare::sub_009dd0d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3f70);
  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009dd100
undefined4 * ULensFlare::sub_009dd100(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3f70);
  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009df520{
int sub_009df520(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x009df520
int C_009df520::sub_009df520(undefined4*param_2)
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

struct S_009df580 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009df580(INT Index);
};

// @baa 0x009df580
DWORD* S_009df580::sub_009df580(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_009df720 {
    int sub_009df720(int);
    int sub_009da3b0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x009df720
int C_009df720::sub_009df720(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_009df720 *)(this))->sub_009da3b0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_009df760{
int sub_009df760(undefined4*);
};

// @baa 0x009df760
int C_009df760::sub_009df760(undefined4*param_2)
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

struct S_009df7c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009df7c0(INT Index);
};

// @baa 0x009df7c0
DWORD* S_009df7c0::sub_009df7c0(INT Index)
{
    return &Items(Index);
}

struct C_009df810 {
    int sub_009df810(int);
    int sub_009da4d0(int);
};

// @baa 0x009df810
int C_009df810::sub_009df810(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_009df810 *)(this))->sub_009da4d0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_009df850 {
    void sub_009df850();
};

extern "C" __declspec(dllimport) int free(...);
// @baa 0x009df850
void C_009df850::sub_009df850(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_009df880{
int sub_009df880(undefined4*);
};

// @baa 0x009df880
int C_009df880::sub_009df880(undefined4*param_2)
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

struct C_009df960 {
    int sub_009df960(int);
};

// @baa 0x009df960
int C_009df960::sub_009df960(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009df970{
int sub_009df970(undefined4*);
};

// @baa 0x009df970
int C_009df970::sub_009df970(undefined4*param_2)
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

// @baa 0x009df9d0
void __stdcall sub_009df9d0(int a0, int a1) {  }

struct C_009df9e0 {
    int sub_009df9e0(int);
};

// @baa 0x009df9e0
int C_009df9e0::sub_009df9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009df9f0
void __stdcall sub_009df9f0(int a0, int a1) {  }

struct C_009dfa00 {
    int sub_009dfa00(int);
};

// @baa 0x009dfa00
int C_009dfa00::sub_009dfa00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009dfa10
void __stdcall sub_009dfa10(int a0, int a1) {  }

struct C_009dfa20 {
    int sub_009dfa20(int);
};

// @baa 0x009dfa20
int C_009dfa20::sub_009dfa20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009dfa30
void __stdcall sub_009dfa30(int a0, int a1) {  }

struct C_009dfa40 {
    int sub_009dfa40(int);
};

// @baa 0x009dfa40
int C_009dfa40::sub_009dfa40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009dfa50
void __stdcall sub_009dfa50(int a0, int a1) {  }

struct C_009dfa60 {
    int sub_009dfa60(int);
};

// @baa 0x009dfa60
int C_009dfa60::sub_009dfa60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfa70 {
    int sub_009dfa70(int);
};

// @baa 0x009dfa70
int C_009dfa70::sub_009dfa70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfa80 {
    int sub_009dfa80(int);
};

// @baa 0x009dfa80
int C_009dfa80::sub_009dfa80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfa90 {
    int sub_009dfa90(int);
};

// @baa 0x009dfa90
int C_009dfa90::sub_009dfa90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfaa0 {
    int sub_009dfaa0(int);
};

// @baa 0x009dfaa0
int C_009dfaa0::sub_009dfaa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfab0 {
    int sub_009dfab0(int);
};

// @baa 0x009dfab0
int C_009dfab0::sub_009dfab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfac0 {
    int sub_009dfac0(int);
};

// @baa 0x009dfac0
int C_009dfac0::sub_009dfac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfad0 {
    int sub_009dfad0(int);
};

// @baa 0x009dfad0
int C_009dfad0::sub_009dfad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfae0 {
    int sub_009dfae0(int);
};

// @baa 0x009dfae0
int C_009dfae0::sub_009dfae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfaf0 {
    int sub_009dfaf0(int);
};

// @baa 0x009dfaf0
int C_009dfaf0::sub_009dfaf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009dfb40 {
    int sub_009dfb40(int);
};

// @baa 0x009dfb40
int C_009dfb40::sub_009dfb40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_009dfb50 {
    int sub_009dfb50(int);
};

// @baa 0x009dfb50
int C_009dfb50::sub_009dfb50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct E { BYTE Bytes[60]; };

struct S_009dfb60 {
    TArray<E> Items; // 0x00
    E* sub_009dfb60(INT Index);
};

// @baa 0x009dfb60
E* S_009dfb60::sub_009dfb60(INT Index)
{
    return &Items(Index);
}

struct E_009dfbb0 { BYTE Bytes[76]; };

struct S_009dfbb0 {
    TArray<E_009dfbb0> Items; // 0x00
    E_009dfbb0* sub_009dfbb0(INT Index);
};

// @baa 0x009dfbb0
E_009dfbb0* S_009dfbb0::sub_009dfbb0(INT Index)
{
    return &Items(Index);
}

struct E_009dfc00 { BYTE Bytes[32]; };

struct S_009dfc00 {
    TArray<E_009dfc00> Items; // 0x00
    E_009dfc00* sub_009dfc00(INT Index);
};

// @baa 0x009dfc00
E_009dfc00* S_009dfc00::sub_009dfc00(INT Index)
{
    return &Items(Index);
}

struct C_009dfc80 { int sub_009dfc80(void); };

// @baa 0x009dfc80
int C_009dfc80::sub_009dfc80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_009dfc90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfc90(INT Index);
};

// @baa 0x009dfc90
DWORD* S_009dfc90::sub_009dfc90(INT Index)
{
    return &Items(Index);
}

struct S_009dfce0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfce0(INT Index);
};

// @baa 0x009dfce0
DWORD* S_009dfce0::sub_009dfce0(INT Index)
{
    return &Items(Index);
}

struct S_009dfd30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfd30(INT Index);
};

// @baa 0x009dfd30
DWORD* S_009dfd30::sub_009dfd30(INT Index)
{
    return &Items(Index);
}

struct S_009dfd80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfd80(INT Index);
};

// @baa 0x009dfd80
DWORD* S_009dfd80::sub_009dfd80(INT Index)
{
    return &Items(Index);
}

struct S_009dfdd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfdd0(INT Index);
};

// @baa 0x009dfdd0
DWORD* S_009dfdd0::sub_009dfdd0(INT Index)
{
    return &Items(Index);
}

struct S_009dfe20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfe20(INT Index);
};

// @baa 0x009dfe20
DWORD* S_009dfe20::sub_009dfe20(INT Index)
{
    return &Items(Index);
}

struct S_009dfe70 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfe70(INT Index);
};

// @baa 0x009dfe70
DWORD* S_009dfe70::sub_009dfe70(INT Index)
{
    return &Items(Index);
}

struct S_009dfec0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dfec0(INT Index);
};

// @baa 0x009dfec0
DWORD* S_009dfec0::sub_009dfec0(INT Index)
{
    return &Items(Index);
}

struct S_009dff10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dff10(INT Index);
};

// @baa 0x009dff10
DWORD* S_009dff10::sub_009dff10(INT Index)
{
    return &Items(Index);
}

struct S_009dff60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009dff60(INT Index);
};

// @baa 0x009dff60
DWORD* S_009dff60::sub_009dff60(INT Index)
{
    return &Items(Index);
}
