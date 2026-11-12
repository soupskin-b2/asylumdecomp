// GFxUIEngine.cpp (part 1 of 3): 117 functions
// Placed here by: neighbours 76, callers 5, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_006509d0(void); };

// @baa 0x006509d0
C* C::sub_006509d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e49200 { int sub_00e49200(void); };

// @baa 0x00e49200
int C_00e49200::sub_00e49200(void) { return *(int*)((char*)this + 12); }

struct A_00e49280 { virtual void sub_00e492b0(); char pad[16]; };

struct B_00e49280 { virtual void sub_00e492b0(); };

struct C_00e49280 : A_00e49280, B_00e49280 { virtual void sub_00e492b0(); C_00e49280(); };

C_00e49280::C_00e49280() {}

// @baa 0x00e49280
void C_00e49280::sub_00e492b0() {}

struct C_00e492e0 {
    undefined4 * sub_00e492e0(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_023f4ef8;
// @baa 0x00e492e0
undefined4 * C_00e492e0::sub_00e492e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4ef8));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_021066e0[];
struct C_00e49300 { C_00e49300* sub_00e49300(void); };

// @baa 0x00e49300
C_00e49300* C_00e49300::sub_00e49300(void) { *(int*)((char*)this + 0) = (int)g_021066e0; return this; }

void sub_0053dfa0(int);
struct S {
    void sub_00e49310(int A);
};

// @baa 0x00e49310
void S::sub_00e49310(int A)
{
    sub_0053dfa0(A);
}

struct S_00e49320 {
    int Unk00;
};

extern void __cdecl sub_0053df40(struct S_00e49320 const &Ref, int Value);
// @baa 0x00e49320
void __stdcall sub_00e49320(struct S_00e49320 const &Ref)
{
    sub_0053df40(Ref, 8);
}

// @baa 0x00e49360
int sub_00e49360(void) { return 0; }

struct C_00e49370 {
    undefined4 * sub_00e49370(byte);
};

extern undefined4 g_023f4d60;
// @baa 0x00e49370
undefined4 * C_00e49370::sub_00e49370(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4d60));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e49390 {
    undefined4 * sub_00e49390();
    int sub_00e48990(int);
};

extern undefined4 g_021066fc;
// @baa 0x00e49390
undefined4 * C_00e49390::sub_00e49390(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e49390 *)(this))->sub_00e48990(0xc);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)(&g_021066fc);
  return param_1;
}

// @baa 0x00e49480
int sub_00e49480(void) { return 0; }

struct A_00e49490 { virtual void sub_00e525c0(); char pad[12]; };

struct B_00e49490 { virtual void sub_00e525c0(); };

struct C_00e49490 : A_00e49490, B_00e49490 { virtual void sub_00e525c0(); C_00e49490(); };

C_00e49490::C_00e49490() {}

// @baa 0x00e49490
void C_00e49490::sub_00e525c0() {}

struct C_00e49510 {
    undefined4 * sub_00e49510();
    int sub_00e48990(int);
};

extern undefined4 g_02106724;
// @baa 0x00e49510
undefined4 * C_00e49510::sub_00e49510(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e49510 *)(this))->sub_00e48990(5);
  *param_1 = (undefined4)(&g_02106724);
  return param_1;
}

struct C_00e49530 {
    undefined4 * sub_00e49530();
    int sub_00e48990(int);
};

extern undefined4 g_0210672c;
// @baa 0x00e49530
undefined4 * C_00e49530::sub_00e49530(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e49530 *)(this))->sub_00e48990(8);
  *param_1 = (undefined4)(&g_0210672c);
  return param_1;
}

struct C_00e49550 {
    undefined4 * sub_00e49550();
    int sub_00e48990(int);
};

extern undefined4 g_02106734;
// @baa 0x00e49550
undefined4 * C_00e49550::sub_00e49550(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e49550 *)(this))->sub_00e48990(9);
  *param_1 = (undefined4)(&g_02106734);
  return param_1;
}

typedef uint size_t;

typedef char * va_list;

extern "C" __declspec(dllimport) int _vsnprintf_s(...);
// @baa 0x00e495a0
int sub_00e495a0(char * param_1, size_t param_2, char * param_3, va_list param_4)
{
  int iVar1;
  
  *param_1 = '\0';
  iVar1 = _vsnprintf_s(param_1,param_2,0xffffffff,param_3,param_4);
  if (iVar1 == -1) {
    param_1[param_2 - 1] = '\0';
    iVar1 = param_2 - 1;
  }
  return iVar1;
}

