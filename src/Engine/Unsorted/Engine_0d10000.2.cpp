// Engine_0d10000.cpp (part 2 of 2): 57 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_00d10de0();
// @baa 0x00d12db0
void sub_00d12db0(void) { sub_00d10de0(); }

struct C {
    int sub_00d16d00();
};

int sub_00d05b70(void);
// @baa 0x00d16d00
int C::sub_00d16d00(void)
{
    int param_1 = (int)this;

  sub_00d05b70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d16d20 {
    int sub_00d16d20();
};

int sub_00d05bd0(void);
// @baa 0x00d16d20
int C_00d16d20::sub_00d16d20(void)
{
    int param_1 = (int)this;

  sub_00d05bd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d16d40 {
    int sub_00d16d40();
};

int sub_00d05c30(void);
// @baa 0x00d16d40
int C_00d16d40::sub_00d16d40(void)
{
    int param_1 = (int)this;

  sub_00d05c30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00d16f30
void sub_00d16f30(void) { sub_00d10de0(); }

void sub_00d166d0();
// @baa 0x00d16f40
void sub_00d16f40(void) { sub_00d166d0(); }

void sub_00d10e50();
// @baa 0x00d16f50
void sub_00d16f50(void) { sub_00d10e50(); }

void sub_00d10ec0();
// @baa 0x00d16f60
void sub_00d16f60(void) { sub_00d10ec0(); }

struct C_view {
    int sub_00d16f70(int);
};

int sub_007c3600(...);
// @baa 0x00d16ff0
void UMultiFont::Serialize(FArchive& Ar) {
    UINT param_2 = (UINT)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00d16f70(param_2);
  if ((*(int *)(param_2 + 4) < 0x1ff) && (*(int *)(param_2 + 0x10) != 0)) {
    sub_007c3600(param_2,param_1 + 0x124);
  }
  return;
}

// @baa 0x00d19910
bool UMultiFont::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d1e7b0
void sub_00d1e7b0(void) {  }

// @baa 0x00d1e7c0
void sub_00d1e7c0(void) {  }

// @baa 0x00d1e7d0
float10 sub_00d1e7d0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00d1e7e0
undefined4 sub_00d1e7e0(ushort param_1)
{
  if (((((param_1 != 0x9f) && (param_1 != 0x8c)) && (param_1 != 0xf0)) &&
      ((param_1 != 0xf7 && ((param_1 < 0x41 || (0x5a < param_1)))))) &&
     ((param_1 < 0xc0 || (0xdf < param_1)))) {
    return 0;
  }
  return 1;
}

struct C_00d1e890 {
    int sub_00d1e890(int);
};

// @baa 0x00d1e890
int C_00d1e890::sub_00d1e890(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

// @baa 0x00d1e8a0
int sub_00d1e8a0(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x80) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00d1e8c0
int sub_00d1e8c0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x100) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00d1e8e0
int sub_00d1e8e0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x400) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00d1e900
undefined2 sub_00d1e900(void)
{
  return 0x69;
}

struct C_00d1e910 {
    float10 sub_00d1e910();
};

// @baa 0x00d1e910
float10 C_00d1e910::sub_00d1e910(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + 0x1c) - (float10)*(float *)(param_1 + 0x18);
}

// @baa 0x00d1e920
int sub_00d1e920(int a0, int a1) { return a1; }

struct C_00d1e930 {
    bool sub_00d1e930();
};

// @baa 0x00d1e930
bool C_00d1e930::sub_00d1e930(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x4c) != 0;
}

struct C_00d1e980 {
    undefined4 sub_00d1e980(int *);
};

