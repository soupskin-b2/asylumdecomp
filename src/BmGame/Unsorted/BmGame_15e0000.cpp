// BmGame_15e0000.cpp (part 1 of 5): 382 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015e10d0
int sub_015e10d0(int a0, int a1) { return a1; }

// @baa 0x015e1d00
int URSeqAct_InfiniteCombatSpawner::vf_000(void) { return 1; }

// @baa 0x015e1d10
bool URSeqAct_InfiniteCombatSpawner::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015e1d50
int ARPawnBossIvyBase::vf_000(void) { return 1; }

// @baa 0x015e1e10
undefined4 URBmPawnSpawner::vf_1a4(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 0x10000;
  return 1;
}

struct V_015e1ec0 {
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
    virtual void g();
    void sub_015e1ec0();
};

// @baa 0x015e1ec0
void V_015e1ec0::sub_015e1ec0() { g(); }

struct V_015e1f50 {
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
    virtual void g();
    void sub_015e1f50();
};

// @baa 0x015e1f50
void V_015e1f50::sub_015e1f50() { g(); }

// @baa 0x015e2060
UBOOL URBMPawnSpawnerController::UpdateOp(FLOAT DeltaTime) { return FALSE; }

struct V_015e20f0 {
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
    virtual void g();
    void sub_015e20f0();
};

// @baa 0x015e20f0
void V_015e20f0::sub_015e20f0() { g(); }

struct C_015e2100 {
    void sub_015e2100();
};

int sub_0053df70(...);
// @baa 0x015e2100
void C_015e2100::sub_015e2100(void)
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

struct C_015e2130 { int sub_015e2130(void); };

// @baa 0x015e2130
int C_015e2130::sub_015e2130(void) { return *(int*)((char*)this + 4); }

struct C_015e2140 { int sub_015e2140(void); };

// @baa 0x015e2140
int C_015e2140::sub_015e2140(void) { return *(int*)((char*)this + 4); }

struct C_015e2150 {
    void sub_015e2150();
};

