// SceneRendering.cpp (part 1 of 2): 87 functions
// Placed here by: neighbours 74, callers 13.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
int*sub_0069d490(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x0069d490
int*C::sub_0069d490(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1f0))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x23c))((int)(iVar2));
}
return param_1;
}

struct C_00a9b640 {
    uint sub_00a9b640();
};

// @baa 0x00a9b640
uint C_00a9b640::sub_00a9b640(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

struct C_00a9b850 {
    void sub_00a9b850(undefined4, undefined4, undefined4, byte);
    int sub_00a74650(int, int, int, int);
};

// @baa 0x00a9b850
void C_00a9b850::sub_00a9b850(undefined4 param_2, undefined4 param_3, undefined4 param_4, byte param_5)
{
    int param_1 = (int)this;
  if ((uint)param_5 == *(uint *)(param_1 + 0xc)) {
    ((C_00a9b850 *)(((char *)this + 0x20)))->sub_00a74650(param_2, param_3, param_4, *(undefined4 *)(param_1 + 0x1c));
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) | 2;
  }
  return;
}

struct C_00a9b9c0 {
    uint sub_00a9b9c0();
};

// @baa 0x00a9b9c0
uint C_00a9b9c0::sub_00a9b9c0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

struct C_00a9bb00 {
    void sub_00a9bb00(undefined4, undefined4, undefined4, byte);
    int sub_00a74650(int, int, int, int);
};

// @baa 0x00a9bb00
void C_00a9bb00::sub_00a9bb00(undefined4 param_2, undefined4 param_3, undefined4 param_4, byte param_5)
{
    int param_1 = (int)this;
  if ((uint)param_5 == *(uint *)(param_1 + 0xc)) {
    ((C_00a9bb00 *)(((char *)this + 0x20)))->sub_00a74650(param_2, param_3, param_4, *(undefined4 *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) | 2;
  }
  return;
}

struct D;
struct C_00a9bb40 {
    char pad_00[0xC];
    DWORD f0C;
    DWORD f10;
    DWORD f14;
    DWORD f18;
    char pad_1C[0x170];
    DWORD f18C;
    void sub_00a9bb40(DWORD a, DWORD b, FLOAT f, BYTE c);
};

struct D {
    void sub_00a74760(DWORD a, FLOAT b, DWORD c, DWORD d);
};

// @baa 0x00a9bb40
void C_00a9bb40::sub_00a9bb40(DWORD a, DWORD b, FLOAT f, BYTE c) {
    if (c == f0C) {
        D* d = (D*)((char*)this + 0x20);
        d->sub_00a74760(a, f, b, f18);
        f18C |= 2;
    }
}

struct CA { int* sub_00a984a0(); };

struct CB { void sub_00a92670(int a, int b); };

struct CC { void sub_00a71160(int a, int b, int c, int d, int e); };

struct V { virtual void vf(int* a, int b); };

// @baa 0x00a9c5f0
void __stdcall sub_00a9c5f0(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB*)(a3 + 0x18))->sub_00a92670(a1, *((CA*)a3)->sub_00a984a0());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC*)(a3 + 0x18))->sub_00a71160(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

extern undefined4 g_026bb694;
// @baa 0x00ab2b40
void sub_00ab2b40(void)
{
  g_026bb694 = 0;
  return;
}

struct C_00ac7a80 {
    int sub_00ac7a80();
};

// @baa 0x00ac7a80
int C_00ac7a80::sub_00ac7a80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac7aa0 {
    int sub_00ac7aa0();
};

// @baa 0x00ac7aa0
int C_00ac7aa0::sub_00ac7aa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac7ac0 {
    int sub_00ac7ac0();
};

// @baa 0x00ac7ac0
int C_00ac7ac0::sub_00ac7ac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac7ae0 {
    int sub_00ac7ae0();
};

// @baa 0x00ac7ae0
int C_00ac7ae0::sub_00ac7ae0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac7c20 {
    int sub_00ac7c20();
};

// @baa 0x00ac7c20
int C_00ac7c20::sub_00ac7c20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct CA_00ae9430 { int* sub_00ae6080(); };

struct CB_00ae9430 { void sub_00a8cf70(int a, int b); };

struct CC_00ae9430 { void sub_00a72150(int a, int b, int c, int d, int e); };

// @baa 0x00ae9430
void __stdcall sub_00ae9430(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB_00ae9430*)(a3 + 0x18))->sub_00a8cf70(a1, *((CA_00ae9430*)a3)->sub_00ae6080());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC_00ae9430*)(a3 + 0x18))->sub_00a72150(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

struct CA_00ae94d0 { int* sub_00ae6130(); };

struct CB_00ae94d0 { void sub_00a8d510(int a, int b); };

struct CC_00ae94d0 { void sub_00a722d0(int a, int b, int c, int d, int e); };

// @baa 0x00ae94d0
void __stdcall sub_00ae94d0(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB_00ae94d0*)(a3 + 0x18))->sub_00a8d510(a1, *((CA_00ae94d0*)a3)->sub_00ae6130());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC_00ae94d0*)(a3 + 0x18))->sub_00a722d0(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

struct C_00af0750 { C_00af0750* sub_00af0750(void); };

// @baa 0x00af0750
C_00af0750* C_00af0750::sub_00af0750(void) { return this; }

struct A_00af0d10 { virtual void sub_00af0e80(); char pad[8]; };

struct B_00af0d10 { virtual void sub_00af0e80(); };

struct C_00af0d10 : A_00af0d10, B_00af0d10 { virtual void sub_00af0e80(); C_00af0d10(); };

C_00af0d10::C_00af0d10() {}

// @baa 0x00af0d10
void C_00af0d10::sub_00af0e80() {}

struct A_00af0d20 { virtual void sub_00af0e80(); char pad[12]; };

struct B_00af0d20 { virtual void sub_00af0e80(); };

struct C_00af0d20 : A_00af0d20, B_00af0d20 { virtual void sub_00af0e80(); C_00af0d20(); };

C_00af0d20::C_00af0d20() {}

// @baa 0x00af0d20
void C_00af0d20::sub_00af0e80() {}

struct C_00af0d90 {
    void sub_00af0d90();
    int sub_00ae5be0(int);
    int sub_00af0d30(int);
    int sub_00ac6c30(int);
};

// @baa 0x00af0d90
void C_00af0d90::sub_00af0d90(void)
{
    int param_1 = (int)this;
  ((C_00af0d90 *)(((char *)this + 0x14)))->sub_00ae5be0(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x40));
  ((C_00af0d90 *)(((char *)this + 0x2cc)))->sub_00af0d30(0);
  ((C_00af0d90 *)(((char *)this + 0x54)))->sub_00ac6c30(0);
  return;
}

