// LaunchEngineLoop.cpp (part 1 of 4): 102 functions
// Placed here by: neighbours 76, callers 26.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0059c760(void);
int sub_005b5790(...);
extern undefined4 g_0268d080;
// @baa 0x005b58b0
int sub_005b58b0(void)
{
  if (g_0268d080 == 0) {
    g_0268d080 = sub_005b5790(L"Core");
    sub_0059c760();
  }
  return g_0268d080;
}

int sub_00eba080(...);
// @baa 0x005ed680
undefined4 sub_005ed680(undefined4 param_1)
{
  sub_00eba080(param_1);
  return param_1;
}

struct C {
    virtual void vf_000();
    virtual void vf_004();
    virtual void vf_008();
};

extern C* g_026b4380;
// @baa 0x00788170
void sub_00788170(void)
{
    g_026b4380->vf_008();
}

struct C_0078be20{
int sub_0078be20(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0078be20
int C_0078be20::sub_0078be20(undefined4*param_2)
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

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0078be80(INT Index);
};

// @baa 0x0078be80
DWORD* S::sub_0078be80(INT Index)
{
    return &Items(Index);
}

struct C_0078bed0{
int sub_0078bed0(undefined4*);
};

// @baa 0x0078bed0
int C_0078bed0::sub_0078bed0(undefined4*param_2)
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

int sub_00cafcb0(void);
int sub_00cdb950(...);
extern undefined4 g_026c3ce8;
// @baa 0x007d6820
int sub_007d6820(void)
{
  if (g_026c3ce8 == 0) {
    g_026c3ce8 = sub_00cdb950(L"Engine");
    sub_00cafcb0();
  }
  return g_026c3ce8;
}

int sub_0053df40(...);
// @baa 0x00becf00
void sub_00becf00(undefined4 param_1)
{
  sub_0053df40(param_1,8);
  return;
}

struct C_00becf10 {
	int sub_0053df40(int, int);
	void sub_00becf10(int, int);
};

// @baa 0x00becf10
void C_00becf10::sub_00becf10(int Arg1, int Arg2)
{
	Arg2 = 8;
	sub_0053df40(Arg1, Arg2);
}

void sub_00bee1a0();
// @baa 0x00bee200
void sub_00bee200(void) { sub_00bee1a0(); }

// @baa 0x00cb0680
IMPLEMENT_CLASS_AT(UServerCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 2189);

int sub_00e2aa40(void);
int sub_00e2ad90(void);
int sub_00e2ae00(void);
int sub_00e2ae60(...);
int sub_00e2aed0(void);
int sub_00e2af40(void);
int sub_00e2afb0(void);
int sub_00e2b020(void);
int sub_00e2b090(void);
int sub_00e2b5a0(void);
int sub_00e2b700(void);
int sub_00e2b9d0(void);
int sub_00e2c830(void);
int sub_00e2c9c0(void);
int sub_00e39110(...);
int sub_00e39270(...);
int sub_00e3a1d0(...);
int sub_00e3a3e0(void);
int sub_00e3a540(void);
int sub_00e3a690(void);
int sub_00e3a7f0(void);
int sub_00e3a940(...);
int sub_00e3aa00(void);
int sub_00e3c0f0(...);
int sub_00e3e510(...);
int sub_00e3ebc0(...);
int sub_00e3eec0(...);
int sub_00e3f300(...);
int sub_00e40a80(...);
int sub_00e40df0(void);
int sub_00e40fc0(...);
int sub_00e415b0(...);
extern undefined4 g_0268c8a0;
extern undefined4 g_026cace0;
extern undefined4 g_026cacf4;
extern undefined4 g_026cacf8;
extern undefined4 g_026cacfc;
extern undefined4 g_026cad00;
extern undefined4 g_026cad08;
extern undefined4 g_026cad0c;
extern undefined4 g_026cad10;
extern undefined4 g_026cad14;
extern undefined4 g_026cad18;
extern undefined4 g_026cad1c;
extern undefined4 g_026cad20;
// @baa 0x00e416a0
void sub_00e416a0(int * param_1)
{
  if (g_026cace0 == 0) {
    g_026cace0 = sub_00e3c0f0(L"IpDrv");
    sub_00e2aa40();
  }
  if (g_026cad0c == 0) {
    g_026cad0c = sub_00e39110(L"IpDrv");
    sub_00e2c830();
  }
  if (g_026cad08 == 0) {
    g_026cad08 = sub_00e3e510(L"IpDrv");
    sub_00e3a3e0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2ad90);
  *param_1 = *param_1 + 1;
  if (g_026cacf4 == 0) {
    g_026cacf4 = sub_00e3a1d0(L"IpDrv");
    sub_00e40df0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2ae00);
  *param_1 = *param_1 + 1;
  if (g_026cad10 == 0) {
    g_026cad10 = sub_00e3ebc0(L"IpDrv");
    sub_00e3a540();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2ae60);
  *param_1 = *param_1 + 1;
  if (g_026cacf8 == 0) {
    g_026cacf8 = sub_00e40a80(L"IpDrv");
    sub_00e2b5a0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2aed0);
  *param_1 = *param_1 + 1;
  if (g_026cad14 == 0) {
    g_026cad14 = sub_00e3eec0(L"IpDrv");
    sub_00e3a690();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2af40);
  *param_1 = *param_1 + 1;
  if (g_026cad18 == 0) {
    g_026cad18 = sub_00e39270(L"IpDrv");
    sub_00e2c9c0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2afb0);
  *param_1 = *param_1 + 1;
  if (g_026cad20 == 0) {
    g_026cad20 = sub_00e3a940(L"IpDrv");
    sub_00e3aa00();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2b020);
  *param_1 = *param_1 + 1;
  if (g_026cad1c == 0) {
    g_026cad1c = sub_00e3f300(L"IpDrv");
    sub_00e3a7f0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e2b090);
  *param_1 = *param_1 + 1;
  if (g_026cacfc == 0) {
    g_026cacfc = sub_00e40fc0(L"IpDrv");
    sub_00e2b700();
  }
  if (g_026cad00 == 0) {
    g_026cad00 = sub_00e415b0(L"IpDrv");
    sub_00e2b9d0();
    return;
  }
  return;
}

int sub_00e708c0(void);
int sub_00e826b0(...);
extern undefined4 g_026cc174;
// @baa 0x00e82770
void sub_00e82770(void)
{
  if (g_026cc174 == 0) {
    g_026cc174 = sub_00e826b0(L"FMODAudio");
    sub_00e708c0();
    return;
  }
  return;
}

extern char g_0212c308[];
struct C_00eb25a0 { void sub_00eb25a0(void); };

// @baa 0x00eb25a0
void C_00eb25a0::sub_00eb25a0(void) { *(int*)((char*)this + 0) = (int)g_0212c308; }

struct C_00eb25b0 { int sub_00eb25b0(void); };

// @baa 0x00eb25b0
int C_00eb25b0::sub_00eb25b0(void) { return *(int*)((char*)this + 8); }

struct C_00eb25f0 { char* sub_00eb25f0(void); };

// @baa 0x00eb25f0
char* C_00eb25f0::sub_00eb25f0(void) { return (char*)this + 12; }

struct C_00eb2600 { char* sub_00eb2600(void); };

// @baa 0x00eb2600
char* C_00eb2600::sub_00eb2600(void) { return (char*)this + 1052; }

struct C_00eb2610 { char* sub_00eb2610(void); };

// @baa 0x00eb2610
char* C_00eb2610::sub_00eb2610(void) { return (char*)this + 2076; }

struct C_00eb2620 { int sub_00eb2620(void); };

// @baa 0x00eb2620
int C_00eb2620::sub_00eb2620(void) { return *(int*)((char*)this + 4); }

// @baa 0x00eb26d0
void sub_00eb26d0(void) {  }

struct C_00eb26e0 {
    undefined1 sub_00eb26e0();
};

// @baa 0x00eb26e0
undefined1 C_00eb26e0::sub_00eb26e0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x11e);
}