// @baa 0x015e2150
void C_015e2150::sub_015e2150(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015e2180 {
    void sub_015e2180();
};

// @baa 0x015e2180
void C_015e2180::sub_015e2180(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015e21b0 {
    void sub_015e21b0();
};

// @baa 0x015e21b0
void C_015e21b0::sub_015e21b0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015e21e0 { int sub_015e21e0(void); };

// @baa 0x015e21e0
int C_015e21e0::sub_015e21e0(void) { return *(int*)((char*)this + 4); }

struct C_015e21f0 {
    void sub_015e21f0();
};

// @baa 0x015e21f0
void C_015e21f0::sub_015e21f0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x124,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015e2220 { int sub_015e2220(void); };

// @baa 0x015e2220
int C_015e2220::sub_015e2220(void) { return *(int*)((char*)this + 4); }

struct C_015e2230 {
    void sub_015e2230();
};

// @baa 0x015e2230
void C_015e2230::sub_015e2230(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x78,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015e2270 { int sub_015e2270(void); };

// @baa 0x015e2270
int C_015e2270::sub_015e2270(void) { return *(int*)((char*)this + 4); }

struct C_015e2280 { int sub_015e2280(void); };

// @baa 0x015e2280
int C_015e2280::sub_015e2280(void) { return *(int*)((char*)this + 4); }

struct C_015e2290 { int sub_015e2290(void); };

// @baa 0x015e2290
int C_015e2290::sub_015e2290(void) { return *(int*)((char*)this + 4); }

struct C_015e22a0 { int sub_015e22a0(void); };

// @baa 0x015e22a0
int C_015e22a0::sub_015e22a0(void) { return *(int*)((char*)this + 4); }

struct C_015e22b0 { int sub_015e22b0(void); };

// @baa 0x015e22b0
int C_015e22b0::sub_015e22b0(void) { return *(int*)((char*)this + 4); }

struct C_015e22c0 { int sub_015e22c0(void); };

// @baa 0x015e22c0
int C_015e22c0::sub_015e22c0(void) { return *(int*)((char*)this + 4); }

struct C_015e22d0 { int sub_015e22d0(void); };

// @baa 0x015e22d0
int C_015e22d0::sub_015e22d0(void) { return *(int*)((char*)this + 4); }

struct C_015e22e0 { int sub_015e22e0(void); };

// @baa 0x015e22e0
int C_015e22e0::sub_015e22e0(void) { return *(int*)((char*)this + 4); }

struct C_015e22f0 { int sub_015e22f0(void); };

// @baa 0x015e22f0
int C_015e22f0::sub_015e22f0(void) { return *(int*)((char*)this + 4); }

struct C_015e2300 { int sub_015e2300(void); };

// @baa 0x015e2300
int C_015e2300::sub_015e2300(void) { return *(int*)((char*)this + 4); }

struct C_015e2310 { int sub_015e2310(void); };

// @baa 0x015e2310
int C_015e2310::sub_015e2310(void) { return *(int*)((char*)this + 4); }

struct C_015e2410 { int a, b, c; C_015e2410(); };

// @baa 0x015e2410
C_015e2410::C_015e2410() : a(0), b(0), c(0) {}

struct C_015e2420 { int sub_015e2420(void); };

// @baa 0x015e2420
int C_015e2420::sub_015e2420(void) { return *(int*)((char*)this + 4); }

struct C_015e2560 { int sub_015e2560(void); };

// @baa 0x015e2560
int C_015e2560::sub_015e2560(void) { return *(int*)((char*)this + 0); }

struct C_015e2570 { C_015e2570* sub_015e2570(int a0); };

// @baa 0x015e2570
C_015e2570* C_015e2570::sub_015e2570(int a0) { return this; }

struct C_015e2580 { C_015e2580* sub_015e2580(int a0); };

// @baa 0x015e2580
C_015e2580* C_015e2580::sub_015e2580(int a0) { return this; }

struct C_015e2590 { C_015e2590* sub_015e2590(int a0); };

// @baa 0x015e2590
C_015e2590* C_015e2590::sub_015e2590(int a0) { return this; }

struct C_015e25a0 { C_015e25a0* sub_015e25a0(int a0); };

// @baa 0x015e25a0
C_015e25a0* C_015e25a0::sub_015e25a0(int a0) { return this; }

struct C_015e25b0 { C_015e25b0* sub_015e25b0(int a0); };

// @baa 0x015e25b0
C_015e25b0* C_015e25b0::sub_015e25b0(int a0) { return this; }

struct C_015e25c0 { C_015e25c0* sub_015e25c0(int a0); };

// @baa 0x015e25c0
C_015e25c0* C_015e25c0::sub_015e25c0(int a0) { return this; }

struct C_015e25d0 { C_015e25d0* sub_015e25d0(int a0); };

// @baa 0x015e25d0
C_015e25d0* C_015e25d0::sub_015e25d0(int a0) { return this; }

struct C_015e25e0 { int sub_015e25e0(void); };

// @baa 0x015e25e0
int C_015e25e0::sub_015e25e0(void) { return *(int*)((char*)this + 0); }

struct C_015e25f0 { C_015e25f0* sub_015e25f0(int a0); };

// @baa 0x015e25f0
C_015e25f0* C_015e25f0::sub_015e25f0(int a0) { return this; }

struct C_015e2600 { C_015e2600* sub_015e2600(int a0); };

// @baa 0x015e2600
C_015e2600* C_015e2600::sub_015e2600(int a0) { return this; }

struct C_015e2610 { C_015e2610* sub_015e2610(int a0); };

// @baa 0x015e2610
C_015e2610* C_015e2610::sub_015e2610(int a0) { return this; }

struct C_015e2620 { C_015e2620* sub_015e2620(int a0); };

// @baa 0x015e2620
C_015e2620* C_015e2620::sub_015e2620(int a0) { return this; }

struct C_015e2630 { C_015e2630* sub_015e2630(int a0); };

// @baa 0x015e2630
C_015e2630* C_015e2630::sub_015e2630(int a0) { return this; }

struct C_015e2640 { int sub_015e2640(void); };

// @baa 0x015e2640
int C_015e2640::sub_015e2640(void) { return *(int*)((char*)this + 0); }

struct C_015e2650 { C_015e2650* sub_015e2650(int a0); };

// @baa 0x015e2650
C_015e2650* C_015e2650::sub_015e2650(int a0) { return this; }

struct C_015e2660 { C_015e2660* sub_015e2660(int a0); };

// @baa 0x015e2660
C_015e2660* C_015e2660::sub_015e2660(int a0) { return this; }

struct C_015e2670 { C_015e2670* sub_015e2670(int a0); };

// @baa 0x015e2670
C_015e2670* C_015e2670::sub_015e2670(int a0) { return this; }

struct C_015e2680 { C_015e2680* sub_015e2680(int a0); };

// @baa 0x015e2680
C_015e2680* C_015e2680::sub_015e2680(int a0) { return this; }

struct C_015e2690 { int sub_015e2690(void); };

// @baa 0x015e2690
int C_015e2690::sub_015e2690(void) { return *(int*)((char*)this + 0); }

struct C_015e26a0 { C_015e26a0* sub_015e26a0(int a0); };

// @baa 0x015e26a0
C_015e26a0* C_015e26a0::sub_015e26a0(int a0) { return this; }

struct C_015e26b0 { C_015e26b0* sub_015e26b0(int a0); };

// @baa 0x015e26b0
C_015e26b0* C_015e26b0::sub_015e26b0(int a0) { return this; }

struct C_015e26c0 { C_015e26c0* sub_015e26c0(int a0); };

// @baa 0x015e26c0
C_015e26c0* C_015e26c0::sub_015e26c0(int a0) { return this; }

struct C_015e26d0 { C_015e26d0* sub_015e26d0(int a0); };

// @baa 0x015e26d0
C_015e26d0* C_015e26d0::sub_015e26d0(int a0) { return this; }

struct C_015e26e0 { C_015e26e0* sub_015e26e0(int a0); };

// @baa 0x015e26e0
C_015e26e0* C_015e26e0::sub_015e26e0(int a0) { return this; }

struct C_015e26f0 { C_015e26f0* sub_015e26f0(int a0); };

// @baa 0x015e26f0
C_015e26f0* C_015e26f0::sub_015e26f0(int a0) { return this; }

struct C_015e2700 { C_015e2700* sub_015e2700(int a0); };

// @baa 0x015e2700
C_015e2700* C_015e2700::sub_015e2700(int a0) { return this; }

struct C_015e2710 { C_015e2710* sub_015e2710(int a0); };

// @baa 0x015e2710
C_015e2710* C_015e2710::sub_015e2710(int a0) { return this; }

struct C_015e2720 { C_015e2720* sub_015e2720(int a0); };

// @baa 0x015e2720
C_015e2720* C_015e2720::sub_015e2720(int a0) { return this; }

struct C_015e2730 { C_015e2730* sub_015e2730(int a0); };

// @baa 0x015e2730
C_015e2730* C_015e2730::sub_015e2730(int a0) { return this; }

struct C_015e2740 { int sub_015e2740(void); };

// @baa 0x015e2740
int C_015e2740::sub_015e2740(void) { return *(int*)((char*)this + 0); }

struct C_015e2750 { C_015e2750* sub_015e2750(int a0); };

// @baa 0x015e2750
C_015e2750* C_015e2750::sub_015e2750(int a0) { return this; }

struct C_015e2760 { C_015e2760* sub_015e2760(int a0); };

// @baa 0x015e2760
C_015e2760* C_015e2760::sub_015e2760(int a0) { return this; }

struct C_015e2770 { C_015e2770* sub_015e2770(int a0); };

// @baa 0x015e2770
C_015e2770* C_015e2770::sub_015e2770(int a0) { return this; }

struct C_015e2780 { C_015e2780* sub_015e2780(int a0); };

// @baa 0x015e2780
C_015e2780* C_015e2780::sub_015e2780(int a0) { return this; }

struct C_015e2790 { C_015e2790* sub_015e2790(int a0); };

// @baa 0x015e2790
C_015e2790* C_015e2790::sub_015e2790(int a0) { return this; }

struct C_015e27a0 { C_015e27a0* sub_015e27a0(int a0); };

// @baa 0x015e27a0
C_015e27a0* C_015e27a0::sub_015e27a0(int a0) { return this; }

struct C_015e27b0 { C_015e27b0* sub_015e27b0(int a0); };

// @baa 0x015e27b0
C_015e27b0* C_015e27b0::sub_015e27b0(int a0) { return this; }

struct C_015e27c0 { C_015e27c0* sub_015e27c0(int a0); };

// @baa 0x015e27c0
C_015e27c0* C_015e27c0::sub_015e27c0(int a0) { return this; }

struct C_015e27d0 { C_015e27d0* sub_015e27d0(int a0); };

// @baa 0x015e27d0
C_015e27d0* C_015e27d0::sub_015e27d0(int a0) { return this; }

struct C_015e27e0 { C_015e27e0* sub_015e27e0(int a0); };

// @baa 0x015e27e0
C_015e27e0* C_015e27e0::sub_015e27e0(int a0) { return this; }

struct C_015e27f0 { C_015e27f0* sub_015e27f0(int a0); };

// @baa 0x015e27f0
C_015e27f0* C_015e27f0::sub_015e27f0(int a0) { return this; }

struct C_015e2800 { C_015e2800* sub_015e2800(int a0); };

// @baa 0x015e2800
C_015e2800* C_015e2800::sub_015e2800(int a0) { return this; }

struct C_015e2810 { int sub_015e2810(void); };

// @baa 0x015e2810
int C_015e2810::sub_015e2810(void) { return *(int*)((char*)this + 0); }

struct C_015e2950 { C_015e2950* sub_015e2950(int a0); };

// @baa 0x015e2950
C_015e2950* C_015e2950::sub_015e2950(int a0) { return this; }

struct C_015e2960 { C_015e2960* sub_015e2960(int a0); };

// @baa 0x015e2960
C_015e2960* C_015e2960::sub_015e2960(int a0) { return this; }

struct C_015e2970 { int sub_015e2970(void); };

// @baa 0x015e2970
int C_015e2970::sub_015e2970(void) { return *(int*)((char*)this + 0); }

struct C_015e2aa0 { C_015e2aa0* sub_015e2aa0(int a0); };

// @baa 0x015e2aa0
C_015e2aa0* C_015e2aa0::sub_015e2aa0(int a0) { return this; }

struct C_015e2ab0 { C_015e2ab0* sub_015e2ab0(int a0); };

// @baa 0x015e2ab0
C_015e2ab0* C_015e2ab0::sub_015e2ab0(int a0) { return this; }

struct C_015e2ac0 { C_015e2ac0* sub_015e2ac0(int a0); };

// @baa 0x015e2ac0
C_015e2ac0* C_015e2ac0::sub_015e2ac0(int a0) { return this; }

struct C_015e2ad0 { C_015e2ad0* sub_015e2ad0(int a0); };

// @baa 0x015e2ad0
C_015e2ad0* C_015e2ad0::sub_015e2ad0(int a0) { return this; }

struct C_015e2ae0 { int sub_015e2ae0(void); };

// @baa 0x015e2ae0
int C_015e2ae0::sub_015e2ae0(void) { return *(int*)((char*)this + 0); }

struct C_015e2af0 { C_015e2af0* sub_015e2af0(int a0); };

// @baa 0x015e2af0
C_015e2af0* C_015e2af0::sub_015e2af0(int a0) { return this; }

struct C_015e2b00 { C_015e2b00* sub_015e2b00(int a0); };

// @baa 0x015e2b00
C_015e2b00* C_015e2b00::sub_015e2b00(int a0) { return this; }

struct C_015e2b10 { C_015e2b10* sub_015e2b10(int a0); };

// @baa 0x015e2b10
C_015e2b10* C_015e2b10::sub_015e2b10(int a0) { return this; }

struct C_015e2b20 { C_015e2b20* sub_015e2b20(int a0); };

// @baa 0x015e2b20
C_015e2b20* C_015e2b20::sub_015e2b20(int a0) { return this; }

struct C_015e2b30 { int sub_015e2b30(void); };

// @baa 0x015e2b30
int C_015e2b30::sub_015e2b30(void) { return *(int*)((char*)this + 0); }

struct C_015e2bb0 { C_015e2bb0* sub_015e2bb0(int a0); };

// @baa 0x015e2bb0
C_015e2bb0* C_015e2bb0::sub_015e2bb0(int a0) { return this; }

struct C_015e2bc0 { C_015e2bc0* sub_015e2bc0(int a0); };

// @baa 0x015e2bc0
C_015e2bc0* C_015e2bc0::sub_015e2bc0(int a0) { return this; }

struct C_015e2bd0 { C_015e2bd0* sub_015e2bd0(int a0); };

// @baa 0x015e2bd0
C_015e2bd0* C_015e2bd0::sub_015e2bd0(int a0) { return this; }

struct C_015e2be0 { int sub_015e2be0(void); };

// @baa 0x015e2be0
int C_015e2be0::sub_015e2be0(void) { return *(int*)((char*)this + 0); }

struct C_015e2bf0 { int sub_015e2bf0(void); };

// @baa 0x015e2bf0
int C_015e2bf0::sub_015e2bf0(void) { return *(int*)((char*)this + 0); }

struct C_015e2c00 { int sub_015e2c00(void); };

// @baa 0x015e2c00
int C_015e2c00::sub_015e2c00(void) { return *(int*)((char*)this + 0); }

struct C_015e2c10 { int sub_015e2c10(void); };

// @baa 0x015e2c10
int C_015e2c10::sub_015e2c10(void) { return *(int*)((char*)this + 0); }

struct C_015e2c20 { int sub_015e2c20(void); };

// @baa 0x015e2c20
int C_015e2c20::sub_015e2c20(void) { return *(int*)((char*)this + 0); }

struct C_015e2c30 { int sub_015e2c30(void); };

// @baa 0x015e2c30
int C_015e2c30::sub_015e2c30(void) { return *(int*)((char*)this + 0); }

struct C_015e2c40 { int sub_015e2c40(void); };

// @baa 0x015e2c40
int C_015e2c40::sub_015e2c40(void) { return *(int*)((char*)this + 0); }

struct C_015e2c50 { int sub_015e2c50(void); };

// @baa 0x015e2c50
int C_015e2c50::sub_015e2c50(void) { return *(int*)((char*)this + 0); }

struct C_015e2c60 { int sub_015e2c60(void); };

// @baa 0x015e2c60
int C_015e2c60::sub_015e2c60(void) { return *(int*)((char*)this + 0); }

struct C_015e2c70 { int sub_015e2c70(void); };

// @baa 0x015e2c70
int C_015e2c70::sub_015e2c70(void) { return *(int*)((char*)this + 0); }

struct C_015e2c80 { int sub_015e2c80(void); };

// @baa 0x015e2c80
int C_015e2c80::sub_015e2c80(void) { return *(int*)((char*)this + 0); }

struct C_015e2c90 { int sub_015e2c90(void); };

// @baa 0x015e2c90
int C_015e2c90::sub_015e2c90(void) { return *(int*)((char*)this + 0); }

struct C_015e2ca0 { int sub_015e2ca0(void); };

// @baa 0x015e2ca0
int C_015e2ca0::sub_015e2ca0(void) { return *(int*)((char*)this + 0); }

struct C_015e2cb0 { int sub_015e2cb0(void); };

// @baa 0x015e2cb0
int C_015e2cb0::sub_015e2cb0(void) { return *(int*)((char*)this + 0); }

struct C_015e2cc0 { int sub_015e2cc0(void); };

// @baa 0x015e2cc0
int C_015e2cc0::sub_015e2cc0(void) { return *(int*)((char*)this + 0); }

struct C_015e2cd0 { int sub_015e2cd0(void); };

// @baa 0x015e2cd0
int C_015e2cd0::sub_015e2cd0(void) { return *(int*)((char*)this + 0); }

struct C_015e2ce0 { int sub_015e2ce0(void); };

// @baa 0x015e2ce0
int C_015e2ce0::sub_015e2ce0(void) { return *(int*)((char*)this + 0); }

struct C_015e2cf0 { int sub_015e2cf0(void); };

// @baa 0x015e2cf0
int C_015e2cf0::sub_015e2cf0(void) { return *(int*)((char*)this + 0); }

struct C_015e2d00 { int sub_015e2d00(void); };

// @baa 0x015e2d00
int C_015e2d00::sub_015e2d00(void) { return *(int*)((char*)this + 0); }

struct C_015e2d10 { int sub_015e2d10(void); };

// @baa 0x015e2d10
int C_015e2d10::sub_015e2d10(void) { return *(int*)((char*)this + 0); }

struct C_015e2d20 { int sub_015e2d20(void); };

// @baa 0x015e2d20
int C_015e2d20::sub_015e2d20(void) { return *(int*)((char*)this + 0); }

struct C_015e2d30 { int sub_015e2d30(void); };

// @baa 0x015e2d30
int C_015e2d30::sub_015e2d30(void) { return *(int*)((char*)this + 0); }

struct C_015e2d40 { int sub_015e2d40(void); };

// @baa 0x015e2d40
int C_015e2d40::sub_015e2d40(void) { return *(int*)((char*)this + 0); }

struct C_015e2d50 { int sub_015e2d50(void); };

// @baa 0x015e2d50
int C_015e2d50::sub_015e2d50(void) { return *(int*)((char*)this + 0); }

struct C_015e2d60 { int sub_015e2d60(void); };

// @baa 0x015e2d60
int C_015e2d60::sub_015e2d60(void) { return *(int*)((char*)this + 0); }

struct C_015e2d70 { int sub_015e2d70(void); };

// @baa 0x015e2d70
int C_015e2d70::sub_015e2d70(void) { return *(int*)((char*)this + 0); }

struct C_015e2d80 { int sub_015e2d80(void); };

// @baa 0x015e2d80
int C_015e2d80::sub_015e2d80(void) { return *(int*)((char*)this + 0); }

struct C_015e2d90 { int sub_015e2d90(void); };

// @baa 0x015e2d90
int C_015e2d90::sub_015e2d90(void) { return *(int*)((char*)this + 0); }

struct C_015e2da0 { int sub_015e2da0(void); };

// @baa 0x015e2da0
int C_015e2da0::sub_015e2da0(void) { return *(int*)((char*)this + 0); }

struct C_015e2db0 { int sub_015e2db0(void); };

// @baa 0x015e2db0
int C_015e2db0::sub_015e2db0(void) { return *(int*)((char*)this + 0); }

struct C_015e2dc0 { int sub_015e2dc0(void); };

// @baa 0x015e2dc0
int C_015e2dc0::sub_015e2dc0(void) { return *(int*)((char*)this + 0); }

struct C_015e2dd0 { int sub_015e2dd0(void); };

// @baa 0x015e2dd0
int C_015e2dd0::sub_015e2dd0(void) { return *(int*)((char*)this + 0); }

struct C_015e2de0 { int sub_015e2de0(void); };

// @baa 0x015e2de0
int C_015e2de0::sub_015e2de0(void) { return *(int*)((char*)this + 0); }

struct C_015e2df0 { int sub_015e2df0(void); };

// @baa 0x015e2df0
int C_015e2df0::sub_015e2df0(void) { return *(int*)((char*)this + 0); }

struct C_015e2e00 { int sub_015e2e00(void); };

// @baa 0x015e2e00
int C_015e2e00::sub_015e2e00(void) { return *(int*)((char*)this + 0); }

struct C_015e2e10 { int sub_015e2e10(void); };

// @baa 0x015e2e10
int C_015e2e10::sub_015e2e10(void) { return *(int*)((char*)this + 0); }

struct C_015e2e20 { int sub_015e2e20(void); };

// @baa 0x015e2e20
int C_015e2e20::sub_015e2e20(void) { return *(int*)((char*)this + 0); }

struct C_015e2e30 { int sub_015e2e30(void); };

// @baa 0x015e2e30
int C_015e2e30::sub_015e2e30(void) { return *(int*)((char*)this + 0); }

struct C_015e2e40 { int sub_015e2e40(void); };

// @baa 0x015e2e40
int C_015e2e40::sub_015e2e40(void) { return *(int*)((char*)this + 0); }

struct C_015e2e50 { int sub_015e2e50(void); };

// @baa 0x015e2e50
int C_015e2e50::sub_015e2e50(void) { return *(int*)((char*)this + 0); }

struct C_015e2e60 { int sub_015e2e60(void); };

// @baa 0x015e2e60
int C_015e2e60::sub_015e2e60(void) { return *(int*)((char*)this + 0); }

struct C_015e2e70 { int sub_015e2e70(void); };

// @baa 0x015e2e70
int C_015e2e70::sub_015e2e70(void) { return *(int*)((char*)this + 0); }

struct C_015e2e80 { int sub_015e2e80(void); };

// @baa 0x015e2e80
int C_015e2e80::sub_015e2e80(void) { return *(int*)((char*)this + 0); }

struct C_015e2e90 { int sub_015e2e90(void); };

// @baa 0x015e2e90
int C_015e2e90::sub_015e2e90(void) { return *(int*)((char*)this + 0); }

struct C_015e2ea0 { int sub_015e2ea0(void); };

// @baa 0x015e2ea0
int C_015e2ea0::sub_015e2ea0(void) { return *(int*)((char*)this + 0); }

struct C_015e2eb0 { int sub_015e2eb0(void); };

// @baa 0x015e2eb0
int C_015e2eb0::sub_015e2eb0(void) { return *(int*)((char*)this + 0); }

struct C_015e2ec0 { int sub_015e2ec0(void); };

// @baa 0x015e2ec0
int C_015e2ec0::sub_015e2ec0(void) { return *(int*)((char*)this + 0); }

struct C_015e2ed0 { int sub_015e2ed0(void); };

// @baa 0x015e2ed0
int C_015e2ed0::sub_015e2ed0(void) { return *(int*)((char*)this + 0); }

struct C_015e2ee0 { int sub_015e2ee0(void); };

// @baa 0x015e2ee0
int C_015e2ee0::sub_015e2ee0(void) { return *(int*)((char*)this + 0); }

struct C_015e2ef0 { int sub_015e2ef0(void); };

// @baa 0x015e2ef0
int C_015e2ef0::sub_015e2ef0(void) { return *(int*)((char*)this + 0); }

struct C_015e2f00 { int sub_015e2f00(void); };

// @baa 0x015e2f00
int C_015e2f00::sub_015e2f00(void) { return *(int*)((char*)this + 0); }

struct C_015e2f10 { int sub_015e2f10(void); };

// @baa 0x015e2f10
int C_015e2f10::sub_015e2f10(void) { return *(int*)((char*)this + 0); }

struct C_015e2f20 { int sub_015e2f20(void); };

// @baa 0x015e2f20
int C_015e2f20::sub_015e2f20(void) { return *(int*)((char*)this + 0); }

struct C_015e2f30 { int sub_015e2f30(void); };

// @baa 0x015e2f30
int C_015e2f30::sub_015e2f30(void) { return *(int*)((char*)this + 0); }

struct C_015e2f40 { int sub_015e2f40(void); };

// @baa 0x015e2f40
int C_015e2f40::sub_015e2f40(void) { return *(int*)((char*)this + 0); }

struct C_015e2f50 { int sub_015e2f50(void); };

// @baa 0x015e2f50
int C_015e2f50::sub_015e2f50(void) { return *(int*)((char*)this + 0); }

struct C_015e2f60 { int sub_015e2f60(void); };

// @baa 0x015e2f60
int C_015e2f60::sub_015e2f60(void) { return *(int*)((char*)this + 0); }

struct C_015e2f70 { int sub_015e2f70(void); };

// @baa 0x015e2f70
int C_015e2f70::sub_015e2f70(void) { return *(int*)((char*)this + 0); }

struct C_015e2f80 { int sub_015e2f80(void); };

// @baa 0x015e2f80
int C_015e2f80::sub_015e2f80(void) { return *(int*)((char*)this + 0); }

struct C_015e2f90 { int sub_015e2f90(void); };

// @baa 0x015e2f90
int C_015e2f90::sub_015e2f90(void) { return *(int*)((char*)this + 0); }

struct C_015e2fa0 { int sub_015e2fa0(void); };

// @baa 0x015e2fa0
int C_015e2fa0::sub_015e2fa0(void) { return *(int*)((char*)this + 0); }

struct C_015e2fb0 { int sub_015e2fb0(void); };

// @baa 0x015e2fb0
int C_015e2fb0::sub_015e2fb0(void) { return *(int*)((char*)this + 0); }

struct C_015e2fc0 { int sub_015e2fc0(void); };

// @baa 0x015e2fc0
int C_015e2fc0::sub_015e2fc0(void) { return *(int*)((char*)this + 0); }

struct C_015e2fd0 { int sub_015e2fd0(void); };

// @baa 0x015e2fd0
int C_015e2fd0::sub_015e2fd0(void) { return *(int*)((char*)this + 0); }

struct C_015e2fe0 { int sub_015e2fe0(void); };

// @baa 0x015e2fe0
int C_015e2fe0::sub_015e2fe0(void) { return *(int*)((char*)this + 0); }

struct C_015e2ff0 { int sub_015e2ff0(void); };

// @baa 0x015e2ff0
int C_015e2ff0::sub_015e2ff0(void) { return *(int*)((char*)this + 0); }

struct C_015e3000 { int sub_015e3000(void); };

// @baa 0x015e3000
int C_015e3000::sub_015e3000(void) { return *(int*)((char*)this + 0); }

struct C_015e3010 { int sub_015e3010(void); };

// @baa 0x015e3010
int C_015e3010::sub_015e3010(void) { return *(int*)((char*)this + 0); }

struct C_015e3020 { int sub_015e3020(void); };

// @baa 0x015e3020
int C_015e3020::sub_015e3020(void) { return *(int*)((char*)this + 0); }

struct C_015e3030 { int sub_015e3030(void); };

// @baa 0x015e3030
int C_015e3030::sub_015e3030(void) { return *(int*)((char*)this + 0); }

struct C_015e3040 { int sub_015e3040(void); };

// @baa 0x015e3040
int C_015e3040::sub_015e3040(void) { return *(int*)((char*)this + 0); }

struct C_015e3050 { int sub_015e3050(void); };

// @baa 0x015e3050
int C_015e3050::sub_015e3050(void) { return *(int*)((char*)this + 0); }

struct C_015e3060 { int sub_015e3060(void); };

// @baa 0x015e3060
int C_015e3060::sub_015e3060(void) { return *(int*)((char*)this + 0); }

struct C_015e3070 { int sub_015e3070(void); };

// @baa 0x015e3070
int C_015e3070::sub_015e3070(void) { return *(int*)((char*)this + 0); }

struct C_015e3080 { int sub_015e3080(void); };

// @baa 0x015e3080
int C_015e3080::sub_015e3080(void) { return *(int*)((char*)this + 0); }

struct C_015e3090 { int sub_015e3090(void); };

// @baa 0x015e3090
int C_015e3090::sub_015e3090(void) { return *(int*)((char*)this + 0); }

struct C_015e30a0 { int sub_015e30a0(void); };

// @baa 0x015e30a0
int C_015e30a0::sub_015e30a0(void) { return *(int*)((char*)this + 0); }

struct C_015e30b0 { int sub_015e30b0(void); };

// @baa 0x015e30b0
int C_015e30b0::sub_015e30b0(void) { return *(int*)((char*)this + 0); }

struct C_015e30c0 { int sub_015e30c0(void); };

// @baa 0x015e30c0
int C_015e30c0::sub_015e30c0(void) { return *(int*)((char*)this + 0); }

struct C_015e30d0 { int sub_015e30d0(void); };

// @baa 0x015e30d0
int C_015e30d0::sub_015e30d0(void) { return *(int*)((char*)this + 0); }

struct C_015e30e0 { int sub_015e30e0(void); };

// @baa 0x015e30e0
int C_015e30e0::sub_015e30e0(void) { return *(int*)((char*)this + 0); }

struct C_015e30f0 { int sub_015e30f0(void); };

// @baa 0x015e30f0
int C_015e30f0::sub_015e30f0(void) { return *(int*)((char*)this + 0); }

struct C_015e3100 { int sub_015e3100(void); };

// @baa 0x015e3100
int C_015e3100::sub_015e3100(void) { return *(int*)((char*)this + 0); }

struct C_015e3110 { int sub_015e3110(void); };

// @baa 0x015e3110
int C_015e3110::sub_015e3110(void) { return *(int*)((char*)this + 0); }

struct C_015e3120 { int sub_015e3120(void); };

// @baa 0x015e3120
int C_015e3120::sub_015e3120(void) { return *(int*)((char*)this + 0); }

struct C_015e3130 { int sub_015e3130(void); };

// @baa 0x015e3130
int C_015e3130::sub_015e3130(void) { return *(int*)((char*)this + 0); }

struct C_015e3140 { int sub_015e3140(void); };

// @baa 0x015e3140
int C_015e3140::sub_015e3140(void) { return *(int*)((char*)this + 0); }

struct C_015e3150 { int sub_015e3150(void); };

// @baa 0x015e3150
int C_015e3150::sub_015e3150(void) { return *(int*)((char*)this + 0); }

struct C_015e3160 { int sub_015e3160(void); };

// @baa 0x015e3160
int C_015e3160::sub_015e3160(void) { return *(int*)((char*)this + 0); }

struct C_015e3170 { int sub_015e3170(void); };

// @baa 0x015e3170
int C_015e3170::sub_015e3170(void) { return *(int*)((char*)this + 0); }

struct C_015e3180 { int sub_015e3180(void); };

// @baa 0x015e3180
int C_015e3180::sub_015e3180(void) { return *(int*)((char*)this + 0); }

struct C_015e3190 { int sub_015e3190(void); };

// @baa 0x015e3190
int C_015e3190::sub_015e3190(void) { return *(int*)((char*)this + 0); }

struct C_015e31a0 { int sub_015e31a0(void); };

// @baa 0x015e31a0
int C_015e31a0::sub_015e31a0(void) { return *(int*)((char*)this + 0); }

struct C_015e31b0 { int sub_015e31b0(void); };

// @baa 0x015e31b0
int C_015e31b0::sub_015e31b0(void) { return *(int*)((char*)this + 0); }

struct C_015e31c0 { int sub_015e31c0(void); };

// @baa 0x015e31c0
int C_015e31c0::sub_015e31c0(void) { return *(int*)((char*)this + 0); }

struct C_015e31d0 { int sub_015e31d0(void); };

// @baa 0x015e31d0
int C_015e31d0::sub_015e31d0(void) { return *(int*)((char*)this + 0); }

struct C_015e31e0 { int sub_015e31e0(void); };

// @baa 0x015e31e0
int C_015e31e0::sub_015e31e0(void) { return *(int*)((char*)this + 0); }

struct C_015e31f0 { int sub_015e31f0(void); };

// @baa 0x015e31f0
int C_015e31f0::sub_015e31f0(void) { return *(int*)((char*)this + 0); }

struct C_015e3200 { int sub_015e3200(void); };

// @baa 0x015e3200
int C_015e3200::sub_015e3200(void) { return *(int*)((char*)this + 0); }

// @baa 0x015e3210
void sub_015e3210(int param_1, undefined4 * param_2)
{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 < 8) {
    *(undefined4 *)(param_1 + uVar2 * 0xc) = *param_2;
    iVar1 = param_1 + uVar2 * 0xc;
    *(undefined4 *)(iVar1 + 4) = param_2[1];
    *(undefined4 *)(iVar1 + 8) = param_2[2];
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  return;
}

// @baa 0x015e3240
void sub_015e3240(int param_1, undefined4 * param_2)
{
  int iVar1;
  uint uVar2;
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (uVar2 < 8) {
    *(undefined4 *)(param_1 + uVar2 * 0x14) = *param_2;
    iVar1 = param_1 + uVar2 * 0x14;
    *(undefined4 *)(iVar1 + 4) = param_2[1];
    *(undefined4 *)(iVar1 + 8) = param_2[2];
    *(undefined4 *)(iVar1 + 0xc) = param_2[3];
    *(undefined4 *)(iVar1 + 0x10) = param_2[4];
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  }
  return;
}

int sub_00572b30(void);
// @baa 0x015e3280
int sub_015e3280(void)
{
    return sub_00572b30();
}

int sub_005d88c0(...);
int sub_016d2430(void);
int sub_016def80(...);
extern undefined4 g_026e2324;
// @baa 0x015e3410
void sub_015e3410(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026e2324 == 0) {
    g_026e2324 = sub_016def80(L"BmGame");
    sub_016d2430();
  }
  sub_005d88c0(g_026e2324,param_1,param_2,param_3);
  return;
}

int sub_01586200(...);
// @baa 0x015e6150
undefined4 ARBMAIController::vf_448(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_01586200(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x35c));
  return *(undefined4 *)(iVar1 + 0x3d0);
}

ARGameInfo* sub_01586200(UObject* Src);
ARPlayerControllerCombat* sub_015e3450(UObject* Src);
// @baa 0x015e6260
INT ARBMCombatManager::vf_354()
{
    if (sub_01586200(WorldInfo->Game))
        return (INT)sub_015e3450((UObject*)sub_01586200(WorldInfo->Game)->vf_3b0());
    return 0;
}

typedef uint size_t;

struct C_015e8380 {
    void sub_015e8380(int, int);
    int sub_015e2430(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x015e8380
void C_015e8380::sub_015e8380(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_015e8380 *)(this))->sub_015e2430(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x28),0,param_3 * 0x28);
  return;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e83c0(INT Index);
};

