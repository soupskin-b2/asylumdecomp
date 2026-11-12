// Engine_0bf0000.cpp (part 1 of 4): 105 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_00bf09d0(void); };

// @baa 0x00bf09d0
C* C::sub_00bf09d0(void) { return this; }

extern TArray<int> g_026a1ca4;
struct C_00bf09e0 {
    int sub_00bf09e0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00bf09e0
int C_00bf09e0::sub_00bf09e0()
{
    return g_026a1ca4(Index);
}

struct C_00bf0a40 {
    int sub_00bf0a40(int);
};

// @baa 0x00bf0a40
int C_00bf0a40::sub_00bf0a40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bf0a50 {
    int sub_00bf0a50(int);
};

// @baa 0x00bf0a50
int C_00bf0a50::sub_00bf0a50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bf0a60 {
    int sub_00bf0a60(int);
};

// @baa 0x00bf0a60
int C_00bf0a60::sub_00bf0a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

int sub_005c7a70(...);
int sub_00bf4320(void);
// @baa 0x00bf43f0
undefined4 URFMODSound::sub_00bf43f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bf4320();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x13c);
  }
  return param_1;
}

int sub_009369a0(void);
extern undefined * g_02026540;
// @baa 0x00bf44e0
undefined4 * USkeletalMeshComponent::sub_00bf44e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009369a0();
  *param_1 = (undefined4)(&g_02026540);
  return param_1;
}

// @baa 0x00bf4500
IMPLEMENT_CLASS_AT(URDepthBiasSkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RDepthBiasSkeletalMeshComponent.cpp", 4);

// @baa 0x00bf4560
struct C_00bf4590 {
    void sub_00bf4590();
    int sub_00bf3a50(int);
};

// @baa 0x00bf4590
void C_00bf4590::sub_00bf4590(void)
{
    int param_1 = (int)this;
  ((C_00bf4590 *)((*(char **)((char *)this + 0x10))))->sub_00bf3a50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00bf45b0 {
    void sub_00bf45b0();
    int sub_00bf3bb0(int);
};

// @baa 0x00bf45b0
void C_00bf45b0::sub_00bf45b0(void)
{
    int param_1 = (int)this;
  ((C_00bf45b0 *)((*(char **)((char *)this + 0x10))))->sub_00bf3bb0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00bf45d0 {
    void sub_00bf45d0();
    int sub_00bf3d10(int);
};

// @baa 0x00bf45d0
void C_00bf45d0::sub_00bf45d0(void)
{
    int param_1 = (int)this;
  ((C_00bf45d0 *)((*(char **)((char *)this + 0x10))))->sub_00bf3d10(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00bf5ea0();
// @baa 0x00bf7840
void sub_00bf7840(void) { sub_00bf5ea0(); }

void sub_00bf5f10();
// @baa 0x00bf7850
void sub_00bf7850(void) { sub_00bf5f10(); }

void sub_00bf6030();
// @baa 0x00bf7990
void sub_00bf7990(void) { sub_00bf6030(); }

// @baa 0x00bf7a80
void sub_00bf7a80(void) {  }

// @baa 0x00bf7a90
void sub_00bf7a90(void) {  }

// @baa 0x00bf7aa0
float10 sub_00bf7aa0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00bf7ab0
int sub_00bf7ab0(void) { return 1; }

struct C_00bf7ac0 {
    void sub_00bf7ac0(undefined4);
};

int sub_0056a2a0(...);
// @baa 0x00bf7ac0
void C_00bf7ac0::sub_00bf7ac0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2);
  return;
}

struct C_00bf7ae0 {
    int sub_00bf7ae0(int);
};

// @baa 0x00bf7ae0
int C_00bf7ae0::sub_00bf7ae0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

struct C_00bf7b80 {
    void sub_00bf7b80(undefined4, undefined4);
};

// @baa 0x00bf7b80
void C_00bf7b80::sub_00bf7b80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x81c) = param_3;
  return;
}

extern "C" int g_026c3ef8;
extern "C" int g_026c3efc;
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
    void sub_00bf7ba0();
};

// @baa 0x00bf7ba0
void UObjectThunk::sub_00bf7ba0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c3ef8, g_026c3efc, 0), 0, 0);
}

int sub_00835ff0(void);
int sub_00859270(...);
extern undefined4 g_026b55ec;
// @baa 0x00bf7bd0
int sub_00bf7bd0(void)
{
  if (g_026b55ec == 0) {
    g_026b55ec = sub_00859270(L"Engine");
    sub_00835ff0();
  }
  return g_026b55ec;
}

// @baa 0x00bf7c00
int sub_00bf7c00(int a0, int a1) { return a1; }

// @baa 0x00bf7c10
int sub_00bf7c10(int a0, int a1) { return a1; }