struct C_00eb26f0 { int sub_00eb26f0(void); };

// @baa 0x00eb26f0
int C_00eb26f0::sub_00eb26f0(void) { return *(int*)((char*)this + 244); }

struct C_00eb2700 { int sub_00eb2700(void); };

// @baa 0x00eb2700
int C_00eb2700::sub_00eb2700(void) { return *(int*)((char*)this + 248); }

struct C_00eb30e0 { int sub_00eb30e0(void); };

// @baa 0x00eb30e0
int C_00eb30e0::sub_00eb30e0(void) { return *(int*)((char*)this + 272); }

struct C_00eb3150 {
    void sub_00eb3150();
};

// @baa 0x00eb3150
void C_00eb3150::sub_00eb3150(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1064);
  return;
}

struct C_00eb3160 {
    void sub_00eb3160();
};

// @baa 0x00eb3160
void C_00eb3160::sub_00eb3160(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x1068);
  return;
}

struct C_00eb31d0 { int sub_00eb31d0(void); };

// @baa 0x00eb31d0
int C_00eb31d0::sub_00eb31d0(void) { return *(int*)((char*)this + 3100); }

struct C_00eb31e0 { int sub_00eb31e0(void); };

// @baa 0x00eb31e0
int C_00eb31e0::sub_00eb31e0(void) { return *(int*)((char*)this + 3100); }

struct C_00eb31f0 {
    undefined1 sub_00eb31f0();
};

// @baa 0x00eb31f0
undefined1 C_00eb31f0::sub_00eb31f0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xc24);
}

struct C_00eb3200 { int sub_00eb3200(void); };

// @baa 0x00eb3200
int C_00eb3200::sub_00eb3200(void) { return *(int*)((char*)this + 3112); }

struct C_00eb3210 { int sub_00eb3210(void); };

// @baa 0x00eb3210
int C_00eb3210::sub_00eb3210(void) { return *(int*)((char*)this + 3116); }

// @baa 0x00eb3220
void sub_00eb3220(void) {  }

struct C_00eb3460 { int sub_00eb3460(void); };

// @baa 0x00eb3460
int C_00eb3460::sub_00eb3460(void) { return *(int*)((char*)this + 3120); }

struct C_00eb5cf0 {
    void sub_00eb5cf0();
};

int sub_00eb5270(...);
// @baa 0x00eb5cf0
void C_00eb5cf0::sub_00eb5cf0(void)
{
    int param_1 = (int)this;

  sub_00eb5270(param_1 + 0xc,L"%d.%d.%d.%d",*(undefined2 *)(param_1 + 0x1062),
               *(undefined2 *)(param_1 + 0x1060),*(undefined2 *)(param_1 + 0x105e),
               *(undefined2 *)(param_1 + 0x105c));
  *(uint *)(param_1 + 0x40c) = (uint)*(ushort *)(param_1 + 0x1062);
  *(uint *)(param_1 + 0x410) = (uint)*(ushort *)(param_1 + 0x1060);
  *(uint *)(param_1 + 0x414) = (uint)*(ushort *)(param_1 + 0x105e);
  *(uint *)(param_1 + 0x418) = (uint)*(ushort *)(param_1 + 0x105c);
  return;
}