// @baa 0x015e83c0
DWORD* S::sub_015e83c0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[120]; };

struct S_015e8410 {
    TArray<E> Items; // 0x00
    const E* sub_015e8410(INT Index) const;
};

// @baa 0x015e8410
const E* S_015e8410::sub_015e8410(INT Index) const
{
    return &Items(Index);
}

struct S_015e8460 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_015e8460(INT Index) const;
};

// @baa 0x015e8460
const DWORD* S_015e8460::sub_015e8460(INT Index) const
{
    return &Items(Index);
}

struct S_015e84b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_015e84b0(INT Index) const;
};

// @baa 0x015e84b0
const DWORD* S_015e84b0::sub_015e84b0(INT Index) const
{
    return &Items(Index);
}

struct S_015e8540 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e8540(INT Index);
};

// @baa 0x015e8540
DWORD* S_015e8540::sub_015e8540(INT Index)
{
    return &Items(Index);
}

struct E_015e8590 { BYTE Bytes[32]; };

struct S_015e8590 {
    TArray<E_015e8590> Items; // 0x00
    E_015e8590* sub_015e8590(INT Index);
};

// @baa 0x015e8590
E_015e8590* S_015e8590::sub_015e8590(INT Index)
{
    return &Items(Index);
}

struct S_015e85e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e85e0(INT Index);
};

