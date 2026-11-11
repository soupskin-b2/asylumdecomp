// Engine_0df0000.cpp (part 1 of 5): 201 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_0073f030(int);
};

int sub_009e0e10(...);
// @baa 0x00df01f0
uint UMorphWeightSequence::sub_00df01f0(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x4c);
  return uVar2 | uVar1;
}

// @baa 0x00df0390
int sub_00df0390(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_020e2a20;
// @baa 0x00df03a0
undefined4 * UObject::sub_00df03a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020e2a20);
  return param_1;
}

extern "C" double cos(double);
// @baa 0x00df04b0
double sub_00df04b0(float f) { return cos((double)f); }

struct C {
    float10 sub_00df0590();
};

// @baa 0x00df0590
float10 C::sub_00df0590(void)
{
    float * param_1 = (float *)this;
  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1] +
         (float10)param_1[2] * (float10)param_1[2] + (float10)param_1[3] * (float10)param_1[3];
}

struct C_00df07b0 { C_00df07b0* sub_00df07b0(void); };

// @baa 0x00df07b0
C_00df07b0* C_00df07b0::sub_00df07b0(void) { return this; }

// @baa 0x00df07e0
void sub_00df07e0(void) {  }

// @baa 0x00df0820
void sub_00df0820(void) {  }

struct C_00df0830 {
    void sub_00df0830();
};

// @baa 0x00df0830
void C_00df0830::sub_00df0830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// @baa 0x00df0870
void sub_00df0870(void) {  }

struct C_00df0880 {
    void sub_00df0880();
};

// @baa 0x00df0880
void C_00df0880::sub_00df0880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// @baa 0x00df08a0
void sub_00df08a0(void) {  }

struct C_00df08b0 {
    void sub_00df08b0();
};

// @baa 0x00df08b0
void C_00df08b0::sub_00df08b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  return;
}

struct C_00df08c0 {
    undefined1 sub_00df08c0();
};