struct A_00e495e0 { virtual void sub_00e52f70(); char pad[16]; };

struct B_00e495e0 { virtual void sub_00e52f70(); };

struct C_00e495e0 : A_00e495e0, B_00e495e0 { virtual void sub_00e52f70(); C_00e495e0(); };

C_00e495e0::C_00e495e0() {}

// @baa 0x00e495e0
void C_00e495e0::sub_00e52f70() {}

struct C_00e495f0 {
    void sub_00e495f0();
};

int sub_018d3de0(void);
extern undefined * g_023f4f44;
// @baa 0x00e495f0
void C_00e495f0::sub_00e495f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e49600 {
    void sub_00e49600();
};

// @baa 0x00e49600
void C_00e49600::sub_00e49600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e49610 {
    void sub_00e49610();
};

// @baa 0x00e49610
void C_00e49610::sub_00e49610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e49620 {
    void sub_00e49620();
};

// @baa 0x00e49620
void C_00e49620::sub_00e49620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e4ba40{
int sub_00e4ba40(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00e4ba40
int C_00e4ba40::sub_00e4ba40(undefined4*param_2)
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

struct C_00e52e10 {
    undefined4 * sub_00e52e10();
    int sub_00e48990(int);
};

extern undefined4 g_02106f8c;
extern undefined4 g_027b897c;
// @baa 0x00e52e10
undefined4 * C_00e52e10::sub_00e52e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e52e10 *)(this))->sub_00e48990(10);
  g_027b897c = 0;
  *param_1 = (undefined4)(&g_02106f8c);
  return param_1;
}

struct C_00e52e30 { int a; C_00e52e30(int); };

// @baa 0x00e52e30
C_00e52e30::C_00e52e30(int x) : a(x) {}

struct C_00e52e60 { int sub_00e52e60(void); };

// @baa 0x00e52e60
int C_00e52e60::sub_00e52e60(void) { return *(int*)((char*)this + 0); }

struct C_00e52e70 {
    void sub_00e52e70();
};

// @baa 0x00e52e70
void C_00e52e70::sub_00e52e70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00e566a0 { void* Data; int Num; int Max; void sub_00e566a0(); };

// @baa 0x00e566a0
void C_00e566a0::sub_00e566a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00e5f170
IMPLEMENT_CLASS_AT(UGFxEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIEngine.cpp", 79);

// @baa 0x00e5f7c0
int sub_005eae70(...);
int sub_00e44e00(void);
int sub_00e5d880(...);
extern undefined4 g_026caf20;
// @baa 0x00e62b50
void sub_00e62b50(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026caf20 == 0) {
    g_026caf20 = sub_00e5d880(L"GFxUI");
    sub_00e44e00();
  }
  sub_005eae70(g_026caf20,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct C_018deed0 {
    undefined4 * sub_018deed0(byte);
};

int sub_00402660(...);
extern undefined4 g_023f4f04;
// @baa 0x018deed0
undefined4 * C_018deed0::sub_018deed0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4f04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018deef0 {
    undefined4 sub_018deef0();
};

// @baa 0x018deef0
undefined4 C_018deef0::sub_018deef0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x7c);
}

struct C_018def00 {
    int sub_018def00();
};

// @baa 0x018def00
int C_018def00::sub_018def00(void)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0xc;
}

struct C_018def20 { int sub_018def20(void); };

// @baa 0x018def20
int C_018def20::sub_018def20(void) { return *(int*)((char*)this + 56); }

struct C_018def30 { int sub_018def30(void); };

// @baa 0x018def30
int C_018def30::sub_018def30(void) { return *(int*)((char*)this + 16); }

struct C_018def40 { int sub_018def40(void); };

// @baa 0x018def40
int C_018def40::sub_018def40(void) { return *(int*)((char*)this + 20); }

struct C_018def50 { int sub_018def50(void); };

// @baa 0x018def50
int C_018def50::sub_018def50(void) { return *(int*)((char*)this + 48); }

struct C_018def60 {
    undefined4 sub_018def60();
};