// @baa 0x00bf7c20
int sub_00bf7c20(int a0, int a1) { return a1; }

// @baa 0x00bf7c30
int sub_00bf7c30(int a0, int a1) { return a1; }

// @baa 0x00bf7c40
int sub_00bf7c40(int a0, int a1) { return a1; }

// @baa 0x00bf7c50
int sub_00bf7c50(int a0, int a1) { return a1; }

// @baa 0x00bf7c60
int sub_00bf7c60(int a0, int a1) { return a1; }

// @baa 0x00bf7c70
int sub_00bf7c70(int a0) { return a0; }

// @baa 0x00bf8090
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm.cpp", 13);

// @baa 0x00bf81a0
int UAnimationCompressionAlgorithm::vf_000(void) { return 1; }

// @baa 0x00bf81b0
bool UAnimationCompressionAlgorithm::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005d7350(void);
// @baa 0x00bf8270
uint sub_00bf8270(void)
{
  int iVar1;
  
  iVar1 = sub_005d7350();
  return ~(*(uint *)(iVar1 + 0x74) >> 3) & 1;
}

// @baa 0x00bf8670
int UAnimationCompressionAlgorithm_BitwiseCompressOnly::vf_000(void) { return 1; }

// @baa 0x00bf8680
int UAnimationCompressionAlgorithm_RemoveEverySecondKey::vf_000(void) { return 1; }

// @baa 0x00bf89c0
int UAnimationCompressionAlgorithm_RemoveTrivialKeys::vf_000(void) { return 1; }

// @baa 0x00bf89d0
int UAnimationCompressionAlgorithm_RevertToRaw::vf_000(void) { return 1; }

int sub_00629c10(...);
int sub_0062d5a0(...);
extern undefined4 g_025d6818;
// @baa 0x00bf8a60
int sub_00bf8a60(void)
{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  iVar1 = g_025d6818;
  local_4 = 0;
  uVar2 = sub_00629c10(L"-gABC=",&local_4);
  sub_0062d5a0(uVar2);
  if (local_4 == 0) {
    local_4 = iVar1;
  }
  return local_4;
}

// @baa 0x00bf8b70
void UEngine::vf_13c(void) {  }

// @baa 0x00bf8e10
void UEngine::vf_15c(int a0, int a1, int a2) {  }

// @baa 0x00bf8e20
int sub_00bf8e20(int a0, int a1) { return a1; }

int sub_00e17280(void);
int sub_00e1e5e0(...);
extern undefined4 g_026c63b4;
// @baa 0x00bf9300
int sub_00bf9300(void)
{
  if (g_026c63b4 == 0) {
    g_026c63b4 = sub_00e1e5e0(L"Engine");
    sub_00e17280();
  }
  return g_026c63b4;
}

// @baa 0x00bf9350
int sub_00bf9350(int a0, int a1) { return a1; }

struct C_00bf9360 { int sub_00bf9360(void); };

// @baa 0x00bf9360
int C_00bf9360::sub_00bf9360(void) { return *(int*)((char*)this + 100); }

// @baa 0x00bf9370
int sub_00bf9370(int a0, int a1) { return a1; }

// @baa 0x00bf9380
int sub_00bf9380(int a0, int a1) { return a1; }

typedef uint size_t;

struct C_00bfb220 {
    int sub_00bfb220(int);
    int sub_0090f880(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00bfb220
int C_00bfb220::sub_00bfb220(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bfb220 *)(this))->sub_0090f880(param_2);
  sub_01a37612((void *)(iVar1 * 0x20 + *param_1),0,param_2 << 5);
  return iVar1;
}

struct C_00bfb250{
int sub_00bfb250(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00bfb250
int C_00bfb250::sub_00bfb250(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;
undefined4*puVar3;

iVar1=param_1[1];
iVar2=iVar1+1;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0x10);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2<<4,8);
*param_1=iVar2;
}
}
puVar3=(undefined4*)(iVar1*0x10+*param_1);
if(puVar3!=(undefined4*)0x0){
*puVar3=*param_2;
puVar3[1]=param_2[1];
puVar3[2]=param_2[2];
puVar3[3]=param_2[3];
}
return iVar1;
}

struct E { BYTE Bytes[24]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00bfb2c0(INT Index);
};

// @baa 0x00bfb2c0
E* S::sub_00bfb2c0(INT Index)
{
    return &Items(Index);
}

struct S_00bfb310 {
    TArray<E> Items; // 0x00
    const E* sub_00bfb310(INT Index) const;
};

// @baa 0x00bfb310
const E* S_00bfb310::sub_00bfb310(INT Index) const
{
    return &Items(Index);
}

struct C_00bfb360 {
    int sub_00bfb360(int);
    int sub_00bf9eb0(int);
};