// @baa 0x00df08c0
undefined1 C_00df08c0::sub_00df08c0(void)
{
    int * param_1 = (int *)this;

  if ((param_1[1] != 0) && (*param_1 == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00df08e0
void sub_00df08e0(void) {  }

// @baa 0x00df1160
void sub_00df1160(void) {  }

struct C_00df11c0 {
    void sub_00df11c0(ushort);
};

// @baa 0x00df11c0
void C_00df11c0::sub_00df11c0(ushort param_2)
{
    int * param_1 = (int *)this;

  *(ushort *)((uint)*(ushort *)(*param_1 + 2 + (uint)param_2 * 8) * param_1[3] + param_1[2]) =
       param_2;
  return;
}

struct C_00df11e0 {
    void sub_00df11e0();
};

int sub_0053dfa0(...);
// @baa 0x00df11e0
void C_00df11e0::sub_00df11e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0053dfa0(*param_1);
  *param_1 = 0;
  return;
}

struct C_00df1770 {
    float10 sub_00df1770();
};

// @baa 0x00df1770
float10 C_00df1770::sub_00df1770(void)
{
    int param_1 = (int)this;

  return (float10)**(float **)(param_1 + 0x38);
}

struct C_00df1780 {
    int sub_00df1780(int);
};

// @baa 0x00df1780
int C_00df1780::sub_00df1780(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * param_2 + *(int *)(param_1 + 8);
}

struct C_00df1790 { int sub_00df1790(void); };

// @baa 0x00df1790
int C_00df1790::sub_00df1790(void) { return *(int*)((char*)this + 12); }

struct C_00df1890 {
    undefined4 * sub_00df1890(byte);
};

// @baa 0x00df1890
undefined4 * C_00df1890::sub_00df1890(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0053dfa0(*param_1);
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00df1900
int sub_00df1900(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x00df1910
int sub_00df1910(void) { return (int)g_01e3f3e0; }

extern undefined * g_020e2be8;
// @baa 0x00df1920
undefined4 * UObject::sub_00df1920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020e2be8);
  return param_1;
}

// @baa 0x00df1940
IMPLEMENT_CLASS_AT(UPhysicsLODVerticalEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PhysXVerticalEmitter.cpp", 15);

// @baa 0x00df19a0
struct C_00df19c0 {
    undefined4 sub_00df19c0();
};

extern undefined4 g_02666790;
extern undefined4 g_02666794;
// @baa 0x00df19c0
undefined4 C_00df19c0::sub_00df19c0(void)
{
    int param_1 = (int)this;
  if ((g_02666790 == *(int *)(param_1 + 0x38)) && (g_02666794 == *(int *)(param_1 + 0x3c))) {
    return 0;
  }
  *(int *)(param_1 + 0x38) = g_02666790;
  *(int *)(param_1 + 0x3c) = g_02666794;
  return 1;
}

// @baa 0x00df1fd0
// @baa 0x00df2100
bool UPhysicsLODVerticalEmitter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00df2140 { float sub_00df2140(void); };

// @baa 0x00df2140
float C_00df2140::sub_00df2140(void) { return *(float*)((char*)this + 72); }

// @baa 0x00df2150
int sub_00df2150(int a0, int a1) { return a1; }

// @baa 0x00df2160
int sub_00df2160(int a0, int a1) { return a1; }

// @baa 0x00df2170
IMPLEMENT_CLASS_AT(AFluidInfluenceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidInfluenceActor.cpp", 9);

// @baa 0x00df2280
int AFluidInfluenceActor::vf_000(void) { return 1; }

// @baa 0x00df2290
bool AFluidInfluenceActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00df22d0
IMPLEMENT_CLASS_AT(UFluidInfluenceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidInfluenceActor.cpp", 10);

// @baa 0x00df23e0
int UFluidInfluenceComponent::vf_000(void) { return 1; }

// @baa 0x00df23f0
bool UFluidInfluenceComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00df2d80
int sub_00df2d80(int param_1, int param_2, int param_3)
{
  return ((param_3 / 2 - param_2) + param_1 & param_3 - 1U) - param_3 / 2;
}

// @baa 0x00df2db0
int sub_00df2db0(int param_1, int param_2, int param_3)
{
  return (((param_3 / 2 - param_2) + param_1 & param_3 - 1U) - param_3 / 2) + param_2;
}

// @baa 0x00df2e00
int sub_00df2e00(int a0, int a1) { return a1; }

// @baa 0x00df2e10
int sub_00df2e10(int a0, int a1) { return a1; }

// @baa 0x00df2e20
void sub_00df2e20(void) {  }

struct C_00df2f30 {
    undefined4 sub_00df2f30(byte);
};

// @baa 0x00df2f30
undefined4 C_00df2f30::sub_00df2f30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00df2f50
int sub_00df2f50(int a0, int a1) { return a1; }

// @baa 0x00df2f60
int sub_00df2f60(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00df2f70
void sub_00df2f70(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00df2f90
int sub_00df2f90(int a0, int a1) { return a1; }

// @baa 0x00df38b0
int UVoiceChannel::vf_000(void) { return 1; }

// @baa 0x00df3930
IMPLEMENT_CLASS_AT(UGuidCache, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnConn.cpp", 148);

// @baa 0x00df3a40
int UGuidCache::vf_000(void) { return 1; }

// @baa 0x00df3a50
bool UGuidCache::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00df4150 {
    int sub_00df4150();
};

// @baa 0x00df4150
int C_00df4150::sub_00df4150(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 0xeec);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x44) != 4)) {
    iVar1 = 0;
  }
  return iVar1;
}

extern char g_020e2fdc[];
struct C_00df4170 { void sub_00df4170(void); };

// @baa 0x00df4170
void C_00df4170::sub_00df4170(void) { *(int*)((char*)this + 0) = (int)g_020e2fdc; }

struct C_00df4180 {
    undefined4 * sub_00df4180(byte);
};

// @baa 0x00df4180
undefined4 * C_00df4180::sub_00df4180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e2fdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00df41c0
undefined4 UDownload::vf_10c(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x4c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x38) + 0x20) & 2) != 0)) {
    *(undefined4 *)(param_1 + 0xa58) = 1;
    return 1;
  }
  return 0;
}

struct C_00df41e0 { C_00df41e0* sub_00df41e0(void); };

// @baa 0x00df41e0
C_00df41e0* C_00df41e0::sub_00df41e0(void) { *(int*)((char*)this + 0) = (int)g_020e2fdc; return this; }