struct C_00eb6b90 {
    undefined4 sub_00eb6b90(byte);
};

int sub_0053dfa0(...);
int sub_00eb5c90(void);
// @baa 0x00eb6b90
undefined4 C_00eb6b90::sub_00eb6b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00eb5c90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00eb35f0(void);
int sub_00eb48e0(void);
int sub_00eb6050(...);
int sub_00ec0240(...);
extern undefined4 g_026cca50;
extern undefined4 g_026cca8c;
// @baa 0x00ec0330
void sub_00ec0330(void)
{
  if (g_026cca50 == 0) {
    g_026cca50 = sub_00ec0240(L"WinDrv");
    sub_00eb35f0();
  }
  if (g_026cca8c == 0) {
    g_026cca8c = sub_00eb6050(L"WinDrv");
    sub_00eb48e0();
    return;
  }
  return;
}

int sub_0105b290(void);
int sub_01075a20(...);
extern undefined4 g_026ce440;
// @baa 0x00ec3f50
int sub_00ec3f50(void)
{
  if (g_026ce440 == 0) {
    g_026ce440 = sub_01075a20(L"Editor");
    sub_0105b290();
  }
  return g_026ce440;
}

// @baa 0x014f9c50
void sub_014f9c50(void) {  }

int sub_014f9bf0(void);
int sub_014f9c60(void);
int sub_014f9e60(void);
int sub_014fa020(void);
int sub_014fa1e0(void);
int sub_014fa5c0(void);
int sub_014fa720(void);
int sub_014faaa0(...);
int sub_014fcb50(...);
int sub_014fd670(...);
int sub_014fdf20(...);
int sub_014ff190(...);
int sub_014ff2a0(...);
extern undefined4 g_026def90;
extern undefined4 g_026def94;
extern undefined4 g_026def98;
extern undefined4 g_026def9c;
extern undefined4 g_026defa8;
extern undefined4 g_026defac;
// @baa 0x014ff3f0
void sub_014ff3f0(int * param_1)
{
  if (g_026def9c == 0) {
    g_026def9c = sub_014fdf20(L"GFxUIEditor");
    sub_014fa1e0();
  }
  if (g_026def98 == 0) {
    g_026def98 = sub_014fd670(L"GFxUIEditor");
    sub_014fa020();
  }
  if (g_026def90 == 0) {
    g_026def90 = sub_014faaa0(L"GFxUIEditor");
    sub_014f9c60();
  }
  if (g_026def94 == 0) {
    g_026def94 = sub_014ff190(L"GFxUIEditor");
    sub_014f9e60();
  }
  if (g_026defac == 0) {
    g_026defac = sub_014fcb50(L"GFxUIEditor");
    sub_014fa720();
  }
  if (g_026defa8 == 0) {
    g_026defa8 = sub_014ff2a0(L"GFxUIEditor");
    sub_014fa5c0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_014f9bf0);
  *param_1 = *param_1 + 1;
  if (g_026def94 == 0) {
    g_026def94 = sub_014ff190(L"GFxUIEditor");
    sub_014f9e60();
    return;
  }
  return;
}

// @baa 0x01503520
void sub_01503520(void) {  }

