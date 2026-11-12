// UnrealEd_1330000.cpp (part 1 of 3): 58 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_0132d480(void);
// @baa 0x01333c20
undefined4 UUnrealEdEngine::sub_01333c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0132d480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x01335f30
void sub_01335f30(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_025e8ef4[];
// @baa 0x01336e30
int sub_01336e30(void) { return (int)g_025e8ef4; }

extern char g_026d7d18[];
// @baa 0x01336e40
int sub_01336e40(void) { return (int)g_026d7d18; }

int sub_005e1960(...);
int sub_00f1ee30(void);
int sub_00f379d0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026ccd7c;
// @baa 0x01336f20
void sub_01336f20(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026ccd7c == 0) {
    g_026ccd7c = sub_00f379d0(L"Editor");
    sub_00f1ee30();
  }
  sub_005e1960(g_026ccd7c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x01336f80
int sub_01336f80(byte * param_1, byte * param_2)
{
  return (uint)*param_1 - (uint)*param_2;
}

struct C { void sub_0057cb40(int); C *sub_01336fa0(int); };

// @baa 0x01336fa0
C *C::sub_01336fa0(int a) { sub_0057cb40(a); return this; }

class wxWindowBase;
class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Close(bool);
    friend struct C_view;
};

// @baa 0x01337080
void UAnimNodeEditInfo_AimOffset::vf_110(void)
{
    int param_1 = (int)this;

  if (*(wxWindowBase **)(param_1 + 0x34) != (wxWindowBase *)0x0) {
    ((wxWindowBase *)(*(wxWindowBase **)(param_1 + 0x34)))->wxWindowBase::Close(false);
  }
  return;
}

// @baa 0x01337090
undefined4 UAnimNodeEditInfo_AimOffset::vf_118(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x34) != 0) && (*(int *)(*(int *)(param_1 + 0x34) + 0x1f8) == 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x013370b0
void UAnimNodeEditInfo_AimOffset::vf_124(int a0, int a1) {  }

extern char g_025e8efc[];
// @baa 0x013372d0
int sub_013372d0(void) { return (int)g_025e8efc; }

extern char g_026d7f78[];
// @baa 0x013372e0
int sub_013372e0(void) { return (int)g_026d7f78; }

struct C_01337320 {
    void sub_01337320(undefined4 *);
};

// @baa 0x01337320
void C_01337320::sub_01337320(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x17c) = *param_2;
  *(undefined4 *)(param_1 + 0x180) = param_2[1];
  *(undefined4 *)(param_1 + 0x184) = param_2[2];
  return;
}

struct C_01337350 { int sub_01337350(void); };

// @baa 0x01337350
int C_01337350::sub_01337350(void) { return *(int*)((char*)this + 384); }

// @baa 0x01337360
void __stdcall sub_01337360(int a0) {  }

extern char g_02254b18[];
// @baa 0x01337370
int sub_01337370(void) { return (int)g_02254b18; }

extern char g_026d7fb4[];
// @baa 0x01337380
int sub_01337380(void) { return (int)g_026d7fb4; }

extern char g_02254de8[];
// @baa 0x013373b0
int sub_013373b0(void) { return (int)g_02254de8; }

// @baa 0x013373c0
int sub_013373c0(void) { return 0; }

// @baa 0x013374d0
void __stdcall sub_013374d0(int a0) {  }

struct C_01337530 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_01337530(INT Index);
};