// @baa 0x00df42a0
IMPLEMENT_CLASS_AT(UDownload, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDownload.cpp", 315);

// @baa 0x00df43b0
int UDownload::vf_000(void) { return 1; }

// @baa 0x00df43c0
bool UDownload::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00df4240(void);
// @baa 0x00df4440
void UChannelDownload::vf_02c(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa64);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x5c) == param_1)) {
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xa64) = 0;
  sub_00df4240();
  return;
}

// @baa 0x00df4460
int UChannelDownload::vf_000(void) { return 1; }

struct C_00df4fe0 {
    uint sub_00df4fe0();
};

// @baa 0x00df4fe0
uint C_00df4fe0::sub_00df4fe0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

struct C_00df4ff0 { int a, b, c; C_00df4ff0(); };

// @baa 0x00df4ff0
C_00df4ff0::C_00df4ff0() : a(0), b(0), c(0) {}

struct C_00df5000 { int a, b, c; C_00df5000(); };

// @baa 0x00df5000
C_00df5000::C_00df5000() : a(0), b(0), c(0) {}

struct C_00df5010 {
    int sub_00df5010();
};

// @baa 0x00df5010
int C_00df5010::sub_00df5010(void)
{
    int * param_1 = (int *)this;

  return (param_1[1] - *param_1) / 0x74;
}

struct C_00df5030 {
    int sub_00df5030(int);
};

// @baa 0x00df5030
int C_00df5030::sub_00df5030(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x74 + *param_1;
}

struct C_00df5040 { int a, b, c; C_00df5040(); };

// @baa 0x00df5040
C_00df5040::C_00df5040() : a(0), b(0), c(0) {}

struct C_00df5050 { int sub_00df5050(void); };

// @baa 0x00df5050
int C_00df5050::sub_00df5050(void) { return *(int*)((char*)this + 4); }

struct C_00df5060 { int a, b, c; C_00df5060(); };

// @baa 0x00df5060
C_00df5060::C_00df5060() : a(0), b(0), c(0) {}

struct C_00df5070 { int sub_00df5070(void); };

// @baa 0x00df5070
int C_00df5070::sub_00df5070(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_00df5080 { int sub_00df5080(void); };

// @baa 0x00df5080
int C_00df5080::sub_00df5080(void) { return *(int*)((char*)this + 4); }

struct C_00df50d0 { int a, b, c; C_00df50d0(); };

// @baa 0x00df50d0
C_00df50d0::C_00df50d0() : a(0), b(0), c(0) {}

struct C_00df50e0 { int sub_00df50e0(void); };

// @baa 0x00df50e0
int C_00df50e0::sub_00df50e0(void) { return *(int*)((char*)this + 4); }

struct C_00df5190 { int a, b, c; C_00df5190(); };

// @baa 0x00df5190
C_00df5190::C_00df5190() : a(0), b(0), c(0) {}

struct C_00df51a0 { int sub_00df51a0(void); };

// @baa 0x00df51a0
int C_00df51a0::sub_00df51a0(void) { return *(int*)((char*)this + 4); }

struct C_00df51e0 { int a, b, c; C_00df51e0(); };

// @baa 0x00df51e0
C_00df51e0::C_00df51e0() : a(0), b(0), c(0) {}

struct C_00df51f0 { int sub_00df51f0(void); };

// @baa 0x00df51f0
int C_00df51f0::sub_00df51f0(void) { return *(int*)((char*)this + 4); }

struct C_00df5200 { int a, b, c; C_00df5200(); };

// @baa 0x00df5200
C_00df5200::C_00df5200() : a(0), b(0), c(0) {}

struct C_00df5210 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00df5210* sub_00df5210(INT value);
};