// @baa 0x015e85e0
DWORD* S_015e85e0::sub_015e85e0(INT Index)
{
    return &Items(Index);
}

struct S_015e8630 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e8630(INT Index);
};

// @baa 0x015e8630
DWORD* S_015e8630::sub_015e8630(INT Index)
{
    return &Items(Index);
}

struct E_015e8680 { BYTE Bytes[24]; };

struct S_015e8680 {
    TArray<E_015e8680> Items; // 0x00
    E_015e8680* sub_015e8680(INT Index);
};

// @baa 0x015e8680
E_015e8680* S_015e8680::sub_015e8680(INT Index)
{
    return &Items(Index);
}

struct C_015e86d0 {
    void sub_015e86d0(int, int);
    int sub_015e2820(int, int);
};

// @baa 0x015e86d0
void C_015e86d0::sub_015e86d0(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_015e86d0 *)(this))->sub_015e2820(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x18),0,param_3 * 0x18);
  return;
}

struct E_015e8710 { BYTE Bytes[16]; };

struct S_015e8710 {
    TArray<E_015e8710> Items; // 0x00
    E_015e8710* sub_015e8710(INT Index);
};

// @baa 0x015e8710
E_015e8710* S_015e8710::sub_015e8710(INT Index)
{
    return &Items(Index);
}

