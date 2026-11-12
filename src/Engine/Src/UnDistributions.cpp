// UnDistributions.cpp (part 1 of 3): 160 functions
// Placed here by: neighbours 89, class 41, file 12, callers 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_00551820 : Inner {
    int num;
    int max;
    void sub_0054e560(int* p);
    Outer_00551820(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x00551820
Outer_00551820::Outer_00551820(int* p)
{
    num = 0;
    max = 0;
    sub_0054e560(p);
}

// @baa 0x0079f8c0
IMPLEMENT_CLASS_AT(UDistributionVectorConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 14);

// @baa 0x0079f930
// @baa 0x0079f970
undefined4 sub_0079f970(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0079f9a0
IMPLEMENT_CLASS_AT(UDistributionVectorParameterBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 18);

// @baa 0x0079fa10
int UDistributionVectorParameterBase::vf_12c(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x0079fa20
UINT UDistributionVectorParameterBase::vf_128() { return 0; }

// @baa 0x0079fa30
// @baa 0x0079fa60
int sub_0079fa60(int a0, int a1) { return a1; }

// @baa 0x0079fa70
int sub_0079fa70(int a0, int a1) { return a1; }

// @baa 0x0079faa0
IMPLEMENT_CLASS_AT(UDistributionVectorUniform, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 16);

// @baa 0x0079fb10
undefined4 UDistributionVectorUniform::vf_114(int param_2)
{
    int param_1 = (int)this;

  if (param_2 == 0) {
    switch(*(undefined1 *)(param_1 + 0x60)) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    }
  }
  return 0;
}

// @baa 0x0079fb60
// @baa 0x007a2650
// @baa 0x007a2760
int UDistributionVectorConstant::vf_000(void) { return 1; }

// @baa 0x007a2770
bool UDistributionVectorConstant::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a27b0
IMPLEMENT_CLASS_AT(UDistributionVectorConstantCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 15);

// @baa 0x007a28c0
int UDistributionVectorConstantCurve::vf_000(void) { return 1; }

// @baa 0x007a28d0
bool UDistributionVectorConstantCurve::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a2910
// @baa 0x007a2a20
int UDistributionVectorUniform::vf_000(void) { return 1; }

// @baa 0x007a2a30
bool UDistributionVectorUniform::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a2a70
IMPLEMENT_CLASS_AT(UDistributionVectorUniformCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 17);

// @baa 0x007a2b80
int UDistributionVectorUniformCurve::vf_000(void) { return 1; }

// @baa 0x007a2b90
bool UDistributionVectorUniformCurve::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a2bd0
int UDistributionVectorParameterBase::vf_000(void) { return 1; }

// @baa 0x007a2be0
FLOAT UDistributionFloatConstant::vf_11c(FLOAT a0, FLOAT a1) { return *(float*)((char*)this + 68); }

// @baa 0x007a2bf0
int sub_007a2bf0(void) { return 1; }

// @baa 0x007a2c00
int sub_007a2c00(void) { return 1; }

struct C {
    float10 sub_007a2c40(int, int);
};

int sub_006311e0(...);
extern undefined4 g_01f195ec;
extern undefined4 g_01f196cc;
// @baa 0x007a2c40
float10 C::sub_007a2c40(int param_2, int param_3)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    sub_006311e0("SubIndex == 0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp"
                 ,0x32,&g_01f195ec);
  }
  if (param_3 != 0) {
    sub_006311e0("KeyIndex == 0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp"
                 ,0x33,&g_01f196cc);
  }
  return (float10)*(float *)(param_1 + 8);
}

// @baa 0x007a2d90
int __stdcall sub_007a2d90(int a0) { return 0; }

// @baa 0x007a2ee0
int sub_007a2ee0(void) { return 1; }

// @baa 0x007a2f80
int sub_007a2f80(void) { return 1; }

// @baa 0x007a2f90
int sub_007a2f90(void) { return 2; }

// @baa 0x007a3190
int __stdcall sub_007a3190(int a0) { return 0; }