// @baa 0x00df5210
C_00df5210* C_00df5210::sub_00df5210(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00df5230 {
    char pad[4];
    int x;
    C_00df5230* sub_00df5230() { ++x; return this; }
};

C_00df5230 g_obj;
// @baa 0x00df5230
void use() { g_obj.sub_00df5230(); }

struct C_00df5240 { int a, b, c; C_00df5240(); };

// @baa 0x00df5240
C_00df5240::C_00df5240() : a(0), b(0), c(0) {}

struct C_00df5250 { int sub_00df5250(void); };

// @baa 0x00df5250
int C_00df5250::sub_00df5250(void) { return *(int*)((char*)this + 4); }

struct C_00df5260 { int a, b, c; C_00df5260(); };

// @baa 0x00df5260
C_00df5260::C_00df5260() : a(0), b(0), c(0) {}

struct C_00df5270 { int a, b, c; C_00df5270(); };

// @baa 0x00df5270
C_00df5270::C_00df5270() : a(0), b(0), c(0) {}

struct C_00df5280 { int a, b, c; C_00df5280(); };

// @baa 0x00df5280
C_00df5280::C_00df5280() : a(0), b(0), c(0) {}

struct C_00df5290 { int sub_00df5290(void); };

// @baa 0x00df5290
int C_00df5290::sub_00df5290(void) { return *(int*)((char*)this + 4); }

struct C_00df52a0 { int a, b, c; C_00df52a0(); };

// @baa 0x00df52a0
C_00df52a0::C_00df52a0() : a(0), b(0), c(0) {}

struct C_00df52b0 { int a, b, c; C_00df52b0(); };

// @baa 0x00df52b0
C_00df52b0::C_00df52b0() : a(0), b(0), c(0) {}

struct C_00df52c0 { int sub_00df52c0(void); };

// @baa 0x00df52c0
int C_00df52c0::sub_00df52c0(void) { return *(int*)((char*)this + 4); }

struct C_00df52d0 { int a, b, c; C_00df52d0(); };

// @baa 0x00df52d0
C_00df52d0::C_00df52d0() : a(0), b(0), c(0) {}

struct C_00df52e0 { int a, b, c; C_00df52e0(); };

// @baa 0x00df52e0
C_00df52e0::C_00df52e0() : a(0), b(0), c(0) {}

struct C_00df52f0 { int sub_00df52f0(void); };

// @baa 0x00df52f0
int C_00df52f0::sub_00df52f0(void) { return *(int*)((char*)this + 4); }

struct C_00df5300 { int a, b, c; C_00df5300(); };

// @baa 0x00df5300
C_00df5300::C_00df5300() : a(0), b(0), c(0) {}

struct C_00df5310 { int sub_00df5310(void); };

// @baa 0x00df5310
int C_00df5310::sub_00df5310(void) { return *(int*)((char*)this + 4); }

struct C_00df5320 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00df5320(INT Index);
};

