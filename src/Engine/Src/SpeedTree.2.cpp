// SpeedTree.cpp (part 2 of 8): 403 functions
// Placed here by: neighbours 382, callers 19, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bafcd0
IMPLEMENT_CLASS_AT(USpeedTree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTree.cpp", 89);

void sub_00656790();
// @baa 0x00bafd90
void sub_00bafd90(void) { sub_00656790(); }

extern char g_02019fd8[];
struct C { C* sub_00bafde0(void); };

// @baa 0x00bafde0
C* C::sub_00bafde0(void) { *(int*)((char*)this + 0) = (int)g_02019fd8; return this; }

void sub_0053dfa0(int);
struct S {
    void sub_00bafe10(int A);
};

// @baa 0x00bafe10
void S::sub_00bafe10(int A)
{
    sub_0053dfa0(A);
}

extern char g_02019f1c[];
struct C_00bafe20 { void sub_00bafe20(void); };

// @baa 0x00bafe20
void C_00bafe20::sub_00bafe20(void) { *(int*)((char*)this + 0) = (int)g_02019f1c; }

struct C_00bafe30 {
    undefined4 * sub_00bafe30(byte);
};

int sub_0053dfa0(...);
// @baa 0x00bafe30
undefined4 * C_00bafe30::sub_00bafe30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02019f1c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bbfc00
struct C_00bbfed0{
void sub_00bbfed0();
};

extern undefined4*g_026b0d94;
// @baa 0x00bbfed0
void C_00bbfed0::sub_00bbfed0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bc0060 {
    FString sub_00bc0060();
};

// @baa 0x00bc0060
FString C_00bc0060::sub_00bc0060()
{
    return TEXT("SpeedTree vertex buffer");
}

struct C_00bc00c0{
void sub_00bc00c0();
};

// @baa 0x00bc00c0
void C_00bc00c0::sub_00bc00c0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bc0240 {
    FString sub_00bc0240();
};

// @baa 0x00bc0240
FString C_00bc0240::sub_00bc0240()
{
    return TEXT("SpeedTree vertex buffer");
}

struct C_00bc02a0{
void sub_00bc02a0();
};

// @baa 0x00bc02a0
void C_00bc02a0::sub_00bc02a0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bc0430 {
    FString sub_00bc0430();
};

// @baa 0x00bc0430
FString C_00bc0430::sub_00bc0430()
{
    return TEXT("SpeedTree vertex buffer");
}

struct C_00bc0490{
void sub_00bc0490();
};

// @baa 0x00bc0490
void C_00bc0490::sub_00bc0490(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bc0620 {
    FString sub_00bc0620();
};

// @baa 0x00bc0620
FString C_00bc0620::sub_00bc0620()
{
    return TEXT("SpeedTree vertex buffer");
}

struct C_00bc0680{
void sub_00bc0680();
};

// @baa 0x00bc0680
void C_00bc0680::sub_00bc0680(void)
{
undefined4 param_1=(int)this;

DWORD iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00bc0800 {
    FString sub_00bc0800();
};

// @baa 0x00bc0800
FString C_00bc0800::sub_00bc0800()
{
    return TEXT("SpeedTree vertex buffer");
}

int sub_00bbfcc0(void);
// @baa 0x00bc0830
undefined4 ULensFlare::sub_00bc0830(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bbfcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00bbfd20(void);
// @baa 0x00bc0850
undefined4 ULensFlare::sub_00bc0850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bbfd20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00bbfd80(void);
// @baa 0x00bc0870
undefined4 ULensFlare::sub_00bc0870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bbfd80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00bbfde0(void);
// @baa 0x00bc0890
undefined4 ULensFlare::sub_00bc0890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bbfde0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00bbfe40(void);
// @baa 0x00bc08b0
undefined4 ULensFlare::sub_00bc08b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bbfe40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bd4d60
IMPLEMENT_CLASS_AT(ASpeedTreeActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTree.cpp", 39);

// @baa 0x00bd4d90
struct C_01a5f830 {
    void sub_01a5f830(undefined1);
};

// @baa 0x01a5f830
void C_01a5f830::sub_01a5f830(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}

struct C_01a5f840 {
    void sub_01a5f840(undefined1);
};

// @baa 0x01a5f840
void C_01a5f840::sub_01a5f840(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

struct C_01a5f850 { void sub_01a5f850(int a0); };

// @baa 0x01a5f850
void C_01a5f850::sub_01a5f850(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_01a5f860 { int sub_01a5f860(void); };

// @baa 0x01a5f860
int C_01a5f860::sub_01a5f860(void) { return *(int*)((char*)this + 28); }

struct C_01a5f870 { int sub_01a5f870(void); };

// @baa 0x01a5f870
int C_01a5f870::sub_01a5f870(void) { return *(int*)((char*)this + 92); }

struct C_01a5f880 { int sub_01a5f880(void); };

// @baa 0x01a5f880
int C_01a5f880::sub_01a5f880(void) { return *(int*)((char*)this + 96); }

struct C_01a5f890 { int sub_01a5f890(void); };

// @baa 0x01a5f890
int C_01a5f890::sub_01a5f890(void) { return *(int*)((char*)this + 100); }

struct C_01a5f8a0 {
    void sub_01a5f8a0();
};

// @baa 0x01a5f8a0
void C_01a5f8a0::sub_01a5f8a0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}

void sub_01a74a50();
// @baa 0x01a5f990
void sub_01a5f990(void) { sub_01a74a50(); }

void sub_01a75000();
// @baa 0x01a5f9a0
void sub_01a5f9a0(void) { sub_01a75000(); }

extern undefined4 g_02604f00;
extern undefined4 g_02604f04;
extern undefined4 g_02604f08;
extern undefined4 g_027bced4;
extern undefined4 g_027bced8;
extern undefined4 g_027bcedc;
// @baa 0x01a5f9b0
void sub_01a5f9b0(undefined4 * param_1, undefined4 * param_2)
{
  g_027bced4 = *param_1;
  g_027bced8 = param_1[1];
  g_027bcedc = param_1[2];
  g_02604f00 = *param_2;
  g_02604f04 = param_2[1];
  g_02604f08 = param_2[2];
  return;
}

// @baa 0x01a5f9f0
void sub_01a5f9f0(undefined4 * param_1, undefined4 * param_2)
{
  *param_1 = g_027bced4;
  param_1[1] = g_027bced8;
  param_1[2] = g_027bcedc;
  *param_2 = g_02604f00;
  param_2[1] = g_02604f04;
  param_2[2] = g_02604f08;
  return;
}

struct C_01a5fa30 { char* sub_01a5fa30(void); };

// @baa 0x01a5fa30
char* C_01a5fa30::sub_01a5fa30(void) { return (char*)this + 4; }

struct C_01a5fa40 {
    void sub_01a5fa40(undefined4 *);
};

// @baa 0x01a5fa40
void C_01a5fa40::sub_01a5fa40(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  return;
}

extern undefined4 g_027bde88;
// @baa 0x01a5fa60
void sub_01a5fa60(undefined4 param_1)
{
  g_027bde88 = param_1;
  return;
}

extern undefined4 g_027bde90;
// @baa 0x01a5fa70
void sub_01a5fa70(undefined4 param_1)
{
  g_027bde90 = param_1;
  return;
}

struct C_01a5fa80 {
    undefined1 sub_01a5fa80();
};

// @baa 0x01a5fa80
undefined1 C_01a5fa80::sub_01a5fa80(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x21);
}

struct C_01a5fa90 { int sub_01a5fa90(void); };

// @baa 0x01a5fa90
int C_01a5fa90::sub_01a5fa90(void) { return *(int*)((char*)this + 220); }

struct C_01a5faa0 { char* sub_01a5faa0(void); };

// @baa 0x01a5faa0
char* C_01a5faa0::sub_01a5faa0(void) { return (char*)this + 132; }

struct C_01a5fab0 { char* sub_01a5fab0(void); };

// @baa 0x01a5fab0
char* C_01a5fab0::sub_01a5fab0(void) { return (char*)this + 144; }

struct C_01a5fac0 { void sub_01a5fac0(int a0); };

// @baa 0x01a5fac0
void C_01a5fac0::sub_01a5fac0(int a0) { *(int*)((char*)this + 184) = a0; }

struct C_01a5fad0 { char* sub_01a5fad0(void); };

// @baa 0x01a5fad0
char* C_01a5fad0::sub_01a5fad0(void) { return (char*)this + 252; }

struct C_01a5fae0 { void sub_01a5fae0(int a0); };

// @baa 0x01a5fae0
void C_01a5fae0::sub_01a5fae0(int a0) { *(int*)((char*)this + 248) = a0; }

struct C_01a5faf0 { int sub_01a5faf0(void); };

// @baa 0x01a5faf0
int C_01a5faf0::sub_01a5faf0(void) { return *(int*)((char*)this + 248); }

struct C_01a5fb00 { char* sub_01a5fb00(void); };

// @baa 0x01a5fb00
char* C_01a5fb00::sub_01a5fb00(void) { return (char*)this + 36; }

struct C_01a5fb10 { int sub_01a5fb10(void); };

// @baa 0x01a5fb10
int C_01a5fb10::sub_01a5fb10(void) { return *(int*)((char*)this + 72); }

struct C_01a5fb30 { float sub_01a5fb30(void); };

// @baa 0x01a5fb30
float C_01a5fb30::sub_01a5fb30(void) { return *(float*)((char*)this + 20); }

struct C_01a5fb40 { int sub_01a5fb40(void); };

// @baa 0x01a5fb40
int C_01a5fb40::sub_01a5fb40(void) { return *(int*)((char*)this + 188); }

struct C_01a5fb50 { int sub_01a5fb50(void); };

// @baa 0x01a5fb50
int C_01a5fb50::sub_01a5fb50(void) { return *(int*)((char*)this + 112); }

struct C_01a5fb60 {
    void sub_01a5fb60(undefined1);
};

// @baa 0x01a5fb60
void C_01a5fb60::sub_01a5fb60(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x118) = param_2;
  return;
}

struct C_01a5fb70 {
    undefined1 sub_01a5fb70();
};

// @baa 0x01a5fb70
undefined1 C_01a5fb70::sub_01a5fb70(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x118);
}

struct C_01a5fb80 {
    undefined2 sub_01a5fb80();
};

// @baa 0x01a5fb80
undefined2 C_01a5fb80::sub_01a5fb80(void)
{
    undefined2 * param_1 = (undefined2 *)this;

  return *param_1;
}

struct C_01a5fbb0 { float sub_01a5fbb0(void); };

// @baa 0x01a5fbb0
float C_01a5fbb0::sub_01a5fbb0(void) { return *(float*)((char*)this + 4); }

struct C_01a5fbd0 { float sub_01a5fbd0(void); };

// @baa 0x01a5fbd0
float C_01a5fbd0::sub_01a5fbd0(void) { return *(float*)((char*)this + 0); }

struct C_01a5fbe0 { int sub_01a5fbe0(void); };

// @baa 0x01a5fbe0
int C_01a5fbe0::sub_01a5fbe0(void) { return *(int*)((char*)this + 8); }

struct C_01a5fbf0 { void sub_01a5fbf0(int a0); };

// @baa 0x01a5fbf0
void C_01a5fbf0::sub_01a5fbf0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_01a5fc00 { int sub_01a5fc00(void); };

// @baa 0x01a5fc00
int C_01a5fc00::sub_01a5fc00(void) { return *(int*)((char*)this + 12); }

struct C_01a5fc10 { void sub_01a5fc10(int a0); };

// @baa 0x01a5fc10
void C_01a5fc10::sub_01a5fc10(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_01a5fc20 { int sub_01a5fc20(void); };

// @baa 0x01a5fc20
int C_01a5fc20::sub_01a5fc20(void) { return *(int*)((char*)this + 16); }

struct C_01a5fc30 { void sub_01a5fc30(int a0); };

// @baa 0x01a5fc30
void C_01a5fc30::sub_01a5fc30(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_01a5fc40 {
    undefined1 sub_01a5fc40();
};

// @baa 0x01a5fc40
undefined1 C_01a5fc40::sub_01a5fc40(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x14);
}

struct C_01a5fc50 {
    void sub_01a5fc50(undefined1);
};

// @baa 0x01a5fc50
void C_01a5fc50::sub_01a5fc50(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x14) = param_2;
  return;
}

struct C_01a5fc90 {
    void sub_01a5fc90(undefined4 *, undefined4 *);
};

// @baa 0x01a5fc90
void C_01a5fc90::sub_01a5fc90(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x28);
  *param_3 = *(undefined4 *)(param_1 + 0x2c);
  return;
}

struct C_01a5fcc0 { float sub_01a5fcc0(void); };

// @baa 0x01a5fcc0
float C_01a5fcc0::sub_01a5fcc0(void) { return *(float*)((char*)this + 60); }

struct C_01a5fce0 { float sub_01a5fce0(void); };

// @baa 0x01a5fce0
float C_01a5fce0::sub_01a5fce0(void) { return *(float*)((char*)this + 64); }

struct C_01a5fd10 {
    void sub_01a5fd10();
};

// @baa 0x01a5fd10
void C_01a5fd10::sub_01a5fd10(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

struct C_01a5fd20 { int sub_01a5fd20(void); };

// @baa 0x01a5fd20
int C_01a5fd20::sub_01a5fd20(void) { return *(int*)((char*)this + 0); }

struct C_01a5fd30 { void sub_01a5fd30(int a0); };

// @baa 0x01a5fd30
void C_01a5fd30::sub_01a5fd30(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_01a5fd40 { int sub_01a5fd40(void); };

// @baa 0x01a5fd40
int C_01a5fd40::sub_01a5fd40(void) { return *(int*)((char*)this + 56); }

struct C_01a5fd50 { void sub_01a5fd50(int a0); };

// @baa 0x01a5fd50
void C_01a5fd50::sub_01a5fd50(int a0) { *(int*)((char*)this + 56) = a0; }

struct C_01a5fd60 { int sub_01a5fd60(void); };

// @baa 0x01a5fd60
int C_01a5fd60::sub_01a5fd60(void) { return *(int*)((char*)this + 116); }

struct C_01a5fd70 { void sub_01a5fd70(int a0); };

// @baa 0x01a5fd70
void C_01a5fd70::sub_01a5fd70(int a0) { *(int*)((char*)this + 116) = a0; }

struct C_01a5fd80 { int sub_01a5fd80(void); };

// @baa 0x01a5fd80
int C_01a5fd80::sub_01a5fd80(void) { return *(int*)((char*)this + 120); }

struct C_01a5fd90 { void sub_01a5fd90(int a0); };

// @baa 0x01a5fd90
void C_01a5fd90::sub_01a5fd90(int a0) { *(int*)((char*)this + 120) = a0; }

struct C_01a5fdb0 { float sub_01a5fdb0(void); };

// @baa 0x01a5fdb0
float C_01a5fdb0::sub_01a5fdb0(void) { return *(float*)((char*)this + 112); }

extern undefined1 g_027bdf04;
// @baa 0x01a5fdc0
undefined1 sub_01a5fdc0(int param_1)
{
  return (&g_027bdf04)[param_1];
}

// @baa 0x01a5fdd0
void sub_01a5fdd0(int param_1, undefined1 param_2)
{
  (&g_027bdf04)[param_1] = param_2;
  return;
}

extern undefined4 g_02605000;
// @baa 0x01a5fde0
undefined4 * sub_01a5fde0(int param_1)
{
  return &g_02605000 + param_1 * 0x10;
}

struct C_01a5fdf0 { char* sub_01a5fdf0(void); };

// @baa 0x01a5fdf0
char* C_01a5fdf0::sub_01a5fdf0(void) { return (char*)this + 4; }

struct C_01a5fe20 { char* sub_01a5fe20(void); };

// @baa 0x01a5fe20
char* C_01a5fe20::sub_01a5fe20(void) { return (char*)this + 60; }

struct C_01a5fe50 { char* sub_01a5fe50(void); };

// @baa 0x01a5fe50
char* C_01a5fe50::sub_01a5fe50(void) { return (char*)this + 124; }

struct C_01a5fe80 {
    void sub_01a5fe80(undefined1);
};

// @baa 0x01a5fe80
void C_01a5fe80::sub_01a5fe80(undefined1 param_2)
{
    undefined1 * param_1 = (undefined1 *)this;

  *param_1 = param_2;
  return;
}

struct C_01a5fe90 {
    void sub_01a5fe90(undefined1);
};

// @baa 0x01a5fe90
void C_01a5fe90::sub_01a5fe90(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}

struct C_01a5fea0 { void sub_01a5fea0(int a0); };

// @baa 0x01a5fea0
void C_01a5fea0::sub_01a5fea0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01a5feb0 { int sub_01a5feb0(void); };

// @baa 0x01a5feb0
int C_01a5feb0::sub_01a5feb0(void) { return *(int*)((char*)this + 44); }

// @baa 0x01a5ff40
void sub_01a5ff40(void) {  }

struct C_01a5ffa0 {
    void sub_01a5ffa0();
};

// @baa 0x01a5ffa0
void C_01a5ffa0::sub_01a5ffa0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

struct C_01a60030 {
    void sub_01a60030();
};

extern undefined4 g_0240a47c;
// @baa 0x01a60030
void C_01a60030::sub_01a60030(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240a47c));
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  return;
}

struct C_01a60080 {
    void sub_01a60080();
};

// @baa 0x01a60080
void C_01a60080::sub_01a60080(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

struct C_01a600d0 {
    void sub_01a600d0();
};

// @baa 0x01a600d0
void C_01a600d0::sub_01a600d0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

struct C_01a602c0 {
    undefined4 sub_01a602c0();
};

// @baa 0x01a602c0
undefined4 C_01a602c0::sub_01a602c0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 0x3c);
  }
  return uVar1;
}