// @baa 0x018def60
undefined4 C_018def60::sub_018def60(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
}

struct C_018def70 {
    undefined4 sub_018def70();
};

// @baa 0x018def70
undefined4 C_018def70::sub_018def70(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28);
}

struct C_018defc0 {
    undefined4 * sub_018defc0(byte);
};

extern undefined4 g_023f4f10;
// @baa 0x018defc0
undefined4 * C_018defc0::sub_018defc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4f10));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018e2450 {
    int sub_018e2450(int);
};

// @baa 0x018e2450
int C_018e2450::sub_018e2450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 0xc + param_2;
}

struct C_018e2470 {
    undefined1 sub_018e2470();
};

// @baa 0x018e2470
undefined1 C_018e2470::sub_018e2470(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x14);
}

struct C_018e2560 { int sub_018e2560(void); };

// @baa 0x018e2560
int C_018e2560::sub_018e2560(void) { return *(int*)((char*)this + 36); }

// @baa 0x018e25d0
void sub_018e25d0(void) {  }

struct C_018e2680 {
    int sub_018e2680();
};

// @baa 0x018e2680
int C_018e2680::sub_018e2680(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    return *(int *)(param_1 + 4) + 0x10;
  }
  return 0;
}

struct C_018e26c0 { int sub_018e26c0(void); };

// @baa 0x018e26c0
int C_018e26c0::sub_018e26c0(void) { return *(int*)((char*)this + 8); }

struct C_018e2760 { int sub_018e2760(void); };

// @baa 0x018e2760
int C_018e2760::sub_018e2760(void) { return *(int*)((char*)this + 0); }

struct C_018e2770 { int sub_018e2770(void); };

// @baa 0x018e2770
int C_018e2770::sub_018e2770(void) { return *(int*)((char*)this + 0); }

struct C_018e27f0 { int sub_018e27f0(void); };

// @baa 0x018e27f0
int C_018e27f0::sub_018e27f0(void) { return *(int*)((char*)this + 0); }

struct C_018e2980 { int sub_018e2980(void); };

// @baa 0x018e2980
int C_018e2980::sub_018e2980(void) { return *(int*)((char*)this + 20); }

struct C_018e65e0 { int sub_018e65e0(void); };

// @baa 0x018e65e0
int C_018e65e0::sub_018e65e0(void) { return *(int*)((char*)this + 28); }

struct C_018e6740 { int sub_018e6740(void); };

// @baa 0x018e6740
int C_018e6740::sub_018e6740(void) { return *(int*)((char*)this + 0); }

struct C_018e6750 { int sub_018e6750(void); };

// @baa 0x018e6750
int C_018e6750::sub_018e6750(void) { return *(int*)((char*)this + 0); }

struct C_018e6760 {
    int sub_018e6760(int);
};

// @baa 0x018e6760
int C_018e6760::sub_018e6760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_018e6770 { int sub_018e6770(void); };

// @baa 0x018e6770
int C_018e6770::sub_018e6770(void) { return *(int*)((char*)this + 4); }

struct C_018e6790 { int sub_018e6790(void); };

// @baa 0x018e6790
int C_018e6790::sub_018e6790(void) { return *(int*)((char*)this + 0); }

struct C_018e67a0 { int sub_018e67a0(void); };

// @baa 0x018e67a0
int C_018e67a0::sub_018e67a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x018e67c0
int sub_018e67c0(int a0) { return *(int*)a0; }

struct C_018e6800 {
    uint sub_018e6800();
};

// @baa 0x018e6800
uint C_018e6800::sub_018e6800(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_018e6810 { unsigned sub_018e6810(void); };

// @baa 0x018e6810
unsigned C_018e6810::sub_018e6810(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_018e6820 { unsigned sub_018e6820(void); };

// @baa 0x018e6820
unsigned C_018e6820::sub_018e6820(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_018e6830 {
    uint sub_018e6830();
};

// @baa 0x018e6830
uint C_018e6830::sub_018e6830(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_018e6840 {
    void sub_018e6840(uint);
};

// @baa 0x018e6840
void C_018e6840::sub_018e6840(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_018e6890 {
    undefined4 sub_018e6890();
};

// @baa 0x018e6890
undefined4 C_018e6890::sub_018e6890(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70);
}

struct C_018e68a0 { int sub_018e68a0(void); };

// @baa 0x018e68a0
int C_018e68a0::sub_018e68a0(void) { return *(int*)((char*)this + 16); }

struct C_018e68b0 {
    undefined4 sub_018e68b0();
};

// @baa 0x018e68b0
undefined4 C_018e68b0::sub_018e68b0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10);
}

struct C_018e68c0 {
    undefined4 sub_018e68c0();
};

// @baa 0x018e68c0
undefined4 C_018e68c0::sub_018e68c0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18);
}