// @baa 0x00df5320
UBOOL C_00df5320::sub_00df5320(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00df5340 { int sub_00df5340(void); };

// @baa 0x00df5340
int C_00df5340::sub_00df5340(void) { return *(int*)((char*)this + 0); }

struct C_00df5350 { int sub_00df5350(void); };

// @baa 0x00df5350
int C_00df5350::sub_00df5350(void) { return *(int*)((char*)this + 0); }

struct C_00df5360 { int sub_00df5360(void); };

// @baa 0x00df5360
int C_00df5360::sub_00df5360(void) { return *(int*)((char*)this + 4); }

struct C_00df5370 { int sub_00df5370(void); };

// @baa 0x00df5370
int C_00df5370::sub_00df5370(void) { return *(int*)((char*)this + 4); }

struct C_00df53c0 { int sub_00df53c0(void); };

// @baa 0x00df53c0
int C_00df53c0::sub_00df53c0(void) { return *(int*)((char*)this + 0); }

struct C_00df53d0 { int sub_00df53d0(void); };

// @baa 0x00df53d0
int C_00df53d0::sub_00df53d0(void) { return *(int*)((char*)this + 0); }

struct C_00df5450 { int sub_00df5450(void); };

// @baa 0x00df5450
int C_00df5450::sub_00df5450(void) { return *(int*)((char*)this + 0); }

struct C_00df5460 { int sub_00df5460(void); };

// @baa 0x00df5460
int C_00df5460::sub_00df5460(void) { return *(int*)((char*)this + 0); }

struct C_00df5470 {
    int sub_00df5470(int);
};

// @baa 0x00df5470
int C_00df5470::sub_00df5470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00df5480 { int sub_00df5480(void); };

// @baa 0x00df5480
int C_00df5480::sub_00df5480(void) { return *(int*)((char*)this + 0); }

struct C_00df5500 {
    void sub_00df5500(int, int);
};

int sub_00627f00(...);
// @baa 0x00df5500
void C_00df5500::sub_00df5500(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(param_2 * 0x10 + *param_1,param_3 * 0x10 + *param_1,0x10);
  return;
}

struct C_00df5530 { int sub_00df5530(void); };

// @baa 0x00df5530
int C_00df5530::sub_00df5530(void) { return *(int*)((char*)this + 0); }

struct C_00df5540 { int sub_00df5540(void); };

// @baa 0x00df5540
int C_00df5540::sub_00df5540(void) { return *(int*)((char*)this + 0); }

struct C_00df55c0 { int sub_00df55c0(void); };

// @baa 0x00df55c0
int C_00df55c0::sub_00df55c0(void) { return *(int*)((char*)this + 0); }

struct C_00df5750 { int sub_00df5750(void); };

// @baa 0x00df5750
int C_00df5750::sub_00df5750(void) { return *(int*)((char*)this + 0); }

struct C_00df5760 { int sub_00df5760(void); };

// @baa 0x00df5760
int C_00df5760::sub_00df5760(void) { return *(int*)((char*)this + 0); }

struct C_00df57e0 {
    int sub_00df57e0();
};

// @baa 0x00df57e0
int C_00df57e0::sub_00df57e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00df57f0 { int a, b; C_00df57f0(int, int); };

// @baa 0x00df57f0
C_00df57f0::C_00df57f0(int x, int y) : a(x), b(y) {}

struct C_00df5810 {
    int sub_00df5810();
};

// @baa 0x00df5810
int C_00df5810::sub_00df5810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00df5820 {
    undefined4 sub_00df5820(byte);
};

// @baa 0x00df5820
undefined4 C_00df5820::sub_00df5820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00df5840 { int sub_00df5840(void); };

// @baa 0x00df5840
int C_00df5840::sub_00df5840(void) { return *(int*)((char*)this + 0); }

struct C_00df58c0 { int sub_00df58c0(void); };

// @baa 0x00df58c0
int C_00df58c0::sub_00df58c0(void) { return *(int*)((char*)this + 0); }

struct C_00df58d0 { int sub_00df58d0(void); };

// @baa 0x00df58d0
int C_00df58d0::sub_00df58d0(void) { return *(int*)((char*)this + 0); }

struct C_00df58e0 { int sub_00df58e0(void); };

// @baa 0x00df58e0
int C_00df58e0::sub_00df58e0(void) { return *(int*)((char*)this + 0); }

struct C_00df5960 { int sub_00df5960(void); };

// @baa 0x00df5960
int C_00df5960::sub_00df5960(void) { return *(int*)((char*)this + 0); }

struct C_00df5970 { int sub_00df5970(void); };

// @baa 0x00df5970
int C_00df5970::sub_00df5970(void) { return *(int*)((char*)this + 0); }

// @baa 0x00df5980
int sub_00df5980(int a0) { return *(int*)a0; }

// @baa 0x00df5990
undefined4 sub_00df5990(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00df59d0 {
    void sub_00df59d0(int *);
};

// @baa 0x00df59d0
void C_00df59d0::sub_00df59d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00df59e0 { int sub_00df59e0(void); };

// @baa 0x00df59e0
int C_00df59e0::sub_00df59e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00df5a20 { int a, b; C_00df5a20(const C_00df5a20 &); };

// @baa 0x00df5a20
C_00df5a20::C_00df5a20(const C_00df5a20 &o) : a(o.a), b(o.b) {}

struct C_00df5a60 { int sub_00df5a60(void); };

// @baa 0x00df5a60
int C_00df5a60::sub_00df5a60(void) { return *(int*)((char*)this + 0); }

struct C_00df5a70 { int sub_00df5a70(void); };

// @baa 0x00df5a70
int C_00df5a70::sub_00df5a70(void) { return *(int*)((char*)this + 0); }

struct C_00df5a80 { int sub_00df5a80(void); };

// @baa 0x00df5a80
int C_00df5a80::sub_00df5a80(void) { return *(int*)((char*)this + 0); }

struct C_00df5ab0 { C_00df5ab0* sub_00df5ab0(void); };

// @baa 0x00df5ab0
C_00df5ab0* C_00df5ab0::sub_00df5ab0(void) { *(int*)((char*)this + 8) = 0; return this; }

struct C_00df5ac0 { int sub_00df5ac0(void); };

// @baa 0x00df5ac0
int C_00df5ac0::sub_00df5ac0(void) { return *(int*)((char*)this + 20); }

struct C_00df5ad0 { int sub_00df5ad0(void); };

// @baa 0x00df5ad0
int C_00df5ad0::sub_00df5ad0(void) { return *(int*)((char*)this + 20); }

extern char g_026c5fa4[];
struct C_00df5ae0 { void sub_006fa300(int, int); void sub_00df5ae0(int); };

// @baa 0x00df5ae0
void C_00df5ae0::sub_00df5ae0(int a) { sub_006fa300((int)g_026c5fa4, a); }

extern char g_026c6060[];
struct C_00df5b00 { void sub_006fa300(int, int); void sub_00df5b00(int); };

// @baa 0x00df5b00
void C_00df5b00::sub_00df5b00(int a) { sub_006fa300((int)g_026c6060, a); }

struct C_00df5b20 {
    void sub_00df5b20(int);
};

// @baa 0x00df5b20
void C_00df5b20::sub_00df5b20(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 100);
  return;
}

int sub_005d8a20(...);
int sub_0062dec0(void);
int sub_006318f0(...);
extern undefined4 g_026acbd0;
// @baa 0x00df5cd0
void sub_00df5cd0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026acbd0 == 0) {
    g_026acbd0 = sub_006318f0(L"Core");
    sub_0062dec0();
  }
  sub_005d8a20(g_026acbd0,param_1,param_2,param_3);
  return;
}