struct C_01a60370 {
    undefined4 sub_01a60370();
};

// @baa 0x01a60370
undefined4 C_01a60370::sub_01a60370(void)
{
    int param_1 = (int)this;

  return **(undefined4 **)(param_1 + 0x14);
}

struct C_01a60380 {
    undefined4 sub_01a60380();
};

// @baa 0x01a60380
undefined4 C_01a60380::sub_01a60380(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38);
}

struct C_01a60390 {
    undefined4 sub_01a60390();
};

// @baa 0x01a60390
undefined4 C_01a60390::sub_01a60390(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x74);
}

struct C_01a603a0 {
    float10 sub_01a603a0();
};

// @baa 0x01a603a0
float10 C_01a603a0::sub_01a603a0(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x14) + 0x70);
}

struct C_01a603b0 {
    undefined4 sub_01a603b0();
};

// @baa 0x01a603b0
undefined4 C_01a603b0::sub_01a603b0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x78);
}

// @baa 0x01a603c0
undefined1 sub_01a603c0(int param_1)
{
  return (&g_027bdf04)[param_1];
}

// @baa 0x01a603d0
void sub_01a603d0(int param_1, undefined1 param_2)
{
  (&g_027bdf04)[param_1] = param_2;
  return;
}

// @baa 0x01a603e0
undefined4 * sub_01a603e0(int param_1)
{
  return &g_02605000 + param_1 * 0x10;
}