// @baa 0x00bfb360
int C_00bfb360::sub_00bfb360(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bfb360 *)(this))->sub_00bf9eb0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct S_00bfb3a0 {
    TArray<E> Items; // 0x00
    E* sub_00bfb3a0(INT Index);
};

// @baa 0x00bfb3a0
E* S_00bfb3a0::sub_00bfb3a0(INT Index)
{
    return &Items(Index);
}

struct S_00bfb3f0 {
    TArray<E> Items; // 0x00
    const E* sub_00bfb3f0(INT Index) const;
};

// @baa 0x00bfb3f0
const E* S_00bfb3f0::sub_00bfb3f0(INT Index) const
{
    return &Items(Index);
}

struct C_00bfb440 {
    int sub_00bfb440(int);
    int sub_00bf9f60(int);
};

// @baa 0x00bfb440
int C_00bfb440::sub_00bfb440(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bfb440 *)(this))->sub_00bf9f60(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct E_00bfb480 { BYTE Bytes[72]; };

struct S_00bfb480 {
    TArray<E_00bfb480> Items; // 0x00
    E_00bfb480* sub_00bfb480(INT Index);
};

// @baa 0x00bfb480
E_00bfb480* S_00bfb480::sub_00bfb480(INT Index)
{
    return &Items(Index);
}

struct E_00bfb4d0 { BYTE Bytes[72]; };

struct S_00bfb4d0 {
    TArray<E_00bfb4d0> Items; // 0x00
    const E_00bfb4d0* sub_00bfb4d0(INT Index) const;
};

// @baa 0x00bfb4d0
const E_00bfb4d0* S_00bfb4d0::sub_00bfb4d0(INT Index) const
{
    return &Items(Index);
}

struct C_00bfb520 {
    int sub_00bfb520(int);
    int sub_00bfa010(int);
};

// @baa 0x00bfb520
int C_00bfb520::sub_00bfb520(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00bfb520 *)(this))->sub_00bfa010(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x48),0,param_2 * 0x48);
  return iVar1;
}

struct E_00bfb560 { BYTE Bytes[144]; };

struct S_00bfb560 {
    TArray<E_00bfb560> Items; // 0x00
    E_00bfb560* sub_00bfb560(INT Index);
};

// @baa 0x00bfb560
E_00bfb560* S_00bfb560::sub_00bfb560(INT Index)
{
    return &Items(Index);
}

struct S_00bfb680 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bfb680(INT Index);
};

// @baa 0x00bfb680
DWORD* S_00bfb680::sub_00bfb680(INT Index)
{
    return &Items(Index);
}

struct E_00bfb6d0 { BYTE Bytes[12]; };

struct S_00bfb6d0 {
    TArray<E_00bfb6d0> Items; // 0x00
    E_00bfb6d0* sub_00bfb6d0(INT Index);
};

// @baa 0x00bfb6d0
E_00bfb6d0* S_00bfb6d0::sub_00bfb6d0(INT Index)
{
    return &Items(Index);
}

struct E_00bfb720 { BYTE Bytes[16]; };

struct S_00bfb720 {
    TArray<E_00bfb720> Items; // 0x00
    E_00bfb720* sub_00bfb720(INT Index);
};

// @baa 0x00bfb720
E_00bfb720* S_00bfb720::sub_00bfb720(INT Index)
{
    return &Items(Index);
}

struct T_00bfb770 { BYTE b[16]; };

// @baa 0x00bfb770
template T_00bfb770& TArray<T_00bfb770>::Last(INT);

struct C_00bfb7d0 {
    int sub_00bfb7d0(int);
};

// @baa 0x00bfb7d0
int C_00bfb7d0::sub_00bfb7d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x90 + *param_1;
}

// @baa 0x00bfb7e0
void __stdcall sub_00bfb7e0(int a0, int a1) {  }

struct C_00bfb7f0 {
    int sub_00bfb7f0(int);
};

// @baa 0x00bfb7f0
int C_00bfb7f0::sub_00bfb7f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00bfb800
void __stdcall sub_00bfb800(int a0, int a1) {  }

struct C_00bfb810 {
    int sub_00bfb810(int);
};

// @baa 0x00bfb810
int C_00bfb810::sub_00bfb810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00bfb820
void __stdcall sub_00bfb820(int a0, int a1) {  }

struct C_00bfb830 {
    int sub_00bfb830(int);
};