struct S_00df5d10 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00df5d10(INT Index) const;
};

// @baa 0x00df5d10
const QWORD* S_00df5d10::sub_00df5d10(INT Index) const
{
    return &Items(Index);
}

struct C_00df5d60 { int sub_00df5d60(void); };

// @baa 0x00df5d60
int C_00df5d60::sub_00df5d60(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[12]; };

struct S_00df5d70 {
    TArray<E> Items; // 0x00
    const E* sub_00df5d70(INT Index) const;
};

// @baa 0x00df5d70
const E* S_00df5d70::sub_00df5d70(INT Index) const
{
    return &Items(Index);
}

struct C_00df5de0 { int a, b; C_00df5de0(const C_00df5de0 &); };

// @baa 0x00df5de0
C_00df5de0::C_00df5de0(const C_00df5de0 &o) : a(o.a), b(o.b) {}

struct C_00df5ee0 {
    void sub_00df5ee0(int);
};

// @baa 0x00df5ee0
void C_00df5ee0::sub_00df5ee0(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_00df5f00 {
    uint sub_00df5f00();
};

// @baa 0x00df5f00
uint C_00df5f00::sub_00df5f00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

// @baa 0x00df5f10
int sub_00df5f10(int param_1)
{
  return param_1 + 0x18;
}

struct C_00df5f20 { int a, b, c; C_00df5f20(); };

// @baa 0x00df5f20
C_00df5f20::C_00df5f20() : a(0), b(0), c(0) {}

struct C_00df5f30 { int a, b, c; C_00df5f30(); };

// @baa 0x00df5f30
C_00df5f30::C_00df5f30() : a(0), b(0), c(0) {}

struct S_00df5f60 { int sub_00defe20(int); };

// @baa 0x00df5f60
int sub_00df5f60(S_00df5f60 *s, int a) { return s->sub_00defe20(a); }

struct C_00df5f70 { int sub_00df5f70(void); };

// @baa 0x00df5f70
int C_00df5f70::sub_00df5f70(void) { return *(int*)((char*)this + 20); }

struct C_00df5f80 {
    void sub_00df5f80(int);
};

// @baa 0x00df5f80
void C_00df5f80::sub_00df5f80(int param_2)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 100);
  return;
}

struct C_00df5f90 {
    undefined4 sub_00df5f90();
};

