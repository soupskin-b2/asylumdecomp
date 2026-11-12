// UnEdTran.cpp: 76 functions
// Placed here by: neighbours 58, class 9, callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f730a0
IMPLEMENT_CLASS_AT(UTransactor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdTran.cpp", 631);

int sub_006311e0(...);
extern undefined4 g_0215efe8;
extern undefined4 g_0215f0cc;
// @baa 0x00f734e0
void UTransBuffer::sub_00f734e0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x3c)) {
    sub_006311e0("UndoBuffer.Num()>=UndoCount",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdTran.cpp"
                 ,0x272,&g_0215efe8);
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    sub_006311e0("ActiveCount>=0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdTran.cpp"
                 ,0x273,&g_0215f0cc);
  }
  return;
}

// @baa 0x00f73530
int UTransBuffer::vf_000(void) { return 1; }

// @baa 0x00f73540
// @baa 0x00f77440
IMPLEMENT_CLASS_AT(UTransBuffer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdTran.cpp", 630);

// @baa 0x00f77550
bool UTransBuffer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    undefined4 sub_00f77720(byte);
};

int sub_0053dfa0(...);
// @baa 0x00f77720
undefined4 C::sub_00f77720(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f78730{
int sub_00f78730(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00f78730
int C_00f78730::sub_00f78730(undefined4*param_2)
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

struct C_00f78790{
int sub_00f78790(undefined4*);
};

// @baa 0x00f78790
int C_00f78790::sub_00f78790(undefined4*param_2)
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

struct C_00f787f0{
int sub_00f787f0(undefined4*);
};

// @baa 0x00f787f0
int C_00f787f0::sub_00f787f0(undefined4*param_2)
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

struct E { BYTE Bytes[72]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00f78850(INT Index);
};

// @baa 0x00f78850
E* S::sub_00f78850(INT Index)
{
    return &Items(Index);
}

struct S_00f788a0 {
    TArray<E> Items; // 0x00
    const E* sub_00f788a0(INT Index) const;
};

// @baa 0x00f788a0
const E* S_00f788a0::sub_00f788a0(INT Index) const
{
    return &Items(Index);
}

struct E_00f788f0 { BYTE Bytes[100]; };

struct S_00f788f0 {
    TArray<E_00f788f0> Items; // 0x00
    E_00f788f0* sub_00f788f0(INT Index);
};

// @baa 0x00f788f0
E_00f788f0* S_00f788f0::sub_00f788f0(INT Index)
{
    return &Items(Index);
}

struct E_00f78940 { BYTE Bytes[100]; };

struct S_00f78940 {
    TArray<E_00f78940> Items; // 0x00
    const E_00f78940* sub_00f78940(INT Index) const;
};

// @baa 0x00f78940
const E_00f78940* S_00f78940::sub_00f78940(INT Index) const
{
    return &Items(Index);
}

struct T_00f78990 { BYTE b[100]; };

// @baa 0x00f78990
template T_00f78990& TArray<T_00f78990>::Last(INT);

struct S_00f78aa0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f78aa0(INT Index);
};

// @baa 0x00f78aa0
DWORD* S_00f78aa0::sub_00f78aa0(INT Index)
{
    return &Items(Index);
}

struct C_00f78af0{
int sub_00f78af0(undefined4*);
};

// @baa 0x00f78af0
int C_00f78af0::sub_00f78af0(undefined4*param_2)
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

struct E_00f78b50 { BYTE Bytes[16]; };

struct S_00f78b50 {
    TArray<E_00f78b50> Items; // 0x00
    E_00f78b50* sub_00f78b50(INT Index);
};

// @baa 0x00f78b50
E_00f78b50* S_00f78b50::sub_00f78b50(INT Index)
{
    return &Items(Index);
}

struct S_00f78ba0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f78ba0(INT Index);
};

// @baa 0x00f78ba0
DWORD* S_00f78ba0::sub_00f78ba0(INT Index)
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
	FFaceFXElement* sub_00f78c50(INT Index);
};