// @baa 0x007a32c0
int sub_007a32c0(void) { return 2; }

// @baa 0x007a3390
int sub_007a3390(void) { return 1; }

// @baa 0x007a3620
int __stdcall sub_007a3620(int a0) { return 0; }

// @baa 0x007a37b0
void UDistributionVectorConstant::vf_124(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x44);
  param_2[1] = *(undefined4 *)(param_1 + 0x48);
  param_2[2] = *(undefined4 *)(param_1 + 0x4c);
  *param_3 = *(undefined4 *)(param_1 + 0x44);
  param_3[1] = *(undefined4 *)(param_1 + 0x48);
  param_3[2] = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// @baa 0x007a3d90
uint UDistributionVectorUniform::vf_110(void)
{
    int param_1 = (int)this;
  if (((*(float *)(param_1 + 0x50) == *(float *)(param_1 + 0x44)) &&
      (*(float *)(param_1 + 0x54) == *(float *)(param_1 + 0x48))) &&
     (*(float *)(param_1 + 0x58) == *(float *)(param_1 + 0x4c))) {
    return 1;
  }
  return (*(uint *)(param_1 + 0x5c) & 2 | 4) >> 1;
}

// @baa 0x007a3fe0
int sub_007a3fe0(void) { return 1; }

// @baa 0x007a43a0
int __stdcall sub_007a43a0(int a0) { return 0; }

// @baa 0x007a4490
void UDistributionVectorUniform::vf_124(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x50);
  param_2[1] = *(undefined4 *)(param_1 + 0x54);
  param_2[2] = *(undefined4 *)(param_1 + 0x58);
  *param_3 = *(undefined4 *)(param_1 + 0x44);
  param_3[1] = *(undefined4 *)(param_1 + 0x48);
  param_3[2] = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// @baa 0x007a45c0
int sub_007a45c0(void) { return 6; }

// @baa 0x007a46f0
IMPLEMENT_CLASS_AT(UBloomEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDOFEffect.cpp", 10);

// @baa 0x007a4800
int UBloomEffect::vf_000(void) { return 1; }

// @baa 0x007a4810
bool UBloomEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a4850
IMPLEMENT_CLASS_AT(UDOFEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDOFEffect.cpp", 11);

// @baa 0x007a4960
int UDOFEffect::vf_000(void) { return 1; }

// @baa 0x007a4970
bool UDOFEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a49b0
int UDOFEffect::vf_10c(int a0) { return 0; }

// @baa 0x007a49f0
IMPLEMENT_CLASS_AT(UForceFeedbackWaveform, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnForceFeedbackWaveform.cpp", 9);

// @baa 0x007a4b00
int UForceFeedbackWaveform::vf_000(void) { return 1; }

// @baa 0x007a4b10
bool UForceFeedbackWaveform::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007ab860
// @baa 0x007ab890
// @baa 0x007ab8c0
// @baa 0x007afe40
// @baa 0x007aff00
// @baa 0x007affc0
struct C_007b0080 { int sub_007b0080(void); };

// @baa 0x007b0080
int C_007b0080::sub_007b0080(void) { return *(int*)((char*)this + 12); }

struct C_007b0090 {
    bool sub_007b0090();
};

// @baa 0x007b0090
bool C_007b0090::sub_007b0090(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x14) != '\0';
}

struct C_007b0100 {
    void sub_007b0100(int, int, float);
};

extern undefined4 g_01f1b8ac;
extern undefined4 g_01f1b99c;
// @baa 0x007b0100
void C_007b0100::sub_007b0100(int param_2, int param_3, float param_4)
{
    int param_1 = (int)this;
  float fVar1;
  if ((param_2 != 0) && (param_2 != 1)) {
    sub_006311e0("SubIndex == 0 || SubIndex == 1",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp"
                 ,0x19d,&g_01f1b8ac);
  }
  if (param_3 != 0) {
    sub_006311e0("KeyIndex == 0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp"
                 ,0x19e,&g_01f1b99c);
  }
  if (param_2 == 0) {
    fVar1 = *(float *)(param_1 + 0xc);
    if (param_4 <= *(float *)(param_1 + 0xc)) {
      fVar1 = param_4;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    *(float *)(param_1 + 8) = fVar1;
    return;
  }
  fVar1 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 8) <= param_4) {
    fVar1 = param_4;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  *(float *)(param_1 + 0xc) = fVar1;
  return;
}

struct C_007b01f0 { int sub_007b01f0(void); };

// @baa 0x007b01f0
int C_007b01f0::sub_007b01f0(void) { return *(int*)((char*)this + 12); }

struct C_007b0280 {
    bool sub_007b0280();
};

// @baa 0x007b0280
bool C_007b0280::sub_007b0280(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x14) != '\0';
}

struct C_007b03e0 { int sub_007b03e0(void); };

// @baa 0x007b03e0
int C_007b03e0::sub_007b03e0(void) { return *(int*)((char*)this + 12); }

struct C_007b0490 {
    bool sub_007b0490();
};

// @baa 0x007b0490
bool C_007b0490::sub_007b0490(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x14) != '\0';
}

