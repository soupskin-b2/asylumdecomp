// CommonGame_1510000.cpp (part 1 of 3): 213 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x01510050
void __stdcall sub_01510050(int a0, int a1) {  }

struct C {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_01510060(INT Index);
};

// @baa 0x01510060
UBOOL C::sub_01510060(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x01510150
void __stdcall sub_01510150(int a0, int a1) {  }

struct C_015101d0 { int sub_015101d0(void); };

// @baa 0x015101d0
int C_015101d0::sub_015101d0(void) { return *(int*)((char*)this + 0); }

struct C_015101e0 { int sub_015101e0(void); };

// @baa 0x015101e0
int C_015101e0::sub_015101e0(void) { return *(int*)((char*)this + 0); }

struct C_015101f0 {
    int sub_015101f0(int);
};

// @baa 0x015101f0
int C_015101f0::sub_015101f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01510210 { int sub_01510210(void); };

// @baa 0x01510210
int C_01510210::sub_01510210(void) { return *(int*)((char*)this + 0); }

struct C_01510290 { int sub_01510290(void); };

// @baa 0x01510290
int C_01510290::sub_01510290(void) { return *(int*)((char*)this + 0); }

struct C_015102a0 {
    int sub_015102a0();
};

// @baa 0x015102a0
int C_015102a0::sub_015102a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_015102b0 { int a, b; C_015102b0(int, int); };

// @baa 0x015102b0
C_015102b0::C_015102b0(int x, int y) : a(x), b(y) {}

struct C_015102d0 {
    int sub_015102d0();
};

// @baa 0x015102d0
int C_015102d0::sub_015102d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_015102e0 { int a, b; C_015102e0(int, int); };

// @baa 0x015102e0
C_015102e0::C_015102e0(int x, int y) : a(x), b(y) {}

struct C_01510300 { int sub_01510300(void); };

// @baa 0x01510300
int C_01510300::sub_01510300(void) { return *(int*)((char*)this + 0); }

struct C_01510310 { int sub_01510310(void); };

// @baa 0x01510310
int C_01510310::sub_01510310(void) { return *(int*)((char*)this + 0); }

struct C_01510320 { int sub_01510320(void); };

// @baa 0x01510320
int C_01510320::sub_01510320(void) { return *(int*)((char*)this + 0); }

struct C_01510330 { int sub_01510330(void); };

// @baa 0x01510330
int C_01510330::sub_01510330(void) { return *(int*)((char*)this + 0); }

struct C_01510340 { int sub_01510340(void); };

// @baa 0x01510340
int C_01510340::sub_01510340(void) { return *(int*)((char*)this + 0); }

// @baa 0x01510350
int sub_01510350(int a0) { return *(int*)a0; }

// @baa 0x01510360
bool sub_01510360(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01510390 {
    void sub_01510390(undefined4 *);
};

// @baa 0x01510390
void C_01510390::sub_01510390(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_015103e0 { int sub_015103e0(void); };

// @baa 0x015103e0
int C_015103e0::sub_015103e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x015103f0
int sub_015103f0(int a0) { return *(int*)a0; }

// @baa 0x01510400
bool sub_01510400(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01510430 {
    void sub_01510430(undefined4 *);
};

// @baa 0x01510430
void C_01510430::sub_01510430(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_01510480 { int sub_01510480(void); };

// @baa 0x01510480
int C_01510480::sub_01510480(void) { return *(int*)((char*)this + 0); }

struct C_01510490 { int sub_01510490(void); };

// @baa 0x01510490
int C_01510490::sub_01510490(void) { return *(int*)((char*)this + 0); }

struct C_015104a0 { int sub_015104a0(void); };

// @baa 0x015104a0
int C_015104a0::sub_015104a0(void) { return *(int*)((char*)this + 0); }

struct C_015104b0 { int sub_015104b0(void); };

// @baa 0x015104b0
int C_015104b0::sub_015104b0(void) { return *(int*)((char*)this + 0); }

struct C_015104c0 { int sub_015104c0(void); };

// @baa 0x015104c0
int C_015104c0::sub_015104c0(void) { return *(int*)((char*)this + 0); }

struct C_015104d0 { int sub_015104d0(void); };

// @baa 0x015104d0
int C_015104d0::sub_015104d0(void) { return *(int*)((char*)this + 0); }

struct C_015104e0 { int sub_015104e0(void); };

// @baa 0x015104e0
int C_015104e0::sub_015104e0(void) { return *(int*)((char*)this + 20); }

struct C_015104f0 { int sub_015104f0(void); };

// @baa 0x015104f0
int C_015104f0::sub_015104f0(void) { return *(int*)((char*)this + 20); }

struct C_01510500 { int sub_01510500(void); };

// @baa 0x01510500
int C_01510500::sub_01510500(void) { return *(int*)((char*)this + 20); }

struct C_01510510 { int sub_01510510(void); };

// @baa 0x01510510
int C_01510510::sub_01510510(void) { return *(int*)((char*)this + 20); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01510640(INT Index) const;
};

// @baa 0x01510640
const DWORD* S::sub_01510640(INT Index) const
{
    return &Items(Index);
}

// @baa 0x01510840
void sub_01510840(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

extern char g_022ddcfc[];
struct C_01510b50 { C_01510b50* sub_01510b50(void); };

// @baa 0x01510b50
C_01510b50* C_01510b50::sub_01510b50(void) { *(int*)((char*)this + 0) = (int)g_022ddcfc; return this; }

extern char g_022ddd1c[];
struct C_01510be0 { C_01510be0* sub_01510be0(void); };

// @baa 0x01510be0
C_01510be0* C_01510be0::sub_01510be0(void) { *(int*)((char*)this + 0) = (int)g_022ddd1c; return this; }

extern char g_022ddd34[];
struct C_01510c10 { C_01510c10* sub_01510c10(void); };

// @baa 0x01510c10
C_01510c10* C_01510c10::sub_01510c10(void) { *(int*)((char*)this + 0) = (int)g_022ddd34; return this; }

extern char g_022ddd4c[];
struct C_01510c40 { C_01510c40* sub_01510c40(void); };

// @baa 0x01510c40
C_01510c40* C_01510c40::sub_01510c40(void) { *(int*)((char*)this + 0) = (int)g_022ddd4c; return this; }

extern char g_022ddd64[];
struct C_01510c70 { C_01510c70* sub_01510c70(void); };

// @baa 0x01510c70
C_01510c70* C_01510c70::sub_01510c70(void) { *(int*)((char*)this + 0) = (int)g_022ddd64; return this; }

// @baa 0x01510c80
int sub_01510c80(int a0) { return a0; }

struct C_01510c90 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01510c90* sub_01510c90(INT value);
};

// @baa 0x01510c90
C_01510c90* C_01510c90::sub_01510c90(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

// @baa 0x01510cb0
bool sub_01510cb0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x01510cc0
int sub_01510cc0(int a0) { return a0; }

struct C_01510cd0 { int sub_01510cd0(void); };

// @baa 0x01510cd0
int C_01510cd0::sub_01510cd0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01510ce0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01510ce0* sub_01510ce0(INT value);
};

// @baa 0x01510ce0
C_01510ce0* C_01510ce0::sub_01510ce0(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

struct C_01510d00 {
    int sub_01510d00(int);
};

// @baa 0x01510d00
int C_01510d00::sub_01510d00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x01510d10
bool sub_01510d10(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01510d20 {
    int sub_01510d20(int);
};

// @baa 0x01510d20
int C_01510d20::sub_01510d20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01510d30 { int sub_01510d30(void); };

// @baa 0x01510d30
int C_01510d30::sub_01510d30(void) { return *(int*)((char*)this + 20); }

struct C_01510d40 {
    int sub_01510d40(int);
};

// @baa 0x01510d40
int C_01510d40::sub_01510d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01510d50 { int sub_01510d50(void); };

// @baa 0x01510d50
int C_01510d50::sub_01510d50(void) { return *(int*)((char*)this + 20); }

// @baa 0x01510d60
void sub_01510d60(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

// @baa 0x01510d70
void sub_01510d70(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

extern char g_022ddd7c[];
struct C_01510d80 { C_01510d80* sub_01510d80(void); };

// @baa 0x01510d80
C_01510d80* C_01510d80::sub_01510d80(void) { *(int*)((char*)this + 0) = (int)g_022ddd7c; return this; }

extern char g_022ddd94[];
struct C_01510d90 { C_01510d90* sub_01510d90(void); };

// @baa 0x01510d90
C_01510d90* C_01510d90::sub_01510d90(void) { *(int*)((char*)this + 0) = (int)g_022ddd94; return this; }

extern char g_022dddac[];
struct C_01510dc0 { C_01510dc0* sub_01510dc0(void); };

// @baa 0x01510dc0
C_01510dc0* C_01510dc0::sub_01510dc0(void) { *(int*)((char*)this + 0) = (int)g_022dddac; return this; }

extern char g_022dddc4[];
struct C_01510dd0 { C_01510dd0* sub_01510dd0(void); };

// @baa 0x01510dd0
C_01510dd0* C_01510dd0::sub_01510dd0(void) { *(int*)((char*)this + 0) = (int)g_022dddc4; return this; }

extern char g_022ddddc[];
struct C_01510e50 { C_01510e50* sub_01510e50(void); };

// @baa 0x01510e50
C_01510e50* C_01510e50::sub_01510e50(void) { *(int*)((char*)this + 0) = (int)g_022ddddc; return this; }

extern char g_022dddf4[];
struct C_01510e80 { C_01510e80* sub_01510e80(void); };

// @baa 0x01510e80
C_01510e80* C_01510e80::sub_01510e80(void) { *(int*)((char*)this + 0) = (int)g_022dddf4; return this; }

extern char g_022dde0c[];
struct C_01510eb0 { C_01510eb0* sub_01510eb0(void); };

// @baa 0x01510eb0
C_01510eb0* C_01510eb0::sub_01510eb0(void) { *(int*)((char*)this + 0) = (int)g_022dde0c; return this; }

extern char g_022dde24[];
struct C_01510ee0 { C_01510ee0* sub_01510ee0(void); };

// @baa 0x01510ee0
C_01510ee0* C_01510ee0::sub_01510ee0(void) { *(int*)((char*)this + 0) = (int)g_022dde24; return this; }

extern char g_022dde3c[];
struct C_01510f10 { C_01510f10* sub_01510f10(void); };

// @baa 0x01510f10
C_01510f10* C_01510f10::sub_01510f10(void) { *(int*)((char*)this + 0) = (int)g_022dde3c; return this; }

extern char g_022dde54[];
struct C_01510f40 { C_01510f40* sub_01510f40(void); };

// @baa 0x01510f40
C_01510f40* C_01510f40::sub_01510f40(void) { *(int*)((char*)this + 0) = (int)g_022dde54; return this; }

extern char g_022dde6c[];
struct C_01510f70 { C_01510f70* sub_01510f70(void); };

// @baa 0x01510f70
C_01510f70* C_01510f70::sub_01510f70(void) { *(int*)((char*)this + 0) = (int)g_022dde6c; return this; }

struct C_01511190{
int sub_01511190(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x01511190
int C_01511190::sub_01511190(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
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
	FFaceFXElement* sub_015116f0(INT Index);
};

// @baa 0x015116f0
FFaceFXElement* UFxRenderWidget::sub_015116f0(INT Index)
{
	return &BoneArray(Index);
}

struct C_01511740{
int sub_01511740(undefined4*);
};

// @baa 0x01511740
int C_01511740::sub_01511740(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar2;
undefined4*puVar1;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0x14,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x14);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

struct E { BYTE Bytes[16]; };

struct S_015117c0 {
    TArray<E> Items; // 0x00
    E* sub_015117c0(INT Index);
};

// @baa 0x015117c0
E* S_015117c0::sub_015117c0(INT Index)
{
    return &Items(Index);
}

struct S_01511810 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01511810(INT Index) const;
};

// @baa 0x01511810
const DWORD* S_01511810::sub_01511810(INT Index) const
{
    return &Items(Index);
}

struct C_01511860 {
    int sub_01511860(int);
};

// @baa 0x01511860
int C_01511860::sub_01511860(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01511880 {
    int sub_01511880(int);
};

// @baa 0x01511880
int C_01511880::sub_01511880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01511890 {
    int sub_01511890(int);
};

// @baa 0x01511890
int C_01511890::sub_01511890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_015118a0 {
    int sub_015118a0(int);
};

// @baa 0x015118a0
int C_015118a0::sub_015118a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_015118c0 {
    int sub_015118c0(int);
};

// @baa 0x015118c0
int C_015118c0::sub_015118c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_015118d0 { int sub_015118d0(void); };

// @baa 0x015118d0
int C_015118d0::sub_015118d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_015118e0 {
    int sub_015118e0(int);
};

// @baa 0x015118e0
int C_015118e0::sub_015118e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_015118f0 {
    int sub_015118f0(int);
};

// @baa 0x015118f0
int C_015118f0::sub_015118f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_01511910 {
    int sub_01511910(int);
};

// @baa 0x01511910
int C_01511910::sub_01511910(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01511920 {
    int sub_01511920(int);
};

// @baa 0x01511920
int C_01511920::sub_01511920(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_01511940 {
    int sub_01511940(int);
};

// @baa 0x01511940
int C_01511940::sub_01511940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x01511950
void __stdcall sub_01511950(int a0, int a1) {  }

struct C_01511960 {
    int sub_01511960(int);
};

// @baa 0x01511960
int C_01511960::sub_01511960(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01511970
void __stdcall sub_01511970(int a0, int a1) {  }

struct C_015119d0 { int sub_015119d0(void); };

// @baa 0x015119d0
int C_015119d0::sub_015119d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_015119e0 {
    int sub_015119e0();
};

// @baa 0x015119e0
int C_015119e0::sub_015119e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_005413d0(...);
// @baa 0x01511a30
void sub_01511a30(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01511a40 {
    int sub_01511a40(int);
};

// @baa 0x01511a40
int C_01511a40::sub_01511a40(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

struct C_01511a50 {
    int sub_01511a50(int);
};

// @baa 0x01511a50
int C_01511a50::sub_01511a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01511a60 {
    int sub_01511a60(int);
};

// @baa 0x01511a60
int C_01511a60::sub_01511a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01511a70 { int sub_01511a70(void); };

// @baa 0x01511a70
int C_01511a70::sub_01511a70(void) { return *(int*)((char*)this + 20); }

struct C_01511a80 { int sub_01511a80(void); };

// @baa 0x01511a80
int C_01511a80::sub_01511a80(void) { return *(int*)((char*)this + 20); }

struct C_01511a90 { int sub_01511a90(void); };

// @baa 0x01511a90
int C_01511a90::sub_01511a90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01511aa0 {
    int sub_01511aa0();
};

// @baa 0x01511aa0
int C_01511aa0::sub_01511aa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01511af0
void sub_01511af0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01511b00 {
    int sub_01511b00(int);
};

// @baa 0x01511b00
int C_01511b00::sub_01511b00(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x28;
}

// @baa 0x01511b40
void sub_01511b40(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01511b50 {
    int sub_01511b50(int);
};

// @baa 0x01511b50
int C_01511b50::sub_01511b50(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

struct C_01511b60 {
    int sub_01511b60();
};

// @baa 0x01511b60
int C_01511b60::sub_01511b60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

// @baa 0x01511ba0
void sub_01511ba0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01511bb0 {
    int sub_01511bb0(int);
};

// @baa 0x01511bb0
int C_01511bb0::sub_01511bb0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x44;
}

struct C_01511bd0 {
    int sub_01511bd0();
};

// @baa 0x01511bd0
int C_01511bd0::sub_01511bd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01511bf0 {
    int sub_01511bf0();
};

// @baa 0x01511bf0
int C_01511bf0::sub_01511bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_01511c00 {
    int sub_01511c00(int);
};

// @baa 0x01511c00
int C_01511c00::sub_01511c00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_01511c10 {
    int sub_01511c10(int);
};

// @baa 0x01511c10
int C_01511c10::sub_01511c10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_01511c30 {
    int sub_01511c30();
};

// @baa 0x01511c30
int C_01511c30::sub_01511c30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01511c50 {
    int sub_01511c50();
};

// @baa 0x01511c50
int C_01511c50::sub_01511c50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01511c70 {
    int sub_01511c70();
};

// @baa 0x01511c70
int C_01511c70::sub_01511c70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_01511c80 {
    int sub_01511c80();
};

// @baa 0x01511c80
int C_01511c80::sub_01511c80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01511ca0 {
    void sub_01511ca0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x01511ca0
void C_01511ca0::sub_01511ca0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  return;
}

struct C_01511cf0 {
    void sub_01511cf0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01511cf0
void C_01511cf0::sub_01511cf0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

struct C_01511d20 {
    void sub_01511d20(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01511d20
void C_01511d20::sub_01511d20(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_01511d50 {
    void sub_01511d50(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, float, float, float, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01511d50
void C_01511d50::sub_01511d50(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, float param_9, float param_10, float param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(double)param_9,
               (double)param_10,(double)param_11,param_12,param_13,param_14,param_15,param_16,
               param_17,param_18,param_19,param_20);
  return;
}

struct C_01511dd0 {
    void sub_01511dd0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, float, float, float, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01511dd0
void C_01511dd0::sub_01511dd0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, float param_9, float param_10, float param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(double)param_9,
               (double)param_10,(double)param_11,param_12,param_13,param_14,param_15,param_16,
               param_17,param_18,param_19,param_20);
  return;
}

struct C_01511e50 {
    void sub_01511e50(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01511e50
void C_01511e50::sub_01511e50(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_01511f30 {
    void sub_01511f30(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01511f30
void C_01511f30::sub_01511f30(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  return;
}

// @baa 0x01512130
void sub_01512130(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01512610 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01512610& sub_01512610(int Arg);
};

// @baa 0x01512610
C_01512610& C_01512610::sub_01512610(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_01512620 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01512620& sub_01512620(int Arg);
};

// @baa 0x01512620
C_01512620& C_01512620::sub_01512620(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_01512630 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01512630& sub_01512630(int Arg);
};

// @baa 0x01512630
C_01512630& C_01512630::sub_01512630(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_01512640 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01512640& sub_01512640(int Arg);
};

// @baa 0x01512640
C_01512640& C_01512640::sub_01512640(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_01512690 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01512690& sub_01512690(int Arg);
};

// @baa 0x01512690
C_01512690& C_01512690::sub_01512690(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

int sub_0150eeb0(void);
int sub_01510a40(...);
extern undefined4 g_026e0b6c;
// @baa 0x01512a30
int sub_01512a30(void)
{
  if (g_026e0b6c == 0) {
    g_026e0b6c = sub_01510a40(L"CommonGame");
    sub_0150eeb0();
  }
  return g_026e0b6c;
}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x01512bb0
undefined4 * UObject::sub_01512bb0(undefined4 * param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
    param_1[3] = param_3;
    return param_1;
  }
  param_1[3] = param_3;
  return param_1;
}

struct C_01512ca0 {
    undefined4 * sub_01512ca0(undefined4, undefined4);
    int sub_00417ef0(int);
};

// @baa 0x01512ca0
undefined4 * C_01512ca0::sub_01512ca0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = param_2;
  ((C_01512ca0 *)(((char *)this + 8)))->sub_00417ef0(param_3);
  return param_1;
}

struct M_01512cd0 { void sub_0040fcc0(); };

struct C_01512cd0 { char pad[8]; M_01512cd0 m; void sub_01512cd0(); };

// @baa 0x01512cd0
void C_01512cd0::sub_01512cd0() { m.sub_0040fcc0(); }

struct C_01513c20 {
    FString sub_01513c20();
};

// @baa 0x01513c20
FString C_01513c20::sub_01513c20()
{
    return TEXT("<th>Class</th><th>Components</th><th>Native</th>");
}

extern char g_022ddeec[];
struct C_01513e60 { C_01513e60* sub_01513e60(void); };

// @baa 0x01513e60
C_01513e60* C_01513e60::sub_01513e60(void) { *(int*)((char*)this + 0) = (int)g_022ddeec; return this; }

extern char g_022ddf04[];
struct C_01513ec0 { C_01513ec0* sub_01513ec0(void); };

// @baa 0x01513ec0
C_01513ec0* C_01513ec0::sub_01513ec0(void) { *(int*)((char*)this + 0) = (int)g_022ddf04; return this; }

extern char g_022ddf1c[];
struct C_01513f20 { C_01513f20* sub_01513f20(void); };

// @baa 0x01513f20
C_01513f20* C_01513f20::sub_01513f20(void) { *(int*)((char*)this + 0) = (int)g_022ddf1c; return this; }

extern char g_022ddf34[];
struct C_01513f80 { C_01513f80* sub_01513f80(void); };

// @baa 0x01513f80
C_01513f80* C_01513f80::sub_01513f80(void) { *(int*)((char*)this + 0) = (int)g_022ddf34; return this; }

extern char g_022ddf4c[];
struct C_01513fe0 { C_01513fe0* sub_01513fe0(void); };

// @baa 0x01513fe0
C_01513fe0* C_01513fe0::sub_01513fe0(void) { *(int*)((char*)this + 0) = (int)g_022ddf4c; return this; }

extern char g_022ddf64[];
struct C_01514040 { C_01514040* sub_01514040(void); };

// @baa 0x01514040
C_01514040* C_01514040::sub_01514040(void) { *(int*)((char*)this + 0) = (int)g_022ddf64; return this; }

extern char g_022ddf7c[];
struct C_015140a0 { C_015140a0* sub_015140a0(void); };

// @baa 0x015140a0
C_015140a0* C_015140a0::sub_015140a0(void) { *(int*)((char*)this + 0) = (int)g_022ddf7c; return this; }

void sub_005447d0();
// @baa 0x01514450
void sub_01514450(void) { sub_005447d0(); }

void sub_009df520();
// @baa 0x01514460
void sub_01514460(void) { sub_009df520(); }

struct FData {
    INT X;
    INT Y;
    INT Z;
};

struct C_01514470 {
    void sub_01514470(FData *p);
};

// @baa 0x01514470
void C_01514470::sub_01514470(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_015144f0 {
    void sub_015144f0(FData *p);
};

// @baa 0x015144f0
void C_015144f0::sub_015144f0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514570 {
    void sub_01514570(FData *p);
};

// @baa 0x01514570
void C_01514570::sub_01514570(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_015145f0 {
    void sub_015145f0(FData *p);
};

// @baa 0x015145f0
void C_015145f0::sub_015145f0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514670 {
    void sub_01514670(FData *p);
};

// @baa 0x01514670
void C_01514670::sub_01514670(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_015146f0 {
    void sub_015146f0(FData *p);
};

// @baa 0x015146f0
void C_015146f0::sub_015146f0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514770 {
    void sub_01514770(FData *p);
};

// @baa 0x01514770
void C_01514770::sub_01514770(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_015147f0 { void* Data; int Num; int Max; void sub_015147f0(); };

// @baa 0x015147f0
void C_015147f0::sub_015147f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01514850 { void* Data; int Num; int Max; void sub_01514850(); };

// @baa 0x01514850
void C_01514850::sub_01514850() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015148b0 {
    void sub_015148b0(FData *p);
};

// @baa 0x015148b0
void C_015148b0::sub_015148b0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514930 {
    void sub_01514930(FData *p);
};

// @baa 0x01514930
void C_01514930::sub_01514930(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_015149b0 {
    void sub_015149b0(FData *p);
};

// @baa 0x015149b0
void C_015149b0::sub_015149b0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514a30 {
    void sub_01514a30(FData *p);
};

// @baa 0x01514a30
void C_01514a30::sub_01514a30(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514ab0 {
    void sub_01514ab0(FData *p);
};

// @baa 0x01514ab0
void C_01514ab0::sub_01514ab0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514b90 {
    FString sub_01514b90();
};

// @baa 0x01514b90
FString C_01514b90::sub_01514b90()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_01514bc0 {
    void sub_01514bc0(FData *p);
};

// @baa 0x01514bc0
void C_01514bc0::sub_01514bc0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514c40 {
    void sub_01514c40(FData *p);
};

// @baa 0x01514c40
void C_01514c40::sub_01514c40(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514cc0 {
    FString sub_01514cc0();
};

// @baa 0x01514cc0
FString C_01514cc0::sub_01514cc0()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_01514cf0 {
    void sub_01514cf0(FData *p);
};

// @baa 0x01514cf0
void C_01514cf0::sub_01514cf0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514d70 {
    FString sub_01514d70();
};

// @baa 0x01514d70
FString C_01514d70::sub_01514d70()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_01514da0 {
    void sub_01514da0(FData *p);
};

// @baa 0x01514da0
void C_01514da0::sub_01514da0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514e20 {
    void sub_01514e20(FData *p);
};

// @baa 0x01514e20
void C_01514e20::sub_01514e20(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514ea0 {
    FString sub_01514ea0();
};

// @baa 0x01514ea0
FString C_01514ea0::sub_01514ea0()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_01514ed0 {
    void sub_01514ed0(FData *p);
};

// @baa 0x01514ed0
void C_01514ed0::sub_01514ed0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01514f50 {
    FString sub_01514f50();
};

// @baa 0x01514f50
FString C_01514f50::sub_01514f50()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_01514f80 {
    void sub_01514f80(FData *p);
};

// @baa 0x01514f80
void C_01514f80::sub_01514f80(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01515000 {
    FString sub_01515000();
};

// @baa 0x01515000
FString C_01515000::sub_01515000()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_01515030 {
    void sub_01515030(FData *p);
};

// @baa 0x01515030
void C_01515030::sub_01515030(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_015150b0 {
    void sub_015150b0(FData *p);
};

// @baa 0x015150b0
void C_015150b0::sub_015150b0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01515130 {
    void sub_01515130(FData *p);
};

// @baa 0x01515130
void C_01515130::sub_01515130(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_015151b0 {
    FString sub_015151b0();
};

// @baa 0x015151b0
FString C_015151b0::sub_015151b0()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_015151e0 {
    void sub_015151e0(FData *p);
};

// @baa 0x015151e0
void C_015151e0::sub_015151e0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01515260 {
    FString sub_01515260();
};

// @baa 0x01515260
FString C_01515260::sub_01515260()
{
    return TEXT("<th>SceneProxy</th>");
}

struct C_01515290 {
    void sub_01515290(FData *p);
};

// @baa 0x01515290
void C_01515290::sub_01515290(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01515310 {
    void sub_01515310(FData *p);
};

// @baa 0x01515310
void C_01515310::sub_01515310(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_01515390 { void* Data; int Num; int Max; void sub_01515390(); };

// @baa 0x01515390
void C_01515390::sub_01515390() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015153f0 { void* Data; int Num; int Max; void sub_015153f0(); };

// @baa 0x015153f0
void C_015153f0::sub_015153f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01515450
undefined4 * UObject::sub_01515450(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

// @baa 0x01515490
void __stdcall sub_01515490(int a0, int a1) {  }

// @baa 0x015154a0
int UObject::sub_015154a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x015154c0
int UObject::sub_015154c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x015155c0
int UObject::sub_015155c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x015155d0
int UObject::sub_015155d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x015155f0
int UObject::sub_015155f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

// @baa 0x01515600
int UObject::sub_01515600(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01515620
int UObject::sub_01515620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

// @baa 0x01515630
int UObject::sub_01515630(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x01515650
undefined4 UObject::sub_01515650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_015156e0 { void sub_0040fcc0(); };

struct C_015156e0 { char pad[28]; M_015156e0 m; void sub_015156e0(); };

// @baa 0x015156e0
void C_015156e0::sub_015156e0() { m.sub_0040fcc0(); }

// @baa 0x01515760
int UTexture2D::sub_01515760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x01515770
int UTexture2D::sub_01515770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_015158d0 {
    int sub_015158d0(int);
};

// @baa 0x015158d0
int C_015158d0::sub_015158d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_015158f0 {
    int sub_015158f0();
};

// @baa 0x015158f0
int C_015158f0::sub_015158f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_01515910 {
    int sub_01515910(int);
};

// @baa 0x01515910
int C_01515910::sub_01515910(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_01515920 {
    int sub_01515920();
};

// @baa 0x01515920
int C_01515920::sub_01515920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_01515930 {
    int sub_01515930();
};

// @baa 0x01515930
int C_01515930::sub_01515930(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_01515940 {
    int sub_01515940(int);
};

// @baa 0x01515940
int C_01515940::sub_01515940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_01515960 {
    int sub_01515960();
};

// @baa 0x01515960
int C_01515960::sub_01515960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_01515980 {
    int sub_01515980();
};

// @baa 0x01515980
int C_01515980::sub_01515980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_01515990 {
    int sub_01515990();
};

// @baa 0x01515990
int C_01515990::sub_01515990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_view_01516700 {
    int sub_00547da0(int);
};

// @baa 0x01516700
int URFMODSound::sub_01516700(int param_2)
{
    int param_1 = (int)this;
  ((C_view_01516700 *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct C_015167a0 {
    undefined4 * sub_015167a0(undefined4 *);
    int sub_00547da0(int);
};

// @baa 0x015167a0
undefined4 * C_015167a0::sub_015167a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  ((C_015167a0 *)(((char *)this + 0x1c)))->sub_00547da0((int)(param_2 + 7));
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  return param_1;
}

// @baa 0x01516800
undefined4 * UObject::sub_01516800(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}

struct C_view_01516850 {
    int sub_00547da0(int);
};

// @baa 0x01516850
int URFMODSound::sub_01516850(int param_2)
{
    int param_1 = (int)this;
  ((C_view_01516850 *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

extern int g_02604330;
extern unsigned short g_01e3f3dc[];
extern char g_01e729c0[];
struct FS { TArray<TCHAR> d; ~FS(); const TCHAR* operator*() const { return d.Num() ? &d(0) : (const TCHAR*)g_01e3f3dc; } };

FS sub_005495f0(const TCHAR* fmt, ...);
struct B { void* vt; int pad; int f8; char p[0x810]; int f; B(const TCHAR*); void sub_005ee160() throw(); ~B() throw() { sub_005ee160(); vt = g_01e729c0; } };

// @baa 0x0151b550
void __stdcall sub_0151b550(const TCHAR* a)
{
  FS s = sub_005495f0(L"%sstyle.css", a);
  B d(*s);
  d.f8=1; d.f=1;
  sub_00630f20(&d, L"h { color: white; }");
  sub_00630f20(&d, L"p { color: blue; }");
  sub_00630f20(&d, L"a { color: blue; }");
  sub_00630f20(&d, L"body{ background-color: #eeeeff; font-size: 10pt;}");
  sub_00630f20(&d, L"th { text-align: center; color: black; background-color: #cccccc;  font-size: 10pt;}");
  sub_00630f20(&d, L"td { text-align: right; color: black; background-color: #eeeeee;  font-size: 10pt;}");
  sub_00630f20(&d, L"td.L { text-align: left; color: black; background-color: #eeeeee;  font-size: 10pt;}");
  sub_00630f20(&d, L"td.LU { text-align: left; color: blue; background-color: #eeeeee;  font-size: 10pt;}");
  sub_00630f20(&d, L"td.H { text-align: right; color: black; background-color: #ffff00;  font-size: 10pt;}");
  sub_00630f20(&d, L"td.LH { text-align: left; color: black; background-color: #ffff00;  font-size: 10pt;}");
}

struct C_0151bcb0 { void sub_01516600(int); C_0151bcb0 *sub_0151bcb0(int); };

// @baa 0x0151bcb0
C_0151bcb0 *C_0151bcb0::sub_0151bcb0(int a) { sub_01516600(a); return this; }

struct C_0151bcd0 { void* Data; int Num; int Max; void sub_0151bcd0(); };

// @baa 0x0151bcd0
void C_0151bcd0::sub_0151bcd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0151bd30 { void* Data; int Num; int Max; void sub_0151bd30(); };

// @baa 0x0151bd30
void C_0151bd30::sub_0151bd30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0151bd90 {
    int sub_0151bd90();
};

// @baa 0x0151bd90
int C_0151bd90::sub_0151bd90(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0151bdb0 {
    int sub_0151bdb0();
};

// @baa 0x0151bdb0
int C_0151bdb0::sub_0151bdb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0151bdd0 {
    int sub_0151bdd0();
};

// @baa 0x0151bdd0
int C_0151bdd0::sub_0151bdd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0151bdf0 {
    int sub_0151bdf0();
};

// @baa 0x0151bdf0
int C_0151bdf0::sub_0151bdf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_0151be00 {
    int sub_0151be00();
};

// @baa 0x0151be00
int C_0151be00::sub_0151be00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0151be20 {
    int sub_0151be20();
};

// @baa 0x0151be20
int C_0151be20::sub_0151be20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_0151be30 {
    int sub_0151be30();
};

// @baa 0x0151be30
int C_0151be30::sub_0151be30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// The engine function at 005678d0, called on a subobject at 0xc8 within the
// owning object; returns an INT (see its many call sites in Texture2D and
// LightMap code). Only its signature is needed here, so declare it, not define.
struct S_005678d0_ {
    INT sub_005678d0();
};

// Owns a subobject at offset 0xc8; the caller passes a pointer to this.
struct S_01510da0_ {
    char _pad[0xc8];
    S_005678d0_ _sub;
};

// @baa 0x01510da0
// Returns the subobject's value, or 0 when the object is NULL.
INT __stdcall sub_01510da0(S_01510da0_ *obj)
{
    INT result = 0;
    if (obj)
        result = obj->_sub.sub_005678d0();
    return result;
}
