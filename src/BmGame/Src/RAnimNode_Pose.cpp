// RAnimNode_Pose.cpp (part 1 of 4): 203 functions
// Placed here by: neighbours 138, class 47, callers 16, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01592fa0();
};

// @baa 0x01592fa0
undefined4 C::sub_01592fa0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 0;
}

int sub_01684970(...);
int sub_01685a00(void);
extern undefined4 g_026e1d88;
// @baa 0x01594ee0
int sub_01594ee0(void)
{
  if (g_026e1d88 == 0) {
    g_026e1d88 = sub_01684970(L"BmGame");
    sub_01685a00();
  }
  return g_026e1d88;
}

int sub_01686e30(void);
int sub_0169f170(...);
extern undefined4 g_026e1de0;
// @baa 0x01594f40
int sub_01594f40(void)
{
  if (g_026e1de0 == 0) {
    g_026e1de0 = sub_0169f170(L"BmGame");
    sub_01686e30();
  }
  return g_026e1de0;
}

struct C_01594f70 { C_01594f70* sub_01594f70(void); };

// @baa 0x01594f70
C_01594f70* C_01594f70::sub_01594f70(void) { return this; }

struct C_01594f80 { C_01594f80* sub_01594f80(void); };

// @baa 0x01594f80
C_01594f80* C_01594f80::sub_01594f80(void) { return this; }

// @baa 0x01594f90
int sub_01594f90(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_0231c9f0;
// @baa 0x01594fa0
undefined4 * UObject::sub_01594fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c9f0);
  return param_1;
}

// @baa 0x01594fc0
IMPLEMENT_CLASS_AT(URAnimNotify_CounterHit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 17);

// @baa 0x01595020
// @baa 0x01595040
undefined4 sub_01595040(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0231cb08;
// @baa 0x01595050
undefined4 * UObject::sub_01595050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231cb08);
  return param_1;
}

// @baa 0x01595070
IMPLEMENT_CLASS_AT(URAnimNotify_Takedown, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 18);

// @baa 0x015950d0
// @baa 0x015950f0
undefined4 sub_015950f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0231cc20;
// @baa 0x01595100
undefined4 * UObject::sub_01595100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231cc20);
  return param_1;
}

// @baa 0x01595120
void sub_01595120(void) {  }

// @baa 0x01595130
IMPLEMENT_CLASS_AT(URAnimNotify_Foley, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Foley.cpp", 14);

// @baa 0x01595190
// @baa 0x015951b0
undefined4 sub_015951b0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0231cd38;
// @baa 0x015951c0
undefined4 * UObject::sub_015951c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231cd38);
  return param_1;
}

// @baa 0x015951e0
IMPLEMENT_CLASS_AT(URAnimNotify_Footstep, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 14);

// @baa 0x01595240
struct C_01595260 {
    INT sub_01595260(INT a1);
};

// @baa 0x01595260
INT C_01595260::sub_01595260(INT a1)
{
    return (INT)this;
}

struct C_015952b0 { C_015952b0* sub_015952b0(int a0); };

// @baa 0x015952b0
C_015952b0* C_015952b0::sub_015952b0(int a0) { return this; }

struct C_015952c0 { C_015952c0* sub_015952c0(int a0); };

// @baa 0x015952c0
C_015952c0* C_015952c0::sub_015952c0(int a0) { return this; }

int sub_0169f770(...);
int sub_0169fe30(void);
extern undefined4 g_026e1e38;
// @baa 0x01595390
int sub_01595390(void)
{
  if (g_026e1e38 == 0) {
    g_026e1e38 = sub_0169f770(L"BmGame");
    sub_0169fe30();
  }
  return g_026e1e38;
}

// @baa 0x015953c0
int sub_015953c0(int a0, int a1) { return a1; }

extern undefined * g_0231ce50;
// @baa 0x015953d0
undefined4 * UObject::sub_015953d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231ce50);
  return param_1;
}

// @baa 0x015953f0
IMPLEMENT_CLASS_AT(URAnimNotify_Camera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 21);

// @baa 0x01595450
struct C_01595470 {
    bool sub_01595470();
};

// @baa 0x01595470
bool C_01595470::sub_01595470(void)
{
    int * param_1 = (int *)this;
  return *param_1 != 0;
}

// @baa 0x01595480
IMPLEMENT_CLASS_AT(URAnimNode_Pose, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Pose.cpp", 17);

// @baa 0x01595590
int URAnimNode_Pose::vf_000(void) { return 1; }

// @baa 0x015955a0
bool URAnimNode_Pose::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct M_015956a0 { void sub_015c29a0(); };

struct C_015956a0 { char pad[548]; M_015956a0 m; void sub_015956a0(); };

// @baa 0x015956a0
void C_015956a0::sub_015956a0() { m.sub_015c29a0(); }

struct M_01595700 { void sub_015c2a40(); };

struct C_01595700 { char pad[548]; M_01595700 m; void sub_01595700(); };

// @baa 0x01595700
void C_01595700::sub_01595700() { m.sub_015c2a40(); }

struct M_01595730 { void sub_015c2b50(); };

struct C_01595730 { char pad[548]; M_01595730 m; void sub_01595730(); };

// @baa 0x01595730
void C_01595730::sub_01595730() { m.sub_015c2b50(); }

struct M_01595760 { void sub_015c2be0(); };

struct C_01595760 { char pad[548]; M_01595760 m; void sub_01595760(); };

// @baa 0x01595760
void C_01595760::sub_01595760() { m.sub_015c2be0(); }

struct M_01595840 { void sub_015c2e50(); };

struct C_01595840 { char pad[548]; M_01595840 m; void sub_01595840(); };

// @baa 0x01595840
void C_01595840::sub_01595840() { m.sub_015c2e50(); }

struct M_01595850 { void sub_015c2e90(); };

struct C_01595850 { char pad[548]; M_01595850 m; void sub_01595850(); };

// @baa 0x01595850
void C_01595850::sub_01595850() { m.sub_015c2e90(); }

struct M_01595a30 { void sub_015c2fd0(); };

struct C_01595a30 { char pad[548]; M_01595a30 m; void sub_01595a30(); };

// @baa 0x01595a30
void C_01595a30::sub_01595a30() { m.sub_015c2fd0(); }

// @baa 0x01595a60
undefined1 URAnimNode_Pose::vf_1ec(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2804);
}