struct C_00af0e80 {
    undefined4 sub_00af0e80(byte);
};

int sub_0053dfa0(...);
int sub_00af0dc0(void);
// @baa 0x00af0e80
undefined4 C_00af0e80::sub_00af0e80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00af0dc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00aec1b0();
// @baa 0x00af0ea0
void sub_00af0ea0(void) { sub_00aec1b0(); }

struct C_00af9220 { int sub_00af9220(void); };

// @baa 0x00af9220
int C_00af9220::sub_00af9220(void) { return *(int*)((char*)this + 4); }

struct C_00af9230 { C_00af9230* sub_00af9230(void); };

// @baa 0x00af9230
C_00af9230* C_00af9230::sub_00af9230(void) { return this; }

struct C_00af9380 {
    undefined4 sub_00af9380(byte);
};

int sub_00af9240(void);
// @baa 0x00af9380
undefined4 C_00af9380::sub_00af9380(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00af9240();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00af9470 {
    undefined4 sub_00af9470(byte);
};

int sub_00af7d80(void);
// @baa 0x00af9470
undefined4 C_00af9470::sub_00af9470(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00af7d80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b02af0 { C_00b02af0* sub_00b02af0(void); };

// @baa 0x00b02af0
C_00b02af0* C_00b02af0::sub_00b02af0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00b02b70 {
    undefined4 sub_00b02b70(byte);
};

int sub_007249d0(void);
// @baa 0x00b02b70
undefined4 C_00b02b70::sub_00b02b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00654a90(...);
int sub_00716270(void);
// @baa 0x00b02e10
void UObject::sub_00b02e10(int param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00716270();
  sub_00654a90(*puVar1,param_1 + 0x4c,param_2 + 0x90,0);
  return;
}

struct C_00b02e40 {
    undefined4 sub_00b02e40(byte);
};

// @baa 0x00b02e40
undefined4 C_00b02e40::sub_00b02e40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b02ed0 {
    undefined4 sub_00b02ed0(byte);
};

// @baa 0x00b02ed0
undefined4 C_00b02ed0::sub_00b02ed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b02f60 {
    undefined4 sub_00b02f60(byte);
};

// @baa 0x00b02f60
undefined4 C_00b02f60::sub_00b02f60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b02f80(void);
// @baa 0x00b02ff0
undefined4 ULensFlare::sub_00b02ff0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b02f80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b03080
undefined4 ULensFlare::sub_00b03080(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b03110
undefined4 ULensFlare::sub_00b03110(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b031a0
undefined4 ULensFlare::sub_00b031a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b031c0 { int a, b, c; C_00b031c0(); };

// @baa 0x00b031c0
C_00b031c0::C_00b031c0() : a(0), b(0), c(0) {}

int sub_00b032b0(void);
// @baa 0x00b03370
undefined4 ULensFlare::sub_00b03370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b032b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b03310(void);
// @baa 0x00b033b0
undefined4 ULensFlare::sub_00b033b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b03310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b03750
int sub_00b03750(void) { return 0; }

struct A_00b03770 { virtual void sub_00b03d80(); char pad[16]; };

struct B_00b03770 { virtual void sub_00b03d80(); };

struct C_00b03770 : A_00b03770, B_00b03770 { virtual void sub_00b03d80(); C_00b03770(); };

C_00b03770::C_00b03770() {}

// @baa 0x00b03770
void C_00b03770::sub_00b03d80() {}

struct C_00b03780 { C_00b03780* sub_00b03780(void); };

// @baa 0x00b03780
C_00b03780* C_00b03780::sub_00b03780(void) { *(int*)((char*)this + 96) = 0; return this; }

// @baa 0x00b03790
void ULensFlare::sub_00b03790(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x60) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

struct C_00b03850 { C_00b03850* sub_00b03850(void); };

// @baa 0x00b03850
C_00b03850* C_00b03850::sub_00b03850(void) { *(int*)((char*)this + 48) = 0; return this; }

// @baa 0x00b03860
void ULensFlare::sub_00b03860(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

// @baa 0x00b03980
void ULensFlare::sub_00b03980(void)
{
DWORD param_1=(int)this;

int iVar1;

iVar1=*(DWORD*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

// @baa 0x00b03a00
void ULensFlare::sub_00b03a00(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

// @baa 0x00b03a80
void ULensFlare::sub_00b03a80(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

int sub_00b0a560(void);
// @baa 0x00b0afe0
undefined4 ULensFlare::sub_00b0afe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b0a560();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b0b0c0
uint ULensFlare::sub_00b0b0c0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x60) | -(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1;
}

// @baa 0x00b0b0e0
uint ULensFlare::sub_00b0b0e0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x60) | -(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1;
}

// @baa 0x00b0b170
int ULensFlare::sub_00b0b170(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1 | *(uint *)(param_1 + 0x60)) +
         param_2 * 0xc;
}

// @baa 0x00b0b190
uint ULensFlare::sub_00b0b190(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x30) | -(uint)(*(uint *)(param_1 + 0x30) == 0) & param_1;
}

// @baa 0x00b0b1b0
uint ULensFlare::sub_00b0b1b0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x30) | -(uint)(*(uint *)(param_1 + 0x30) == 0) & param_1;
}

struct C_00b0b240 {
    int sub_00b0b240(int);
};

// @baa 0x00b0b240
int C_00b0b240::sub_00b0b240(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0x30) == 0) & param_1 | *(uint *)(param_1 + 0x30)) +
         param_2 * 4;
}