// @baa 0x00d1e980
undefined4 C_00d1e980::sub_00d1e980(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x00d1e9a0
int sub_00d1e9a0(int a0, int a1) { return a1; }

// @baa 0x00d1e9b0
int sub_00d1e9b0(int a0, int a1) { return a1; }

// @baa 0x00d1e9c0
int sub_00d1e9c0(int a0, int a1) { return a1; }

struct C_00d1e9d0 {
    void sub_00d1e9d0();
};

int sub_007292e0(...);
// @baa 0x00d1e9d0
void C_00d1e9d0::sub_00d1e9d0(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_007292e0(param_1);
  return;
}

struct C_00d1e9e0 { int sub_00d1e9e0(void); };

// @baa 0x00d1e9e0
int C_00d1e9e0::sub_00d1e9e0(void) { return *(int*)((char*)this + 28); }

struct C_00d1e9f0 { int sub_00d1e9f0(void); };

// @baa 0x00d1e9f0
int C_00d1e9f0::sub_00d1e9f0(void) { return *(int*)((char*)this + 32); }

// @baa 0x00d1ea00
int sub_00d1ea00(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00d1ea10
void sub_00d1ea10(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_0056bf90(void);
extern undefined * g_020a7a68;
// @baa 0x00d1ea30
undefined4 * UTexture2D::sub_00d1ea30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0056bf90();
  *param_1 = (undefined4)(&g_020a7a68);
  return param_1;
}

extern undefined * g_020a7a7c;
// @baa 0x00d1ea60
undefined4 * UTexture2D::sub_00d1ea60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0056bf90();
  *param_1 = (undefined4)(&g_020a7a7c);
  return param_1;
}

int sub_0053dfa0(...);
int sub_00581450(void);
// @baa 0x00d1ea90
undefined4 UTexture2D::sub_00d1ea90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d1eab0
undefined4 UTexture2D::sub_00d1eab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d1ead0 { void sub_00d1ead0(int a0); };

// @baa 0x00d1ead0
void C_00d1ead0::sub_00d1ead0(int a0) { *(int*)((char*)this + 36) = a0; }

// @baa 0x00d1eb40
int sub_00d1eb40(int a0, int a1) { return a1; }

// @baa 0x00d1eb50
int sub_00d1eb50(int a0, int a1) { return a1; }

struct C_00d1eb60 { C_00d1eb60* sub_00d1eb60(int a0); };

// @baa 0x00d1eb60
C_00d1eb60* C_00d1eb60::sub_00d1eb60(int a0) { return this; }

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026c5850;
extern undefined4 g_026c5854;
extern undefined4 g_026c5858;
// @baa 0x00d1ebf0
undefined * sub_00d1ebf0(void)
{
  if ((g_026c5858 & 1) == 0) {
    g_026c5858 = g_026c5858 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026c5850 = (undefined4)(&g_026af518);
    g_026c5854 = (undefined4)(L"HInterpEdInputInterface");
  }
  return (undefined *)(&g_026c5850);
}

int sub_005eae70(...);
int sub_006adc00(void);
int sub_006d6b80(...);
extern undefined4 g_026b0de0;
// @baa 0x00d1ee30
void sub_00d1ee30(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Move_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1ee70
void sub_00d1ee70(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Float_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1eef0
void sub_00d1eef0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Vector_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1ef30
void sub_00d1ef30(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_ColorTrack_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1ef70
void sub_00d1ef70(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Event_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1efb0
void sub_00d1efb0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Director_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f270
void sub_00d1f270(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_ParticleReplay_Mat",0,0,0,1
              );
  return;
}

// @baa 0x00d1f880
int UOnlineStats::vf_000(void) { return 1; }

// @baa 0x00d1f890
bool UOnlineStats::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d1f8d0
int UOnlineStatsRead::vf_000(void) { return 1; }

// @baa 0x00d1f8e0
int UOnlineStatsWrite::vf_000(void) { return 1; }

// @baa 0x00d1f900
int sub_00d1f900(int a0, int a1) { return a1; }

// @baa 0x00d1f910
int sub_00d1f910(int a0, int a1) { return a1; }

// @baa 0x00d1fee0
int UPrefabSequence::vf_000(void) { return 1; }

// @baa 0x00d1fef0
bool UPrefabSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d1ff30
void UPrefabSequence::SetOwnerPrefab(int a0) { *(int*)((char*)this + 268) = a0; }

// @baa 0x00d1ff40
int UPrefabSequence::GetOwnerPrefab(void) { return *(int*)((char*)this + 268); }