// @baa 0x00bfb830
int C_00bfb830::sub_00bfb830(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00bfb840 {
    int sub_00bfb840(int);
};

// @baa 0x00bfb840
int C_00bfb840::sub_00bfb840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00bfb850 {
    int sub_00bfb850(int);
};

// @baa 0x00bfb850
int C_00bfb850::sub_00bfb850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00bfb860 {
    int sub_00bfb860(int);
};

// @baa 0x00bfb860
int C_00bfb860::sub_00bfb860(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00bfb870 {
    int sub_00bfb870(int);
};

// @baa 0x00bfb870
int C_00bfb870::sub_00bfb870(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

void sub_00549310();
// @baa 0x00bfb880
void sub_00bfb880(void) { sub_00549310(); }

struct M_00bfb890 { void sub_00549310(); };

struct C_00bfb890 { char pad[4]; M_00bfb890 m; void sub_00bfb890(); };

// @baa 0x00bfb890
void C_00bfb890::sub_00bfb890() { m.sub_00549310(); }

struct E_00bfb8a0 { BYTE Bytes[32]; };

struct S_00bfb8a0 {
    TArray<E_00bfb8a0> Items; // 0x00
    E_00bfb8a0* sub_00bfb8a0(INT Index);
};

// @baa 0x00bfb8a0
E_00bfb8a0* S_00bfb8a0::sub_00bfb8a0(INT Index)
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
	FFaceFXElement* sub_00bfb8f0(INT Index);
};

// @baa 0x00bfb8f0
FFaceFXElement* UFxRenderWidget::sub_00bfb8f0(INT Index)
{
	return &BoneArray(Index);
}

struct S_00bfb940 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bfb940(INT Index);
};

// @baa 0x00bfb940
DWORD* S_00bfb940::sub_00bfb940(INT Index)
{
    return &Items(Index);
}

struct C_00bfb990 {
    int sub_00bfb990();
};

// @baa 0x00bfb990
int C_00bfb990::sub_00bfb990(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bfb9b0 {
    int sub_00bfb9b0();
};

// @baa 0x00bfb9b0
int C_00bfb9b0::sub_00bfb9b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bfb9f0 {
    void sub_00bfb9f0(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00bfb9f0
void C_00bfb9f0::sub_00bfb9f0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_0056a2a0(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00bfba10 {
    void sub_00bfba10(undefined4, undefined4, undefined4);
};

// @baa 0x00bfba10
void C_00bfba10::sub_00bfba10(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;
  sub_0056a2a0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00bfba30 {
    void sub_00bfba30(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00bfba30
void C_00bfba30::sub_00bfba30(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// @baa 0x00bfbbe0
// @baa 0x00bfbc70
int sub_005c7a20(void);
extern undefined * g_02030af8;
// @baa 0x00bfbc90
undefined4 * UObject::sub_00bfbc90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02030af8);
  return param_1;
}

extern undefined * g_02030c60;
// @baa 0x00bfbcb0
undefined4 * UObject::sub_00bfbcb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02030c60);
  return param_1;
}

// @baa 0x00bfbcd0
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_BitwiseCompressOnly, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_BitwiseCompressOnly.cpp", 10);

// @baa 0x00bfbd30
extern undefined * g_02030d70;
// @baa 0x00bfbd50
undefined4 * UObject::sub_00bfbd50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02030d70);
  return param_1;
}

// @baa 0x00bfbd70
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RemoveEverySecondKey, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RemoveEverySecondKey.cpp", 10);

// @baa 0x00bfbdd0
extern undefined * g_02030e80;
// @baa 0x00bfbdf0
undefined4 * UObject::sub_00bfbdf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02030e80);
  return param_1;
}

extern undefined * g_02030f90;
// @baa 0x00bfbe90
undefined4 * UObject::sub_00bfbe90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02030f90);
  return param_1;
}

// @baa 0x00bfbeb0
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RemoveTrivialKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RemoveTrivialKeys.cpp", 10);

// @baa 0x00bfbf10
extern undefined * g_020310a0;
// @baa 0x00bfbf30
undefined4 * UObject::sub_00bfbf30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020310a0);
  return param_1;
}

// @baa 0x00bfbf50
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RevertToRaw, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RevertToRaw.cpp", 10);

// @baa 0x00bfbfb0
struct C_00bfbfd0 { void sub_00bfa820(int); C_00bfbfd0 *sub_00bfbfd0(int); };

// @baa 0x00bfbfd0
C_00bfbfd0 *C_00bfbfd0::sub_00bfbfd0(int a) { sub_00bfa820(a); return this; }

struct C_00bfbff0 { void sub_00bfaa00(int); C_00bfbff0 *sub_00bfbff0(int); };

// @baa 0x00bfbff0
C_00bfbff0 *C_00bfbff0::sub_00bfbff0(int a) { sub_00bfaa00(a); return this; }

extern INT g_026667a8;
void sub_00630f20(INT, const wchar_t*, const wchar_t*);
// @baa 0x00bfbc50
void UAnimationCompressionAlgorithm::DoReduction(UAnimSequence* AnimSeq, USkeletalMesh* SkelMesh, const TArray<FBoneData>& BoneData)
{
    sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UAnimationCompressionAlgorithm::DoReduction");
}