// @baa 0x00df5f90
undefined4 C_00df5f90::sub_00df5f90(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct A_00df60a0 { virtual void sub_00df65f0(); char pad[16]; };

struct B_00df60a0 { virtual void sub_00df65f0(); };

struct C_00df60a0 : A_00df60a0, B_00df60a0 { virtual void sub_00df65f0(); C_00df60a0(); };

C_00df60a0::C_00df60a0() {}

// @baa 0x00df60a0
void C_00df60a0::sub_00df65f0() {}

struct V_00df60b0 {
    virtual void v0();
    virtual void g();
};

// @baa 0x00df60b0
void (V_00df60b0::*sub_00df60b0)() = &V_00df60b0::g;

struct A_00df60c0 { virtual void sub_00df6140(); char pad[16]; };

struct B_00df60c0 { virtual void sub_00df6140(); };

struct C_00df60c0 : A_00df60c0, B_00df60c0 { virtual void sub_00df6140(); C_00df60c0(); };

C_00df60c0::C_00df60c0() {}

// @baa 0x00df60c0
void C_00df60c0::sub_00df6140() {}

struct C_00df6140 {
    undefined4 sub_00df6140(byte);
};

int sub_00deffb0(void);
// @baa 0x00df6140
undefined4 C_00df6140::sub_00df6140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00deffb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00df0260(void);
// @baa 0x00df65f0
undefined4 UMorphWeightSequence::sub_00df65f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00df0260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_00df6750();
};

// @baa 0x00df6750
S16* S16::sub_00df6750()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct S_00df6780 {
    INT Unk00;
    INT Unk04;
    S_00df6780 *sub_00df6780();
};

// @baa 0x00df6780
S_00df6780 *S_00df6780::sub_00df6780()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00df7310 { int sub_00df7310(void); };

// @baa 0x00df7310
int C_00df7310::sub_00df7310(void) { return *(int*)((char*)this + 132); }

struct E_00dfa5a0 { BYTE Bytes[16]; };

struct S_00dfa5a0 {
    TArray<E_00dfa5a0> Items; // 0x00
    const E_00dfa5a0* sub_00dfa5a0(INT Index) const;
};

// @baa 0x00dfa5a0
const E_00dfa5a0* S_00dfa5a0::sub_00dfa5a0(INT Index) const
{
    return &Items(Index);
}

struct T_00dfa5f0 { BYTE b[4]; };

// @baa 0x00dfa5f0
template T_00dfa5f0& TArray<T_00dfa5f0>::Last(INT);

struct S_00dfa650 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dfa650(INT Index);
};

// @baa 0x00dfa650
DWORD* S_00dfa650::sub_00dfa650(INT Index)
{
    return &Items(Index);
}

struct T_00dfa6a0 { BYTE b[4]; };

// @baa 0x00dfa6a0
template T_00dfa6a0& TArray<T_00dfa6a0>::Last(INT);

struct S_00dfa700 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00dfa700(INT Index);
};

// @baa 0x00dfa700
QWORD* S_00dfa700::sub_00dfa700(INT Index)
{
    return &Items(Index);
}

struct C_00dfa750{
int sub_00dfa750(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00dfa750
int C_00dfa750::sub_00dfa750(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct S_00dfa7b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dfa7b0(INT Index);
};

// @baa 0x00dfa7b0
DWORD* S_00dfa7b0::sub_00dfa7b0(INT Index)
{
    return &Items(Index);
}

struct S_00dfa800 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00dfa800(INT Index) const;
};

// @baa 0x00dfa800
const DWORD* S_00dfa800::sub_00dfa800(INT Index) const
{
    return &Items(Index);
}

struct E_00dfa850 { BYTE Bytes[16]; };

struct S_00dfa850 {
    TArray<E_00dfa850> Items; // 0x00
    E_00dfa850* sub_00dfa850(INT Index);
};

// @baa 0x00dfa850
E_00dfa850* S_00dfa850::sub_00dfa850(INT Index)
{
    return &Items(Index);
}

struct S_00dfa990 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dfa990(INT Index);
};

// @baa 0x00dfa990
DWORD* S_00dfa990::sub_00dfa990(INT Index)
{
    return &Items(Index);
}

struct S_00dfaa10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dfaa10(INT Index);
};

// @baa 0x00dfaa10
DWORD* S_00dfaa10::sub_00dfaa10(INT Index)
{
    return &Items(Index);
}

struct C_00dfb1a0 {
    int sub_00dfb1a0(int);
};

// @baa 0x00dfb1a0
int C_00dfb1a0::sub_00dfb1a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dfb1d0 { int sub_00dfb1d0(void); };

// @baa 0x00dfb1d0
int C_00dfb1d0::sub_00dfb1d0(void) { return *(int*)((char*)this + 20); }