struct C_01a603f0 {
    int sub_01a603f0();
};

// @baa 0x01a603f0
int C_01a603f0::sub_01a603f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) + 4;
}

struct C_01a60400 {
    int sub_01a60400();
};

// @baa 0x01a60400
int C_01a60400::sub_01a60400(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) + 0x3c;
}

struct C_01a60410 {
    int sub_01a60410();
};

// @baa 0x01a60410
int C_01a60410::sub_01a60410(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) + 0x7c;
}

struct C_01a60460 {
    void sub_01a60460(undefined1);
};

// @baa 0x01a60460
void C_01a60460::sub_01a60460(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x14) = param_2;
  return;
}

struct C_01a60470 {
    undefined4 sub_01a60470();
};

// @baa 0x01a60470
undefined4 C_01a60470::sub_01a60470(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
}

struct C_01a60480 {
    undefined4 sub_01a60480();
};

// @baa 0x01a60480
undefined4 C_01a60480::sub_01a60480(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 8);
}

struct C_01a60490 {
    undefined4 sub_01a60490();
};

// @baa 0x01a60490
undefined4 C_01a60490::sub_01a60490(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
}

struct C_01a604a0 {
    float10 sub_01a604a0();
};

// @baa 0x01a604a0
float10 C_01a604a0::sub_01a604a0(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x18) + 4);
}

struct C_01a604b0 {
    void sub_01a604b0(undefined4 *, undefined4 *);
};

// @baa 0x01a604b0
void C_01a604b0::sub_01a604b0(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  *param_3 = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

extern undefined1 g_027bce68;
// @baa 0x01a60550
void sub_01a60550(undefined1 param_1)
{
  g_027bce68 = param_1;
  return;
}

struct C_01a60590 {
    undefined4 sub_01a60590();
};

// @baa 0x01a60590
undefined4 C_01a60590::sub_01a60590(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x70);
}

struct C_01a605a0 {
    undefined4 sub_01a605a0();
};

// @baa 0x01a605a0
undefined4 C_01a605a0::sub_01a605a0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 4) + 0xbc);
}

struct C_01a605b0 { int sub_01a605b0(void); };

// @baa 0x01a605b0
int C_01a605b0::sub_01a605b0(void) { return *(int*)((char*)this + 200); }

extern undefined4 g_027bce9c;
extern undefined4 g_027bceb0;
// @baa 0x01a606f0
undefined4 * sub_01a606f0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(g_027bce9c);
  if (g_027bceb0 < 0x10) {
    puVar1 = &g_027bce9c;
  }
  return puVar1;
}

void sub_01a946d0();
// @baa 0x01a60910
void sub_01a60910(void) { sub_01a946d0(); }

struct C_01a60d70 { int sub_01a60d70(void); };

// @baa 0x01a60d70
int C_01a60d70::sub_01a60d70(void) { return *(int*)((char*)this + 108); }

extern undefined1 g_027bce69;
// @baa 0x01a60e40
undefined1 sub_01a60e40(void)
{
  return g_027bce69;
}

// @baa 0x01a60e50
void sub_01a60e50(undefined1 param_1)
{
  g_027bce69 = param_1;
  return;
}

extern undefined4 g_027bce5c;
// @baa 0x01a61360
void sub_01a61360(undefined4 param_1)
{
  g_027bce5c = param_1;
  return;
}

extern undefined4 g_027bce60;
// @baa 0x01a61370
undefined4 sub_01a61370(void)
{
  return g_027bce60;
}

struct C_01a65610 {
    void sub_01a65610(undefined4 *);
};

int sub_01a60730(...);
// @baa 0x01a65610
void C_01a65610::sub_01a65610(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[4] = puVar1[4];
    param_2[5] = puVar1[5];
    return;
  }
  sub_01a60730("GetBoundingBox() expects a non-NULL parameter");
  return;
}

// @baa 0x01a67ee0
void sub_01a67ee0(void) {  }

// @baa 0x01a67ef0
void sub_01a67ef0(void) {  }