// @baa 0x01595a70
float URAnimNode_Pose::vf_1f0(void) { return *(float*)((char*)this + 10248); }

// @baa 0x01595c10
void URAnimNode_Pose::OverrideTranslationVelocity(FVector Velocity)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x3008) = *(uint *)(param_1 + 0x3008) | 1;
  *(FVector *)(param_1 + 0x300c) = Velocity;
  return;
}

struct M_01595cb0 { void sub_015c1170(); };

struct C_01595cb0 { char pad[12812]; M_01595cb0 m; void sub_01595cb0(); };

// @baa 0x01595cb0
void C_01595cb0::sub_01595cb0() { m.sub_015c1170(); }

struct M_01595d10 { void sub_015c1170(); };

struct C_01595d10 { char pad[13100]; M_01595d10 m; void sub_01595d10(); };

// @baa 0x01595d10
void C_01595d10::sub_01595d10() { m.sub_015c1170(); }

struct M_01595d70 { void sub_015c1170(); };

struct C_01595d70 { char pad[13388]; M_01595d70 m; void sub_01595d70(); };

// @baa 0x01595d70
void C_01595d70::sub_01595d70() { m.sub_015c1170(); }

struct M_01595df0 { void sub_015c1230(); };

struct C_01595df0 { char pad[13676]; M_01595df0 m; void sub_01595df0(); };

// @baa 0x01595df0
void C_01595df0::sub_01595df0() { m.sub_015c1230(); }

struct M_01596020 { void sub_015c6380(); };

struct C_01596020 { char pad[11888]; M_01596020 m; void sub_01596020(); };

// @baa 0x01596020
void C_01596020::sub_01596020() { m.sub_015c6380(); }

struct C_view {
    int sub_015c6380();
};

// @baa 0x01596030
uint URAnimNode_Pose::vf_2d8(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_view *)(((char *)this + 0x2e70)))->sub_015c6380();
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint *)(*(int *)(param_1 + 0x50) + 0x524) >> 6 & 1;
}

struct Sub {
    void sub_015d43d0();
};

struct C_015960b0 {
    char pad[0x2bc0];
    Sub s;
    void sub_015960b0(INT i);
};

// @baa 0x015960b0
void C_015960b0::sub_015960b0(INT i)
{
    s.sub_015d43d0();
}

// @baa 0x015960c0
undefined1 URAnimNode_Pose::vf_2f8(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2fd0);
}

// @baa 0x01596190
void URAnimNode_Pose::vf_324(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x31e8) = *(uint *)(param_1 + 0x31e8) | 1;
  *(uint *)(param_1 + 0x31f8) = *(uint *)(param_1 + 0x31f8) | 1;
  return;
}

// @baa 0x015962b0
UINT URAnimNode_Pose::vf_170() { return 2; }

// @baa 0x01599c30
IMPLEMENT_CLASS_AT(URAnimUtil_AnimOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_AnimOutput.cpp", 14);

// @baa 0x01599d40
int URAnimUtil_AnimOutput::vf_000(void) { return 1; }

// @baa 0x01599d50
bool URAnimUtil_AnimOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01599e60
void __stdcall sub_01599e60(int a0, int a1, int a2) {  }

// @baa 0x01599e70
IMPLEMENT_CLASS_AT(URAnimUtil_FaceFXOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_FaceFXOutput.cpp", 19);

// @baa 0x01599f80
int URAnimUtil_FaceFXOutput::vf_000(void) { return 1; }

// @baa 0x01599f90
bool URAnimUtil_FaceFXOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01599fd0
int * sub_01599fd0(int * param_1, int param_2, int param_3)
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 1;
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return param_1 + iVar1 * 5 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar1 < *param_1);
  }
  return (int *)0x0;
}

// @baa 0x0159a1f0
IMPLEMENT_CLASS_AT(URAnimUtil_IKOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_IKOutput.cpp", 14);

// @baa 0x0159a300
int URAnimUtil_IKOutput::vf_000(void) { return 1; }

// @baa 0x0159a310
bool URAnimUtil_IKOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_0159b180(INT Index);
};

// @baa 0x0159b180
E* S::sub_0159b180(INT Index)
{
    return &Items(Index);
}

struct C_0159b360 { int sub_0159b360(void); };

// @baa 0x0159b360
int C_0159b360::sub_0159b360(void) { return *(int*)((char*)this + 0); }

struct C_0159b370 { int sub_0159b370(void); };

// @baa 0x0159b370
int C_0159b370::sub_0159b370(void) { return *(int*)((char*)this + 0); }

struct C_0159b380 { int sub_0159b380(void); };