extern int g_022d362c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_01503600(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x01503600
FDecalValue* FDecalValue::sub_01503600(int* Src)
{
    Value = (int)&g_022d362c;
    Unk04 = *Src;
    return this;
}

extern char g_022cfb00[];
// @baa 0x01503630
int sub_01503630(void) { return (int)g_022cfb00; }

extern char g_01ebb554[];
struct C_01503640 { void sub_01503640(void); };

// @baa 0x01503640
void C_01503640::sub_01503640(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_01503650 {
    undefined4 * sub_01503650(byte);
};

// @baa 0x01503650
undefined4 * C_01503650::sub_01503650(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_0266e800;
// @baa 0x015036c0
void sub_015036c0(void)
{
  g_0266e800 = g_0266e800 | 2;
  return;
}

extern char g_022d3638[];
struct C_015036d0 { C_015036d0* sub_015036d0(void); };

// @baa 0x015036d0
C_015036d0* C_015036d0::sub_015036d0(void) { *(int*)((char*)this + 0) = (int)g_022d3638; return this; }

// @baa 0x015036e0
void __stdcall sub_015036e0(int a0) {  }

extern char g_022d363c[];
struct C_015036f0 { C_015036f0* sub_015036f0(void); };

// @baa 0x015036f0
C_015036f0* C_015036f0::sub_015036f0(void) { *(int*)((char*)this + 0) = (int)g_022d363c; return this; }

extern char g_022d3644[];
struct C_01503700 { C_01503700* sub_01503700(void); };

// @baa 0x01503700
C_01503700* C_01503700::sub_01503700(void) { *(int*)((char*)this + 0) = (int)g_022d3644; return this; }

// @baa 0x01503710
void __stdcall sub_01503710(int a0, int a1, int a2) {  }

// @baa 0x01503720
int __stdcall sub_01503720(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { return 1; }

// @baa 0x01503730
int __stdcall sub_01503730(int a0, int a1, int a2, int a3) { return 1; }

// @baa 0x01503740
int __stdcall sub_01503740(int a0, int a1) { return 0; }

// @baa 0x01503750
int __stdcall sub_01503750(int a0, int a1) { return 1; }

// @baa 0x01503760
void __stdcall sub_01503760(int a0, int a1) {  }

// @baa 0x01503770
int __stdcall sub_01503770(int a0, int a1) { return 0; }

// @baa 0x01503780
void sub_01503780(void) {  }

int sub_0071f510(void);
extern undefined4 g_025e9cfc;
// @baa 0x01503790
undefined4 sub_01503790(void)
{
  g_025e9cfc = 1;
  sub_0071f510();
  return 4;
}

extern char g_022d1158[];
// @baa 0x015037b0
int sub_015037b0(void) { return (int)g_022d1158; }

extern char g_022d3668[];
struct C_015037c0 { C_015037c0* sub_015037c0(void); };

// @baa 0x015037c0
C_015037c0* C_015037c0::sub_015037c0(void) { *(int*)((char*)this + 0) = (int)g_022d3668; return this; }

struct C_015037d0 { void sub_015037d0(void); };

// @baa 0x015037d0
void C_015037d0::sub_015037d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_015037e0 {
    undefined4 * sub_015037e0(byte);
};

// @baa 0x015037e0
undefined4 * C_015037e0::sub_015037e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005eb8e0(...);
// @baa 0x01503be0
void sub_01503be0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_0268d080 == 0) {
    g_0268d080 = sub_005b5790(L"Core");
    sub_0059c760();
  }
  sub_005eb8e0(g_0268d080,param_1,param_2,param_3,param_4,param_5);
  return;
}

void sub_01503310(void);
// @baa 0x01504540
void __stdcall sub_01504540(void *a, void *b)
{
    sub_01503310();
}

extern char g_022d36bc[];
struct C_01504610 { C_01504610* sub_01504610(void); };

// @baa 0x01504610
C_01504610* C_01504610::sub_01504610(void) { *(int*)((char*)this + 0) = (int)g_022d36bc; return this; }

extern char g_022d36c4[];
struct C_01504860 { C_01504860* sub_01504860(void); };

// @baa 0x01504860
C_01504860* C_01504860::sub_01504860(void) { *(int*)((char*)this + 0) = (int)g_022d36c4; return this; }

extern char g_022d36c8[];
struct C_01504870 { C_01504870* sub_01504870(void); };

// @baa 0x01504870
C_01504870* C_01504870::sub_01504870(void) { *(int*)((char*)this + 0) = (int)g_022d36c8; return this; }

extern char g_022d36cc[];
struct C_01504880 { C_01504880* sub_01504880(void); };

// @baa 0x01504880
C_01504880* C_01504880::sub_01504880(void) { *(int*)((char*)this + 0) = (int)g_022d36cc; return this; }

extern char g_022d36d0[];
struct C_01504890 { C_01504890* sub_01504890(void); };

// @baa 0x01504890
C_01504890* C_01504890::sub_01504890(void) { *(int*)((char*)this + 0) = (int)g_022d36d0; return this; }

extern char g_022d36d8[];
struct C_015048a0 { C_015048a0* sub_015048a0(void); };

// @baa 0x015048a0
C_015048a0* C_015048a0::sub_015048a0(void) { *(int*)((char*)this + 0) = (int)g_022d36d8; return this; }

struct C_015048b0{
int sub_015048b0(undefined4*);
};

// @baa 0x015048b0
int C_015048b0::sub_015048b0(undefined4*param_2)
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

struct C_01504910 {
    int sub_01504910(int);
};

// @baa 0x01504910
int C_01504910::sub_01504910(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01504920
void __stdcall sub_01504920(int a0, int a1) {  }

struct C_01504930 {
    int sub_01504930(int);
};

// @baa 0x01504930
int C_01504930::sub_01504930(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01504940 {
    int sub_01504940(int);
};

// @baa 0x01504940
int C_01504940::sub_01504940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01504f80 { int sub_01504f80(void); };

// @baa 0x01504f80
int C_01504f80::sub_01504f80(void) { return *(int*)((char*)this + 32); }

extern char g_022d3858[];
struct C_01504ff0 { C_01504ff0* sub_01504ff0(void); };

// @baa 0x01504ff0
C_01504ff0* C_01504ff0::sub_01504ff0(void) { *(int*)((char*)this + 0) = (int)g_022d3858; return this; }

// @baa 0x01505000
void __stdcall sub_01505000(int a0) {  }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_015051b0 { void* Data; int Num; int Max; void sub_015051b0(); };

// @baa 0x015051b0
void C_015051b0::sub_015051b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_01505210;
// @baa 0x01505210
template INT TArray<T_01505210*>::RemoveItem(T_01505210* const&);

struct C_01505570{
int sub_01505570(undefined4*);
};

// @baa 0x01505570
int C_01505570::sub_01505570(undefined4*param_2)
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

struct T_015058f0;
// @baa 0x015058f0
template INT TArray<T_015058f0*>::RemoveItem(T_015058f0* const&);

struct C_01505a40 {
    undefined4 sub_01505a40(byte);
};

int sub_01505970(void);
// @baa 0x01505a40
undefined4 C_01505a40::sub_01505a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01505970();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01505b10 {
    undefined4 * sub_01505b10();
};

int sub_015054a0(void);
extern undefined * g_022d38d0;
// @baa 0x01505b10
undefined4 * C_01505b10::sub_01505b10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_015054a0();
  *param_1 = (undefined4)(&g_022d38d0);
  param_1[0xa3] = 0;
  return param_1;
}

struct C_01505b30 {
    void sub_01505b30();
};

// @baa 0x01505b30
void C_01505b30::sub_01505b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022d38d0);
  sub_01505970();
  return;
}

struct C_01505b40 {
    undefined4 * sub_01505b40(byte);
};

// @baa 0x01505b40
undefined4 * C_01505b40::sub_01505b40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022d38d0);
  sub_01505970();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01506ac0 { void* Data; int Num; int Max; void sub_01506ac0(); };