struct C_00b0b260 {
    int sub_00b0b260();
};

// @baa 0x00b0b260
int C_00b0b260::sub_00b0b260(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b0b540{
void sub_00b0b540();
};

// @baa 0x00b0b540
void C_00b0b540::sub_00b0b540(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00b0b610{
void sub_00b0b610();
};

// @baa 0x00b0b610
void C_00b0b610::sub_00b0b610(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(0x14+param_1);
*(undefined4*)(0x14+param_1)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00b0b6e0{
void sub_00b0b6e0();
};

// @baa 0x00b0b6e0
void C_00b0b6e0::sub_00b0b6e0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00b0b7b0{
void sub_00b0b7b0();
};

// @baa 0x00b0b7b0
void C_00b0b7b0::sub_00b0b7b0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00b0b880{
void sub_00b0b880();
};

// @baa 0x00b0b880
void C_00b0b880::sub_00b0b880(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(0x14+param_1);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00b0b950{
void sub_00b0b950();
};

// @baa 0x00b0b950
void C_00b0b950::sub_00b0b950(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00b0ba20{
void sub_00b0ba20();
};

// @baa 0x00b0ba20
void C_00b0ba20::sub_00b0ba20(void)
{
int param_1=(int)this;
int iVar1;
iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((iVar1));
}
return;
}

struct C_00b0ba80 {
    int sub_00b0ba80(int);
};

// @baa 0x00b0ba80
int C_00b0ba80::sub_00b0ba80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00b0bb40 {
    int sub_00b0bb40();
};

// @baa 0x00b0bb40
int C_00b0bb40::sub_00b0bb40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00b0bb50 {
    int sub_00b0bb50();
};

// @baa 0x00b0bb50
int C_00b0bb50::sub_00b0bb50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00b0d0c0 { float sub_00b0d0c0(void); };

// @baa 0x00b0d0c0
float C_00b0d0c0::sub_00b0d0c0(void) { return *(float*)((char*)this + 472); }

struct C_00b0d0d0 { int sub_00b0d0d0(void); };

// @baa 0x00b0d0d0
int C_00b0d0d0::sub_00b0d0d0(void) { return *(int*)((char*)this + 0); }

int sub_00b0d0e0(void);
// @baa 0x00b0d260
undefined4 ULensFlare::sub_00b0d260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b0d0e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b0d160(void);
// @baa 0x00b0d280
undefined4 ULensFlare::sub_00b0d280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b0d160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b0d1e0(void);
// @baa 0x00b0d2a0
undefined4 ULensFlare::sub_00b0d2a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b0d1e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b0d8d0{
void sub_00b0d8d0();
};

// @baa 0x00b0d8d0
void C_00b0d8d0::sub_00b0d8d0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x254))((int)(iVar1));
}
return;
}

