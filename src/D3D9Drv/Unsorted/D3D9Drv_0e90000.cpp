// D3D9Drv_0e90000.cpp (part 1 of 2): 178 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern undefined4 g_026c0df8;
// @baa 0x00e9bbe0
void sub_00e9bbe0(undefined4 * param_1, undefined4 * param_2)
{
  switch(g_026c0df8) {
  case 9:
    *param_1 = 4;
    *param_2 = 2;
    return;
  case 10:
    *param_1 = 8;
    *param_2 = 0;
    return;
  case 0xb:
    *param_1 = 4;
    *param_2 = 4;
    return;
  case 0xc:
    *param_1 = 8;
    *param_2 = 2;
    return;
  default:
    *param_1 = g_026c0df8;
    *param_2 = 0;
    return;
  }
}

struct C { int sub_00e9bc70(void); };

// @baa 0x00e9bc70
int C::sub_00e9bc70(void) { return *(int*)((char*)this + 12); }

struct C_00e9bc80 { int sub_00e9bc80(void); };

// @baa 0x00e9bc80
int C_00e9bc80::sub_00e9bc80(void) { return *(int*)((char*)this + 16); }

struct C_00e9bc90 { int sub_00e9bc90(void); };

// @baa 0x00e9bc90
int C_00e9bc90::sub_00e9bc90(void) { return *(int*)((char*)this + 20); }

struct C_00e9bca0 { int sub_00e9bca0(void); };

// @baa 0x00e9bca0
int C_00e9bca0::sub_00e9bca0(void) { return *(int*)((char*)this + 24); }

// @baa 0x00e9bcb0
undefined4 sub_00e9bcb0(int param_1)
{
  return *(undefined4 *)(param_1 + 0x8c);
}

struct C_00e9bcc0 { C_00e9bcc0* sub_00e9bcc0(void); };

// @baa 0x00e9bcc0
C_00e9bcc0* C_00e9bcc0::sub_00e9bcc0(void) { *(int*)((char*)this + 4) = 0; return this; }

// @baa 0x00e9bcd0
void __stdcall sub_00e9bcd0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00e9bce0
void __stdcall sub_00e9bce0(int a0) {  }

// @baa 0x00e9bcf0
void __stdcall sub_00e9bcf0(int a0, int a1) {  }

// @baa 0x00e9bd00
void __stdcall sub_00e9bd00(int a0) {  }

// @baa 0x00e9bd10
void __stdcall sub_00e9bd10(int a0, int a1) {  }

// @baa 0x00e9bd20
void __stdcall sub_00e9bd20(int a0) {  }

// @baa 0x00e9bd30
void sub_00e9bd30(void) {  }

// @baa 0x00e9c060
void __stdcall sub_00e9c060(int a0, int a1, int a2) {  }

struct C_00e9c070 {
    void sub_00e9c070(undefined4, undefined4);
};

// @baa 0x00e9c070
void C_00e9c070::sub_00e9c070(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x170) = param_2;
  *(undefined4 *)(param_1 + 0x174) = param_3;
  return;
}

struct C_00e9c0d0 { C_00e9c0d0* sub_00e9c0d0(void); };

// @baa 0x00e9c0d0
C_00e9c0d0* C_00e9c0d0::sub_00e9c0d0(void) { return this; }

struct C_00e9c0e0 { int a; C_00e9c0e0(int); };

// @baa 0x00e9c0e0
C_00e9c0e0::C_00e9c0e0(int x) : a(x) {}

struct C_00e9c1b0 { C_00e9c1b0* sub_00e9c1b0(void); };

// @baa 0x00e9c1b0
C_00e9c1b0* C_00e9c1b0::sub_00e9c1b0(void) { return this; }

struct C_00e9c540 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00e9c540* sub_00e9c540();
};

extern INT g_02128184;
// @baa 0x00e9c540
C_00e9c540* C_00e9c540::sub_00e9c540()
{
    Value04 = 0;
    Unk00 = &g_02128184;
    return this;
}

struct C_00e9c550 {
    void sub_00e9c550();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00e9c550
void C_00e9c550::sub_00e9c550(void)
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

struct C_00e9c580 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00e9c580* sub_00e9c580();
};