// @baa 0x0159b380
int C_0159b380::sub_0159b380(void) { return *(int*)((char*)this + 0); }

struct E_0159b390 { BYTE Bytes[32]; };

struct S_0159b390 {
    TArray<E_0159b390> Items; // 0x00
    E_0159b390* sub_0159b390(INT Index);
};

// @baa 0x0159b390
E_0159b390* S_0159b390::sub_0159b390(INT Index)
{
    return &Items(Index);
}

struct C_0159b450 { int sub_0159b450(void); };

// @baa 0x0159b450
int C_0159b450::sub_0159b450(void) { return *(int*)((char*)this + 0); }

struct C_0159b460 { int sub_0159b460(void); };

// @baa 0x0159b460
int C_0159b460::sub_0159b460(void) { return *(int*)((char*)this + 0); }

struct E_0159b470 { BYTE Bytes[64]; };

struct S_0159b470 {
    TArray<E_0159b470> Items; // 0x00
    E_0159b470* sub_0159b470(INT Index);
};

// @baa 0x0159b470
E_0159b470* S_0159b470::sub_0159b470(INT Index)
{
    return &Items(Index);
}

struct C_0159b530 { int sub_0159b530(void); };

// @baa 0x0159b530
int C_0159b530::sub_0159b530(void) { return *(int*)((char*)this + 0); }

struct C_0159b540 { int sub_0159b540(void); };

// @baa 0x0159b540
int C_0159b540::sub_0159b540(void) { return *(int*)((char*)this + 0); }

// @baa 0x0159b830
void sub_0159b830(int param_1)
{
  *(undefined4 *)(param_1 + 0x440) = 0;
  return;
}

struct C_0159b900 { int sub_0159b900(void); };

// @baa 0x0159b900
int C_0159b900::sub_0159b900(void) { return *(int*)((char*)this + 4); }

struct E_0159b910 { BYTE Bytes[36]; };

struct S_0159b910 {
    TArray<E_0159b910> Items; // 0x00
    const E_0159b910* sub_0159b910(INT Index) const;
};

// @baa 0x0159b910
const E_0159b910* S_0159b910::sub_0159b910(INT Index) const
{
    return &Items(Index);
}

struct C_0159b960 { int sub_0159b960(void); };

// @baa 0x0159b960
int C_0159b960::sub_0159b960(void) { return *(int*)((char*)this + 4); }

struct E_0159b970 { BYTE Bytes[36]; };

struct S_0159b970 {
    TArray<E_0159b970> Items; // 0x00
    const E_0159b970* sub_0159b970(INT Index) const;
};

// @baa 0x0159b970
const E_0159b970* S_0159b970::sub_0159b970(INT Index) const
{
    return &Items(Index);
}

struct S_0159b9c0 {
    TArray<E> Items; // 0x00
    const E* sub_0159b9c0(INT Index) const;
};

// @baa 0x0159b9c0
const E* S_0159b9c0::sub_0159b9c0(INT Index) const
{
    return &Items(Index);
}

struct C_0159ba10 { int sub_0159ba10(void); };

// @baa 0x0159ba10
int C_0159ba10::sub_0159ba10(void) { return *(int*)((char*)this + 4); }

struct E_0159ba20 { BYTE Bytes[32]; };

struct S_0159ba20 {
    TArray<E_0159ba20> Items; // 0x00
    const E_0159ba20* sub_0159ba20(INT Index) const;
};

// @baa 0x0159ba20
const E_0159ba20* S_0159ba20::sub_0159ba20(INT Index) const
{
    return &Items(Index);
}

struct C_0159ba70 { int sub_0159ba70(void); };

// @baa 0x0159ba70
int C_0159ba70::sub_0159ba70(void) { return *(int*)((char*)this + 4); }

struct E_0159ba80 { BYTE Bytes[64]; };

struct S_0159ba80 {
    TArray<E_0159ba80> Items; // 0x00
    const E_0159ba80* sub_0159ba80(INT Index) const;
};

// @baa 0x0159ba80
const E_0159ba80* S_0159ba80::sub_0159ba80(INT Index) const
{
    return &Items(Index);
}

struct C_0159bad0 { int sub_0159bad0(void); };

// @baa 0x0159bad0
int C_0159bad0::sub_0159bad0(void) { return *(int*)((char*)this + 4); }

struct E_0159bae0 { BYTE Bytes[44]; };

struct S_0159bae0 {
    TArray<E_0159bae0> Items; // 0x00
    const E_0159bae0* sub_0159bae0(INT Index) const;
};

// @baa 0x0159bae0
const E_0159bae0* S_0159bae0::sub_0159bae0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x0159bb30
void sub_0159bb30(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

int sub_0155df00(...);
// @baa 0x0159f060
undefined4 sub_0159f060(undefined4 param_1)
{
  int iVar1;
  
  iVar1 = sub_0155df00(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x440);
  }
  return 0;
}

struct S_015a1e60 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_015a1e60(INT Index) const;
};

// @baa 0x015a1e60
const DWORD* S_015a1e60::sub_015a1e60(INT Index) const
{
    return &Items(Index);
}

struct S_015a1eb0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_015a1eb0(INT Index) const;
};

// @baa 0x015a1eb0
const DWORD* S_015a1eb0::sub_015a1eb0(INT Index) const
{
    return &Items(Index);
}

struct S_015a1f00 {
    TArray<E> Items; // 0x00
    const E* sub_015a1f00(INT Index) const;
};