// @baa 0x01506ac0
void C_01506ac0::sub_01506ac0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern TArray<int> g_026a1ca4;
struct C_01506b20 {
    int sub_01506b20();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01506b20
int C_01506b20::sub_01506b20()
{
    return g_026a1ca4(Index);
}

struct C_01506d40 {
    undefined4 sub_01506d40(byte);
};

int sub_01506bc0(void);
// @baa 0x01506d40
undefined4 C_01506d40::sub_01506d40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01506bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01506e00
int sub_01506e00(void) { return 1; }

struct C_01506e10 { int sub_01506e10(void); };

// @baa 0x01506e10
int C_01506e10::sub_01506e10(void) { return *(int*)((char*)this + 52); }

struct C_01506e20 { void sub_01506e20(int a0); };

// @baa 0x01506e20
void C_01506e20::sub_01506e20(int a0) { *(int*)((char*)this + 52) = a0; }

void sub_0117d2e0();
// @baa 0x01507300
void sub_01507300(void) { sub_0117d2e0(); }

int sub_0150d120(void);
int sub_0150d180(...);
int sub_0150d1e0(...);
int sub_0150d240(...);
int sub_0150d2a0(...);
int sub_0150d300(...);
int sub_0150d360(...);
int sub_0150d3c0(...);
int sub_0150d420(...);
int sub_0150d480(...);
int sub_0150d4e0(...);
int sub_0150d540(...);
int sub_0150db50(void);
int sub_0150dcb0(void);
int sub_0150de10(void);
int sub_0150df90(void);
int sub_0150e0f0(void);
int sub_0150e250(void);
int sub_0150e3b0(void);
int sub_0150e510(void);
int sub_0150e670(void);
int sub_0150e7d0(void);
int sub_0150e930(void);
int sub_0150ea90(void);
int sub_0150ebf0(void);
int sub_0150ed50(void);
int sub_0150eeb0(void);
int sub_0150f010(void);
int sub_01510a40(...);
int sub_0152eb60(...);
int sub_01531f50(...);
int sub_01532010(...);
int sub_015320d0(...);
int sub_01532190(...);
int sub_01532250(...);
int sub_01532310(...);
int sub_015323d0(...);
int sub_01532490(...);
int sub_01532550(...);
int sub_01532610(...);
int sub_01533a00(void);
int sub_01534d90(...);
int sub_01534e50(...);
int sub_01534f10(...);
int sub_01537f70(...);
int sub_0153a130(...);
int sub_0153ac90(void);
int sub_0153adf0(void);
int sub_0153af60(void);
int sub_0153b330(void);
int sub_0153b490(void);
int sub_0153b5f0(void);
int sub_0153b8a0(void);
int sub_0153bc40(void);
int sub_0153bda0(void);
int sub_0153bf00(void);
int sub_0153c060(void);
int sub_0153c1f0(void);
int sub_0153c350(void);
int sub_0153c640(void);
int sub_0153c7a0(void);
int sub_0153c900(void);
int sub_0153ca60(void);
int sub_0153cbc0(void);
int sub_0153cd20(void);
int sub_0153ce80(void);
int sub_0153cfe0(void);
int sub_0153d270(void);
int sub_0153d3d0(void);
int sub_0153d530(void);
int sub_0153d690(void);
int sub_0153d7f0(void);
int sub_0153dc60(void);
int sub_0153ddc0(void);
int sub_0153e8b0(...);
int sub_01541fe0(...);
int sub_015420a0(...);
int sub_01542340(...);
int sub_01542400(...);
int sub_01542510(...);
int sub_015425d0(...);
int sub_01542dd0(...);
int sub_01543090(...);
int sub_01543150(...);
int sub_01543210(...);
int sub_015432d0(...);
int sub_01543b50(...);
int sub_01543c10(void);
int sub_01543d60(void);
int sub_01543eb0(void);
int sub_01544070(...);
int sub_01544130(...);
int sub_01544340(...);
int sub_015447a0(void);
int sub_015462c0(...);
int sub_01546380(...);
int sub_015464c0(...);
int sub_01546580(...);
int sub_01546680(...);
int sub_015467f0(...);
int sub_01546960(...);
int sub_01546a20(void);
int sub_01546d30(void);
int sub_01548ab0(...);
int sub_01548cb0(...);
int sub_01548d70(...);
int sub_01548e30(...);
int sub_01548ef0(...);
int sub_01548fb0(...);
int sub_01549070(...);
int sub_015497b0(...);
int sub_01549870(...);
int sub_0154a7d0(...);
int sub_0154a8a0(...);
extern undefined4 g_026e0b30;
extern undefined4 g_026e0b34;
extern undefined4 g_026e0b38;
extern undefined4 g_026e0b3c;
extern undefined4 g_026e0b40;
extern undefined4 g_026e0b44;
extern undefined4 g_026e0b48;
extern undefined4 g_026e0b4c;
extern undefined4 g_026e0b50;
extern undefined4 g_026e0b54;
extern undefined4 g_026e0b58;
extern undefined4 g_026e0b5c;
extern undefined4 g_026e0b60;
extern undefined4 g_026e0b64;
extern undefined4 g_026e0b68;
extern undefined4 g_026e0b6c;
extern undefined4 g_026e0b70;
extern undefined4 g_026e1020;
extern undefined4 g_026e1024;
extern undefined4 g_026e1028;
extern undefined4 g_026e102c;
extern undefined4 g_026e1030;
extern undefined4 g_026e1034;
extern undefined4 g_026e1038;
extern undefined4 g_026e103c;
extern undefined4 g_026e1040;
extern undefined4 g_026e1044;
extern undefined4 g_026e1048;
extern undefined4 g_026e104c;
extern undefined4 g_026e1050;
extern undefined4 g_026e1054;
extern undefined4 g_026e1058;
extern undefined4 g_026e105c;
extern undefined4 g_026e1060;
extern undefined4 g_026e1064;
extern undefined4 g_026e1068;
extern undefined4 g_026e106c;
extern undefined4 g_026e1070;
extern undefined4 g_026e1074;
extern undefined4 g_026e1078;
extern undefined4 g_026e107c;
extern undefined4 g_026e1080;
extern undefined4 g_026e1084;
extern undefined4 g_026e1088;
extern undefined4 g_026e108c;
extern undefined4 g_026e1090;
extern undefined4 g_026e1094;
extern undefined4 g_026e1098;
extern undefined4 g_026e109c;
extern undefined4 g_026e10a0;
extern undefined4 g_026e10a4;
// @baa 0x0153a3f0
void sub_0153a3f0(int * param_1)
{
  if (g_026e0b50 == 0) {
    g_026e0b50 = sub_015323d0(L"CommonGame");
    sub_0150e510();
  }
  if (g_026e0b64 == 0) {
    g_026e0b64 = sub_01537f70(L"CommonGame");
    sub_0150ebf0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d120);
  *param_1 = *param_1 + 1;
  if (g_026e0b68 == 0) {
    g_026e0b68 = sub_01534f10(L"CommonGame");
    sub_0150ed50();
  }
  if (g_026e0b3c == 0) {
    g_026e0b3c = sub_01532190(L"CommonGame");
    sub_01533a00();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d180);
  *param_1 = *param_1 + 1;
  if (g_026e0b38 == 0) {
    g_026e0b38 = sub_015320d0(L"CommonGame");
    sub_0150de10();
  }
  if (g_026e0b48 == 0) {
    g_026e0b48 = sub_01532250(L"CommonGame");
    sub_0150e250();
  }
  if (g_026e0b30 == 0) {
    g_026e0b30 = sub_01531f50(L"CommonGame");
    sub_0150db50();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d1e0);
  *param_1 = *param_1 + 1;
  if (g_026e0b4c == 0) {
    g_026e0b4c = sub_01532310(L"CommonGame");
    sub_0150e3b0();
  }
  if (g_026e0b34 == 0) {
    g_026e0b34 = sub_01532010(L"CommonGame");
    sub_0150dcb0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d240);
  *param_1 = *param_1 + 1;
  if (g_026e0b6c == 0) {
    g_026e0b6c = sub_01510a40(L"CommonGame");
    sub_0150eeb0();
  }
  if (g_026e0b44 == 0) {
    g_026e0b44 = sub_01534d90(L"CommonGame");
    sub_0150e0f0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d2a0);
  *param_1 = *param_1 + 1;
  if (g_026e0b40 == 0) {
    g_026e0b40 = sub_0153a130(L"CommonGame");
    sub_0150df90();
  }
  if (g_026e0b58 == 0) {
    g_026e0b58 = sub_01532490(L"CommonGame");
    sub_0150e7d0();
  }
  if (g_026e0b5c == 0) {
    g_026e0b5c = sub_01532550(L"CommonGame");
    sub_0150e930();
  }
  if (g_026e0b60 == 0) {
    g_026e0b60 = sub_0152eb60(L"CommonGame");
    sub_0150ea90();
  }
  if (g_026e0b70 == 0) {
    g_026e0b70 = sub_01532610(L"CommonGame");
    sub_0150f010();
  }
  if (g_026e0b54 == 0) {
    g_026e0b54 = sub_01534e50(L"CommonGame");
    sub_0150e670();
  }
  if (g_026e1068 == 0) {
    g_026e1068 = sub_01544130(L"CommonGame");
    sub_015447a0();
  }
  if (g_026e1060 == 0) {
    g_026e1060 = sub_01546680(L"CommonGame");
    sub_0153c1f0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d300);
  *param_1 = *param_1 + 1;
  if (g_026e1064 == 0) {
    g_026e1064 = sub_01544070(L"CommonGame");
    sub_0153c350();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d360);
  *param_1 = *param_1 + 1;
  if (g_026e1088 == 0) {
    g_026e1088 = sub_01549070(L"CommonGame");
    sub_0153cfe0();
  }
  if (g_026e1070 == 0) {
    g_026e1070 = sub_01548d70(L"CommonGame");
    sub_0153c7a0();
  }
  if (g_026e106c == 0) {
    g_026e106c = sub_01548cb0(L"CommonGame");
    sub_0153c640();
  }
  if (g_026e1074 == 0) {
    g_026e1074 = sub_01548e30(L"CommonGame");
    sub_0153c900();
  }
  if (g_026e1078 == 0) {
    g_026e1078 = sub_01548ef0(L"CommonGame");
    sub_0153ca60();
  }
  if (g_026e107c == 0) {
    g_026e107c = sub_01548fb0(L"CommonGame");
    sub_0153cbc0();
  }
  if (g_026e1084 == 0) {
    g_026e1084 = sub_01542400(L"CommonGame");
    sub_0153ce80();
  }
  if (g_026e1080 == 0) {
    g_026e1080 = sub_01542340(L"CommonGame");
    sub_0153cd20();
  }
  if (g_026e1054 == 0) {
    g_026e1054 = sub_01548ab0(L"CommonGame");
    sub_0153bda0();
  }
  if (g_026e105c == 0) {
    g_026e105c = sub_015420a0(L"CommonGame");
    sub_0153c060();
  }
  if (g_026e1058 == 0) {
    g_026e1058 = sub_01541fe0(L"CommonGame");
    sub_0153bf00();
  }
  if (g_026e104c == 0) {
    g_026e104c = sub_015464c0(L"CommonGame");
    sub_01546d30();
  }
  if (g_026e1050 == 0) {
    g_026e1050 = sub_01546580(L"CommonGame");
    sub_0153bc40();
  }
  if (g_026e109c == 0) {
    g_026e109c = sub_0154a7d0(L"CommonGame");
    sub_0153d7f0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d3c0);
  *param_1 = *param_1 + 1;
  if (g_026e108c == 0) {
    g_026e108c = sub_015497b0(L"CommonGame");
    sub_0153d270();
  }
  if (g_026e1090 == 0) {
    g_026e1090 = sub_01549870(L"CommonGame");
    sub_0153d3d0();
  }
  if (g_026e1098 == 0) {
    g_026e1098 = sub_015425d0(L"CommonGame");
    sub_0153d690();
  }
  if (g_026e1094 == 0) {
    g_026e1094 = sub_01542510(L"CommonGame");
    sub_0153d530();
  }
  if (g_026e1040 == 0) {
    g_026e1040 = sub_01543150(L"CommonGame");
    sub_0153b8a0();
  }
  if (g_026e103c == 0) {
    g_026e103c = sub_01543090(L"CommonGame");
    sub_01543c10();
  }
  if (g_026e1044 == 0) {
    g_026e1044 = sub_01543210(L"CommonGame");
    sub_01543d60();
  }
  if (g_026e1048 == 0) {
    g_026e1048 = sub_015432d0(L"CommonGame");
    sub_01543eb0();
  }
  if (g_026e10a0 == 0) {
    g_026e10a0 = sub_015467f0(L"CommonGame");
    sub_0153dc60();
  }
  if (g_026e10a4 == 0) {
    g_026e10a4 = sub_01544340(L"CommonGame");
    sub_0153ddc0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d420);
  *param_1 = *param_1 + 1;
  if (g_026e1020 == 0) {
    g_026e1020 = sub_0153e8b0(L"CommonGame");
    sub_0153ac90();
  }
  if (g_026e1024 == 0) {
    g_026e1024 = sub_015462c0(L"CommonGame");
    sub_0153adf0();
  }
  if (g_026e1028 == 0) {
    g_026e1028 = sub_01546960(L"CommonGame");
    sub_01546a20();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d480);
  *param_1 = *param_1 + 1;
  if (g_026e102c == 0) {
    g_026e102c = sub_01546380(L"CommonGame");
    sub_0153af60();
  }
  if (g_026e1030 == 0) {
    g_026e1030 = sub_01543b50(L"CommonGame");
    sub_0153b330();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d4e0);
  *param_1 = *param_1 + 1;
  if (g_026e1038 == 0) {
    g_026e1038 = sub_01542dd0(L"CommonGame");
    sub_0153b5f0();
  }
  if (g_026e1034 == 0) {
    g_026e1034 = sub_0154a8a0(L"CommonGame");
    sub_0153b490();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0150d540);
  *param_1 = *param_1 + 1;
  return;
}

// @baa 0x0173a890
void sub_0173a890(void) {  }

int sub_0173a510(void);
int sub_0173a6b0(void);
int sub_0173a710(...);
int sub_0173a770(...);
int sub_0173a7d0(...);
int sub_0173a830(...);
int sub_0173a8a0(void);
int sub_0173aa00(void);
int sub_0173ab60(void);
int sub_0173acc0(void);
int sub_0173d9c0(void);
int sub_0173db20(void);
int sub_0173dca0(void);
int sub_0173df10(void);
int sub_017415c0(...);
int sub_01747760(...);
int sub_0174ca30(...);
int sub_0174caf0(...);
int sub_0174cbb0(...);
int sub_0174d8f0(...);
int sub_0174d9b0(...);
int sub_0174df60(...);
int sub_0174e020(...);
extern undefined4 g_026e5880;
extern undefined4 g_026e5884;
extern undefined4 g_026e5888;
extern undefined4 g_026e588c;
extern undefined4 g_026e5890;
extern undefined4 g_026e58c8;
extern undefined4 g_026e58cc;
extern undefined4 g_026e58d0;
extern undefined4 g_026e58d4;
// @baa 0x0174ec30
void sub_0174ec30(int * param_1)
{
  if (g_026e5880 == 0) {
    g_026e5880 = sub_0174ca30(L"CommonEditor");
    sub_0173a510();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0173a6b0);
  *param_1 = *param_1 + 1;
  if (g_026e588c == 0) {
    g_026e588c = sub_0174caf0(L"CommonEditor");
    sub_0173ab60();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0173a710);
  *param_1 = *param_1 + 1;
  if (g_026e5890 == 0) {
    g_026e5890 = sub_0174cbb0(L"CommonEditor");
    sub_0173acc0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0173a770);
  *param_1 = *param_1 + 1;
  if (g_026e58c8 == 0) {
    g_026e58c8 = sub_0174d8f0(L"CommonEditor");
    sub_0173d9c0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0173a7d0);
  *param_1 = *param_1 + 1;
  if (g_026e5884 == 0) {
    g_026e5884 = sub_017415c0(L"CommonEditor");
    sub_0173a8a0();
  }
  if (g_026e58cc == 0) {
    g_026e58cc = sub_0174d9b0(L"CommonEditor");
    sub_0173db20();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0173a830);
  *param_1 = *param_1 + 1;
  if (g_026e5888 == 0) {
    g_026e5888 = sub_01747760(L"CommonEditor");
    sub_0173aa00();
  }
  if (g_026e58d0 == 0) {
    g_026e58d0 = sub_0174df60(L"CommonEditor");
    sub_0173dca0();
  }
  if (g_026e58d4 == 0) {
    g_026e58d4 = sub_0174e020(L"CommonEditor");
    sub_0173df10();
    return;
  }
  return;
}

// @baa 0x01758ac0
void sub_01758ac0(void) {  }

int sub_017587a0(void);
int sub_01758940(void);
int sub_017589a0(...);
int sub_01758a00(...);
int sub_01758a60(...);
int sub_01758ad0(void);
int sub_01758c30(void);
int sub_01758d90(void);
int sub_01758ef0(void);
int sub_01759050(void);
int sub_017591d0(void);
int sub_0175beb0(...);
int sub_0175ea50(...);
int sub_0175ebc0(...);
int sub_0175ec80(...);
int sub_0175ed40(...);
int sub_0175ee00(...);
int sub_0175f0b0(...);
extern undefined4 g_026e5d90;
extern undefined4 g_026e5d94;
extern undefined4 g_026e5d98;
extern undefined4 g_026e5d9c;
extern undefined4 g_026e5da0;
extern undefined4 g_026e5da4;
extern undefined4 g_026e5da8;
// @baa 0x0175f1a0
void sub_0175f1a0(int * param_1)
{
  if (g_026e5d90 == 0) {
    g_026e5d90 = sub_0175f0b0(L"BmEditor");
    sub_017587a0();
  }
  if (g_026e5d9c == 0) {
    g_026e5d9c = sub_0175ed40(L"BmEditor");
    sub_01758d90();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_01758940);
  *param_1 = *param_1 + 1;
  if (g_026e5d94 == 0) {
    g_026e5d94 = sub_0175ebc0(L"BmEditor");
    sub_01758ad0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_017589a0);
  *param_1 = *param_1 + 1;
  if (g_026e5d98 == 0) {
    g_026e5d98 = sub_0175ec80(L"BmEditor");
    sub_01758c30();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_01758a00);
  *param_1 = *param_1 + 1;
  if (g_026e5da4 == 0) {
    g_026e5da4 = sub_0175ee00(L"BmEditor");
    sub_01759050();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_01758a60);
  *param_1 = *param_1 + 1;
  if (g_026e5da8 == 0) {
    g_026e5da8 = sub_0175beb0(L"BmEditor");
    sub_017591d0();
  }
  if (g_026e5da0 == 0) {
    g_026e5da0 = sub_0175ea50(L"BmEditor");
    sub_01758ef0();
    return;
  }
  return;
}

extern undefined4 g_02605bd8;
// @baa 0x01ad2ee0
void sub_01ad2ee0(undefined * param_1)
{
  if (param_1 != (undefined *)0x0) {
    g_02605bd8 = (undefined4)(param_1);
  }
  return;
}

extern undefined4 g_02605bdc;
extern undefined4 g_02605be0;
extern undefined4 g_02605be4;
extern undefined4 g_02605be8;
// @baa 0x01ad2ef0
void sub_01ad2ef0(undefined * param_1, undefined * param_2, undefined * param_3, undefined * param_4)
{
  if (param_1 != (undefined *)0x0) {
    g_02605bdc = (undefined4)(param_1);
  }
  if (param_2 != (undefined *)0x0) {
    g_02605be0 = (undefined4)(param_2);
  }
  if (param_3 != (undefined *)0x0) {
    g_02605be4 = (undefined4)(param_3);
  }
  if (param_4 != (undefined *)0x0) {
    g_02605be8 = (undefined4)(param_4);
  }
  return;
}

struct C_01af0160 {
    int sub_01af0160(byte);
};

int sub_00402660(...);
extern "C" __declspec(dllimport) int free(...);
// @baa 0x01af0160
int C_01af0160::sub_01af0160(byte param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct D_01e27580 { void sub_015035a0(); };

extern D_01e27580 g_026e0b14;
// @baa 0x01e27580
void sub_01e27580() { g_026e0b14.sub_015035a0(); }