extern INT g_02128188;
// @baa 0x00e9c580
C_00e9c580* C_00e9c580::sub_00e9c580()
{
    Value04 = 0;
    Unk00 = &g_02128188;
    return this;
}

struct C_00e9c590 {
    void sub_00e9c590();
};

// @baa 0x00e9c590
void C_00e9c590::sub_00e9c590(void)
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

struct C_00e9c5c0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00e9c5c0* sub_00e9c5c0();
};

extern INT g_0212818c;
// @baa 0x00e9c5c0
C_00e9c5c0* C_00e9c5c0::sub_00e9c5c0()
{
    Value04 = 0;
    Unk00 = &g_0212818c;
    return this;
}

struct C_00e9c5d0 {
    void sub_00e9c5d0();
};

// @baa 0x00e9c5d0
void C_00e9c5d0::sub_00e9c5d0(void)
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

struct C_00e9c600 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_00e9c600* sub_00e9c600();
};

extern INT g_02128190;
// @baa 0x00e9c600
C_00e9c600* C_00e9c600::sub_00e9c600()
{
    Value04 = 0;
    Unk00 = &g_02128190;
    return this;
}

struct C_00e9c610 {
    void sub_00e9c610();
};

// @baa 0x00e9c610
void C_00e9c610::sub_00e9c610(void)
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

// @baa 0x00e9c670
int __stdcall sub_00e9c670(int a0, int a1) { return 0; }

// @baa 0x00e9c680
int __stdcall sub_00e9c680(int a0, int a1) { return 0; }

// @baa 0x00e9c690
DWORD __stdcall sub_00e9c690(DWORD a1)
{
    return 0xffffffff;
}

// @baa 0x00e9c860
void __stdcall sub_00e9c860(int a0, int a1, int a2, int a3) {  }

// @baa 0x00e9c8a0
void sub_00e9c8a0(void) {  }

// @baa 0x00e9c8b0
int __stdcall sub_00e9c8b0(int a0) { return 0; }

// @baa 0x00e9c8c0
int sub_00e9c8c0(ushort * param_1, ushort * param_2)
{
  return (((uint)*param_1 - (uint)*param_2) * 0xffff - (uint)param_2[1]) + (uint)param_1[1];
}

struct C_00e9c960{
int*sub_00e9c960(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x00e9c960
int*C_00e9c960::sub_00e9c960(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1d0))((int)(iVar1));
}
return param_1;
}

struct C_00e9c990 {
    int sub_00e9c990(int);
};

// @baa 0x00e9c990
int C_00e9c990::sub_00e9c990(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + param_1;
}

struct C_00e9ca10 { C_00e9ca10* sub_00e9ca10(void); };

// @baa 0x00e9ca10
C_00e9ca10* C_00e9ca10::sub_00e9ca10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct FDelegate;
struct FObj {
    int Unk00; // 0x00
    int Unk04; // 0x04
    void (__stdcall *Handler)(FDelegate*); // 0x08
};

struct FDelegate {
    FObj* Obj; // 0x00
};

struct C_00e9ca20 {
    FDelegate* Delegate; // 0x00
    void sub_00e9ca20();
};

// @baa 0x00e9ca20
void C_00e9ca20::sub_00e9ca20()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9ca30{
int*sub_00e9ca30(int*);
};