// @baa 0x015a1f00
const E* S_015a1f00::sub_015a1f00(INT Index) const
{
    return &Items(Index);
}

struct S_015a1f50 {
    TArray<E> Items; // 0x00
    const E* sub_015a1f50(INT Index) const;
};

// @baa 0x015a1f50
const E* S_015a1f50::sub_015a1f50(INT Index) const
{
    return &Items(Index);
}

struct S_015a1fa0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_015a1fa0(INT Index);
};

// @baa 0x015a1fa0
QWORD* S_015a1fa0::sub_015a1fa0(INT Index)
{
    return &Items(Index);
}

struct S_015a1ff0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_015a1ff0(INT Index) const;
};

// @baa 0x015a1ff0
const QWORD* S_015a1ff0::sub_015a1ff0(INT Index) const
{
    return &Items(Index);
}

struct S_015a2040 {
    TArray<E> Items; // 0x00
    E* sub_015a2040(INT Index);
};

// @baa 0x015a2040
E* S_015a2040::sub_015a2040(INT Index)
{
    return &Items(Index);
}

struct C_015a2090{
int sub_015a2090(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x015a2090
int C_015a2090::sub_015a2090(undefined4*param_2)
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

// @baa 0x015a20f0
void __stdcall sub_015a20f0(int a0, int a1) {  }

struct C_015a2100 {
    int sub_015a2100(int);
};

// @baa 0x015a2100
int C_015a2100::sub_015a2100(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_015a2170 {
    int sub_015a2170(int);
};

// @baa 0x015a2170
int C_015a2170::sub_015a2170(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x015a2180
void __stdcall sub_015a2180(int a0, int a1) {  }

struct C_015a21f0 {
    int sub_015a21f0(int);
};

// @baa 0x015a21f0
int C_015a21f0::sub_015a21f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x015a2200
void __stdcall sub_015a2200(int a0, int a1) {  }

struct C_015a2210 {
    int sub_015a2210(int);
};

// @baa 0x015a2210
int C_015a2210::sub_015a2210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct E_015a2220 { BYTE Bytes[44]; };

struct S_015a2220 {
    TArray<E_015a2220> Items; // 0x00
    E_015a2220* sub_015a2220(INT Index);
};

// @baa 0x015a2220
E_015a2220* S_015a2220::sub_015a2220(INT Index)
{
    return &Items(Index);
}

// @baa 0x015a2470
void sub_015a2470(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_015a2510 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_015a2510& sub_015a2510(int Arg);
};

// @baa 0x015a2510
C_015a2510& C_015a2510::sub_015a2510(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

int sub_01597c60(void);
int sub_0159d7e0(...);
extern undefined4 g_026e1448;
// @baa 0x015a2530
int sub_015a2530(void)
{
  if (g_026e1448 == 0) {
    g_026e1448 = sub_0159d7e0(L"BmGame");
    sub_01597c60();
  }
  return g_026e1448;
}

struct C_015a2560 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_015a2560& sub_015a2560(int Arg);
};

// @baa 0x015a2560
C_015a2560& C_015a2560::sub_015a2560(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_015a2590 {
    undefined4 sub_015a2590(undefined4, undefined4);
    int sub_0159dce0(int, int, int);
};

// @baa 0x015a2590
undefined4 C_015a2590::sub_015a2590(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_015a2590 *)(this))->sub_0159dce0(param_2, param_3, param_1 + 0x2c);
  return param_2;
}

struct C_view_015a4270 {
    int sub_0159c8a0(int);
};

// @baa 0x015a4270
undefined4 URAnimNode_Pose::sub_015a4270(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_015a4270 *)(this))->sub_0159c8a0(param_2);
  ((C_view_015a4270 *)(((char *)this + 0x544)))->sub_0159c8a0(param_2 + 0x544);
  return param_1;
}

void sub_015a2090();
// @baa 0x015a6c30
void sub_015a6c30(void) { sub_015a2090(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_015a6c40 { void* Data; int Num; int Max; void sub_015a6c40(); };

// @baa 0x015a6c40
void C_015a6c40::sub_015a6c40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015a6ca0 { void* Data; int Num; int Max; void sub_015a6ca0(); };

// @baa 0x015a6ca0
void C_015a6ca0::sub_015a6ca0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct Trampoline {
    int sub_015a2110(undefined4 *a1);
    int sub_015a6d00(undefined4 *a1);
};

// @baa 0x015a6d00
int Trampoline::sub_015a6d00(undefined4 *a1)
{
    return sub_015a2110(a1);
}

struct C_015a6d10 { void* Data; int Num; int Max; void sub_015a6d10(); };

// @baa 0x015a6d10
void C_015a6d10::sub_015a6d10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S_015a6d70 {
  int sub_015a2190(int *arg1);
  int sub_015a6d70(int *arg1);
};

// @baa 0x015a6d70
int S_015a6d70::sub_015a6d70(int *arg1)
{
  return sub_015a2190(arg1);
}

typedef uint size_t;

struct C_view_015a6d80 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x015a6d80
undefined4 * UObject::sub_015a6d80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_015a6d80 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)param_2 + 0xd);
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)((int)param_2 + 0xe);
  *(undefined1 *)((int)param_1 + 0xf) = *(undefined1 *)((int)param_2 + 0xf);
  return param_1;
}

// @baa 0x015a6f70
int UObject::sub_015a6f70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x015a6f80
undefined4 UObject::sub_015a6f80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_015a9170 { int a, b, c; C_015a9170(); };