struct C_015e8760 {
    void sub_015e8760(int, int);
    int sub_015e2980(int, int);
};

// @baa 0x015e8760
void C_015e8760::sub_015e8760(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_015e8760 *)(this))->sub_015e2980(param_2, param_3);
  sub_01a37612((void *)(param_2 * 0x10 + *param_1),0,param_3 << 4);
  return;
}

struct E_015e8790 { BYTE Bytes[36]; };

struct S_015e8790 {
    TArray<E_015e8790> Items; // 0x00
    E_015e8790* sub_015e8790(INT Index);
};

// @baa 0x015e8790
E_015e8790* S_015e8790::sub_015e8790(INT Index)
{
    return &Items(Index);
}

struct S_015e87e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e87e0(INT Index);
};

// @baa 0x015e87e0
DWORD* S_015e87e0::sub_015e87e0(INT Index)
{
    return &Items(Index);
}

struct C_015e8890 {
    int sub_015e8890(int);
};

// @baa 0x015e8890
int C_015e8890::sub_015e8890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_015e88a0 {
    int sub_015e88a0(int);
};

// @baa 0x015e88a0
int C_015e88a0::sub_015e88a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_015e88b0 {
    int sub_015e88b0(int);
};

// @baa 0x015e88b0
int C_015e88b0::sub_015e88b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_015e88c0 {
    int sub_015e88c0(int);
};

// @baa 0x015e88c0
int C_015e88c0::sub_015e88c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e88d0 {
    int sub_015e88d0(int);
};

// @baa 0x015e88d0
int C_015e88d0::sub_015e88d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_015e88e0 {
    int sub_015e88e0(int);
};