struct C_00dfb1e0 {
    int sub_00dfb1e0(int);
};

// @baa 0x00dfb1e0
int C_00dfb1e0::sub_00dfb1e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dfb1f0 {
    int sub_00dfb1f0();
};

// @baa 0x00dfb1f0
int C_00dfb1f0::sub_00dfb1f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dfb210 {
    int sub_00dfb210();
};

// @baa 0x00dfb210
int C_00dfb210::sub_00dfb210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dfb2d0 {
    void sub_00dfb2d0(undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00dfb2d0
void C_00dfb2d0::sub_00dfb2d0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00dfb2f0 {
    void sub_00dfb2f0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00dfb2f0
void C_00dfb2f0::sub_00dfb2f0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// @baa 0x00dfb4a0
void sub_00dfb4a0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00dfb4c0
void sub_00dfb4c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_00dfb520 {
    undefined4 * sub_00dfb520(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_020e2fe8;
// @baa 0x00dfb520
undefined4 * C_00dfb520::sub_00dfb520(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00dfb520 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_020e2fe8);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

struct C_00dfb580 { int sub_00dfb580(void); };

// @baa 0x00dfb580
int C_00dfb580::sub_00dfb580(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dfb5c0 { int sub_00dfb5c0(void); };

// @baa 0x00dfb5c0
int C_00dfb5c0::sub_00dfb5c0(void) { return *(int*)((char*)this + 0); }

struct C_00dfb5d0 {
    void sub_00dfb5d0();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00dfb5d0
void C_00dfb5d0::sub_00dfb5d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00dfb600 {
    undefined4 * sub_00dfb600(byte);
};

// @baa 0x00dfb600
undefined4 * C_00dfb600::sub_00dfb600(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0069c170(...);
// @baa 0x00dfb640
void sub_00dfb640(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00dfb660 {
    int sub_00dfb660(int);
};

// @baa 0x00dfb660
int C_00dfb660::sub_00dfb660(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00dfb670 {
    int sub_00dfb670();
};

// @baa 0x00dfb670
int C_00dfb670::sub_00dfb670(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dfb910 { char pad[124]; TArray<int> A; int* sub_00dfb910(); };

// @baa 0x00dfb910
int* C_00dfb910::sub_00dfb910() { return &A(0); }

struct C_00dfc020 {
    void sub_00dfc020(undefined4, undefined4);
    int sub_00b50470(int);
    int sub_00dfbd60(int, int);
};

// @baa 0x00dfc020
void C_00dfc020::sub_00dfc020(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  if (0 < *(int *)(*(int *)(param_1 + 0x44) + 0xcc)) {
    ((C_00dfc020 *)((*(char **)((char *)this + 0x44))))->sub_00b50470(param_2);
  }
  ((C_00dfc020 *)(this))->sub_00dfbd60(param_2, param_3);
  return;
}

// @baa 0x00dfcde0
// @baa 0x00dfce50
void UDownload::vf_118(void) {  }

// @baa 0x00dfce80
// @baa 0x00dfd530
IMPLEMENT_CLASS_AT(UVoiceChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp", 1867);

// @baa 0x00dfd640
bool UVoiceChannel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00dff0f0 { void* Data; int Num; int Max; void sub_00dff0f0(); };

// @baa 0x00dff0f0
void C_00dff0f0::sub_00dff0f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00dff200;
// @baa 0x00dff200
template INT TArray<T_00dff200*>::RemoveItem(T_00dff200* const&);

struct C_00dff320 { void* Data; int Num; int Max; void sub_00dff320(); };

// @baa 0x00dff320
void C_00dff320::sub_00dff320() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00dffa20 {
    int sub_00dffa20(int);
};

// @baa 0x00dffa20
int C_00dffa20::sub_00dffa20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00dffbf0 {
    int sub_00dffbf0(int);
};

// @baa 0x00dffbf0
int C_00dffbf0::sub_00dffbf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00dffc00 {
    int sub_00dffc00();
};

// @baa 0x00dffc00
int C_00dffc00::sub_00dffc00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

// @baa 0x00df41a0
void UDownload::Serialize( FArchive& Ar )
{
	Super::Serialize( Ar );
	Ar << Connection;
}