// @baa 0x015a9170
C_015a9170::C_015a9170() : a(0), b(0), c(0) {}

void sub_00549310();
// @baa 0x015a9180
void sub_015a9180(void) { sub_00549310(); }

struct C_015a95e0 {
    undefined4 sub_015a95e0(undefined4, undefined4);
    int sub_015a4a00(int, int, int);
};

// @baa 0x015a95e0
undefined4 C_015a95e0::sub_015a95e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_015a95e0 *)(this))->sub_015a4a00(param_2, param_3, param_1 + 0x2c);
  return param_2;
}

struct C_015a9640 { C_015a9640* sub_015a9640(void); };

// @baa 0x015a9640
C_015a9640* C_015a9640::sub_015a9640(void) { return this; }

struct M_015a9650 { void sub_00920b40(); };

struct C_015a9650 { char pad[52]; M_015a9650 m; void sub_015a9650(); };

// @baa 0x015a9650
void C_015a9650::sub_015a9650() { m.sub_00920b40(); }

void* __cdecl operator new(unsigned int, void* p) { return p; }

void __cdecl operator delete(void*, void*) {}

void* __cdecl sub_0053df70(void*,int,int);
int __cdecl sub_006311e0(...);
extern wchar_t g_01e3f3dc;
struct TElem { char data[16]; };

struct TElemC { void sub_015a6d80(const TElem*); TElemC(const TElem& p) { sub_015a6d80(&p); } char data[16]; };

struct TArr { TElemC* Data; int ArrayNum,ArrayMax; TArr& sub_015af830(const TArr&); const TElem& operator[](int i) const { if(i<0 || (i>=ArrayNum && (i!=0 || ArrayNum!=0))) sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))", "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h",0x236,&g_01e3f3dc); register TElemC* p=*(TElemC* volatile*)&Data; register int j=i; return *(TElem*)(p+j); } };

__forceinline void construct(TElemC* p,const TArr& a,int i) { new (p) TElemC(a[i]); }

// @baa 0x015af830
TArr& TArr::sub_015af830(const TArr& other) { if(this != &other && other.ArrayNum > 0) { int n = ArrayNum + other.ArrayNum; if(n > ArrayMax) { void* p = Data; ArrayMax = n; if(p || n) Data = (TElemC*)sub_0053df70(p,n*16,8); } for(register int i=0;i<other.ArrayNum;i++) { register TElemC* p=Data; construct(p + (ArrayNum + i),other,i); } ArrayNum += other.ArrayNum; } return *this; }

struct C_015af930 { void sub_015a73c0(int); C_015af930 *sub_015af930(int); };

// @baa 0x015af930
C_015af930 *C_015af930::sub_015af930(int a) { sub_015a73c0(a); return this; }

struct C_015af950 { void sub_015a74d0(int); C_015af950 *sub_015af950(int); };

// @baa 0x015af950
C_015af950 *C_015af950::sub_015af950(int a) { sub_015a74d0(a); return this; }

struct C_015af970 { void sub_015a7600(int); C_015af970 *sub_015af970(int); };

// @baa 0x015af970
C_015af970 *C_015af970::sub_015af970(int a) { sub_015a7600(a); return this; }

struct C_015af990 { int sub_015af990(void); };

// @baa 0x015af990
int C_015af990::sub_015af990(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_015afa00 {
    int sub_015afa00();
};

// @baa 0x015afa00
int C_015afa00::sub_015afa00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_015aa220(void);
// @baa 0x015afa20
undefined4 URAnimNode_Pose::sub_015afa20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_015aa220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x015afa40
int URAnimNode_Pose::sub_015afa40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_015b3cf0 { C_015b3cf0* sub_015b3cf0(void); };

// @baa 0x015b3cf0
C_015b3cf0* C_015b3cf0::sub_015b3cf0(void) { return this; }

struct C_015b3d00 { C_015b3d00* sub_015b3d00(void); };

// @baa 0x015b3d00
C_015b3d00* C_015b3d00::sub_015b3d00(void) { return this; }

// @baa 0x015b3d10
int URAnimNode_Pose::sub_015b3d10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x015b3de0
int URAnimNode_Pose::sub_015b3de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct FPoseArray_ {
    FHeapAllocation AllocatorInstance;
    INT ArrayNum;
    INT ArrayMax;
    FPoseArray_(const FPoseArray_& Other);
    void sub_015aff60(const FPoseArray_& Source); /* Copy */
};

// @baa 0x015b3eb0
FPoseArray_::FPoseArray_(const FPoseArray_& Other)
    : ArrayNum(0), ArrayMax(0)
{
    sub_015aff60(Other);
}

struct C_015b40e0 { C_015b40e0* sub_015b40e0(void); };

// @baa 0x015b40e0
C_015b40e0* C_015b40e0::sub_015b40e0(void) { return this; }

// @baa 0x015b5d00
int URAnimNode_Pose::sub_015b5d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x015b5d10
int URAnimNode_Pose::sub_015b5d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
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

struct TConstSetBitIterator_015b5d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_015b5d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_015b5d40& operator++();
};

TConstSetBitIterator_015b5d40::TConstSetBitIterator_015b5d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x015b5d40
TConstSetBitIterator_015b5d40& TConstSetBitIterator_015b5d40::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_015b5d60 {
    int sub_015b3b90();
};

// @baa 0x015b5d60
undefined4 URAnimNode_Pose::sub_015b5d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_015b5d60 *)(((char *)this + 4)))->sub_015b3b90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_015b5d90 { void sub_015b3df0(int); C_015b5d90 *sub_015b5d90(int); };