// @baa 0x015e88e0
int C_015e88e0::sub_015e88e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e88f0 {
    int sub_015e88f0(int);
};

// @baa 0x015e88f0
int C_015e88f0::sub_015e88f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x015e8900
void __stdcall sub_015e8900(int a0, int a1) {  }

struct C_015e8910 {
    int sub_015e8910(int);
};

// @baa 0x015e8910
int C_015e8910::sub_015e8910(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x015e8920
void __stdcall sub_015e8920(int a0, int a1) {  }

struct C_015e8930 {
    int sub_015e8930(int);
};

// @baa 0x015e8930
int C_015e8930::sub_015e8930(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_015e8940 {
    int sub_015e8940(int);
};

// @baa 0x015e8940
int C_015e8940::sub_015e8940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_015e8950 {
    int sub_015e8950(int);
};

// @baa 0x015e8950
int C_015e8950::sub_015e8950(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_015e8960 {
    int sub_015e8960(int);
};

// @baa 0x015e8960
int C_015e8960::sub_015e8960(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x015e8970
void __stdcall sub_015e8970(int a0, int a1) {  }

struct C_015e8980 {
    int sub_015e8980(int);
};

// @baa 0x015e8980
int C_015e8980::sub_015e8980(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8990 {
    int sub_015e8990(int);
};

// @baa 0x015e8990
int C_015e8990::sub_015e8990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_015e89b0 {
    int sub_015e89b0(int);
};

// @baa 0x015e89b0
int C_015e89b0::sub_015e89b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e89c0 {
    int sub_015e89c0(int);
};

// @baa 0x015e89c0
int C_015e89c0::sub_015e89c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x015e89d0
void __stdcall sub_015e89d0(int a0, int a1) {  }

struct C_015e89e0 {
    int sub_015e89e0(int);
};

// @baa 0x015e89e0
int C_015e89e0::sub_015e89e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e89f0 {
    int sub_015e89f0(int);
};

// @baa 0x015e89f0
int C_015e89f0::sub_015e89f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8a00 {
    int sub_015e8a00(int);
};

// @baa 0x015e8a00
int C_015e8a00::sub_015e8a00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8a10 {
    int sub_015e8a10(int);
};

// @baa 0x015e8a10
int C_015e8a10::sub_015e8a10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8a20 {
    int sub_015e8a20(int);
};

// @baa 0x015e8a20
int C_015e8a20::sub_015e8a20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8a30 {
    int sub_015e8a30(int);
};

// @baa 0x015e8a30
int C_015e8a30::sub_015e8a30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_015e8a40 {
    int sub_015e8a40(int);
};

// @baa 0x015e8a40
int C_015e8a40::sub_015e8a40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8a50 {
    int sub_015e8a50(int);
};

// @baa 0x015e8a50
int C_015e8a50::sub_015e8a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_015e8a60 {
    int sub_015e8a60(int);
};

// @baa 0x015e8a60
int C_015e8a60::sub_015e8a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_015e8a70 {
    int sub_015e8a70(int);
};

// @baa 0x015e8a70
int C_015e8a70::sub_015e8a70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x015e8a80
void __stdcall sub_015e8a80(int a0, int a1) {  }

struct C_015e8a90 {
    int sub_015e8a90(int);
};

// @baa 0x015e8a90
int C_015e8a90::sub_015e8a90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8aa0 {
    int sub_015e8aa0(int);
};

// @baa 0x015e8aa0
int C_015e8aa0::sub_015e8aa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8ab0 {
    int sub_015e8ab0(int);
};

// @baa 0x015e8ab0
int C_015e8ab0::sub_015e8ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8ac0 {
    int sub_015e8ac0(int);
};

// @baa 0x015e8ac0
int C_015e8ac0::sub_015e8ac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8ad0 {
    int sub_015e8ad0(int);
};

// @baa 0x015e8ad0
int C_015e8ad0::sub_015e8ad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_015e8ae0 {
    int sub_015e8ae0(int);
};

// @baa 0x015e8ae0
int C_015e8ae0::sub_015e8ae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8af0 {
    int sub_015e8af0(int);
};

// @baa 0x015e8af0
int C_015e8af0::sub_015e8af0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_015e8b00 {
    int sub_015e8b00(int);
};

// @baa 0x015e8b00
int C_015e8b00::sub_015e8b00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8b10 {
    int sub_015e8b10(int);
};

// @baa 0x015e8b10
int C_015e8b10::sub_015e8b10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_015e8b30 {
    int sub_015e8b30(int);
};

// @baa 0x015e8b30
int C_015e8b30::sub_015e8b30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8b40 {
    int sub_015e8b40(int);
};

// @baa 0x015e8b40
int C_015e8b40::sub_015e8b40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_015e8b50 {
    int sub_015e8b50(int);
};

// @baa 0x015e8b50
int C_015e8b50::sub_015e8b50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x015e8b60
void __stdcall sub_015e8b60(int a0, int a1) {  }

struct C_015e8b70 {
    int sub_015e8b70(int);
};

// @baa 0x015e8b70
int C_015e8b70::sub_015e8b70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_015e8b80 {
    int sub_015e8b80(int);
};

// @baa 0x015e8b80
int C_015e8b80::sub_015e8b80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_015e8b90 {
    int sub_015e8b90(int);
};

// @baa 0x015e8b90
int C_015e8b90::sub_015e8b90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_015e8ba0 {
    int sub_015e8ba0(int);
};

// @baa 0x015e8ba0
int C_015e8ba0::sub_015e8ba0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_015e8bb0 {
    int sub_015e8bb0(int);
};

// @baa 0x015e8bb0
int C_015e8bb0::sub_015e8bb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8bc0 {
    int sub_015e8bc0(int);
};

// @baa 0x015e8bc0
int C_015e8bc0::sub_015e8bc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_015e8bd0 {
    int sub_015e8bd0(int);
};

// @baa 0x015e8bd0
int C_015e8bd0::sub_015e8bd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_015e8be0 {
    int sub_015e8be0(int);
};

// @baa 0x015e8be0
int C_015e8be0::sub_015e8be0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8bf0 {
    int sub_015e8bf0(int);
};

// @baa 0x015e8bf0
int C_015e8bf0::sub_015e8bf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_015e8c00 {
    int sub_015e8c00(int);
};

// @baa 0x015e8c00
int C_015e8c00::sub_015e8c00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_015e8c10 {
    int sub_015e8c10(int);
};

// @baa 0x015e8c10
int C_015e8c10::sub_015e8c10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x015e8c20
void __stdcall sub_015e8c20(int a0, int a1) {  }

struct C_015e8c30 {
    int sub_015e8c30(int);
};

// @baa 0x015e8c30
int C_015e8c30::sub_015e8c30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_015e8c40 {
    int sub_015e8c40(int);
};

// @baa 0x015e8c40
int C_015e8c40::sub_015e8c40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_015e8c50 {
    int sub_015e8c50(int);
};

// @baa 0x015e8c50
int C_015e8c50::sub_015e8c50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_015e8c60 {
    int sub_015e8c60(int);
};

// @baa 0x015e8c60
int C_015e8c60::sub_015e8c60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_015e8c80 {
    int sub_015e8c80(int);
};

// @baa 0x015e8c80
int C_015e8c80::sub_015e8c80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct E_015e8c90 { BYTE Bytes[12]; };

struct S_015e8c90 {
    TArray<E_015e8c90> Items; // 0x00
    E_015e8c90* sub_015e8c90(INT Index);
};

// @baa 0x015e8c90
E_015e8c90* S_015e8c90::sub_015e8c90(INT Index)
{
    return &Items(Index);
}

struct E_015e8ce0 { BYTE Bytes[16]; };

struct S_015e8ce0 {
    TArray<E_015e8ce0> Items; // 0x00
    E_015e8ce0* sub_015e8ce0(INT Index);
};

// @baa 0x015e8ce0
E_015e8ce0* S_015e8ce0::sub_015e8ce0(INT Index)
{
    return &Items(Index);
}

struct E_015e8d30 { BYTE Bytes[12]; };

struct S_015e8d30 {
    TArray<E_015e8d30> Items; // 0x00
    E_015e8d30* sub_015e8d30(INT Index);
};

// @baa 0x015e8d30
E_015e8d30* S_015e8d30::sub_015e8d30(INT Index)
{
    return &Items(Index);
}

struct S_015e8d80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e8d80(INT Index);
};

// @baa 0x015e8d80
DWORD* S_015e8d80::sub_015e8d80(INT Index)
{
    return &Items(Index);
}

struct E_015e8dd0 { BYTE Bytes[12]; };

struct S_015e8dd0 {
    TArray<E_015e8dd0> Items; // 0x00
    E_015e8dd0* sub_015e8dd0(INT Index);
};

// @baa 0x015e8dd0
E_015e8dd0* S_015e8dd0::sub_015e8dd0(INT Index)
{
    return &Items(Index);
}

struct S_015e8e20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e8e20(INT Index);
};

// @baa 0x015e8e20
DWORD* S_015e8e20::sub_015e8e20(INT Index)
{
    return &Items(Index);
}

struct S_015e8e70 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_015e8e70(INT Index);
};

// @baa 0x015e8e70
QWORD* S_015e8e70::sub_015e8e70(INT Index)
{
    return &Items(Index);
}

struct S_015e8ec0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_015e8ec0(INT Index);
};

// @baa 0x015e8ec0
QWORD* S_015e8ec0::sub_015e8ec0(INT Index)
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
	FFaceFXElement* sub_015e8f10(INT Index);
};