struct C_018e68d0 {
    int sub_018e68d0();
};

// @baa 0x018e68d0
int C_018e68d0::sub_018e68d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1c) + 0x1c;
}

struct C_018e6950 { int sub_018e6950(void); };

// @baa 0x018e6950
int C_018e6950::sub_018e6950(void) { return *(int*)((char*)this + 0); }

// @baa 0x018e6a20
undefined4 * sub_018e6a20(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_018e6ac0 { int sub_018e6ac0(void); };

// @baa 0x018e6ac0
int C_018e6ac0::sub_018e6ac0(void) { return *(int*)((char*)this + 0); }

struct C_018e6ba0 { int sub_018e6ba0(void); };

// @baa 0x018e6ba0
int C_018e6ba0::sub_018e6ba0(void) { return *(int*)((char*)this + 176); }

void sub_018e6ad0();
// @baa 0x018e6dd0
void sub_018e6dd0(void) { sub_018e6ad0(); }

void sub_0190cb60();
// @baa 0x0190e140
void sub_0190e140(void) { sub_0190cb60(); }

void sub_0190cef0();
// @baa 0x0190e180
void sub_0190e180(void) { sub_0190cef0(); }

void sub_0190cc10();
// @baa 0x0190e250
void sub_0190e250(void) { sub_0190cc10(); }

void sub_0190cb00();
// @baa 0x0190e260
void sub_0190e260(void) { sub_0190cb00(); }

void sub_0190cd60();
// @baa 0x0190e310
void sub_0190e310(void) { sub_0190cd60(); }

void sub_0190ebc0();
// @baa 0x0190ef40
void sub_0190ef40(void) { sub_0190ebc0(); }

// @baa 0x0190f050
void sub_0190f050(void) { sub_0190cb00(); }

void sub_0190e290();
// @baa 0x0190f0a0
void sub_0190f0a0(void) { sub_0190e290(); }

void sub_0190e330();
// @baa 0x0190f0e0
void sub_0190f0e0(void) { sub_0190e330(); }

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C_00e493d0
{
    char pad_00[0x8];
    long Counter;

    void sub_00e493d0();
};

// @baa 0x00e493d0
void C_00e493d0::sub_00e493d0()
{
    InterlockedExchangeAdd(&Counter, 1);
}

extern FName g_026caf44;
 /* GFXUI_FSCommand (registered from L"FSCommand" in 00e427c0) */
/* The FSCommand script event's generated glue (GFxUIClasses.h). */
struct GFxFSCmdHandler_eventFSCommand_Parms
{
    class UGFxMovie* Movie;
    FString cmd;
    FString arg;
    UBOOL ReturnValue;
};

struct UGFxFSCmdHandler_ : public UGFxFSCmdHandler
{
    UBOOL eventFSCommand(class UGFxMovie* Movie, const FString& cmd, const FString& arg);
};

// @baa 0x00e58af0
UBOOL UGFxFSCmdHandler_::eventFSCommand(class UGFxMovie* Movie, const FString& cmd, const FString& arg)
{
    GFxFSCmdHandler_eventFSCommand_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.Movie = Movie;
    Parms.cmd = cmd;
    Parms.arg = arg;
    ProcessEvent(FindFunctionChecked(g_026caf44), &Parms);
    return Parms.ReturnValue;
}

// @baa 0x00e51380
void Destroy(GFxFSCmdHandler_eventFSCommand_Parms* Parms)
{
    Parms->~GFxFSCmdHandler_eventFSCommand_Parms();
}

// @baa 0x00e43460

// @baa 0x00e43570
int UGFxEngine::vf_000(void) { return 1; }

// @baa 0x00e43580
bool UGFxEngine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00e48b60 {
    undefined4 * sub_00e48b60();
    int sub_00e48990(int);
};

extern undefined * g_021065f8;
// @baa 0x00e48b60
undefined4 * C_00e48b60::sub_00e48b60(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48b60 *)(this))->sub_00e48990(0x1d);
  *param_1 = (undefined4)(&g_021065f8);
  return param_1;
}