// @baa 0x015b5d90
C_015b5d90 *C_015b5d90::sub_015b5d90(int a) { sub_015b3df0(a); return this; }

struct TConstSetBitIterator_015b5db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_015b5db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_015b5db0& operator++();
};

TConstSetBitIterator_015b5db0::TConstSetBitIterator_015b5db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x015b5db0
TConstSetBitIterator_015b5db0& TConstSetBitIterator_015b5db0::operator++()
{
    It.Advance();
    return *this;
}

struct C_015b7420 { void sub_015b5e00(int); C_015b7420 *sub_015b7420(int); };

// @baa 0x015b7420
C_015b7420 *C_015b7420::sub_015b7420(int a) { sub_015b5e00(a); return this; }

struct TConstSetBitIterator_015b7440 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_015b7440(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_015b7440& operator++();
};

TConstSetBitIterator_015b7440::TConstSetBitIterator_015b7440(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x015b7440
TConstSetBitIterator_015b7440& TConstSetBitIterator_015b7440::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_015b7980 {
    int sub_015b7500(int, int);
};

// @baa 0x015b7980
undefined4 URAnimNode_Pose::sub_015b7980(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_015b7980 *)(this))->sub_015b7500(param_2, param_3);
  return param_1;
}

struct C_015b7d20 { int a, b, c; C_015b7d20(); };

// @baa 0x015b7d20
C_015b7d20::C_015b7d20() : a(0), b(0), c(0) {}

void sub_015b7770();
// @baa 0x015b7d50
void sub_015b7d50(void) { sub_015b7770(); }

struct M_015b7d60 { void sub_015b7770(); };

struct C_015b7d60 { char pad[9640]; M_015b7d60 m; void sub_015b7d60(); };

// @baa 0x015b7d60
void C_015b7d60::sub_015b7d60() { m.sub_015b7770(); }

struct C_015b8c90 { void sub_015b7c30(int); C_015b8c90 *sub_015b8c90(int); };

// @baa 0x015b8c90
C_015b8c90 *C_015b8c90::sub_015b8c90(int a) { sub_015b7c30(a); return this; }

struct C_view_015b8cb0 {
    int sub_015b7500(int, int);
};

// @baa 0x015b8cb0
int URAnimNode_Pose::sub_015b8cb0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_015b8cb0 *)(this))->sub_015b7500(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

// @baa 0x015b9070
int sub_015b9070(void) { return 1; }

struct A_015b9080 { virtual void sub_015b9190(); char pad[196]; };

struct B_015b9080 { virtual void sub_015b9190(); };

struct C_015b9080 : A_015b9080, B_015b9080 { virtual void sub_015b9190(); C_015b9080(); };

C_015b9080::C_015b9080() {}

// @baa 0x015b9080
void C_015b9080::sub_015b9190() {}

int sub_005c7a70(...);
int sub_015b9090(void);
// @baa 0x015b9190
undefined4 URAnimNode_Pose::sub_015b9190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_015b9090();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x5070);
  }
  return param_1;
}

void sub_015b8d00();
// @baa 0x015ba050
void sub_015ba050(void) { sub_015b8d00(); }

// @baa 0x015ba060
// @baa 0x015ba070
struct C_015bc8b0 {
    undefined4 sub_015bc8b0();
};

// @baa 0x015bc8b0
undefined4 C_015bc8b0::sub_015bc8b0(void)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[3] == 0)) &&
     (((param_1[4] == 0 && (param_1[2] == 0)) && (param_1[5] == 0)))) {
    return 1;
  }
  return 0;
}

// @baa 0x015bc8e0
undefined4 sub_015bc8e0(int * param_1, int * param_2)
{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) {
    return 1;
  }
  return 0;
}

struct C_015bc970 { C_015bc970* sub_015bc970(void); };

// @baa 0x015bc970
C_015bc970* C_015bc970::sub_015bc970(void) { return this; }

int sub_015bc980(...);
// @baa 0x015bca10
bool sub_015bca10(undefined4 param_1, undefined4 param_2)
{
  char cVar1;
  
  cVar1 = sub_015bc980(param_1,param_2);
  return cVar1 == '\0';
}

struct C_015bcb90 {
    undefined4 sub_015bcb90();
};

// @baa 0x015bcb90
undefined4 C_015bcb90::sub_015bcb90(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

struct C_015bcbb0 {
    undefined4 sub_015bcbb0();
};

// @baa 0x015bcbb0
undefined4 C_015bcbb0::sub_015bcbb0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

struct C_015bcbf0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_015bcbf0& sub_015bcbf0(int Arg);
};

// @baa 0x015bcbf0
C_015bcbf0& C_015bcbf0::sub_015bcbf0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

// @baa 0x015bea50
IMPLEMENT_CLASS_AT(URAnimUtil_MovementOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_MovementOutput.cpp", 14);

// @baa 0x015beb60
int URAnimUtil_MovementOutput::vf_000(void) { return 1; }

// @baa 0x015beb70
bool URAnimUtil_MovementOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_015bebb0();
};

// @baa 0x015bebb0
S16* S16::sub_015bebb0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