struct FLinkerVer {
    BYTE _pad[0xec];
    INT Ver;
};

struct FLinkerMap {
    FLinkerVer* sub_005d7190(UObject* Object);
};

extern FLinkerMap g_026a1d64;
struct UDistributionVectorUniform_ : public UDistributionVectorUniform {
    UBOOL HasAnyFlags(QWORD Flags) { return (*(QWORD*)&ObjectFlags & Flags) != 0; }
    FLinkerVer* GetLinker()
    {
        if (!(*(QWORD*)&ObjectFlags & 0x4000000))
            return NULL;
        return g_026a1d64.sub_005d7190(this);
    }
    void sub_005d9570(UBOOL bDirty);
    void sub_005e59b0();
};

// @baa 0x007b04a0
void UDistributionVectorUniform::vf_01c()
{
    UDistributionVectorUniform_* This = (UDistributionVectorUniform_*)this;
    if (This->GetLinker() && This->GetLinker()->Ver < 0x217)
    {
        bIsDirty = 1;
        This->sub_005d9570(1);
    }
    if (This->GetLinker() && This->GetLinker()->Ver < 0x220 && LockedAxes)
    {
        bIsDirty = 1;
    }
    This->sub_005e59b0();
}

struct C_007b09d0 { int sub_007b09d0(void); };

// @baa 0x007b09d0
int C_007b09d0::sub_007b09d0(void) { return *(int*)((char*)this + 12); }

struct C_007b4b60 {
    void sub_007b4b60(int);
};