// @baa 0x015e8f10
FFaceFXElement* UFxRenderWidget::sub_015e8f10(INT Index)
{
	return &BoneArray(Index);
}

struct S_015e8f60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e8f60(INT Index);
};

// @baa 0x015e8f60
DWORD* S_015e8f60::sub_015e8f60(INT Index)
{
    return &Items(Index);
}

struct S_015e9000 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9000(INT Index);
};

// @baa 0x015e9000
DWORD* S_015e9000::sub_015e9000(INT Index)
{
    return &Items(Index);
}

struct S_015e9050 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9050(INT Index);
};

// @baa 0x015e9050
DWORD* S_015e9050::sub_015e9050(INT Index)
{
    return &Items(Index);
}

struct S_015e90a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e90a0(INT Index);
};

// @baa 0x015e90a0
DWORD* S_015e90a0::sub_015e90a0(INT Index)
{
    return &Items(Index);
}

struct S_015e90f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e90f0(INT Index);
};

// @baa 0x015e90f0
DWORD* S_015e90f0::sub_015e90f0(INT Index)
{
    return &Items(Index);
}

struct S_015e9140 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9140(INT Index);
};

// @baa 0x015e9140
DWORD* S_015e9140::sub_015e9140(INT Index)
{
    return &Items(Index);
}

struct S_015e9190 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9190(INT Index);
};

// @baa 0x015e9190
DWORD* S_015e9190::sub_015e9190(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_015e91e0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_015e91e0(INT Index);
};

// @baa 0x015e91e0
FFaceFXElement* UFxRenderWidget_015e91e0::sub_015e91e0(INT Index)
{
	return &BoneArray(Index);
}

struct S_015e9230 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9230(INT Index);
};

// @baa 0x015e9230
DWORD* S_015e9230::sub_015e9230(INT Index)
{
    return &Items(Index);
}

struct E_015e9280 { BYTE Bytes[24]; };

struct S_015e9280 {
    TArray<E_015e9280> Items; // 0x00
    E_015e9280* sub_015e9280(INT Index);
};

// @baa 0x015e9280
E_015e9280* S_015e9280::sub_015e9280(INT Index)
{
    return &Items(Index);
}

struct E_015e92d0 { BYTE Bytes[12]; };

struct S_015e92d0 {
    TArray<E_015e92d0> Items; // 0x00
    E_015e92d0* sub_015e92d0(INT Index);
};

// @baa 0x015e92d0
E_015e92d0* S_015e92d0::sub_015e92d0(INT Index)
{
    return &Items(Index);
}

struct S_015e9320 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9320(INT Index);
};

// @baa 0x015e9320
DWORD* S_015e9320::sub_015e9320(INT Index)
{
    return &Items(Index);
}

struct S_015e9370 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9370(INT Index);
};

// @baa 0x015e9370
DWORD* S_015e9370::sub_015e9370(INT Index)
{
    return &Items(Index);
}

struct S_015e93c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e93c0(INT Index);
};

// @baa 0x015e93c0
DWORD* S_015e93c0::sub_015e93c0(INT Index)
{
    return &Items(Index);
}

struct S_015e9410 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9410(INT Index);
};

// @baa 0x015e9410
DWORD* S_015e9410::sub_015e9410(INT Index)
{
    return &Items(Index);
}

struct S_015e9460 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_015e9460(INT Index);
};

// @baa 0x015e9460
QWORD* S_015e9460::sub_015e9460(INT Index)
{
    return &Items(Index);
}

struct S_015e94b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e94b0(INT Index);
};

// @baa 0x015e94b0
DWORD* S_015e94b0::sub_015e94b0(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_015e9500
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_015e9500(INT Index);
};

// @baa 0x015e9500
FFaceFXElement* UFxRenderWidget_015e9500::sub_015e9500(INT Index)
{
	return &BoneArray(Index);
}

struct S_015e9550 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9550(INT Index);
};

// @baa 0x015e9550
DWORD* S_015e9550::sub_015e9550(INT Index)
{
    return &Items(Index);
}

struct S_015e95f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e95f0(INT Index);
};

// @baa 0x015e95f0
DWORD* S_015e95f0::sub_015e95f0(INT Index)
{
    return &Items(Index);
}

struct E_015e9640 { BYTE Bytes[16]; };

struct S_015e9640 {
    TArray<E_015e9640> Items; // 0x00
    E_015e9640* sub_015e9640(INT Index);
};

// @baa 0x015e9640
E_015e9640* S_015e9640::sub_015e9640(INT Index)
{
    return &Items(Index);
}

struct S_015e9690 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_015e9690(INT Index);
};

// @baa 0x015e9690
QWORD* S_015e9690::sub_015e9690(INT Index)
{
    return &Items(Index);
}

struct E_015e96e0 { BYTE Bytes[12]; };

struct S_015e96e0 {
    TArray<E_015e96e0> Items; // 0x00
    E_015e96e0* sub_015e96e0(INT Index);
};

// @baa 0x015e96e0
E_015e96e0* S_015e96e0::sub_015e96e0(INT Index)
{
    return &Items(Index);
}

struct E_015e9730 { BYTE Bytes[48]; };

struct S_015e9730 {
    TArray<E_015e9730> Items; // 0x00
    E_015e9730* sub_015e9730(INT Index);
};

// @baa 0x015e9730
E_015e9730* S_015e9730::sub_015e9730(INT Index)
{
    return &Items(Index);
}

struct S_015e9780 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9780(INT Index);
};

// @baa 0x015e9780
DWORD* S_015e9780::sub_015e9780(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_015e97d0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_015e97d0(INT Index);
};

// @baa 0x015e97d0
FFaceFXElement* UFxRenderWidget_015e97d0::sub_015e97d0(INT Index)
{
	return &BoneArray(Index);
}

struct S_015e9820 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9820(INT Index);
};

// @baa 0x015e9820
DWORD* S_015e9820::sub_015e9820(INT Index)
{
    return &Items(Index);
}

struct S_015e9870 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9870(INT Index);
};

// @baa 0x015e9870
DWORD* S_015e9870::sub_015e9870(INT Index)
{
    return &Items(Index);
}

struct E_015e98c0 { BYTE Bytes[36]; };

struct S_015e98c0 {
    TArray<E_015e98c0> Items; // 0x00
    E_015e98c0* sub_015e98c0(INT Index);
};

// @baa 0x015e98c0
E_015e98c0* S_015e98c0::sub_015e98c0(INT Index)
{
    return &Items(Index);
}

struct E_015e9910 { BYTE Bytes[16]; };

struct S_015e9910 {
    TArray<E_015e9910> Items; // 0x00
    E_015e9910* sub_015e9910(INT Index);
};

// @baa 0x015e9910
E_015e9910* S_015e9910::sub_015e9910(INT Index)
{
    return &Items(Index);
}

struct E_015e9960 { BYTE Bytes[12]; };

struct S_015e9960 {
    TArray<E_015e9960> Items; // 0x00
    E_015e9960* sub_015e9960(INT Index);
};

// @baa 0x015e9960
E_015e9960* S_015e9960::sub_015e9960(INT Index)
{
    return &Items(Index);
}

struct E_015e99b0 { BYTE Bytes[16]; };

struct S_015e99b0 {
    TArray<E_015e99b0> Items; // 0x00
    E_015e99b0* sub_015e99b0(INT Index);
};

// @baa 0x015e99b0
E_015e99b0* S_015e99b0::sub_015e99b0(INT Index)
{
    return &Items(Index);
}