// @baa 0x015c0d10
IMPLEMENT_CLASS_AT(URAnimUtil_OverlayPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_OverlayPlayer.cpp", 14);

// @baa 0x015c0e20
int URAnimUtil_OverlayPlayer::vf_000(void) { return 1; }

// @baa 0x015c0e30
bool URAnimUtil_OverlayPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_015c1190 {
    undefined4 sub_015c1190(int *);
};

// @baa 0x015c1190
undefined4 C_015c1190::sub_015c1190(int * param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  int *piVar2;
  
  if (*param_2 == param_1[0x45]) {
    iVar1 = 0;
    if (0 < *param_1) {
      piVar2 = param_1 + 6;
      do {
        if (*piVar2 == param_2[1]) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x11;
      } while (iVar1 < *param_1);
    }
  }
  return 0;
}

struct C_015c11d0 {
    bool sub_015c11d0();
};

// @baa 0x015c11d0
bool C_015c11d0::sub_015c11d0(void)
{
    int * param_1 = (int *)this;

  return 0 < *param_1;
}

struct C_015c1250 {
    undefined4 sub_015c1250(int *);
};

// @baa 0x015c1250
undefined4 C_015c1250::sub_015c1250(int * param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  int *piVar2;
  
  if (*param_2 == param_1[0x61]) {
    iVar1 = 0;
    if (0 < *param_1) {
      piVar2 = param_1 + 4;
      do {
        if (*piVar2 == param_2[1]) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x10;
      } while (iVar1 < *param_1);
    }
  }
  return 0;
}

struct C_015c1290 {
    bool sub_015c1290();
};

// @baa 0x015c1290
bool C_015c1290::sub_015c1290(void)
{
    int * param_1 = (int *)this;

  return 0 < *param_1;
}

struct C_015c18d0 { C_015c18d0* sub_015c18d0(void); };

// @baa 0x015c18d0
C_015c18d0* C_015c18d0::sub_015c18d0(void) { return this; }

// @baa 0x015c18e0
IMPLEMENT_CLASS_AT(URAnimUtil_PosePlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_PosePlayer.cpp", 16);

// @baa 0x015c19f0
int URAnimUtil_PosePlayer::vf_000(void) { return 1; }

// @baa 0x015c1a00
bool URAnimUtil_PosePlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_015c1d80 {
    undefined4 sub_015c1d80();
};

// @baa 0x015c1d80
undefined4 C_015c1d80::sub_015c1d80(void)
{
    int param_1 = (int)this;
  if ((*(float *)(param_1 + 0x59c) <= *(float *)(param_1 + 0x5b0)) &&
     (*(float *)(param_1 + 0x5b0) < 1.0)) {
    return 1;
  }
  return 0;
}

struct C_015c1db0 {
    undefined4 sub_015c1db0();
};

// @baa 0x015c1db0
undefined4 C_015c1db0::sub_015c1db0(void)
{
    int param_1 = (int)this;
  if ((*(float *)(param_1 + 0x5a0) <= *(float *)(param_1 + 0x5b0)) &&
     (*(float *)(param_1 + 0x5b0) < 1.0)) {
    return 1;
  }
  return 0;
}

struct C_015c6070 {
    undefined4 * sub_015c6070(undefined4 *);
};

int __stdcall sub_0094a720(int, int, int, int, int);
int sub_015c11e0(...);
// @baa 0x015c6070
undefined4 * C_015c6070::sub_015c6070(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  sub_0094a720((int)(param_1 + 1), (int)(param_2 + 1), 0x44, 4, (int)(sub_015c11e0));
  return param_1;
}

struct C_015c6380 {
    undefined4 sub_015c6380();
};

// @baa 0x015c6380
undefined4 C_015c6380::sub_015c6380(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(param_1 + 0x6c) & 2) != 0) && (*(int *)(param_1 + 0x88) == 0)) {
    return 1;
  }
  return 0;
}

int sub_015bff20(void);
int sub_015c54e0(...);
extern undefined4 g_026e15cc;
// @baa 0x015ce8a0
int sub_015ce8a0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026e15cc == 0) {
      g_026e15cc = sub_015c54e0(L"BmGame");
      sub_015bff20();
    }
    if (iVar1 == g_026e15cc) {
      return param_1;
    }
  }
  return 0;
}

int sub_015c0630(void);
int sub_015c5ae0(...);
extern undefined4 g_026e15ec;
// @baa 0x015ce8e0
int sub_015ce8e0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026e15ec == 0) {
      g_026e15ec = sub_015c5ae0(L"BmGame");
      sub_015c0630();
    }
    if (iVar1 == g_026e15ec) {
      return param_1;
    }
  }
  return 0;
}

int sub_015bf9a0(void);
int sub_015c51e0(...);
extern undefined4 g_026e15bc;
// @baa 0x015ce920
int sub_015ce920(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026e15bc == 0) {
      g_026e15bc = sub_015c51e0(L"BmGame");
      sub_015bf9a0();
    }
    if (iVar1 == g_026e15bc) {
      return param_1;
    }
  }
  return 0;
}

int sub_015bfdc0(void);
int sub_015c5420(...);
extern undefined4 g_026e15c8;
// @baa 0x015ce960
int sub_015ce960(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026e15c8 == 0) {
      g_026e15c8 = sub_015c5420(L"BmGame");
      sub_015bfdc0();
    }
    if (iVar1 == g_026e15c8) {
      return param_1;
    }
  }
  return 0;
}

int sub_015c04d0(void);
int sub_015c5a20(...);
extern undefined4 g_026e15e8;
// @baa 0x015ce9a0
int sub_015ce9a0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026e15e8 == 0) {
      g_026e15e8 = sub_015c5a20(L"BmGame");
      sub_015c04d0();
    }
    if (iVar1 == g_026e15e8) {
      return param_1;
    }
  }
  return 0;
}