int sub_0053df70(...);
// @baa 0x007b4b60
void C_007b4b60::sub_007b4b60(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x007b4d10
IMPLEMENT_CLASS_AT(UDistributionFloatConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 8);

// @baa 0x007b4d40
IMPLEMENT_CLASS_AT(UDistributionFloatParameterBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 12);

// @baa 0x007b4d70
IMPLEMENT_CLASS_AT(UDistributionFloatUniform, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 10);

// @baa 0x007b5680
// @baa 0x007b5740
// @baa 0x007b5800
// @baa 0x007b58c0
// @baa 0x007b59d0
bool UDistributionVectorParameterBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007b93b0 { void* Data; int Num; int Max; void sub_007b93b0(); };

// @baa 0x007b93b0
void C_007b93b0::sub_007b93b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007b94f0 {
    void sub_007b94f0(int);
};

// @baa 0x007b94f0
void C_007b94f0::sub_007b94f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct T_007b9530;
// @baa 0x007b9530
template INT TArray<T_007b9530*>::RemoveItem(T_007b9530* const&);

struct C_007bafc0 { void* Data; int Num; int Max; void sub_007bafc0(); };

// @baa 0x007bafc0
void C_007bafc0::sub_007bafc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bcd40 { void* Data; int Num; int Max; void sub_007bcd40(); };

// @baa 0x007bcd40
void C_007bcd40::sub_007bcd40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007be540 { void* Data; int Num; int Max; void sub_007be540(); };

// @baa 0x007be540
void C_007be540::sub_007be540() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x007bf260
// @baa 0x007bf2d0
void sub_007bafc0();
// @baa 0x007bf2f0
void sub_007bf2f0() { sub_007bafc0(); }

void sub_007bcd40();
// @baa 0x007bf300
void sub_007bf300(void) { sub_007bcd40(); }

struct C_007bf350 {
    undefined4 * sub_007bf350(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
extern undefined * g_01e729c0;
// @baa 0x007bf350
undefined4 * C_007bf350::sub_007bf350(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01e729c0);
  ((C_007bf350 *)(((char *)this + 0x10)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x007c0d50
void AController::vf_358(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x284) = 0;
  if (*(int *)(param_1 + 0x288) != 0) {
    *(undefined4 *)(param_1 + 0x288) = 0;
    if (*(int *)(param_1 + 0x280) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x280),0,8);
      *(undefined4 *)(param_1 + 0x280) = uVar1;
    }
  }
  return;
}

// @baa 0x007c0de0
// @baa 0x007c0ef0
bool UDistributionFloatParameterBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_007c3d00 { C_007c3d00* sub_007c3d00(void); };

// @baa 0x007c3d00
C_007c3d00* C_007c3d00::sub_007c3d00(void) { return this; }

struct C_007c41c0 { void* Data; int Num; int Max; void sub_007c41c0(); };

// @baa 0x007c41c0
void C_007c41c0::sub_007c41c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern TArray<int> g_026a1ca4;
struct C_007c4220 {
    int sub_007c4220();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007c4220
int C_007c4220::sub_007c4220()
{
    return g_026a1ca4(Index);
}

struct C_007c4280 {
    int sub_007c4280();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007c4280
int C_007c4280::sub_007c4280()
{
    return g_026a1ca4(Index);
}

struct C_007c42e0 { void* Data; int Num; int Max; void sub_007c42e0(); };

// @baa 0x007c42e0
void C_007c42e0::sub_007c42e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007c4340 {
    undefined4 sub_007c4340();
};

// @baa 0x007c4340
undefined4 C_007c4340::sub_007c4340(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_007c4350 { void sub_007bed80(int); C_007c4350 *sub_007c4350(int); };

// @baa 0x007c4350
C_007c4350 *C_007c4350::sub_007c4350(int a) { sub_007bed80(a); return this; }

struct C_007c4370 { C_007c4370* sub_007c4370(void); };

// @baa 0x007c4370
C_007c4370* C_007c4370::sub_007c4370(void) { return this; }

struct C_007c4380 { C_007c4380* sub_007c4380(void); };

// @baa 0x007c4380
C_007c4380* C_007c4380::sub_007c4380(void) { return this; }

struct C_007c4710 { int a, b, c; C_007c4710(); };

// @baa 0x007c4710
C_007c4710::C_007c4710() : a(0), b(0), c(0) {}

struct C_007c4720 {
    int sub_007c4720();
};

// @baa 0x007c4720
int C_007c4720::sub_007c4720(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007c4740 {
    int sub_007c4740();
};

// @baa 0x007c4740
int C_007c4740::sub_007c4740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_007c4db0 {
    undefined4 sub_007c4db0(byte);
};

int sub_007c3020(void);
// @baa 0x007c4db0
undefined4 C_007c4db0::sub_007c4db0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c3020();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00549160(void);
// @baa 0x007c4dd0
undefined4 UObject::sub_007c4dd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007c4df0 {
    undefined4 sub_007c4df0(byte);
};

int sub_007be540(void);
// @baa 0x007c4df0
undefined4 C_007c4df0::sub_007c4df0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007be540();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_007be480();
// @baa 0x007c4e10
void sub_007c4e10(void) { sub_007be480(); }

struct M_007c4e20 { void sub_007be4e0(); };

struct C_007c4e20 { char pad[4]; M_007c4e20 m; void sub_007c4e20(); };

// @baa 0x007c4e20
void C_007c4e20::sub_007c4e20() { m.sub_007be4e0(); }

struct C_007c4e30 {
    int sub_007c4e30();
};

// @baa 0x007c4e30
int C_007c4e30::sub_007c4e30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_007c4e40 {
    undefined4 sub_007c4e40(byte);
};

int sub_007c3090(void);
// @baa 0x007c4e40
undefined4 C_007c4e40::sub_007c4e40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c3090();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

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

struct TConstSetBitIterator_007c4e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c4e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c4e60& operator++();
};

TConstSetBitIterator_007c4e60::TConstSetBitIterator_007c4e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c4e60
TConstSetBitIterator_007c4e60& TConstSetBitIterator_007c4e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007c4eb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c4eb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c4eb0& operator++();
};

TConstSetBitIterator_007c4eb0::TConstSetBitIterator_007c4eb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c4eb0
TConstSetBitIterator_007c4eb0& TConstSetBitIterator_007c4eb0::operator++()
{
    It.Advance();
    return *this;
}

struct C_007c4f80 { C_007c4f80* sub_007c4f80(void); };

// @baa 0x007c4f80
C_007c4f80* C_007c4f80::sub_007c4f80(void) { return this; }

int sub_0054cc70(...);
int sub_006753f0(...);
int sub_0079ef20(...);
int sub_007c37a0(...);
void * sub_01a37612(void *, int, size_t);
// @baa 0x007c4f90
int sub_007c4f90(int param_1, void * param_2)
{
  if (*(int *)(param_1 + 0x10) != 0) {
    sub_01a37612(param_2,0,100);
  }
  sub_007c37a0(param_1,param_2);
  sub_006753f0(param_1,(int)param_2 + 0xc);
  sub_0054cc70(param_1,(int)param_2 + 0x18);
  sub_007c37a0(param_1,(int)param_2 + 0x24);
  sub_007c37a0(param_1,(int)param_2 + 0x30);
  sub_006753f0(param_1,(int)param_2 + 0x3c);
  sub_0079ef20(param_1,(int)param_2 + 0x48);
  return param_1;
}

struct C_007c5020 {
    undefined4 sub_007c5020(undefined4, int);
};

// @baa 0x007c5020
undefined4 C_007c5020::sub_007c5020(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x10) & 1) != 0) &&
     (((*(uint *)(param_1 + 0x10) & 2) == 0 || (*(int *)(param_3 + 8) == param_1)))) {
    return 1;
  }
  return 0;
}