// @baa 0x01337530
UBOOL C_01337530::sub_01337530(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_01337550 { int sub_01337550(void); };

// @baa 0x01337550
int C_01337550::sub_01337550(void) { return *(int*)((char*)this + 4); }

struct C_01337560 { int sub_01337560(void); };

// @baa 0x01337560
int C_01337560::sub_01337560(void) { return *(int*)((char*)this + 4); }

// @baa 0x013375c0
void sub_013375c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x013375e0
void sub_013375e0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01337600
void sub_01337600(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct A_01337620 { virtual void sub_013381a0(); char pad[408]; };

struct B_01337620 { virtual void sub_013381a0(); };

struct C_01337620 : A_01337620, B_01337620 { virtual void sub_013381a0(); C_01337620(); };

C_01337620::C_01337620() {}

// @baa 0x01337620
void C_01337620::sub_013381a0() {}

// @baa 0x01337630
void sub_01337630(void) {  }

// @baa 0x01337640
float10 sub_01337640(double param_1)
{
  return (float10)param_1;
}

// @baa 0x01337660
undefined2 sub_01337660(void)
{
  return 0x69;
}

// @baa 0x01337670
undefined2 sub_01337670(void)
{
  return 0x66;
}

// @baa 0x01337680
undefined2 sub_01337680(void)
{
  return 0x73;
}

// @baa 0x013376e0
int sub_013376e0(int a0, int a1) { return a1; }

// @baa 0x013376f0
void sub_013376f0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x01337710
IMPLEMENT_CLASS_AT(UAnimNodeEditInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimTreeEditor.cpp", 15);

// @baa 0x01337770
void UAnimNodeEditInfo::vf_10c(int a0, int a1) {  }

// @baa 0x01337780
void UAnimNodeEditInfo::vf_110(void) {  }

// @baa 0x01337790
int UAnimNodeEditInfo::vf_114(void) { return 0; }

// @baa 0x013377a0
UINT UAnimNodeEditInfo::vf_118() { return 1; }

// @baa 0x013377d0
void UAnimNodeEditInfo::vf_120(int a0, int a1) {  }

// @baa 0x013377e0
void UAnimNodeEditInfo::vf_124(int a0, int a1) {  }

// @baa 0x013377f0
int sub_005c7a20(void);
extern undefined * g_02257470;
// @baa 0x01337810
undefined4 * UObject::sub_01337810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02257470);
  return param_1;
}

// @baa 0x01337830
int sub_01337830(int a0, int a1) { return a1; }

extern undefined * g_02257598;
// @baa 0x01337840
undefined4 * UObject::sub_01337840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02257598);
  return param_1;
}

// @baa 0x01337860
IMPLEMENT_CLASS_AT(UAnimNodeEditInfo_AimOffset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimAimOffsetEditor.cpp", 15);

// @baa 0x013378c0
// @baa 0x013378e0
undefined4 sub_013378e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_01337930 { C_01337930* sub_01337930(void); };

// @baa 0x01337930
C_01337930* C_01337930::sub_01337930(void) { return this; }

struct C_0133a190 {
    undefined4 sub_0133a190(byte);
};

int sub_013383a0(void);
// @baa 0x0133a190
undefined4 C_0133a190::sub_0133a190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013383a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0133a5d0
int UUnrealEdEngine::sub_0133a5d0(undefined4*param_2)
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
if((*param_1!=0)||(0!=iVar2)){
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

typedef uint size_t;

struct C_view {
    int sub_01338ca0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0133a640
int UUnrealEdEngine::sub_0133a640(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_01338ca0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x44),0,param_2 * 0x44);
  return iVar1;
}

struct C_view_0133a680 {
    int sub_01338d20(int);
};

// @baa 0x0133a680
int UUnrealEdEngine::sub_0133a680(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view_0133a680 *)(this))->sub_01338d20(param_2);
  sub_01a37612((void *)(iVar1 * 0x104 + *param_1),0,param_2 * 0x104);
  return iVar1;
}

struct C_view_0133a6c0 {
    int sub_01338da0(int);
};

// @baa 0x0133a6c0
int UUnrealEdEngine::sub_0133a6c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view_0133a6c0 *)(this))->sub_01338da0(param_2);
  sub_01a37612((void *)(iVar1 * 0x6c + *param_1),0,param_2 * 0x6c);
  return iVar1;
}

// @baa 0x0133a6f0
int UUnrealEdEngine::sub_0133a6f0(undefined4*param_2)
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
if((undefined4*)0x0!=puVar3){
*puVar3=*param_2;
puVar3[1]=param_2[1];
puVar3[2]=param_2[2];
puVar3[3]=param_2[3];
}
return iVar1;
}

// @baa 0x0133a820
int UUnrealEdEngine::sub_0133a820(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x0133a860
int UUnrealEdEngine::sub_0133a860(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

struct C_0133e760 {
    undefined4 sub_0133e760(byte);
};

int sub_0133e5f0(void);
// @baa 0x0133e760
undefined4 C_0133e760::sub_0133e760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0133e5f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