int sub_015c57e0(...);
int sub_015cb6b0(void);
extern undefined4 g_026e15dc;
// @baa 0x015cf150
int sub_015cf150(void)
{
  if (g_026e15dc == 0) {
    g_026e15dc = sub_015c57e0(L"BmGame");
    sub_015cb6b0();
  }
  return g_026e15dc;
}

int sub_015c58a0(...);
int sub_015cb800(void);
extern undefined4 g_026e15e0;
// @baa 0x015cf180
int sub_015cf180(void)
{
  if (g_026e15e0 == 0) {
    g_026e15e0 = sub_015c58a0(L"BmGame");
    sub_015cb800();
  }
  return g_026e15e0;
}

int sub_015c5960(...);
int sub_015cb950(void);
extern undefined4 g_026e15e4;
// @baa 0x015cf1b0
int sub_015cf1b0(void)
{
  if (g_026e15e4 == 0) {
    g_026e15e4 = sub_015c5960(L"BmGame");
    sub_015cb950();
  }
  return g_026e15e4;
}

int sub_015c5ba0(...);
int sub_015cbaa0(void);
extern undefined4 g_026e15f0;
// @baa 0x015cf1e0
int sub_015cf1e0(void)
{
  if (g_026e15f0 == 0) {
    g_026e15f0 = sub_015c5ba0(L"BmGame");
    sub_015cbaa0();
  }
  return g_026e15f0;
}

int sub_015c5c60(...);
int sub_015cbbf0(void);
extern undefined4 g_026e15f4;
// @baa 0x015cf210
int sub_015cf210(void)
{
  if (g_026e15f4 == 0) {
    g_026e15f4 = sub_015c5c60(L"BmGame");
    sub_015cbbf0();
  }
  return g_026e15f4;
}

void sub_015ce730();
// @baa 0x015cf480
void sub_015cf480(void) { sub_015ce730(); }

int sub_015c0910(void);
int sub_015d6a30(...);
extern undefined4 g_026e15fc;
// @baa 0x015d7a30
int sub_015d7a30(void)
{
  if (g_026e15fc == 0) {
    g_026e15fc = sub_015d6a30(L"BmGame");
    sub_015c0910();
  }
  return g_026e15fc;
}

struct S_015d7a60 { void sub_015d6970(int s); };

struct C_015d7a60 {
    unsigned int flags;
    S_015d7a60 state;
    void sub_015d7a60(int s);
};

// @baa 0x015d7a60
void C_015d7a60::sub_015d7a60(int s)
{
    flags |= 1;
    state.sub_015d6970(s);
}

struct C_015da4a0 {
    undefined4 sub_015da4a0();
};

// @baa 0x015da4a0
undefined4 C_015da4a0::sub_015da4a0(void)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
     (((param_1[3] == 0 && (param_1[4] == 0)) && (param_1[5] == 0)))) {
    return 1;
  }
  return 0;
}

// @baa 0x015da5d0
void sub_015da5d0(void)
{
  return;
}

// @baa 0x015da680
void sub_015da680(void) {  }

// @baa 0x015e53a0
void __fastcall sub_015e53a0(undefined4 * param_1, int param_2)
{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0xa0);
  if (uVar2 < 8) {
    *(undefined4 *)(param_2 + uVar2 * 0x14) = *param_1;
    iVar1 = param_2 + uVar2 * 0x14;
    *(undefined4 *)(iVar1 + 4) = param_1[1];
    *(undefined4 *)(iVar1 + 8) = param_1[2];
    *(undefined4 *)(iVar1 + 0xc) = param_1[3];
    *(undefined4 *)(iVar1 + 0x10) = param_1[4];
    *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
  }
  return;
}

/* Kit gaps: FString::Printf (0x00549620 in this build) and operator* (UnString.h) aren't declared; neither are
 * the enum-name helper (0x00553ae0: an enum value's name looked up by the enum's name) or the pose log's
 * add-a-line method (0x015b7650: text and an R, G, B colour). */
struct FString_ : public FString
{
    FORCEINLINE const TCHAR* operator*() const
    {
        return Num() ? &(*this)(0) : TEXT("");
    }
};

FString sub_00549620(const TCHAR* Fmt, ...);
FString GetEnumNameString(const TCHAR* EnumName, INT Value, UBOOL bStripPrefix);
struct FPersistentThoughts_ : public FPersistentThoughts
{
    void AddThought(const FString& Text, INT R, INT G, INT B);
};

// @baa 0x015b7d70
/* Logs the movement speed change to the pose log, then stores the new speed and rate in the move-to request. */
void URAnimNode_Pose::SetMovementSpeed(BYTE Speed, FLOAT Rate)
{
    if (Speed != PosePlayer.MoveToRequest.TargetSpeed)
    {
        ((FPersistentThoughts_&)PosePlayer.PoseLog).AddThought(
            sub_00549620(TEXT("SetMovementSpeed: %s -> %s"),
                *(const FString_&)GetEnumNameString(TEXT("EMovementSpeed"), PosePlayer.MoveToRequest.TargetSpeed, TRUE),
                *(const FString_&)GetEnumNameString(TEXT("EMovementSpeed"), Speed, TRUE)),
            255, 191, 255);
    }
    PosePlayer.MoveToRequest.TargetSpeed = Speed;
    PosePlayer.MoveToRequest.TargetSpeedScale = Rate;
}