// @baa 0x007c5050
int __stdcall sub_007c5050(int a0) { return 1; }

// @baa 0x007c5060
int sub_007c5060(void) { return 0; }

struct C_007c5070 {
    undefined4 sub_007c5070();
};

// @baa 0x007c5070
undefined4 C_007c5070::sub_007c5070(void)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x10) & 1) != 0) && ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x007c50e0
// @baa 0x007c5140
void sub_007c5140(void) { sub_007bafc0(); }

struct C_007c5150 { C_007c5150* sub_007c5150(void); };

// @baa 0x007c5150
C_007c5150* C_007c5150::sub_007c5150(void) { return this; }

struct C_007c5170 { C_007c5170* sub_007c5170(void); };

// @baa 0x007c5170
C_007c5170* C_007c5170::sub_007c5170(void) { return this; }

struct C_007c5200 { void sub_00551820(int); C_007c5200 *sub_007c5200(int); };

// @baa 0x007c5200
C_007c5200 *C_007c5200::sub_007c5200(int a) { sub_00551820(a); return this; }

struct C_007c5fa0 { void sub_007beb80(int); C_007c5fa0 *sub_007c5fa0(int); };

// @baa 0x007c5fa0
C_007c5fa0 *C_007c5fa0::sub_007c5fa0(int a) { sub_007beb80(a); return this; }

struct C_007c5fc0 { void sub_007beb80(int); C_007c5fc0 *sub_007c5fc0(int); };