struct C_01a67f00 {
    undefined4 sub_01a67f00(byte);
};

int sub_00402660(...);
// @baa 0x01a67f00
undefined4 C_01a67f00::sub_01a67f00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a67f20 {
    undefined4 sub_01a67f20(byte);
};

int sub_01a63780(void);
// @baa 0x01a67f20
undefined4 C_01a67f20::sub_01a67f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a63780();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a67f70
void sub_01a67f70(int param_1, undefined4 * param_2)
{
  *(undefined4 *)(param_1 + 4) = *param_2;
  return;
}

// @baa 0x01a67f80
int sub_01a67f80(int a0) { return *(int*)a0; }

// @baa 0x01a67f90
int sub_01a67f90(int a0) { return *(int*)a0; }

// @baa 0x01a68060
int sub_01a68060(int a0) { return *(int*)a0; }

// @baa 0x01a680b0
undefined4 sub_01a680b0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a681a0
void sub_01a681a0(void) {  }

// @baa 0x01a69030
void __stdcall sub_01a69030(int a0, int a1) {  }

// @baa 0x01a69170
void __stdcall sub_01a69170(int a0, int a1) {  }

// @baa 0x01a69470
void sub_01a69470(undefined1 * param_1, undefined1 * param_2, undefined1 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a694c0
void sub_01a694c0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a69550
undefined4 sub_01a69550(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a695c0
void __stdcall sub_01a695c0(int a0) {  }

void sub_01a69040();
// @baa 0x01a698e0
void sub_01a698e0(void) { sub_01a69040(); }

// @baa 0x01a69de0
void sub_01a69de0(void) {  }

struct C_01a73730 {
    undefined4 sub_01a73730(byte);
};

int sub_01a73410(void);
// @baa 0x01a73730
undefined4 C_01a73730::sub_01a73730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a73410();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a73960 {
    void sub_01a73960();
};

int sub_01a73900(...);
// @baa 0x01a73960
void C_01a73960::sub_01a73960(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a73900(param_1,"CSpeedWind::~CSpeedWind");
  return;
}

struct C_01a74870 { C_01a74870* sub_01a74870(void); };

// @baa 0x01a74870
C_01a74870* C_01a74870::sub_01a74870(void) { return this; }

struct C_01a74880 {
    int sub_01a74880(int);
};

// @baa 0x01a74880
int C_01a74880::sub_01a74880(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

// @baa 0x01a74890
int sub_01a74890(int a0) { return a0; }

// @baa 0x01a748c0
int sub_01a748c0(int a0) { return a0; }

struct C_01a74980 { int sub_01a74980(void); };

// @baa 0x01a74980
int C_01a74980::sub_01a74980(void) { return *(int*)((char*)this + 4); }

struct C_01a74990 { int sub_01a74990(void); };

// @baa 0x01a74990
int C_01a74990::sub_01a74990(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a74d00
undefined4 sub_01a74d00(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a74d10
undefined4 sub_01a74d10(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a74d20
undefined4 sub_01a74d20(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a74d70
undefined4 sub_01a74d70(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

extern char g_0240c130[];
struct C_01a75250 { void sub_01a75250(void); };

// @baa 0x01a75250
void C_01a75250::sub_01a75250(void) { *(int*)((char*)this + 0) = (int)g_0240c130; }

struct C_01a75260 {
    undefined4 * sub_01a75260(byte);
};

// @baa 0x01a75260
undefined4 * C_01a75260::sub_01a75260(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240c130));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a75af0 { float sub_01a75af0(void); };

// @baa 0x01a75af0
float C_01a75af0::sub_01a75af0(void) { return *(float*)((char*)this + 4); }

struct C_01a75b00 { float sub_01a75b00(void); };

// @baa 0x01a75b00
float C_01a75b00::sub_01a75b00(void) { return *(float*)((char*)this + 8); }

struct C_01a75b30 { void sub_01a75b30(void); };

// @baa 0x01a75b30
void C_01a75b30::sub_01a75b30(void) { *(int*)((char*)this + 8) = 0; }

// @baa 0x01a75b60
void sub_01a75b60(void) {  }

struct C_01a75c90 { char* sub_01a75c90(void); };

// @baa 0x01a75c90
char* C_01a75c90::sub_01a75c90(void) { return (char*)this + 464; }

struct C_01a75ca0 { char* sub_01a75ca0(void); };

// @baa 0x01a75ca0
char* C_01a75ca0::sub_01a75ca0(void) { return (char*)this + 5760; }

struct C_01a75cb0 { char* sub_01a75cb0(void); };

// @baa 0x01a75cb0
char* C_01a75cb0::sub_01a75cb0(void) { return (char*)this + 11056; }

struct C_01a75cc0 { char* sub_01a75cc0(void); };

// @baa 0x01a75cc0
char* C_01a75cc0::sub_01a75cc0(void) { return (char*)this + 16352; }

struct C_01a75cd0 { char* sub_01a75cd0(void); };

// @baa 0x01a75cd0
char* C_01a75cd0::sub_01a75cd0(void) { return (char*)this + 21648; }

struct C_01a75ce0 { char* sub_01a75ce0(void); };

// @baa 0x01a75ce0
char* C_01a75ce0::sub_01a75ce0(void) { return (char*)this + 26944; }

struct C_01a75cf0 { char* sub_01a75cf0(void); };

// @baa 0x01a75cf0
char* C_01a75cf0::sub_01a75cf0(void) { return (char*)this + 32240; }

struct C_01a75d00 { char* sub_01a75d00(void); };

// @baa 0x01a75d00
char* C_01a75d00::sub_01a75d00(void) { return (char*)this + 37536; }

struct C_01a75d10 { char* sub_01a75d10(void); };

// @baa 0x01a75d10
char* C_01a75d10::sub_01a75d10(void) { return (char*)this + 42832; }

struct C_01a75d20 { char* sub_01a75d20(void); };

// @baa 0x01a75d20
char* C_01a75d20::sub_01a75d20(void) { return (char*)this + 48128; }

struct C_01a75d30 { char* sub_01a75d30(void); };

// @baa 0x01a75d30
char* C_01a75d30::sub_01a75d30(void) { return (char*)this + 53424; }

struct C_01a75d40 { char* sub_01a75d40(void); };

// @baa 0x01a75d40
char* C_01a75d40::sub_01a75d40(void) { return (char*)this + 58720; }

struct C_01a75d50 { char* sub_01a75d50(void); };

// @baa 0x01a75d50
char* C_01a75d50::sub_01a75d50(void) { return (char*)this + 64016; }

struct C_01a75d60 { char* sub_01a75d60(void); };

// @baa 0x01a75d60
char* C_01a75d60::sub_01a75d60(void) { return (char*)this + 69312; }

struct C_01a75d70 { char* sub_01a75d70(void); };

// @baa 0x01a75d70
char* C_01a75d70::sub_01a75d70(void) { return (char*)this + 74608; }

struct C_01a75e20 {
    int sub_01a75e20();
};

// @baa 0x01a75e20
int C_01a75e20::sub_01a75e20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x7c) + 1;
}

struct C_01a75e30 {
    undefined1 sub_01a75e30();
};

// @baa 0x01a75e30
undefined1 C_01a75e30::sub_01a75e30(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x80);
}

struct C_01a75e40 { char* sub_01a75e40(void); };

// @baa 0x01a75e40
char* C_01a75e40::sub_01a75e40(void) { return (char*)this + 164; }

struct C_01a75e50 {
    void sub_01a75e50(undefined4 *, int);
};

// @baa 0x01a75e50
void C_01a75e50::sub_01a75e50(undefined4 * param_2, int param_3)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x14 + param_3 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}

struct C_01a75e80 {
    void sub_01a75e80(undefined1);
};

// @baa 0x01a75e80
void C_01a75e80::sub_01a75e80(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xb0) = param_2;
  return;
}

struct C_01a75e90 {
    void sub_01a75e90(undefined4 *, int);
};

// @baa 0x01a75e90
void C_01a75e90::sub_01a75e90(undefined4 * param_2, int param_3)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x74 + param_3 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}

struct C_01a75ec0 {
    void sub_01a75ec0(undefined4 *, int);
};

// @baa 0x01a75ec0
void C_01a75ec0::sub_01a75ec0(undefined4 * param_2, int param_3)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x44 + param_3 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}