// @baa 0x00e9ca30
int*C_00e9ca30::sub_00e9ca30(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9ca60 { int sub_00e9ca60(void); };

// @baa 0x00e9ca60
int C_00e9ca60::sub_00e9ca60(void) { return *(int*)((char*)this + 0); }

struct C_00e9ca70{
int*sub_00e9ca70();
};

// @baa 0x00e9ca70
int*C_00e9ca70::sub_00e9ca70(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9ca90 { int sub_00e9ca90(void); };

// @baa 0x00e9ca90
int C_00e9ca90::sub_00e9ca90(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9caa0
bool sub_00e9caa0(int * param_1)
{
  return *param_1 != 0;
}

struct C_00e9cab0 { C_00e9cab0* sub_00e9cab0(void); };

// @baa 0x00e9cab0
C_00e9cab0* C_00e9cab0::sub_00e9cab0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9cac0 {
    FDelegate* Delegate; // 0x00
    void sub_00e9cac0();
};

// @baa 0x00e9cac0
void C_00e9cac0::sub_00e9cac0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9cad0{
int*sub_00e9cad0(int*);
};

// @baa 0x00e9cad0
int*C_00e9cad0::sub_00e9cad0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9cb00 { int sub_00e9cb00(void); };

// @baa 0x00e9cb00
int C_00e9cb00::sub_00e9cb00(void) { return *(int*)((char*)this + 0); }

struct C_00e9cb10 { C_00e9cb10* sub_00e9cb10(void); };

// @baa 0x00e9cb10
C_00e9cb10* C_00e9cb10::sub_00e9cb10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9cb20 {
    FDelegate* Delegate; // 0x00
    void sub_00e9cb20();
};

// @baa 0x00e9cb20
void C_00e9cb20::sub_00e9cb20()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9cb30{
int*sub_00e9cb30(int*);
};

// @baa 0x00e9cb30
int*C_00e9cb30::sub_00e9cb30(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(undefined4)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9cb60 { int sub_00e9cb60(void); };

// @baa 0x00e9cb60
int C_00e9cb60::sub_00e9cb60(void) { return *(int*)((char*)this + 0); }

struct C_00e9cb70 { C_00e9cb70* sub_00e9cb70(void); };

// @baa 0x00e9cb70
C_00e9cb70* C_00e9cb70::sub_00e9cb70(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9cb80{
undefined4*sub_00e9cb80(int*,int);
};

// @baa 0x00e9cb80
undefined4*C_00e9cb80::sub_00e9cb80(int*param_2,int param_3)
{
undefined4*param_1=(undefined4*)this;

*param_1=(undefined4)(param_2);
if((param_2!=(int*)0x0)&&(param_3!=0)){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
return param_1;
}

struct C_00e9cbb0 {
    FDelegate* Delegate; // 0x00
    void sub_00e9cbb0();
};

// @baa 0x00e9cbb0
void C_00e9cbb0::sub_00e9cbb0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9cbc0{
int*sub_00e9cbc0(int*);
};

// @baa 0x00e9cbc0
int*C_00e9cbc0::sub_00e9cbc0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(DWORD)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9cbf0 { int sub_00e9cbf0(void); };

// @baa 0x00e9cbf0
int C_00e9cbf0::sub_00e9cbf0(void) { return *(int*)((char*)this + 0); }

struct C_00e9cc00 { int sub_00e9cc00(void); };

// @baa 0x00e9cc00
int C_00e9cc00::sub_00e9cc00(void) { return *(int*)((char*)this + 0); }

struct C_00e9cc10{
int*sub_00e9cc10();
};

// @baa 0x00e9cc10
int*C_00e9cc10::sub_00e9cc10(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9cc30 { C_00e9cc30* sub_00e9cc30(void); };

// @baa 0x00e9cc30
C_00e9cc30* C_00e9cc30::sub_00e9cc30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9cc40{
undefined4*sub_00e9cc40(int*,int);
};

// @baa 0x00e9cc40
undefined4*C_00e9cc40::sub_00e9cc40(int*param_2,int param_3)
{
undefined4*param_1=(undefined4*)this;

*param_1=(undefined4)(param_2);
if((param_2!=(int*)0x0)&&(param_3!=0)){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
return param_1;
}

struct C_00e9cc70 {
    FDelegate* Delegate; // 0x00
    void sub_00e9cc70();
};

// @baa 0x00e9cc70
void C_00e9cc70::sub_00e9cc70()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9cca0 { int sub_00e9cca0(void); };

// @baa 0x00e9cca0
int C_00e9cca0::sub_00e9cca0(void) { return *(int*)((char*)this + 0); }

struct C_00e9ccb0 { int sub_00e9ccb0(void); };

// @baa 0x00e9ccb0
int C_00e9ccb0::sub_00e9ccb0(void) { return *(int*)((char*)this + 0); }

struct C_00e9ccc0 { int sub_00e9ccc0(void); };

// @baa 0x00e9ccc0
int C_00e9ccc0::sub_00e9ccc0(void) { return *(int*)((char*)this + 0); }

struct C_00e9ccd0 { C_00e9ccd0* sub_00e9ccd0(void); };

// @baa 0x00e9ccd0
C_00e9ccd0* C_00e9ccd0::sub_00e9ccd0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9cd20 { int sub_00e9cd20(void); };

// @baa 0x00e9cd20
int C_00e9cd20::sub_00e9cd20(void) { return *(int*)((char*)this + 0); }

struct C_00e9cd30 { int sub_00e9cd30(void); };

// @baa 0x00e9cd30
int C_00e9cd30::sub_00e9cd30(void) { return *(int*)((char*)this + 0); }

struct C_00e9cd40 { C_00e9cd40* sub_00e9cd40(void); };

// @baa 0x00e9cd40
C_00e9cd40* C_00e9cd40::sub_00e9cd40(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9cd90 { int sub_00e9cd90(void); };

// @baa 0x00e9cd90
int C_00e9cd90::sub_00e9cd90(void) { return *(int*)((char*)this + 0); }

struct C_00e9cda0 { C_00e9cda0* sub_00e9cda0(void); };

// @baa 0x00e9cda0
C_00e9cda0* C_00e9cda0::sub_00e9cda0(void) { *(int*)((char*)this + 136) = 0; return this; }

struct C_00e9cde0 {
    int sub_00e9cde0(int);
};

// @baa 0x00e9cde0
int C_00e9cde0::sub_00e9cde0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 8;
}

struct C_00e9cdf0 {
    int sub_00e9cdf0(int);
};

// @baa 0x00e9cdf0
int C_00e9cdf0::sub_00e9cdf0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 8;
}

struct C_00e9ce00 { int sub_00e9ce00(void); };

// @baa 0x00e9ce00
int C_00e9ce00::sub_00e9ce00(void) { return *(int*)((char*)this + 136); }

struct C_00e9ce10{
undefined4*sub_00e9ce10(int*,int);
};

// @baa 0x00e9ce10
undefined4*C_00e9ce10::sub_00e9ce10(int*param_2,int param_3)
{
undefined4*param_1=(undefined4*)this;

*param_1=(undefined4)(param_2);
if((param_2!=(int*)0x0)&&(param_3)){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
return param_1;
}

struct C_00e9ce40 {
    FDelegate* Delegate; // 0x00
    void sub_00e9ce40();
};

// @baa 0x00e9ce40
void C_00e9ce40::sub_00e9ce40()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9ce50 { int sub_00e9ce50(void); };

// @baa 0x00e9ce50
int C_00e9ce50::sub_00e9ce50(void) { return *(int*)((char*)this + 0); }

struct C_00e9ce60 { C_00e9ce60* sub_00e9ce60(void); };

// @baa 0x00e9ce60
C_00e9ce60* C_00e9ce60::sub_00e9ce60(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9ce70 {
    FDelegate* Delegate; // 0x00
    void sub_00e9ce70();
};

// @baa 0x00e9ce70
void C_00e9ce70::sub_00e9ce70()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9ce80 { int sub_00e9ce80(void); };

// @baa 0x00e9ce80
int C_00e9ce80::sub_00e9ce80(void) { return *(int*)((char*)this + 0); }

struct C_00e9ce90 { int sub_00e9ce90(void); };

// @baa 0x00e9ce90
int C_00e9ce90::sub_00e9ce90(void) { return *(int*)((char*)this + 0); }

struct C_00e9cea0 { C_00e9cea0* sub_00e9cea0(void); };

// @baa 0x00e9cea0
C_00e9cea0* C_00e9cea0::sub_00e9cea0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9ceb0 {
    FDelegate* Delegate; // 0x00
    void sub_00e9ceb0();
};

// @baa 0x00e9ceb0
void C_00e9ceb0::sub_00e9ceb0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9cec0{
int*sub_00e9cec0(int*);
};

// @baa 0x00e9cec0
int*C_00e9cec0::sub_00e9cec0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if((int*)0x0!=param_2){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9cef0 { int sub_00e9cef0(void); };

// @baa 0x00e9cef0
int C_00e9cef0::sub_00e9cef0(void) { return *(int*)((char*)this + 0); }

struct C_00e9cf00 { int sub_00e9cf00(void); };

// @baa 0x00e9cf00
int C_00e9cf00::sub_00e9cf00(void) { return *(int*)((char*)this + 0); }

struct C_00e9cf10{
int*sub_00e9cf10();
};

// @baa 0x00e9cf10
int*C_00e9cf10::sub_00e9cf10(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9cf30 { C_00e9cf30* sub_00e9cf30(void); };

// @baa 0x00e9cf30
C_00e9cf30* C_00e9cf30::sub_00e9cf30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9cf90 { int sub_00e9cf90(void); };

// @baa 0x00e9cf90
int C_00e9cf90::sub_00e9cf90(void) { return *(int*)((char*)this + 0); }

struct C_00e9cfa0 { int sub_00e9cfa0(void); };

// @baa 0x00e9cfa0
int C_00e9cfa0::sub_00e9cfa0(void) { return *(int*)((char*)this + 0); }

struct C_00e9cfb0 { int a, b, c; C_00e9cfb0(); };

// @baa 0x00e9cfb0
C_00e9cfb0::C_00e9cfb0() : a(0), b(0), c(0) {}

struct C_00e9cfc0 { int sub_00e9cfc0(void); };

// @baa 0x00e9cfc0
int C_00e9cfc0::sub_00e9cfc0(void) { return *(int*)((char*)this + 4); }

struct C_00e9cfd0 { C_00e9cfd0* sub_00e9cfd0(void); };

// @baa 0x00e9cfd0
C_00e9cfd0* C_00e9cfd0::sub_00e9cfd0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d030 { int sub_00e9d030(void); };

// @baa 0x00e9d030
int C_00e9d030::sub_00e9d030(void) { return *(int*)((char*)this + 0); }

struct C_00e9d040 { int sub_00e9d040(void); };

// @baa 0x00e9d040
int C_00e9d040::sub_00e9d040(void) { return *(int*)((char*)this + 0); }

struct C_00e9d050 { int sub_00e9d050(void); };

// @baa 0x00e9d050
int C_00e9d050::sub_00e9d050(void) { return *(int*)((char*)this + 0); }

struct C_00e9d060 {
    uint sub_00e9d060();
};

// @baa 0x00e9d060
uint C_00e9d060::sub_00e9d060(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) & 1;
}

struct C_00e9d070 { int sub_00e9d070(void); };

// @baa 0x00e9d070
int C_00e9d070::sub_00e9d070(void) { return *(int*)((char*)this + 0); }

struct C_00e9d080 {
    uint sub_00e9d080();
};

// @baa 0x00e9d080
uint C_00e9d080::sub_00e9d080(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) >> 1 & 1;
}

struct C_00e9d090 { C_00e9d090* sub_00e9d090(void); };

// @baa 0x00e9d090
C_00e9d090* C_00e9d090::sub_00e9d090(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d0a0 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d0a0();
};

// @baa 0x00e9d0a0
void C_00e9d0a0::sub_00e9d0a0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d0b0 { int sub_00e9d0b0(void); };

// @baa 0x00e9d0b0
int C_00e9d0b0::sub_00e9d0b0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d0c0 { int sub_00e9d0c0(void); };

// @baa 0x00e9d0c0
int C_00e9d0c0::sub_00e9d0c0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d0d0 { int sub_00e9d0d0(void); };

// @baa 0x00e9d0d0
int C_00e9d0d0::sub_00e9d0d0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d0e0 { int sub_00e9d0e0(void); };

// @baa 0x00e9d0e0
int C_00e9d0e0::sub_00e9d0e0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d0f0 { int a; C_00e9d0f0(int); };

// @baa 0x00e9d0f0
C_00e9d0f0::C_00e9d0f0(int x) : a(x) {}

struct C_00e9d100 {
    void sub_00e9d100();
};

// @baa 0x00e9d100
void C_00e9d100::sub_00e9d100(void)
{
    int * param_1 = (int *)this;

  *param_1 = *(int *)(*param_1 + 4);
  return;
}

struct C_00e9d120 { int sub_00e9d120(void); };

// @baa 0x00e9d120
int C_00e9d120::sub_00e9d120(void) { return *(int*)((char*)this + 0); }

struct C_00e9d130 { int a, b, c; C_00e9d130(); };

// @baa 0x00e9d130
C_00e9d130::C_00e9d130() : a(0), b(0), c(0) {}

struct C_00e9d140 { int sub_00e9d140(void); };

// @baa 0x00e9d140
int C_00e9d140::sub_00e9d140(void) { return *(int*)((char*)this + 4); }

struct C_00e9d150 { int sub_00e9d150(void); };

// @baa 0x00e9d150
int C_00e9d150::sub_00e9d150(void) { return *(int*)((char*)this + 4); }

struct C_00e9d160 { C_00e9d160* sub_00e9d160(void); };

// @baa 0x00e9d160
C_00e9d160* C_00e9d160::sub_00e9d160(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d170 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d170();
};

// @baa 0x00e9d170
void C_00e9d170::sub_00e9d170()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d180 { int sub_00e9d180(void); };

// @baa 0x00e9d180
int C_00e9d180::sub_00e9d180(void) { return *(int*)((char*)this + 0); }

struct C_00e9d190 { int sub_00e9d190(void); };

// @baa 0x00e9d190
int C_00e9d190::sub_00e9d190(void) { return *(int*)((char*)this + 0); }

struct C_00e9d1a0 { int a, b, c; C_00e9d1a0(); };

// @baa 0x00e9d1a0
C_00e9d1a0::C_00e9d1a0() : a(0), b(0), c(0) {}

struct C_00e9d1b0 { int sub_00e9d1b0(void); };

// @baa 0x00e9d1b0
int C_00e9d1b0::sub_00e9d1b0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d1c0 { int a, b, c; C_00e9d1c0(); };

// @baa 0x00e9d1c0
C_00e9d1c0::C_00e9d1c0() : a(0), b(0), c(0) {}

struct C_00e9d1d0 { int sub_00e9d1d0(void); };

// @baa 0x00e9d1d0
int C_00e9d1d0::sub_00e9d1d0(void) { return *(int*)((char*)this + 4); }

struct C_00e9d250 { C_00e9d250* sub_00e9d250(void); };

// @baa 0x00e9d250
C_00e9d250* C_00e9d250::sub_00e9d250(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d260 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d260();
};

// @baa 0x00e9d260
void C_00e9d260::sub_00e9d260()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d270 { int sub_00e9d270(void); };

// @baa 0x00e9d270
int C_00e9d270::sub_00e9d270(void) { return *(int*)((char*)this + 0); }

struct C_00e9d280 { int sub_00e9d280(void); };

// @baa 0x00e9d280
int C_00e9d280::sub_00e9d280(void) { return *(int*)((char*)this + 0); }

struct C_00e9d290 { int a, b, c; C_00e9d290(); };

// @baa 0x00e9d290
C_00e9d290::C_00e9d290() : a(0), b(0), c(0) {}

struct C_00e9d2a0 { int sub_00e9d2a0(void); };

// @baa 0x00e9d2a0
int C_00e9d2a0::sub_00e9d2a0(void) { return *(int*)((char*)this + 4); }

struct C_00e9d2b0 { C_00e9d2b0* sub_00e9d2b0(void); };

// @baa 0x00e9d2b0
C_00e9d2b0* C_00e9d2b0::sub_00e9d2b0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d2c0 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d2c0();
};

// @baa 0x00e9d2c0
void C_00e9d2c0::sub_00e9d2c0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d2d0 { int sub_00e9d2d0(void); };

// @baa 0x00e9d2d0
int C_00e9d2d0::sub_00e9d2d0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d2e0 { int sub_00e9d2e0(void); };

// @baa 0x00e9d2e0
int C_00e9d2e0::sub_00e9d2e0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d2f0 { int sub_00e9d2f0(void); };

// @baa 0x00e9d2f0
int C_00e9d2f0::sub_00e9d2f0(void) { return *(int*)((char*)this + 4); }

struct C_00e9d300 { int a, b, c; C_00e9d300(); };

// @baa 0x00e9d300
C_00e9d300::C_00e9d300() : a(0), b(0), c(0) {}

struct C_00e9d310 { int sub_00e9d310(void); };

// @baa 0x00e9d310
int C_00e9d310::sub_00e9d310(void) { return *(int*)((char*)this + 4); }

struct C_00e9d320 { C_00e9d320* sub_00e9d320(void); };

// @baa 0x00e9d320
C_00e9d320* C_00e9d320::sub_00e9d320(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d330 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d330();
};

// @baa 0x00e9d330
void C_00e9d330::sub_00e9d330()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d340 { int sub_00e9d340(void); };

// @baa 0x00e9d340
int C_00e9d340::sub_00e9d340(void) { return *(int*)((char*)this + 0); }

struct C_00e9d350 { int sub_00e9d350(void); };

// @baa 0x00e9d350
int C_00e9d350::sub_00e9d350(void) { return *(int*)((char*)this + 0); }

struct C_00e9d360 { int a, b, c; C_00e9d360(); };

// @baa 0x00e9d360
C_00e9d360::C_00e9d360() : a(0), b(0), c(0) {}

struct C_00e9d370 { int sub_00e9d370(void); };

// @baa 0x00e9d370
int C_00e9d370::sub_00e9d370(void) { return *(int*)((char*)this + 4); }

struct C_00e9d400 { C_00e9d400* sub_00e9d400(void); };

// @baa 0x00e9d400
C_00e9d400* C_00e9d400::sub_00e9d400(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d410 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d410();
};

// @baa 0x00e9d410
void C_00e9d410::sub_00e9d410()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d420 { int sub_00e9d420(void); };

// @baa 0x00e9d420
int C_00e9d420::sub_00e9d420(void) { return *(int*)((char*)this + 0); }

struct C_00e9d430{
undefined4*sub_00e9d430(int*,int);
};

// @baa 0x00e9d430
undefined4*C_00e9d430::sub_00e9d430(int*param_2,int param_3)
{
undefined4*param_1=(undefined4*)this;

*param_1=(undefined4)(param_2);
if((param_2!=(int*)0x0)&&(param_3!=0)){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
return param_1;
}

struct C_00e9d460 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d460();
};

// @baa 0x00e9d460
void C_00e9d460::sub_00e9d460()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d470 { int sub_00e9d470(void); };

// @baa 0x00e9d470
int C_00e9d470::sub_00e9d470(void) { return *(int*)((char*)this + 0); }

struct C_00e9d480 { int sub_00e9d480(void); };

// @baa 0x00e9d480
int C_00e9d480::sub_00e9d480(void) { return *(int*)((char*)this + 4); }

struct C_00e9d490 { C_00e9d490* sub_00e9d490(void); };

// @baa 0x00e9d490
C_00e9d490* C_00e9d490::sub_00e9d490(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e9d4a0 {
    FDelegate* Delegate; // 0x00
    void sub_00e9d4a0();
};

// @baa 0x00e9d4a0
void C_00e9d4a0::sub_00e9d4a0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_00e9d4b0 { int sub_00e9d4b0(void); };

// @baa 0x00e9d4b0
int C_00e9d4b0::sub_00e9d4b0(void) { return *(int*)((char*)this + 0); }

struct C_00e9d4c0 { int sub_00e9d4c0(void); };

// @baa 0x00e9d4c0
int C_00e9d4c0::sub_00e9d4c0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9d540
int*ULensFlare::sub_00e9d540(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if((int*)0x0!=param_2){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00e9d570
int*ULensFlare::sub_00e9d570(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00e9d5a0
int ULensFlare::sub_00e9d5a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9db80
int sub_00e9db80(int a0) { return *(int*)a0; }

struct C_00e9db90 {
    void sub_00e9db90(int *);
};

// @baa 0x00e9db90
void C_00e9db90::sub_00e9db90(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0x90;
  return;
}

struct C_00e9dbb0 { int sub_00e9dbb0(void); };

// @baa 0x00e9dbb0
int C_00e9dbb0::sub_00e9dbb0(void) { return *(int*)((char*)this + 0); }

struct C_00e9dbc0 { int sub_00e9dbc0(void); };

// @baa 0x00e9dbc0
int C_00e9dbc0::sub_00e9dbc0(void) { return *(int*)((char*)this + 0); }

struct C_00e9dbd0 { int sub_00e9dbd0(void); };

// @baa 0x00e9dbd0
int C_00e9dbd0::sub_00e9dbd0(void) { return *(int*)((char*)this + 0); }

struct C_00e9dbe0 { int sub_00e9dbe0(void); };

// @baa 0x00e9dbe0
int C_00e9dbe0::sub_00e9dbe0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00e9dbf0(INT Index);
};

// @baa 0x00e9dbf0
QWORD* S::sub_00e9dbf0(INT Index)
{
    return &Items(Index);
}

struct C_00e9dcb0 { int sub_00e9dcb0(void); };

// @baa 0x00e9dcb0
int C_00e9dcb0::sub_00e9dcb0(void) { return *(int*)((char*)this + 0); }

struct S_00e9dcc0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e9dcc0(INT Index);
};

// @baa 0x00e9dcc0
DWORD* S_00e9dcc0::sub_00e9dcc0(INT Index)
{
    return &Items(Index);
}

struct C_00e9dd10 { int sub_00e9dd10(void); };

// @baa 0x00e9dd10
int C_00e9dd10::sub_00e9dd10(void) { return *(int*)((char*)this + 0); }

struct C_00e9dd40{
int*sub_00e9dd40(int*);
};

// @baa 0x00e9dd40
int*C_00e9dd40::sub_00e9dd40(int*param_2)
{
int*param_1=(int*)this;

param_2=(int*)*param_2;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
return param_1;
}

// @baa 0x00e9dd60
undefined4 sub_00e9dd60(int param_1)
{
  return *(undefined4 *)(param_1 + 0x8c);
}

struct C_00e9dd70 { int sub_00e9dd70(void); };

// @baa 0x00e9dd70
int C_00e9dd70::sub_00e9dd70(void) { return *(int*)((char*)this + 4); }

struct C_00e9de00 { int sub_00e9de00(void); };

// @baa 0x00e9de00
int C_00e9de00::sub_00e9de00(void) { return *(int*)((char*)this + 0); }

struct C_00e9de10 { int sub_00e9de10(void); };

// @baa 0x00e9de10
int C_00e9de10::sub_00e9de10(void) { return *(int*)((char*)this + 0); }

struct C_00e9de20 { int sub_00e9de20(void); };

// @baa 0x00e9de20
int C_00e9de20::sub_00e9de20(void) { return *(int*)((char*)this + 20); }

struct C_00e9de30 { int sub_00e9de30(void); };

// @baa 0x00e9de30
int C_00e9de30::sub_00e9de30(void) { return *(int*)((char*)this + 20); }

struct C_00e9de40 { int a, b, c; C_00e9de40(); };

// @baa 0x00e9de40
C_00e9de40::C_00e9de40() : a(0), b(0), c(0) {}

struct C_00e9de50 { int sub_00e9de50(void); };

// @baa 0x00e9de50
int C_00e9de50::sub_00e9de50(void) { return *(int*)((char*)this + 0); }

struct C_00e9de60 { int sub_00e9de60(void); };

// @baa 0x00e9de60
int C_00e9de60::sub_00e9de60(void) { return *(int*)((char*)this + 0); }

struct C_00e9df50 {
    void sub_00e9df50(undefined4, undefined4, undefined4, undefined4);
};

int sub_00630ea0(...);
// @baa 0x00e9df50
void C_00e9df50::sub_00e9df50(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00e9df70{
int sub_00e9df70(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e9df70
int C_00e9df70::sub_00e9df70(byte param_2)
{
undefined4 param_1=(int)this;

int*piVar1;

piVar1=*(int**)(param_1+0x90);
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

// @baa 0x00e9e0c0
void sub_00e9e0c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_00e9e520 { C_00e9e520* sub_00e9e520(void); };

// @baa 0x00e9e520
C_00e9e520* C_00e9e520::sub_00e9e520(void) { return this; }

struct C_00e9e530 { C_00e9e530* sub_00e9e530(void); };

// @baa 0x00e9e530
C_00e9e530* C_00e9e530::sub_00e9e530(void) { return this; }

struct C_00e9e540 { int sub_00e9e540(void); };

// @baa 0x00e9e540
int C_00e9e540::sub_00e9e540(void) { return *(int*)((char*)this + 16); }

struct C_00e9ff80 {
    undefined4 * sub_00e9ff80(byte);
};

// @baa 0x00e9ff80
undefined4 * C_00e9ff80::sub_00e9ff80(byte param_2)
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