// @baa 0x00f78c50
FFaceFXElement* UFxRenderWidget::sub_00f78c50(INT Index)
{
	return &BoneArray(Index);
}

struct C_00f78ca0 { int sub_00f78ca0(void); };

// @baa 0x00f78ca0
int C_00f78ca0::sub_00f78ca0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00f78cb0 {
    int sub_00f78cb0(int);
};

// @baa 0x00f78cb0
int C_00f78cb0::sub_00f78cb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00f78cc0
void __stdcall sub_00f78cc0(int a0, int a1) {  }

struct C_00f78cd0 {
    int sub_00f78cd0(int);
};

// @baa 0x00f78cd0
int C_00f78cd0::sub_00f78cd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00f78ce0
void __stdcall sub_00f78ce0(int a0, int a1) {  }

struct C_00f78cf0 {
    int sub_00f78cf0(int);
};

// @baa 0x00f78cf0
int C_00f78cf0::sub_00f78cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00f78d00
void __stdcall sub_00f78d00(int a0, int a1) {  }

struct C_00f78d10 {
    int sub_00f78d10(int);
};

// @baa 0x00f78d10
int C_00f78d10::sub_00f78d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00f78d20 {
    int sub_00f78d20(int);
};

// @baa 0x00f78d20
int C_00f78d20::sub_00f78d20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f78d30 {
    int sub_00f78d30();
};

// @baa 0x00f78d30
int C_00f78d30::sub_00f78d30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f78d50 {
    int sub_00f78d50();
};

// @baa 0x00f78d50
int C_00f78d50::sub_00f78d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00f78d60 {
    int sub_00f78d60(int);
};

// @baa 0x00f78d60
int C_00f78d60::sub_00f78d60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00f78d70 { int sub_00f78d70(void); };

// @baa 0x00f78d70
int C_00f78d70::sub_00f78d70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00f78d80 {
    int sub_00f78d80(int);
};

// @baa 0x00f78d80
int C_00f78d80::sub_00f78d80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f78d90 {
    int sub_00f78d90(int);
};

// @baa 0x00f78d90
int C_00f78d90::sub_00f78d90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f78da0 {
    int sub_00f78da0(int);
};

// @baa 0x00f78da0
int C_00f78da0::sub_00f78da0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f78db0 {
    int sub_00f78db0(int);
};

// @baa 0x00f78db0
int C_00f78db0::sub_00f78db0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