struct C_00e48b80 {
    void sub_00e48b80();
};

// @baa 0x00e48b80
void C_00e48b80::sub_00e48b80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48b90 {
    void sub_00e48b90();
};

// @baa 0x00e48b90
void C_00e48b90::sub_00e48b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48ba0 {
    void sub_00e48ba0();
};

// @baa 0x00e48ba0
void C_00e48ba0::sub_00e48ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48bb0 {
    undefined4 * sub_00e48bb0();
    int sub_00e48990(int);
};

extern undefined * g_02106604;
// @baa 0x00e48bb0
undefined4 * C_00e48bb0::sub_00e48bb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48bb0 *)(this))->sub_00e48990(10);
  *param_1 = (undefined4)(&g_02106604);
  g_027b897c = 0;
  return param_1;
}

struct C_00e48c00
{
    INT Value;

    C_00e48c00* sub_00e48c00(INT* Source);
};

// @baa 0x00e48c00
C_00e48c00* C_00e48c00::sub_00e48c00(INT* Source)
{
    *(INT*)this = *Source;
    return this;
}

struct C_00e48c10 { int a; C_00e48c10(int); };

// @baa 0x00e48c10
C_00e48c10::C_00e48c10(int x) : a(x) {}

struct C_00e48d80 {
    void sub_00e48d80();
};

extern undefined * g_02106618;
// @baa 0x00e48d80
void C_00e48d80::sub_00e48d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02106618);
  sub_018d3de0();
  return;
}

// @baa 0x00e48d90
void sub_00e48d90(void) {  }

// @baa 0x00e48da0
void sub_00e48da0(void) {  }

// @baa 0x00e48db0
void __stdcall sub_00e48db0(int a0) {  }

// @baa 0x00e48dc0
void sub_00e48dc0(void) {  }

BYTE __stdcall sub_00e48dd0(int param1);
// @baa 0x00e48dd0
BYTE __stdcall sub_00e48dd0(int param1)
{
  return 0;
}

// @baa 0x00e48de0
void __stdcall sub_00e48de0(int a0) {  }

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_00e48df0();
};

// @baa 0x00e48df0
S16* S16::sub_00e48df0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

int sub_005c7a70(...);
int sub_00e5d260(void);
// @baa 0x00e5d2d0
undefined4 UGFxEngine::sub_00e5d2d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e5d260();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x40);
  }
  return param_1;
}

struct C_018e5390 { C_018e5390* sub_018e5390(void); };

// @baa 0x018e5390
C_018e5390* C_018e5390::sub_018e5390(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018e5440
void __stdcall sub_018e5440(int a0) {  }

struct C_018e5470 { int sub_018e5470(void); };

// @baa 0x018e5470
int C_018e5470::sub_018e5470(void) { return *(int*)((char*)this + 0); }

void sub_018e5ab0();
// @baa 0x018e5b90
void sub_018e5b90(void) { sub_018e5ab0(); }

struct C_018e5dc0 { C_018e5dc0* sub_018e5dc0(void); };

// @baa 0x018e5dc0
C_018e5dc0* C_018e5dc0::sub_018e5dc0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018e5dd0
void sub_018e5dd0(void) { sub_018e5ab0(); }

// @baa 0x018e5fc0
void sub_018e5fc0(void) { sub_018e5ab0(); }

// @baa 0x018e5fd0
void sub_018e5fd0(void) { sub_018e5ab0(); }

struct C_018e6220 { C_018e6220* sub_018e6220(void); };

// @baa 0x018e6220
C_018e6220* C_018e6220::sub_018e6220(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0190fa40
void sub_0190fa40(void) { sub_0190cb00(); }

struct C_0190faa0 { C_0190faa0* sub_0190faa0(void); };

// @baa 0x0190faa0
C_0190faa0* C_0190faa0::sub_0190faa0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0190fab0
void sub_0190fab0(void) { sub_0190e290(); }

// @baa 0x0190fb00
void sub_0190fb00(void) { sub_0190e330(); }
