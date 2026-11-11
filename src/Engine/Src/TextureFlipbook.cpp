// TextureFlipbook.cpp: 15 functions
// Placed here by: class 12, callers 1, neighbours 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007551e0
IMPLEMENT_CLASS_AT(UTextureFlipBook, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureFlipbook.cpp", 8);

// @baa 0x007552f0
int UTextureFlipBook::vf_000(void) { return 1; }

// @baa 0x00755300
bool UTextureFlipBook::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00755340
void UTextureFlipBook::vf_134(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xfffffffc;
  return;
}

// @baa 0x00755350
void UTextureFlipBook::vf_138(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 1;
  return;
}

// @baa 0x00755360
void UTextureFlipBook::vf_140(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 < *(int *)(param_1 + 0x118)) && (param_3 < *(int *)(param_1 + 0x11c))) {
    *(int *)(param_1 + 300) = param_2;
    *(int *)(param_1 + 0x130) = param_3;
  }
  return;
}

struct V_0075b070 {
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
    virtual void g();
};

// @baa 0x0075b070
void (V_0075b070::*sub_0075b070)() = &V_0075b070::g;

struct C_view {
    int sub_00721030();
    int sub_00755490();
};

// @baa 0x0075be40
void UTextureFlipBook::vf_01c(void)
{
    int param_1 = (int)this;
  float fVar1;
  ((C_view *)(this))->sub_00721030();
  fVar1 = 1.0;
  *(float *)(param_1 + 0x10c) = 1.0 / (float)*(int *)(param_1 + 0x118);
  *(float *)(param_1 + 0x110) = 1.0 / (float)*(int *)(param_1 + 0x11c);
  if (0.0 < *(float *)(param_1 + 0x124)) {
    fVar1 = 1.0 / *(float *)(param_1 + 0x124);
  }
  *(float *)(param_1 + 0x128) = fVar1;
  ((C_view *)(this))->sub_00755490();
  if ((*(uint *)(param_1 + 0x114) & 8) == 0) {
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xfffffffd | 1;
  }
  return;
}

struct C_view_0075bec0 {
    int sub_00720bc0(int);
    int sub_00755490();
};

// @baa 0x0075bec0
void UTextureFlipBook::vf_04c(undefined4 param_2)
{
    int param_1 = (int)this;
  float fVar1;
  ((C_view_0075bec0 *)(this))->sub_00720bc0(param_2);
  fVar1 = 1.0;
  *(float *)(param_1 + 0x10c) = 1.0 / (float)*(int *)(param_1 + 0x118);
  *(float *)(param_1 + 0x110) = 1.0 / (float)*(int *)(param_1 + 0x11c);
  if (0.0 < *(float *)(param_1 + 0x124)) {
    fVar1 = 1.0 / *(float *)(param_1 + 0x124);
  }
  *(float *)(param_1 + 0x128) = fVar1;
  ((C_view_0075bec0 *)(this))->sub_00755490();
  return;
}

// @baa 0x0076ea30
int UTextureFlipBook::vf_144(void) { return 1; }

// @baa 0x0076ea40
void UTextureFlipBook::vf_148(float * param_2)
{
    int param_1 = (int)this;
  *param_2 = (float)*(int *)(param_1 + 0x130) * *(float *)(param_1 + 0x10c);
  param_2[1] = (float)*(int *)(param_1 + 300) * *(float *)(param_1 + 0x110);
  return;
}

struct A_0076ea90 { virtual void sub_0076eb40(); char pad[252]; };

struct B_0076ea90 { virtual void sub_0076eb40(); };

struct C_0076ea90 : A_0076ea90, B_0076ea90 { virtual void sub_0076eb40(); C_0076ea90(); };

C_0076ea90::C_0076ea90() {}

// @baa 0x0076ea90
void C_0076ea90::sub_0076eb40() {}

int sub_005c7a70(...);
int sub_0076eac0(void);
// @baa 0x0076eb40
undefined4 UTextureFlipBook::sub_0076eb40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0076eac0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x140);
  }
  return param_1;
}

// @baa 0x007713c0
// @baa 0x007713d0