struct C_01a75ef0 { int sub_01a75ef0(void); };

// @baa 0x01a75ef0
int C_01a75ef0::sub_01a75ef0(void) { return *(int*)((char*)this + 0); }

struct C_01a75f00 { float sub_01a75f00(void); };

// @baa 0x01a75f00
float C_01a75f00::sub_01a75f00(void) { return *(float*)((char*)this + 44); }

struct C_01a75f10 { float sub_01a75f10(void); };

// @baa 0x01a75f10
float C_01a75f10::sub_01a75f10(void) { return *(float*)((char*)this + 4); }

struct C_01a75f20 {
    undefined1 sub_01a75f20();
};

// @baa 0x01a75f20
undefined1 C_01a75f20::sub_01a75f20(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

struct C_01a75f30 {
    void sub_01a75f30();
};

// @baa 0x01a75f30
void C_01a75f30::sub_01a75f30(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

struct C_01a75f40 { void sub_01a75f40(int a0); };

// @baa 0x01a75f40
void C_01a75f40::sub_01a75f40(int a0) { *(int*)((char*)this + 32) = a0; }

struct C_01a75f50 {
    void sub_01a75f50();
};

// @baa 0x01a75f50
void C_01a75f50::sub_01a75f50(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

struct C_01a75f60 { int sub_01a75f60(void); };

// @baa 0x01a75f60
int C_01a75f60::sub_01a75f60(void) { return *(int*)((char*)this + 32); }

// @baa 0x01a75ff0
void sub_01a75ff0(void) {  }

struct C_01a76c00 {
    int sub_01a76c00();
};

// @baa 0x01a76c00
int C_01a76c00::sub_01a76c00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01a76c90 {
    int sub_01a76c90();
};

// @baa 0x01a76c90
int C_01a76c90::sub_01a76c90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01a76d30 {
    int sub_01a76d30();
};

// @baa 0x01a76d30
int C_01a76d30::sub_01a76d30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a76d80 {
    int sub_01a76d80();
};

// @baa 0x01a76d80
int C_01a76d80::sub_01a76d80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc4;
}

struct C_01a76e30 {
    int sub_01a76e30();
};

// @baa 0x01a76e30
int C_01a76e30::sub_01a76e30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01a76e50 { C_01a76e50* sub_01a76e50(void); };

// @baa 0x01a76e50
C_01a76e50* C_01a76e50::sub_01a76e50(void) { return this; }

struct C_01a76ec0 {
    int sub_01a76ec0();
};

// @baa 0x01a76ec0
int C_01a76ec0::sub_01a76ec0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01a76ee0 { C_01a76ee0* sub_01a76ee0(void); };

// @baa 0x01a76ee0
C_01a76ee0* C_01a76ee0::sub_01a76ee0(void) { return this; }

struct C_01a76f30 {
    int sub_01a76f30();
};

// @baa 0x01a76f30
int C_01a76f30::sub_01a76f30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a76f50 { C_01a76f50* sub_01a76f50(void); };

// @baa 0x01a76f50
C_01a76f50* C_01a76f50::sub_01a76f50(void) { return this; }

struct C_01a76f70 {
    int sub_01a76f70();
};

// @baa 0x01a76f70
int C_01a76f70::sub_01a76f70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc4;
}

struct C_01a76f90 { C_01a76f90* sub_01a76f90(void); };

// @baa 0x01a76f90
C_01a76f90* C_01a76f90::sub_01a76f90(void) { return this; }

struct C_01a76fb0 {
    int sub_01a76fb0();
};

// @baa 0x01a76fb0
int C_01a76fb0::sub_01a76fb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a76fd0 {
    int sub_01a76fd0();
};

// @baa 0x01a76fd0
int C_01a76fd0::sub_01a76fd0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a77330 { C_01a77330* sub_01a77330(void); };

// @baa 0x01a77330
C_01a77330* C_01a77330::sub_01a77330(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a77340
int sub_01a77340(void) { return 357913941; }

// @baa 0x01a77350
int sub_01a77350(void) { return 178956970; }

// @baa 0x01a77360
int sub_01a77360(void) { return 1073741823; }

// @baa 0x01a77370
int sub_01a77370(void) { return 21913098; }

struct C_01a77460 {
    int sub_01a77460(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01a77460
int C_01a77460::sub_01a77460(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a77490 {
    int sub_01a77490(int *);
};

// @baa 0x01a77490
int C_01a77490::sub_01a77490(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a774c0 {
    int sub_01a774c0(int *);
};

// @baa 0x01a774c0
int C_01a774c0::sub_01a774c0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01a77530 {
    int sub_01a77530(int *);
};

// @baa 0x01a77530
int C_01a77530::sub_01a77530(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc4;
}

struct C_01a77570 { C_01a77570* sub_01a77570(void); };

// @baa 0x01a77570
C_01a77570* C_01a77570::sub_01a77570(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a77580 { C_01a77580* sub_01a77580(void); };

// @baa 0x01a77580
C_01a77580* C_01a77580::sub_01a77580(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a77590 { C_01a77590* sub_01a77590(void); };

// @baa 0x01a77590
C_01a77590* C_01a77590::sub_01a77590(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a775a0
int sub_01a775a0(void) { return 1073741823; }

struct C_01a77710 { C_01a77710* sub_01a77710(void); };

// @baa 0x01a77710
C_01a77710* C_01a77710::sub_01a77710(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a77890
void sub_01a77890(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a778b0
void sub_01a778b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a778d0
void sub_01a778d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01a778f0 {
    undefined4 sub_01a778f0(byte);
};

// @baa 0x01a778f0
undefined4 C_01a778f0::sub_01a778f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a77910
int sub_01a77910(int a0) { return a0; }

// @baa 0x01a77930
int sub_01a77930(int a0) { return a0; }

// @baa 0x01a77950
int sub_01a77950(int a0) { return a0; }

// @baa 0x01a779b0
int sub_01a779b0(int a0) { return a0; }

// @baa 0x01a779e0
void sub_01a779e0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

// @baa 0x01a77a20
void sub_01a77a20(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
  }
  return;
}

// @baa 0x01a77a70
void sub_01a77a70(void) {  }

// @baa 0x01a77ac0
void sub_01a77ac0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a77ae0
int sub_01a77ae0(int a0) { return a0; }

// @baa 0x01a77b00
void sub_01a77b00(void) {  }

// @baa 0x01a77b10
int sub_01a77b10(int a0) { return *(int*)a0; }

// @baa 0x01a77b50
int sub_01a77b50(int a0) { return *(int*)a0; }

// @baa 0x01a77c30
int sub_01a77c30(int a0) { return *(int*)a0; }

// @baa 0x01a77c80
int sub_01a77c80(int a0) { return *(int*)a0; }

// @baa 0x01a77cd0
int sub_01a77cd0(int a0) { return *(int*)a0; }

// @baa 0x01a77d30
void sub_01a77d30(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return;
}

struct C_01a77dc0 {
    undefined4 sub_01a77dc0(byte);
};

int sub_01a76240(void);
// @baa 0x01a77dc0
undefined4 C_01a77dc0::sub_01a77dc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a76240();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a77de0 { int sub_01a77de0(void); };

// @baa 0x01a77de0
int C_01a77de0::sub_01a77de0(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a77e10
int sub_01a77e10(void) { return 0; }

// @baa 0x01a77e20
int sub_01a77e20(void) { return 0; }

// @baa 0x01a77e30
int sub_01a77e30(int a0) { return a0; }

struct C_01a77f00 { int sub_01a77f00(void); };

// @baa 0x01a77f00
int C_01a77f00::sub_01a77f00(void) { return *(int*)((char*)this + 4); }

struct C_01a77f10 { int sub_01a77f10(void); };

// @baa 0x01a77f10
int C_01a77f10::sub_01a77f10(void) { return *(int*)((char*)this + 4); }

struct C_01a77f20 { int sub_01a77f20(void); };

// @baa 0x01a77f20
int C_01a77f20::sub_01a77f20(void) { return *(int*)((char*)this + 4); }

struct C_01a77f30 { int sub_01a77f30(void); };

// @baa 0x01a77f30
int C_01a77f30::sub_01a77f30(void) { return *(int*)((char*)this + 4); }

struct C_01a77f40 { int sub_01a77f40(void); };

// @baa 0x01a77f40
int C_01a77f40::sub_01a77f40(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a77f50
void sub_01a77f50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01a788f0 { C_01a788f0* sub_01a788f0(int a0); };

// @baa 0x01a788f0
C_01a788f0* C_01a788f0::sub_01a788f0(int a0) { return this; }

struct C_01a78900 { C_01a78900* sub_01a78900(int a0); };

// @baa 0x01a78900
C_01a78900* C_01a78900::sub_01a78900(int a0) { return this; }

struct C_01a78910 { C_01a78910* sub_01a78910(int a0); };

// @baa 0x01a78910
C_01a78910* C_01a78910::sub_01a78910(int a0) { return this; }

struct C_01a78920 { C_01a78920* sub_01a78920(int a0); };

// @baa 0x01a78920
C_01a78920* C_01a78920::sub_01a78920(int a0) { return this; }

// @baa 0x01a78930
int sub_01a78930(void) { return 357913941; }

// @baa 0x01a78940
int sub_01a78940(void) { return 178956970; }

// @baa 0x01a78950
int sub_01a78950(void) { return 1073741823; }

// @baa 0x01a78960
int sub_01a78960(void) { return 21913098; }

struct C_01a78970 {
    int sub_01a78970(int *);
};

// @baa 0x01a78970
int C_01a78970::sub_01a78970(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a789e0 {
    int sub_01a789e0(int *);
};

// @baa 0x01a789e0
int C_01a789e0::sub_01a789e0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a78a10 {
    int sub_01a78a10(int *);
};

// @baa 0x01a78a10
int C_01a78a10::sub_01a78a10(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01a78a80 {
    int sub_01a78a80(int *);
};

// @baa 0x01a78a80
int C_01a78a80::sub_01a78a80(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc4;
}

// @baa 0x01a78ac0
int sub_01a78ac0(void) { return 1073741823; }

// @baa 0x01a78db0
void sub_01a78db0(void) {  }

// @baa 0x01a78dc0
void sub_01a78dc0(void) {  }

// @baa 0x01a78dd0
int sub_01a78dd0(int a0) { return *(int*)a0; }

// @baa 0x01a78e30
int sub_01a78e30(int a0) { return *(int*)a0; }

// @baa 0x01a78ea0
int sub_01a78ea0(int a0) { return *(int*)a0; }

// @baa 0x01a78ee0
int sub_01a78ee0(int a0) { return *(int*)a0; }

// @baa 0x01a79000
undefined4 sub_01a79000(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a79130
void sub_01a79130(int param_1)
{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// @baa 0x01a79140
void sub_01a79140(void) {  }

// @baa 0x01a79160
void sub_01a79160(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01a79180
undefined4 sub_01a79180(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a79190
undefined4 sub_01a79190(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a791a0
undefined4 sub_01a791a0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a791b0
undefined4 sub_01a791b0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a791c0
undefined4 sub_01a791c0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

int sub_01a78030(...);
// @baa 0x01a79300
void sub_01a79300(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01a78030(param_1,param_2,param_3,0,0);
  return;
}

// @baa 0x01a795f0
void __stdcall sub_01a795f0(int a0, int a1) {  }

// @baa 0x01a79820
void __stdcall sub_01a79820(int a0, int a1) {  }

// @baa 0x01a7ac40
void sub_01a7ac40(int param_1, int param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// @baa 0x01a7ac90
void sub_01a7ac90(void) {  }

// @baa 0x01a7b510
void __stdcall sub_01a7b510(int a0, int a1) {  }

struct C_01a7b710 {
    void sub_01a7b710(int *, int, int, int, int);
};

int sub_01a798a0(...);
// @baa 0x01a7b710
void C_01a7b710::sub_01a7b710(int * param_2, int param_3, int param_4, int param_5, int param_6)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    uVar1 = sub_01a798a0(param_6,*(undefined4 *)(param_1 + 8),param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  param_2[1] = param_4;
  *param_2 = param_3;
  return;
}

void sub_01a7aed0();
// @baa 0x01a7baa0
void sub_01a7baa0(void) { sub_01a7aed0(); }

void sub_01a7b440();
// @baa 0x01a7bae0
void sub_01a7bae0(void) { sub_01a7b440(); }

void sub_01a7b520();
// @baa 0x01a7baf0
void sub_01a7baf0(void) { sub_01a7b520(); }

struct C_01a7f1e0 {
    undefined4 sub_01a7f1e0(byte);
};

int sub_01a7dc20(void);
// @baa 0x01a7f1e0
undefined4 C_01a7f1e0::sub_01a7f1e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a7dc20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a81480 {
    void sub_01a81480(undefined4, undefined4);
};

// @baa 0x01a81480
void C_01a81480::sub_01a81480(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return;
}

struct C_01a817a0 {
    void sub_01a817a0();
};

int sub_01a67d00(...);
// @baa 0x01a817a0
void C_01a817a0::sub_01a817a0(void)
{
    undefined2 * param_1 = (undefined2 *)this;

  *param_1 = 0;
  sub_01a67d00(param_1 + 2,"~CWindMatrices, m_pMatrices");
  return;
}

struct C_01a81830 {
    void sub_01a81830();
};

extern undefined4 g_027bdef8;
extern undefined2 g_027bdefc;
extern undefined4 g_027bdf00;
// @baa 0x01a81830
void C_01a81830::sub_01a81830(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  g_027bdef8 = g_027bdef8 + -1;
  if (g_027bdef8 == 0) {
    g_027bdefc = 0;
    sub_01a67d00(&g_027bdf00,"~CWindMatrices, m_pMatrices");
  }
  return;
}

struct C_01a81860 {
    void sub_01a81860();
};

// @baa 0x01a81860
void C_01a81860::sub_01a81860(void)
{
    undefined2 * param_1 = (undefined2 *)this;

  if (*(int *)(param_1 + 2) != 0) {
    *param_1 = 0;
    sub_01a67d00(param_1 + 2,"~CWindMatrices, m_pMatrices");
  }
  return;
}

struct C_01a818e0 {
    int sub_01a818e0(int);
};

// @baa 0x01a818e0
int C_01a818e0::sub_01a818e0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + 0x14 + param_2 * 0xc;
}

struct C_01a904b0 {
    int sub_01a904b0();
};

// @baa 0x01a904b0
int C_01a904b0::sub_01a904b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5;
}

struct C_01a90500 { C_01a90500* sub_01a90500(void); };

// @baa 0x01a90500
C_01a90500* C_01a90500::sub_01a90500(void) { return this; }

struct C_01a90600 {
    int sub_01a90600();
};

// @baa 0x01a90600
int C_01a90600::sub_01a90600(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 5;
}

// @baa 0x01a90620
int sub_01a90620(void) { return 134217727; }

struct C_01a906a0 { C_01a906a0* sub_01a906a0(void); };

// @baa 0x01a906a0
C_01a906a0* C_01a906a0::sub_01a906a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a90a20 {
    undefined4 sub_01a90a20(byte);
};

int sub_01a600d0(void);
// @baa 0x01a90a20
undefined4 C_01a90a20::sub_01a90a20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a600d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a90a40 {
    undefined4 sub_01a90a40(byte);
};

// @baa 0x01a90a40
undefined4 C_01a90a40::sub_01a90a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a90a60
int sub_01a90a60(int a0) { return a0; }

// @baa 0x01a90ac0
int sub_01a90ac0(int a0) { return *(int*)a0; }

struct C_01a90b20 {
    undefined4 sub_01a90b20(byte);
};

int sub_01a60080(void);
// @baa 0x01a90b20
undefined4 C_01a90b20::sub_01a90b20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a60080();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a91620 {
    void sub_01a91620();
};

int sub_01a907a0(...);
// @baa 0x01a91620
void C_01a91620::sub_01a91620(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(*(int *)(param_1 + 8) + 0x10) != 1)) {
    sub_01a907a0(param_1 + 0x30,"CLeafGeometry::DeleteGeometry, m_pLods");
  }
  return;
}

struct C_01a91640 { C_01a91640* sub_01a91640(int a0); };

// @baa 0x01a91640
C_01a91640* C_01a91640::sub_01a91640(int a0) { return this; }

// @baa 0x01a91650
int sub_01a91650(void) { return 134217727; }

// @baa 0x01a917f0
int sub_01a917f0(int a0) { return *(int*)a0; }

void sub_01a91d60();
// @baa 0x01a91e80
void sub_01a91e80(void) { sub_01a91d60(); }

struct C_01a92720 {
    undefined4 sub_01a92720(byte);
};

int sub_01a92200(void);
// @baa 0x01a92720
undefined4 C_01a92720::sub_01a92720(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a92200();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a94250 {
    undefined1 sub_01a94250();
};

// @baa 0x01a94250
undefined1 C_01a94250::sub_01a94250(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x30);
}

struct C_01a94260 {
    void sub_01a94260();
};

// @baa 0x01a94260
void C_01a94260::sub_01a94260(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}

struct C_01a94790 { void sub_01a94790(void); };

// @baa 0x01a94790
void C_01a94790::sub_01a94790(void) { *(int*)((char*)this + 32) = 0; }

// @baa 0x01a94cd0
void sub_01a94cd0(void) {  }

struct C_01a956f0 {
    undefined1 sub_01a956f0();
};

// @baa 0x01a956f0
undefined1 C_01a956f0::sub_01a956f0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x14);
}

struct C_01a95700 {
    void sub_01a95700();
};

// @baa 0x01a95700
void C_01a95700::sub_01a95700(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}

struct C_01a957d0 { C_01a957d0* sub_01a957d0(void); };

// @baa 0x01a957d0
C_01a957d0* C_01a957d0::sub_01a957d0(void) { return this; }

struct C_01a957f0 {
    int sub_01a957f0();
};

// @baa 0x01a957f0
int C_01a957f0::sub_01a957f0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01a95900 {
    int sub_01a95900();
};

// @baa 0x01a95900
int C_01a95900::sub_01a95900(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01a95a10 { C_01a95a10* sub_01a95a10(int a0); };

// @baa 0x01a95a10
C_01a95a10* C_01a95a10::sub_01a95a10(int a0) { return this; }

// @baa 0x01a95a20
int sub_01a95a20(void) { return 1073741823; }

// @baa 0x01a95a30
int sub_01a95a30(void) { return 268435455; }

struct C_01a95a40 {
    int sub_01a95a40(int *);
};

// @baa 0x01a95a40
int C_01a95a40::sub_01a95a40(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a95a70 {
    int sub_01a95a70(int *);
};

// @baa 0x01a95a70
int C_01a95a70::sub_01a95a70(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a95aa0 { C_01a95aa0* sub_01a95aa0(void); };

// @baa 0x01a95aa0
C_01a95aa0* C_01a95aa0::sub_01a95aa0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01a95ab0 { C_01a95ab0* sub_01a95ab0(void); };

// @baa 0x01a95ab0
C_01a95ab0* C_01a95ab0::sub_01a95ab0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01a95e90
int sub_01a95e90(int a0) { return a0; }

// @baa 0x01a95ec0
void sub_01a95ec0(void) {  }

// @baa 0x01a95ee0
void sub_01a95ee0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a95f00
int sub_01a95f00(int a0) { return a0; }

// @baa 0x01a95f30
int sub_01a95f30(int a0) { return *(int*)a0; }

// @baa 0x01a95f40
int sub_01a95f40(int a0) { return *(int*)a0; }

struct C_01a95f90 { int sub_01a95f90(void); };

// @baa 0x01a95f90
int C_01a95f90::sub_01a95f90(void) { return *(int*)((char*)this + 4); }

struct C_01a95fa0 { int sub_01a95fa0(void); };

// @baa 0x01a95fa0
int C_01a95fa0::sub_01a95fa0(void) { return *(int*)((char*)this + 4); }

struct C_01a95fb0 { int sub_01a95fb0(void); };

// @baa 0x01a95fb0
int C_01a95fb0::sub_01a95fb0(void) { return *(int*)((char*)this + 4); }

struct C_01a96cd0 { C_01a96cd0* sub_01a96cd0(int a0); };

// @baa 0x01a96cd0
C_01a96cd0* C_01a96cd0::sub_01a96cd0(int a0) { return this; }

// @baa 0x01a96ce0
int sub_01a96ce0(void) { return 1073741823; }

struct C_01a96d40 { C_01a96d40* sub_01a96d40(int a0); };

// @baa 0x01a96d40
C_01a96d40* C_01a96d40::sub_01a96d40(int a0) { return this; }

// @baa 0x01a96d50
int sub_01a96d50(void) { return 268435455; }

struct C_01a96d60 {
    int sub_01a96d60(int *);
};

// @baa 0x01a96d60
int C_01a96d60::sub_01a96d60(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01a96d90 {
    int sub_01a96d90(int *);
};

// @baa 0x01a96d90
int C_01a96d90::sub_01a96d90(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01a96f30
void sub_01a96f30(void) {  }

// @baa 0x01a96f40
int sub_01a96f40(int a0) { return *(int*)a0; }

// @baa 0x01a96f50
int sub_01a96f50(int a0) { return *(int*)a0; }

// @baa 0x01a96fa0
undefined4 sub_01a96fa0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a96fe0
undefined4 sub_01a96fe0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a972b0
void __stdcall sub_01a972b0(int a0, int a1) {  }

// @baa 0x01a974a0
void sub_01a974a0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a97500
undefined4 sub_01a97500(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a97540
undefined4 sub_01a97540(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

void sub_01a972c0();
// @baa 0x01a97590
void sub_01a97590(void) { sub_01a972c0(); }

struct C_01a976f0 {
    undefined4 sub_01a976f0(byte);
};

int sub_01a71640(void);
// @baa 0x01a976f0
undefined4 C_01a976f0::sub_01a976f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a71640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a9ac50
void sub_01a9ac50(void) {  }

struct C_01a9ac90 { int sub_01a9ac90(void); };

// @baa 0x01a9ac90
int C_01a9ac90::sub_01a9ac90(void) { return *(int*)((char*)this + 48); }

struct C_01a9aca0 { int sub_01a9aca0(void); };

// @baa 0x01a9aca0
int C_01a9aca0::sub_01a9aca0(void) { return *(int*)((char*)this + 56); }

struct C_01a9acb0 {
    undefined1 sub_01a9acb0();
};

// @baa 0x01a9acb0
undefined1 C_01a9acb0::sub_01a9acb0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x3c);
}

struct C_01a9ae40 {
    void sub_01a9ae40();
};

// @baa 0x01a9ae40
void C_01a9ae40::sub_01a9ae40(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x81) = 1;
  return;
}

struct C_01a9ae50 {
    int sub_01a9ae50();
};

// @baa 0x01a9ae50
int C_01a9ae50::sub_01a9ae50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x23c;
}

struct C_01a9aeb0 {
    int sub_01a9aeb0();
};

// @baa 0x01a9aeb0
int C_01a9aeb0::sub_01a9aeb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01a9af00 {
    int sub_01a9af00();
};

// @baa 0x01a9af00
int C_01a9af00::sub_01a9af00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01a9af50 {
    int sub_01a9af50();
};

// @baa 0x01a9af50
int C_01a9af50::sub_01a9af50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01a9af70 {
    int sub_01a9af70();
};

// @baa 0x01a9af70
int C_01a9af70::sub_01a9af70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01a9afd0 {
    int sub_01a9afd0();
};

// @baa 0x01a9afd0
int C_01a9afd0::sub_01a9afd0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

// @baa 0x01a9f4c0
void sub_01a9f4c0(void) {  }

// @baa 0x01a9f5c0
void sub_01a9f5c0(void) {  }

// @baa 0x01a9fb10
void __stdcall sub_01a9fb10(int a0, int a1) {  }

// @baa 0x01a9fc70
void __stdcall sub_01a9fc70(int a0, int a1) {  }

struct C_01a9fd20 {
    void sub_01a9fd20(int *, int, int, int, int);
};

int sub_01a9e000(...);
// @baa 0x01a9fd20
void C_01a9fd20::sub_01a9fd20(int * param_2, int param_3, int param_4, int param_5, int param_6)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    uVar1 = sub_01a9e000(param_6,*(undefined4 *)(param_1 + 8),param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  param_2[1] = param_4;
  *param_2 = param_3;
  return;
}

void sub_01a9f930();
// @baa 0x01aa0120
void sub_01aa0120(void) { sub_01a9f930(); }

void sub_01a9fb20();
// @baa 0x01aa0290
void sub_01aa0290(void) { sub_01a9fb20(); }

void sub_01a9fbb0();
// @baa 0x01aa02a0
void sub_01aa02a0(void) { sub_01a9fbb0(); }

void sub_01a9fc80();
// @baa 0x01aa02b0
void sub_01aa02b0(void) { sub_01a9fc80(); }

int sub_01aa13e0(...);
// @baa 0x01aa1ff0
void sub_01aa1ff0(int param_1, int param_2, int param_3, int param_4, undefined4 param_5)
{
  if ((param_3 == 0) || (param_3 != param_1)) {
    _invalid_parameter_noinfo();
  }
  sub_01aa13e0(param_2,param_4,param_4 - param_2 >> 2,param_5);
  return;
}

struct C_01aa26a0 {
    undefined4 sub_01aa26a0(byte);
};

int sub_01aa1870(void);
// @baa 0x01aa26a0
undefined4 C_01aa26a0::sub_01aa26a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01aa1870();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01aa6380();
// @baa 0x01aa6ec0
void sub_01aa6ec0(void) { sub_01aa6380(); }

struct C_01aaa830 { C_01aaa830* sub_01aaa830(void); };

// @baa 0x01aaa830
C_01aaa830* C_01aaa830::sub_01aaa830(void) { return this; }

struct C_01aaa840 { C_01aaa840* sub_01aaa840(int a0); };

// @baa 0x01aaa840
C_01aaa840* C_01aaa840::sub_01aaa840(int a0) { return this; }

// @baa 0x01aaaa20
void sub_01aaaa20(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
  }
  return;
}

struct C_01aac630 { C_01aac630* sub_01aac630(void); };

// @baa 0x01aac630
C_01aac630* C_01aac630::sub_01aac630(void) { return this; }

struct C_01aac640 { C_01aac640* sub_01aac640(int a0); };

// @baa 0x01aac640
C_01aac640* C_01aac640::sub_01aac640(int a0) { return this; }

struct C_01aac860 { C_01aac860* sub_01aac860(int a0); };

// @baa 0x01aac860
C_01aac860* C_01aac860::sub_01aac860(int a0) { return this; }

extern char g_0240ceb0[];
struct C_01aaccb0 { C_01aaccb0* sub_01aaccb0(void); };

// @baa 0x01aaccb0
C_01aaccb0* C_01aaccb0::sub_01aaccb0(void) { *(int*)((char*)this + 0) = (int)g_0240ceb0; return this; }

struct C_01aacce0 { void sub_01aacce0(void); };

// @baa 0x01aacce0
void C_01aacce0::sub_01aacce0(void) { *(int*)((char*)this + 0) = (int)g_0240ceb0; }

// @baa 0x01aacd30
int sub_01aacd30(void) { return 1; }

// @baa 0x01aacd40
void sub_01aacd40(void) {  }

struct C_01aacd50 {
    undefined4 * sub_01aacd50(byte);
};

// @baa 0x01aacd50
undefined4 * C_01aacd50::sub_01aacd50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240ceb0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_0240ced8[];
struct C_01aacd70 { C_01aacd70* sub_01aacd70(void); };

// @baa 0x01aacd70
C_01aacd70* C_01aacd70::sub_01aacd70(void) { *(int*)((char*)this + 0) = (int)g_0240ced8; return this; }

struct C_01aace10 { void sub_01aace10(void); };

// @baa 0x01aace10
void C_01aace10::sub_01aace10(void) { *(int*)((char*)this + 0) = (int)g_0240ceb0; }

// @baa 0x01aace30
void sub_01aace30(void) {  }

void sub_01ab2280();
// @baa 0x01aacf30
void sub_01aacf30(void) { sub_01ab2280(); }

struct C_01aacf40 {
    undefined4 * sub_01aacf40(byte);
};

// @baa 0x01aacf40
undefined4 * C_01aacf40::sub_01aacf40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240ceb0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01aaea50 {
    undefined4 sub_01aaea50(int);
};

// @baa 0x01aaea50
undefined4 C_01aaea50::sub_01aaea50(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 4 + param_2 * 4);
}

// @baa 0x01ab1c80
void sub_01ab1c80(void) {  }

struct C_01ab1c90 {
    int sub_01ab1c90();
};

// @baa 0x01ab1c90
int C_01ab1c90::sub_01ab1c90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) + 0x76c;
}

struct C_01ab1ca0 { int sub_01ab1ca0(void); };

// @baa 0x01ab1ca0
int C_01ab1ca0::sub_01ab1ca0(void) { return *(int*)((char*)this + 16); }

struct C_01ab1cb0 { int sub_01ab1cb0(void); };

// @baa 0x01ab1cb0
int C_01ab1cb0::sub_01ab1cb0(void) { return *(int*)((char*)this + 12); }

struct C_01ab1d00 {
    void sub_01ab1d00(int);
};

// @baa 0x01ab1d00
void C_01ab1d00::sub_01ab1d00(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = param_2 + -0x76c;
  return;
}

struct C_01ab1d10 { void sub_01ab1d10(int a0); };

// @baa 0x01ab1d10
void C_01ab1d10::sub_01ab1d10(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_01ab1d20 { void sub_01ab1d20(int a0); };

// @baa 0x01ab1d20
void C_01ab1d20::sub_01ab1d20(int a0) { *(int*)((char*)this + 12) = a0; }

// @baa 0x01ab21b0
void sub_01ab21b0(void) {  }

struct D { void sub_01aace30(); };

extern D g_027be12c;
// @baa 0x01e28400
void sub_01e28400() { g_027be12c.sub_01aace30(); }

extern D g_027be134;
// @baa 0x01e28410
void sub_01e28410() { g_027be134.sub_01aace30(); }

extern D g_027be13d;
// @baa 0x01e28430
void sub_01e28430() { g_027be13d.sub_01aace30(); }