struct C_00b0d9a0{
void sub_00b0d9a0();
};

// @baa 0x00b0d9a0
void C_00b0d9a0::sub_00b0d9a0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00b0da70{
void sub_00b0da70();
};

// @baa 0x00b0da70
void C_00b0da70::sub_00b0da70(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct M_00b20de0 { void sub_00b13f70(); };

struct C_00b20de0 { char pad[20]; M_00b20de0 m; void sub_00b20de0(); };

// @baa 0x00b20de0
void C_00b20de0::sub_00b20de0() { m.sub_00b13f70(); }

// @baa 0x00e13de0
int sub_00e13de0(void) { return 0; }

// @baa 0x00e13df0
uint UGuidCache::sub_00e13df0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00e13e00
int __stdcall sub_00e13e00(int a0) { return 0; }

struct C_view {
    int sub_00a74650(int, int, int, int);
};

// @baa 0x00e13e60
void UGuidCache::sub_00e13e60(undefined4 param_2, undefined4 param_3, undefined4 param_4, byte param_5)
{
    int param_1 = (int)this;
  if ((uint)param_5 == *(uint *)(param_1 + 0xc)) {
    ((C_view *)(((char *)this + 0x20)))->sub_00a74650(param_2, param_3, param_4, *(undefined4 *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) | 2;
  }
  return;
}

struct C_00e13ea0 {
    char pad_00[0xC];
    DWORD f0C;
    DWORD f10;
    DWORD f14;
    DWORD f18;
    char pad_1C[0x170];
    DWORD f18C;
    void sub_00e13ea0(DWORD a, DWORD b, FLOAT f, BYTE c);
};

// @baa 0x00e13ea0
void C_00e13ea0::sub_00e13ea0(DWORD a, DWORD b, FLOAT f, BYTE c) {
    if (c == f0C) {
        D* d = (D*)((char*)this + 0x20);
        d->sub_00a74760(a, f, b, f18);
        f18C |= 2;
    }
}

struct D_01e24a30 { void sub_00ab82d0(); };

extern D_01e24a30 g_026bbccc;
// @baa 0x01e24a30
void sub_01e24a30() { g_026bbccc.sub_00ab82d0(); }

struct D_01e24a40 { void sub_00ab8250(); };

extern D_01e24a40 g_026bbcb0;
// @baa 0x01e24a40
void sub_01e24a40() { g_026bbcb0.sub_00ab8250(); }

struct D_01e24f10 { void sub_00afc300(); };

extern D_01e24f10 g_026bed34;
// @baa 0x01e24f10
void sub_01e24f10() { g_026bed34.sub_00afc300(); }

struct D_01e24f60 { void sub_00afc200(); };

extern D_01e24f60 g_026becfc;
// @baa 0x01e24f60
void sub_01e24f60() { g_026becfc.sub_00afc200(); }

struct D_01e24f70 { void sub_00afc180(); };

extern D_01e24f70 g_026bece0;
// @baa 0x01e24f70
void sub_01e24f70() { g_026bece0.sub_00afc180(); }

struct D_01e24f80 { void sub_00afc100(); };

extern D_01e24f80 g_026becc4;
// @baa 0x01e24f80
void sub_01e24f80() { g_026becc4.sub_00afc100(); }

struct D_01e24f90 { void sub_00afc080(); };

extern D_01e24f90 g_026beca8;
// @baa 0x01e24f90
void sub_01e24f90() { g_026beca8.sub_00afc080(); }

struct D_01e24fa0 { void sub_00afc000(); };

extern D_01e24fa0 g_026bec8c;
// @baa 0x01e24fa0
void sub_01e24fa0() { g_026bec8c.sub_00afc000(); }