int sub_005413d0(...);
// @baa 0x00f78e00
void sub_00f78e00(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f78e10 {
    int sub_00f78e10(int);
};

// @baa 0x00f78e10
int C_00f78e10::sub_00f78e10(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00f78e20 {
    int sub_00f78e20();
};

// @baa 0x00f78e20
int C_00f78e20::sub_00f78e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00f78e60 {
    int sub_00f78e60(int);
};

// @baa 0x00f78e60
int C_00f78e60::sub_00f78e60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00f78ea0 {
    int sub_00f78ea0(int);
};

// @baa 0x00f78ea0
int C_00f78ea0::sub_00f78ea0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00f78ee0
void sub_00f78ee0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x00f78f20
void sub_00f78f20(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f78f30 {
    int sub_00f78f30(int);
};

// @baa 0x00f78f30
int C_00f78f30::sub_00f78f30(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x1c;
}

struct C_00f78f50 {
    int sub_00f78f50();
};

// @baa 0x00f78f50
int C_00f78f50::sub_00f78f50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f78f70 {
    int sub_00f78f70();
};

// @baa 0x00f78f70
int C_00f78f70::sub_00f78f70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00f78f80 {
    int sub_00f78f80();
};

// @baa 0x00f78f80
int C_00f78f80::sub_00f78f80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f78fa0 {
    int sub_00f78fa0();
};

// @baa 0x00f78fa0
int C_00f78fa0::sub_00f78fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00f78fb0 {
    int sub_00f78fb0();
};

// @baa 0x00f78fb0
int C_00f78fb0::sub_00f78fb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f78fd0 {
    int sub_00f78fd0();
};

// @baa 0x00f78fd0
int C_00f78fd0::sub_00f78fd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00f78fe0 {
    int sub_00f78fe0();
};

// @baa 0x00f78fe0
int C_00f78fe0::sub_00f78fe0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f79000 {
    int sub_00f79000();
};

// @baa 0x00f79000
int C_00f79000::sub_00f79000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00f79020 {
    int sub_00f79020();
};

// @baa 0x00f79020
int C_00f79020::sub_00f79020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f79040 {
    int sub_00f79040();
};

// @baa 0x00f79040
int C_00f79040::sub_00f79040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00f79050 {
    int sub_00f79050();
};

// @baa 0x00f79050
int C_00f79050::sub_00f79050(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f79070 {
    int sub_00f79070();
};

// @baa 0x00f79070
int C_00f79070::sub_00f79070(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f79090 {
    int sub_00f79090();
};

// @baa 0x00f79090
int C_00f79090::sub_00f79090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00f790a0 {
    int sub_00f790a0();
};

// @baa 0x00f790a0
int C_00f790a0::sub_00f790a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f790c0 {
    int sub_00f790c0();
};

// @baa 0x00f790c0
int C_00f790c0::sub_00f790c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00f790d0 {
    int sub_00f790d0();
};

// @baa 0x00f790d0
int C_00f790d0::sub_00f790d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f790f0 {
    int sub_00f790f0();
};

// @baa 0x00f790f0
int C_00f790f0::sub_00f790f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00f79470 {
    undefined4 sub_00f79470(undefined4);
    int sub_0056e660(int);
    int sub_0053ea70(int, int);
};

// @baa 0x00f79470
undefined4 C_00f79470::sub_00f79470(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  param_2 = ((C_00f79470 *)((*(char **)((char *)this + 0x80))))->sub_0056e660(param_2);
  ((C_00f79470 *)(this))->sub_0053ea70((int)(&param_2), 4);
  return param_1;
}

struct M_00f79c30 { void sub_00549240(); };

struct C_00f79c30 { char pad[28]; M_00f79c30 m; void sub_00f79c30(); };

// @baa 0x00f79c30
void C_00f79c30::sub_00f79c30() { m.sub_00549240(); }

// @baa 0x00f9c860
bool UTransBuffer::IsActive(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x4c);
}

// @baa 0x00f9c870
// @baa 0x00f9c8f0
int sub_005eb8e0(...);
int sub_00f75a20(void);
int sub_00f9c430(...);
extern undefined4 g_026cdae0;
// @baa 0x00f9cf30
void sub_00f9cf30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026cdae0 == 0) {
    g_026cdae0 = sub_00f9c430(L"Editor");
    sub_00f75a20();
  }
  sub_005eb8e0(g_026cdae0,param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00f9d020
// @baa 0x00f9d320
struct C_view {
    int sub_00f9d050(int);
};

extern undefined * g_022322e8;
// @baa 0x012db720
undefined4 * UTransBuffer::sub_012db720(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00f9d050(param_2);
  *param_1 = (undefined4)(&g_022322e8);
  return param_1;
}

struct C_00f79c20
{
    char pad_0[0x1c];
    INT Value_1c;
    INT Value_20;
    INT Value_24;

    C_00f79c20* sub_00f79c20();
};

// @baa 0x00f79c20
C_00f79c20* C_00f79c20::sub_00f79c20()
{
    Value_1c = 0;
    Value_20 = 0;
    Value_24 = 0;
    return this;
}

extern int g_026667a8;
extern "C" int sub_00630f20(int IsCritical, const wchar_t* Msg, const wchar_t* FuncName);
// @baa 0x00f73100
void UTransactor::Cancel(INT)
{
	// Pure virtual not implemented: concrete transactors override this.
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UTransactor::Cancel");
}

// @baa 0x00f73600

// @baa 0x00f73710
int UTransactor::vf_000(void) { return 1; }

// @baa 0x00f73720
bool UTransactor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