struct S_015e9a50 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015e9a50(INT Index);
};

// @baa 0x015e9a50
DWORD* S_015e9a50::sub_015e9a50(INT Index)
{
    return &Items(Index);
}

int sub_015db240(void);
int sub_015e56d0(...);
extern undefined4 g_026e16a4;
// @baa 0x015e9aa0
int sub_015e9aa0(void)
{
  if (g_026e16a4 == 0) {
    g_026e16a4 = sub_015e56d0(L"BmGame");
    sub_015db240();
  }
  return g_026e16a4;
}

struct C_015e9ad0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_015e9ad0& sub_015e9ad0(int Arg);
};

// @baa 0x015e9ad0
C_015e9ad0& C_015e9ad0::sub_015e9ad0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_015ee670 { void* Data; int Num; int Max; void sub_015ee670(); };

// @baa 0x015ee670
void C_015ee670::sub_015ee670() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015ee6d0 { void* Data; int Num; int Max; void sub_015ee6d0(); };

// @baa 0x015ee6d0
void C_015ee6d0::sub_015ee6d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015ee730 { void* Data; int Num; int Max; void sub_015ee730(); };

// @baa 0x015ee730
void C_015ee730::sub_015ee730() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015ee870 { void* Data; int Num; int Max; void sub_015ee870(); };

// @baa 0x015ee870
void C_015ee870::sub_015ee870() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015ee8d0 { void* Data; int Num; int Max; void sub_015ee8d0(); };

// @baa 0x015ee8d0
void C_015ee8d0::sub_015ee8d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015eea10 { void* Data; int Num; int Max; void sub_015eea10(); };

// @baa 0x015eea10
void C_015eea10::sub_015eea10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015eeb60 { void* Data; int Num; int Max; void sub_015eeb60(); };

// @baa 0x015eeb60
void C_015eeb60::sub_015eeb60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_015eec00;
// @baa 0x015eec00
template INT TArray<T_015eec00*>::RemoveItem(T_015eec00* const&);

// @baa 0x015eec80
void __stdcall sub_015eec80(int a0, int a1) {  }

// @baa 0x015eec90
void __stdcall sub_015eec90(int a0, int a1) {  }

// @baa 0x015eeca0
void __stdcall sub_015eeca0(int a0, int a1) {  }

// @baa 0x015eecb0
void __stdcall sub_015eecb0(int a0, int a1) {  }

// @baa 0x015eecc0
void __stdcall sub_015eecc0(int a0, int a1) {  }

// @baa 0x015eecd0
void __stdcall sub_015eecd0(int a0, int a1) {  }

// @baa 0x015eece0
void __stdcall sub_015eece0(int a0, int a1) {  }

// @baa 0x015eecf0
void __stdcall sub_015eecf0(int a0, int a1) {  }

// @baa 0x015eed00
void __stdcall sub_015eed00(int a0, int a1) {  }

// @baa 0x015eed10
void __stdcall sub_015eed10(int a0, int a1) {  }

// @baa 0x015eed20
void __stdcall sub_015eed20(int a0, int a1) {  }

// @baa 0x015eed30
void __stdcall sub_015eed30(int a0, int a1) {  }

// @baa 0x015eed40
void __stdcall sub_015eed40(int a0, int a1) {  }

// @baa 0x015eed50
void __stdcall sub_015eed50(int a0, int a1) {  }

// @baa 0x015eed60
void __stdcall sub_015eed60(int a0, int a1) {  }

// @baa 0x015eed70
void __stdcall sub_015eed70(int a0, int a1) {  }

// @baa 0x015eed80
void __stdcall sub_015eed80(int a0, int a1) {  }

// @baa 0x015eed90
void __stdcall sub_015eed90(int a0, int a1) {  }

// @baa 0x015eeda0
void __stdcall sub_015eeda0(int a0, int a1) {  }

// @baa 0x015eedb0
void __stdcall sub_015eedb0(int a0, int a1) {  }

// @baa 0x015eedc0
void __stdcall sub_015eedc0(int a0, int a1) {  }

// @baa 0x015eedd0
void __stdcall sub_015eedd0(int a0, int a1) {  }

// @baa 0x015eede0
void __stdcall sub_015eede0(int a0, int a1) {  }

// @baa 0x015eedf0
void __stdcall sub_015eedf0(int a0, int a1) {  }

// @baa 0x015eee00
void __stdcall sub_015eee00(int a0, int a1) {  }

// @baa 0x015eee10
void __stdcall sub_015eee10(int a0, int a1) {  }

// @baa 0x015eee20
void __stdcall sub_015eee20(int a0, int a1) {  }

// @baa 0x015eee30
void __stdcall sub_015eee30(int a0, int a1) {  }

// @baa 0x015eee40
void __stdcall sub_015eee40(int a0, int a1) {  }

// @baa 0x015eee50
void __stdcall sub_015eee50(int a0, int a1) {  }

// @baa 0x015eee60
void __stdcall sub_015eee60(int a0, int a1) {  }

// @baa 0x015eee70
void __stdcall sub_015eee70(int a0, int a1) {  }

// @baa 0x015eee80
void __stdcall sub_015eee80(int a0, int a1) {  }

// @baa 0x015eee90
void __stdcall sub_015eee90(int a0, int a1) {  }

// @baa 0x015eeea0
void __stdcall sub_015eeea0(int a0, int a1) {  }

// @baa 0x015eeeb0
void __stdcall sub_015eeeb0(int a0, int a1) {  }

// @baa 0x015eeec0
void __stdcall sub_015eeec0(int a0, int a1) {  }

// @baa 0x015eeed0
void __stdcall sub_015eeed0(int a0, int a1) {  }

// @baa 0x015eeee0
void __stdcall sub_015eeee0(int a0, int a1) {  }

// @baa 0x015eeef0
void __stdcall sub_015eeef0(int a0, int a1) {  }

// @baa 0x015eef00
void __stdcall sub_015eef00(int a0, int a1) {  }

void sub_015ee670();
// @baa 0x015eefb0
void sub_015eefb0(void) { sub_015ee670(); }

void sub_015ee6d0();
// @baa 0x015eefc0
void sub_015eefc0(void) { sub_015ee6d0(); }

void sub_015ee730();
// @baa 0x015eefd0
void sub_015eefd0(void) { sub_015ee730(); }

void sub_015ee870();
// @baa 0x015eefe0
void sub_015eefe0(void) { sub_015ee870(); }

void sub_015ee8d0();
// @baa 0x015eeff0
void sub_015eeff0(void) { sub_015ee8d0(); }

void sub_015eea10();
// @baa 0x015ef000
void sub_015ef000(void) { sub_015eea10(); }

struct C_015ef010 {
    undefined4 * sub_015ef010();
};

int sub_005c7a20(void);
extern undefined * g_02330668;
// @baa 0x015ef010
undefined4 * C_015ef010::sub_015ef010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_02330668);
  return param_1;
}

// @baa 0x015ef060
IMPLEMENT_CLASS_AT(URBMSpecialMove_ReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 18);

// @baa 0x015ef0c0

// @baa 0x015e1eb0
void URBMWaveController::vf_110(INT, INT)
{
    vf_1a4();
}

// @baa 0x015e1f40
void URBMPawnSpawnerController::vf_110(INT, INT)
{
    vf_1ac();
}

// @baa 0x015e20e0
void URSeqAct_GetNumPawnsInVolume::vf_110(INT, INT)
{
    vf_19c();
}

// @baa 0x015e1e20
void URBMWaveController::Activated()
{
    bExitWaveController = FALSE;
    vf_1a0(1);
}

struct C_015e1e40
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void vf1a4();
    INT sub_00d201d0(INT A);
    void sub_015e1e40(UINT A);
};

// @baa 0x015e1e40
void C_015e1e40::sub_015e1e40(UINT A)
{
    vf1a4();
    sub_00d201d0((INT)A);
}

struct C_015e1ed0
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void vf1ac();
    INT sub_00d201d0(INT A);
    void sub_015e1ed0(UINT A);
};

// @baa 0x015e1ed0
void C_015e1ed0::sub_015e1ed0(UINT A)
{
    vf1ac();
    sub_00d201d0((INT)A);
}

struct C_015e2070
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void vf19c();
    INT sub_00d201d0(INT A);
    void sub_015e2070(UINT A);
};

// @baa 0x015e2070
void C_015e2070::sub_015e2070(UINT A)
{
    vf19c();
    sub_00d201d0((INT)A);
}