// @baa 0x007c5fc0
C_007c5fc0 *C_007c5fc0::sub_007c5fc0(int a) { sub_007beb80(a); return this; }

struct C_007c5fe0 { void sub_00672a40(int); C_007c5fe0 *sub_007c5fe0(int); };

// @baa 0x007c5fe0
C_007c5fe0 *C_007c5fe0::sub_007c5fe0(int a) { sub_00672a40(a); return this; }

struct C_007c6000 { void sub_00672ad0(int); C_007c6000 *sub_007c6000(int); };

// @baa 0x007c6000
C_007c6000 *C_007c6000::sub_007c6000(int a) { sub_00672ad0(a); return this; }

struct C_007c6470 {
    int sub_007c6470(int);
    int sub_007c4810(int);
};

// @baa 0x007c6470
int C_007c6470::sub_007c6470(int param_2)
{
    int param_1 = (int)this;
  ((C_007c6470 *)(this))->sub_007c4810(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct C_007c65d0 {
    undefined4 sub_007c65d0(byte);
    int sub_007be4e0();
};

// @baa 0x007c65d0
undefined4 C_007c65d0::sub_007c65d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007c65d0 *)(((char *)this + 4)))->sub_007be4e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_007c66c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c66c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c66c0& operator++();
};

TConstSetBitIterator_007c66c0::TConstSetBitIterator_007c66c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c66c0
TConstSetBitIterator_007c66c0& TConstSetBitIterator_007c66c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007c6710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c6710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c6710& operator++();
};

TConstSetBitIterator_007c6710::TConstSetBitIterator_007c6710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c6710
TConstSetBitIterator_007c6710& TConstSetBitIterator_007c6710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007c6730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c6730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c6730& operator++();
};

TConstSetBitIterator_007c6730::TConstSetBitIterator_007c6730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c6730
TConstSetBitIterator_007c6730& TConstSetBitIterator_007c6730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007c6780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c6780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c6780& operator++();
};

TConstSetBitIterator_007c6780::TConstSetBitIterator_007c6780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c6780
TConstSetBitIterator_007c6780& TConstSetBitIterator_007c6780::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x007c68b0
IMPLEMENT_CLASS_AT(UDistributionFloatConstantCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 9);

// @baa 0x007c6920
// @baa 0x007c6960
IMPLEMENT_CLASS_AT(UDistributionFloatUniformCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 11);

// @baa 0x007c69d0
// @baa 0x007c6a10
// @baa 0x007c6a80
// @baa 0x007c6b20
int UDistributionVectorUniformCurve::vf_118(void) { return 1; }

// @baa 0x007c6b30
// @baa 0x007c6ba0
// @baa 0x007c7c70
// @baa 0x007c7ca0
// @baa 0x007c7cd0
// @baa 0x007c7d00
// @baa 0x007c7d30
// @baa 0x007c7df0
// @baa 0x007c7eb0
// @baa 0x007c7f70

// @baa 0x0079f880
int sub_0079f880(int a0, int a1) { return a1; }

// @baa 0x0079f890
int sub_0079f890(int a0, int a1) { return a1; }

// @baa 0x0079f8a0
int sub_0079f8a0(int a0, int a1) { return a1; }

// @baa 0x0079f8b0
int sub_0079f8b0(int a0, int a1) { return a1; }

// @baa 0x007a20c0

// @baa 0x007a25f0
int UDistributionFloatUniformCurve::vf_000(void) { return 1; }

// @baa 0x007a2600
bool UDistributionFloatUniformCurve::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_007b0ac0 {
    bool sub_007b0ac0();
};

// @baa 0x007b0ac0
bool C_007b0ac0::sub_007b0ac0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x14) != '\0';
}

// @baa 0x007c0db0
/* Removes Count route-cache entries starting at a valid InIndex. */
void AController::RouteCache_RemoveIndex(INT InIndex, INT Count)
{
    if (InIndex >= 0 && InIndex < RouteCache.Num())
    {
        RouteCache.Remove(InIndex, Count);
    }
}
