// WinClient.cpp (part 1 of 4): 130 functions
// Placed here by: neighbours 108, class 16, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c97600
void sub_00c97600(void) {  }

// @baa 0x00eb35f0
IMPLEMENT_CLASS_AT(UWindowsClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\WinDrv\\Src\\WinClient.cpp", 83);

// @baa 0x00eb3700
int UWindowsClient::vf_000(void) { return 1; }

// @baa 0x00eb3710
bool UWindowsClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00eb38f0(void);
extern undefined4*g_026cca48;
// @baa 0x00eb3950
void sub_00eb3950(void)
{
int iVar1;
uint uStack_4;
iVar1=sub_00eb38f0();
if(iVar1!=0){
uStack_4=0xffffffff;
(*(int(__stdcall**)(int,int,int,int,int))(*g_026cca48+0x28))((int)(g_026cca48),(int)(0x14),(int)(0),(int)(&uStack_4),(int)(0));
}
return;
}

// @baa 0x00eb3f10
void sub_00eb3f10(void) {  }

extern char g_0212c330[];
struct C { C* sub_00eb3f90(void); };

// @baa 0x00eb3f90
C* C::sub_00eb3f90(void) { *(int*)((char*)this + 0) = (int)g_0212c330; return this; }

struct C_00eb4620 { void sub_00eb4620(int a0); };

// @baa 0x00eb4620
void C_00eb4620::sub_00eb4620(int a0) { *(int*)((char*)this + 1208) = a0; }

struct C_00eb4720 {
    int sub_00eb4720();
};

// @baa 0x00eb4720
int C_00eb4720::sub_00eb4720(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x60) != 0) {
    return 0;
  }
  return param_1 + -4;
}

// @baa 0x00eb48e0
IMPLEMENT_CLASS_AT(UXnaForceFeedbackManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\WinDrv\\Src\\XnaForceFeedbackManager.cpp", 13);

// @baa 0x00eb49f0
int UXnaForceFeedbackManager::vf_000(void) { return 1; }

// @baa 0x00eb4a00
bool UXnaForceFeedbackManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00eb4c80 { int a, b, c; C_00eb4c80(); };

// @baa 0x00eb4c80
C_00eb4c80::C_00eb4c80() : a(0), b(0), c(0) {}

struct C_00eb4c90 { int sub_00eb4c90(void); };

// @baa 0x00eb4c90
int C_00eb4c90::sub_00eb4c90(void) { return *(int*)((char*)this + 4); }

struct C_00eb4ca0 { int a, b, c; C_00eb4ca0(); };

// @baa 0x00eb4ca0
C_00eb4ca0::C_00eb4ca0() : a(0), b(0), c(0) {}

struct C_00eb4cb0 { int sub_00eb4cb0(void); };

// @baa 0x00eb4cb0
int C_00eb4cb0::sub_00eb4cb0(void) { return *(int*)((char*)this + 4); }

struct C_00eb4cc0 { int a, b, c; C_00eb4cc0(); };

// @baa 0x00eb4cc0
C_00eb4cc0::C_00eb4cc0() : a(0), b(0), c(0) {}

struct C_00eb4cd0 { int sub_00eb4cd0(void); };

// @baa 0x00eb4cd0
int C_00eb4cd0::sub_00eb4cd0(void) { return *(int*)((char*)this + 4); }

struct C_00eb4ce0 {
    int sub_00eb4ce0(uint);
};

// @baa 0x00eb4ce0
int C_00eb4ce0::sub_00eb4ce0(uint param_2)
{
    int * param_1 = (int *)this;

  return (param_2 % (uint)param_1[2]) * 0x10 + *(int *)(*param_1 + (param_2 / (uint)param_1[2]) * 4)
  ;
}

struct C_00eb4d00 { int a, b, c; C_00eb4d00(); };

// @baa 0x00eb4d00
C_00eb4d00::C_00eb4d00() : a(0), b(0), c(0) {}

struct C_00eb4d10 { int sub_00eb4d10(void); };

// @baa 0x00eb4d10
int C_00eb4d10::sub_00eb4d10(void) { return *(int*)((char*)this + 4); }

struct C_00eb4d20 { int sub_00eb4d20(void); };

// @baa 0x00eb4d20
int C_00eb4d20::sub_00eb4d20(void) { return *(int*)((char*)this + 0); }

struct C_00eb4d30 { int sub_00eb4d30(void); };

// @baa 0x00eb4d30
int C_00eb4d30::sub_00eb4d30(void) { return *(int*)((char*)this + 0); }

struct C_00eb4db0 {
    int sub_00eb4db0(int);
};

// @baa 0x00eb4db0
int C_00eb4db0::sub_00eb4db0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00eb4dc0 { int sub_00eb4dc0(void); };

// @baa 0x00eb4dc0
int C_00eb4dc0::sub_00eb4dc0(void) { return *(int*)((char*)this + 0); }

struct C_00eb4dd0 { int sub_00eb4dd0(void); };

// @baa 0x00eb4dd0
int C_00eb4dd0::sub_00eb4dd0(void) { return *(int*)((char*)this + 0); }

struct C_00eb4f30 { int sub_00eb4f30(void); };

// @baa 0x00eb4f30
int C_00eb4f30::sub_00eb4f30(void) { return *(int*)((char*)this + 0); }

struct C_00eb4fb0 {
    int sub_00eb4fb0();
};

// @baa 0x00eb4fb0
int C_00eb4fb0::sub_00eb4fb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00eb4fe0 {
    int sub_00eb4fe0();
};

// @baa 0x00eb4fe0
int C_00eb4fe0::sub_00eb4fe0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00eb5010 { int sub_00eb5010(void); };

// @baa 0x00eb5010
int C_00eb5010::sub_00eb5010(void) { return *(int*)((char*)this + 0); }

// @baa 0x00eb5020
undefined1 sub_00eb5020(undefined1 * param_1)
{
  return *param_1;
}

// @baa 0x00eb5030
bool sub_00eb5030(char param_1, char param_2)
{
  return param_1 == param_2;
}

struct C_00eb5060 {
    void sub_00eb5060(undefined1 *);
};

// @baa 0x00eb5060
void C_00eb5060::sub_00eb5060(undefined1 * param_2)
{
    undefined1 * param_1 = (undefined1 *)this;

  *param_2 = *param_1;
  *(undefined1 **)(param_2 + 4) = param_1 + 4;
  return;
}

struct C_00eb5080 { int sub_00eb5080(void); };

// @baa 0x00eb5080
int C_00eb5080::sub_00eb5080(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00eb50c0
int sub_00eb50c0(int a0) { return *(int*)a0; }

// @baa 0x00eb50d0
undefined4 sub_00eb50d0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00eb5110 {
    void sub_00eb5110(int *);
};

// @baa 0x00eb5110
void C_00eb5110::sub_00eb5110(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}

struct C_00eb5120 { int sub_00eb5120(void); };

// @baa 0x00eb5120
int C_00eb5120::sub_00eb5120(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00eb5160 { int sub_00eb5160(void); };

// @baa 0x00eb5160
int C_00eb5160::sub_00eb5160(void) { return *(int*)((char*)this + 0); }

struct C_00eb5170 { int sub_00eb5170(void); };

// @baa 0x00eb5170
int C_00eb5170::sub_00eb5170(void) { return *(int*)((char*)this + 0); }

// @baa 0x00eb5180
int sub_00eb5180(uchar param_1)
{
  return param_1;
}

struct C_00eb51b0 {
    int sub_00eb51b0(int);
};

// @baa 0x00eb51b0
int C_00eb51b0::sub_00eb51b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb51c0 { int sub_00eb51c0(void); };

// @baa 0x00eb51c0
int C_00eb51c0::sub_00eb51c0(void) { return *(int*)((char*)this + 20); }

struct C_00eb51d0 { int sub_00eb51d0(void); };

// @baa 0x00eb51d0
int C_00eb51d0::sub_00eb51d0(void) { return *(int*)((char*)this + 20); }

struct C_00eb51e0 { int sub_00eb51e0(void); };

// @baa 0x00eb51e0
int C_00eb51e0::sub_00eb51e0(void) { return *(int*)((char*)this + 20); }

struct C_00eb51f0 { int sub_00eb51f0(void); };

// @baa 0x00eb51f0
int C_00eb51f0::sub_00eb51f0(void) { return *(int*)((char*)this + 20); }

// @baa 0x00eb5370
int sub_00eb5370(void) { return 0; }

// @baa 0x00eb5380
void sub_00eb5380(undefined4 * param_1, undefined4 * param_2)
{
  *param_1 = *param_2;
  return;
}

// @baa 0x00eb5390
int sub_00eb5390(void) { return 0; }

// @baa 0x00eb53a0
void sub_00eb53a0(undefined4 * param_1, undefined4 * param_2)
{
  *param_1 = *param_2;
  return;
}

// @baa 0x00eb53e0
void sub_00eb53e0(undefined4 * param_1, undefined4 * param_2)
{
  *param_1 = *param_2;
  return;
}

// @baa 0x00eb5410
int sub_00eb5410(int a0) { return *(int*)a0; }

// @baa 0x00eb5420
int sub_00eb5420(int a0) { return *(int*)a0; }

// @baa 0x00eb5430
int sub_00eb5430(int a0) { return *(int*)a0; }

// @baa 0x00eb5440
int sub_00eb5440(int a0) { return a0; }

// @baa 0x00eb5450
void sub_00eb5450(int param_1, int param_2, int * param_3)
{
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return;
}

// @baa 0x00eb5470
void sub_00eb5470(int * param_1, int param_2)
{
  *param_1 = *param_1 + param_2 * 4;
  return;
}

// @baa 0x00eb5490
int sub_00eb5490(int a0) { return a0; }

// @baa 0x00eb54a0
void sub_00eb54a0(int param_1, int param_2, int * param_3)
{
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return;
}

// @baa 0x00eb54c0
void sub_00eb54c0(int * param_1, int param_2)
{
  *param_1 = *param_1 + param_2 * 4;
  return;
}

int sub_0053dfa0(...);
extern undefined4 g_0212c308;
// @baa 0x00eb5510
undefined4 * UXnaForceFeedbackManager::sub_00eb5510(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0212c308);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00eb6190{
int sub_00eb6190(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00eb6190
int C_00eb6190::sub_00eb6190(undefined4*param_2)
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

struct E { BYTE Bytes[508]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00eb61f0(INT Index);
};

// @baa 0x00eb61f0
E* S::sub_00eb61f0(INT Index)
{
    return &Items(Index);
}

struct C_00eb6310 {
    void sub_00eb6310(int, int);
    int sub_00eb4e60();
    int sub_00eb4eb0(int, int);
};

// @baa 0x00eb6310
void C_00eb6310::sub_00eb6310(int param_2, int param_3)
{
    int param_1 = (int)this;
  if ((param_3 != *(int *)(param_1 + 4)) || (param_2 != *(int *)(param_1 + 8))) {
    ((C_00eb6310 *)(this))->sub_00eb4e60();
    ((C_00eb6310 *)(this))->sub_00eb4eb0(param_3, param_2);
  }
  return;
}

struct S_00eb6340 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00eb6340(INT Index);
};

// @baa 0x00eb6340
QWORD* S_00eb6340::sub_00eb6340(INT Index)
{
    return &Items(Index);
}

// @baa 0x00eb63f0
void __stdcall sub_00eb63f0(int a0, int a1) {  }

struct C_00eb6400 {
    int sub_00eb6400(int);
};

// @baa 0x00eb6400
int C_00eb6400::sub_00eb6400(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x1fc + *param_1;
}

// @baa 0x00eb6410
void __stdcall sub_00eb6410(int a0, int a1) {  }

struct C_00eb6420 {
    int sub_00eb6420(int);
};

// @baa 0x00eb6420
int C_00eb6420::sub_00eb6420(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00eb6440
void __stdcall sub_00eb6440(int a0, int a1) {  }

struct C_00eb6450 {
    int sub_00eb6450(int);
};

// @baa 0x00eb6450
int C_00eb6450::sub_00eb6450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00eb6460
void __stdcall sub_00eb6460(int a0, int a1) {  }

struct C_00eb64a0 {
    int sub_00eb64a0(int);
};

// @baa 0x00eb64a0
int C_00eb64a0::sub_00eb64a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb64b0 {
    int sub_00eb64b0(int);
};

// @baa 0x00eb64b0
int C_00eb64b0::sub_00eb64b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb64f0 {
    int sub_00eb64f0(int);
};

// @baa 0x00eb64f0
int C_00eb64f0::sub_00eb64f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb6500 {
    int sub_00eb6500(int);
};

// @baa 0x00eb6500
int C_00eb6500::sub_00eb6500(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb6510 {
    int sub_00eb6510();
};

// @baa 0x00eb6510
int C_00eb6510::sub_00eb6510(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00eb6530 {
    int sub_00eb6530();
};

// @baa 0x00eb6530
int C_00eb6530::sub_00eb6530(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00eb6550 {
    int sub_00eb6550();
};

// @baa 0x00eb6550
int C_00eb6550::sub_00eb6550(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00eb6570 {
    int sub_00eb6570();
};

// @baa 0x00eb6570
int C_00eb6570::sub_00eb6570(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00eb6590 {
    int sub_00eb6590();
};

// @baa 0x00eb6590
int C_00eb6590::sub_00eb6590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct FFeedbackTarget {
    virtual void d000();
    virtual void d004();
    virtual void d008();
    virtual void d00c();
    virtual void d010();
    virtual void d014();
    virtual void d018();
    virtual void d01c();
    virtual void d020();
    virtual void d024();
    virtual void d028();
    virtual void d02c();
    virtual void d030();
    virtual void d034();
    virtual void d038();
    virtual void d03c();
    virtual void d040();
    virtual void d044();
    virtual void d048();
    virtual void d04c();
    virtual void d050();
    virtual void d054();
    virtual void d058();
    virtual void d05c();
    virtual void d060();
    virtual void d064();
    virtual void d068();
    virtual void d06c();
    virtual void d070();
    virtual void d074();
    virtual void d078();
    virtual void d07c();
    virtual void d080();
    virtual void d084();
    virtual void d088();
    virtual void d08c();
    virtual void d090();
    virtual void d094();
    virtual void d098();
    virtual void d09c();
    virtual void d0a0();
    virtual void d0a4();
    virtual void d0a8();
    virtual void d0ac();
    virtual void d0b0();
    virtual void d0b4();
    virtual void d0b8();
    virtual void d0bc();
    virtual void d0c0();
    virtual void d0c4();
    virtual void d0c8();
    virtual void d0cc();
    virtual void d0d0();
    virtual void d0d4();
    virtual void d0d8();
    virtual void d0dc();
    virtual void d0e0();
    virtual void d0e4();
    virtual void d0e8();
    virtual void d0ec();
    virtual void d0f0();
    virtual void d0f4();
    virtual void d0f8();
    virtual void d0fc();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10c();
    virtual void d110();
    virtual void ClearForceFeedback(INT Index); /* 0x114 */
};

struct FFeedbackClient {
    virtual void d00();
    virtual void d04();
    virtual void d08();
    virtual void d0c();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1c();
    virtual void d20();
    virtual FFeedbackTarget* GetTarget(INT Index); /* 0x24 */
};

struct FFeedbackViewport {
    BYTE _pad[0x24];
    FFeedbackClient* Client; /* 0x24 */
};

extern TArray<FFeedbackViewport*> g_026ccab0;
extern INT g_026cca94;
// @baa 0x00eb6dd0
void UWindowsClient::ForceClearForceFeedback()
{
    for (UINT ViewportIndex = 0; ViewportIndex < (UINT)g_026ccab0.Num(); ViewportIndex++)
    {
        if (g_026ccab0(ViewportIndex) && g_026ccab0(ViewportIndex)->Client)
        {
            for (INT Index = 0; Index < g_026cca94; Index++)
            {
                FFeedbackTarget* Target = g_026ccab0(ViewportIndex)->Client->GetTarget(Index);
                if (Target)
                {
                    Target->ClearForceFeedback(Index);
                }
            }
        }
    }
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00eb76c0 { void* Data; int Num; int Max; void sub_00eb76c0(); };

// @baa 0x00eb76c0
void C_00eb76c0::sub_00eb76c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00eb7840 { void* Data; int Num; int Max; void sub_00eb7840(); };

// @baa 0x00eb7840
void C_00eb7840::sub_00eb7840() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00eb78e0 { void* Data; int Num; int Max; void sub_00eb78e0(); };

// @baa 0x00eb78e0
void C_00eb78e0::sub_00eb78e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00eb7980 {
    undefined4 * sub_00eb7980(int, int);
    int sub_00eb4e60();
    int sub_00eb4eb0(int, int);
};

// @baa 0x00eb7980
undefined4 * C_00eb7980::sub_00eb7980(int param_2, int param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_3 != 0) || (param_2 != 0)) {
    ((C_00eb7980 *)(this))->sub_00eb4e60();
    ((C_00eb7980 *)(this))->sub_00eb4eb0(param_3, param_2);
  }
  return param_1;
}

struct C_00eb79c0 { void* Data; int Num; int Max; void sub_00eb79c0(); };

// @baa 0x00eb79c0
void C_00eb79c0::sub_00eb79c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00eb7a80 {
    int sub_00eb7a80(int);
};

// @baa 0x00eb7a80
int C_00eb7a80::sub_00eb7a80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb7a90 {
    int sub_00eb7a90(int);
};

// @baa 0x00eb7a90
int C_00eb7a90::sub_00eb7a90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb7b90 {
    int sub_00eb7b90(int);
};

// @baa 0x00eb7b90
int C_00eb7b90::sub_00eb7b90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb7ba0 {
    int sub_00eb7ba0();
};

// @baa 0x00eb7ba0
int C_00eb7ba0::sub_00eb7ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00eb7bb0 {
    int sub_00eb7bb0();
};

// @baa 0x00eb7bb0
int C_00eb7bb0::sub_00eb7bb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00eb7bc0 {
    int sub_00eb7bc0();
};

// @baa 0x00eb7bc0
int C_00eb7bc0::sub_00eb7bc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
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

struct TConstSetBitIterator_00eb9e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9e80& operator++();
};

TConstSetBitIterator_00eb9e80::TConstSetBitIterator_00eb9e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9e80
TConstSetBitIterator_00eb9e80& TConstSetBitIterator_00eb9e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb9ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9ed0& operator++();
};

TConstSetBitIterator_00eb9ed0::TConstSetBitIterator_00eb9ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9ed0
TConstSetBitIterator_00eb9ed0& TConstSetBitIterator_00eb9ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb9fe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9fe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9fe0& operator++();
};

TConstSetBitIterator_00eb9fe0::TConstSetBitIterator_00eb9fe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9fe0
TConstSetBitIterator_00eb9fe0& TConstSetBitIterator_00eb9fe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eba030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eba030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eba030& operator++();
};

TConstSetBitIterator_00eba030::TConstSetBitIterator_00eba030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eba030
TConstSetBitIterator_00eba030& TConstSetBitIterator_00eba030::operator++()
{
    It.Advance();
    return *this;
}

struct C_00ebae80 { int sub_00ebae80(void); };

// @baa 0x00ebae80
int C_00ebae80::sub_00ebae80(void) { return *(int*)((char*)this + 92); }

struct C_00ebae90 { int sub_00ebae90(void); };

// @baa 0x00ebae90
int C_00ebae90::sub_00ebae90(void) { return *(int*)((char*)this + 1160); }

struct C_00ebaea0 {
    int sub_00ebaea0();
};

// @baa 0x00ebaea0
int C_00ebaea0::sub_00ebaea0(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct A_00ebaeb0 { virtual void sub_00ebbb80(); };

struct B_00ebaeb0 { virtual void sub_00ebbb80(); };

struct C_00ebaeb0 : A_00ebaeb0, B_00ebaeb0 { virtual void sub_00ebbb80(); C_00ebaeb0(); };

C_00ebaeb0::C_00ebaeb0() {}

// @baa 0x00ebaeb0
void C_00ebaeb0::sub_00ebbb80() {}

struct A_00ebaec0 { virtual void sub_00ebbb80(); char pad[8]; };

struct B_00ebaec0 { virtual void sub_00ebbb80(); };

struct C_00ebaec0 : A_00ebaec0, B_00ebaec0 { virtual void sub_00ebbb80(); C_00ebaec0(); };

C_00ebaec0::C_00ebaec0() {}

// @baa 0x00ebaec0
void C_00ebaec0::sub_00ebbb80() {}

struct C_00ebb2d0 {
    int sub_00ebb2d0(int);
    int sub_00eb96d0(int, int);
};

// @baa 0x00ebb2d0
int C_00ebb2d0::sub_00ebb2d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00ebb2d0 *)(this))->sub_00eb96d0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00ebb310 {
    int sub_00ebb310(int);
    int sub_00eb96d0(int, int);
};

// @baa 0x00ebb310
int C_00ebb310::sub_00ebb310(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00ebb310 *)(this))->sub_00eb96d0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00ebb3d0 {
    void sub_00ebb3d0();
    int sub_00eb9d80(int);
};

// @baa 0x00ebb3d0
void C_00ebb3d0::sub_00ebb3d0(void)
{
    int param_1 = (int)this;
  ((C_00ebb3d0 *)((*(char **)((char *)this + 0x10))))->sub_00eb9d80(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00ebb3f0 {
    void sub_00ebb3f0();
    int sub_00eb9e00(int);
};

// @baa 0x00ebb3f0
void C_00ebb3f0::sub_00ebb3f0(void)
{
    int param_1 = (int)this;
  ((C_00ebb3f0 *)((*(char **)((char *)this + 0x10))))->sub_00eb9e00(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00ebbb80 {
    undefined4 sub_00ebbb80(byte);
};

int sub_00ebae10(void);
// @baa 0x00ebbb80
undefined4 C_00ebbb80::sub_00ebbb80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ebae10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00eb9f20(void);
// @baa 0x00ebcbe0
int UWindowsClient::sub_00ebcbe0(void)
{
    int param_1 = (int)this;

  sub_00eb9f20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00eb9f80(void);
// @baa 0x00ebcc00
int UWindowsClient::sub_00ebcc00(void)
{
    int param_1 = (int)this;

  sub_00eb9f80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ebcd60 {
    void sub_00ebcd60();
    int sub_00ebc770(int);
};

extern undefined4 g_026cca5c;
// @baa 0x00ebcd60
void C_00ebcd60::sub_00ebcd60(void)
{
    int param_1 = (int)this;
  if (g_026cca5c != 0) {
    *(undefined4 *)(param_1 + 0x4cc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  ((C_00ebcd60 *)(this))->sub_00ebc770(0xa2);
  sub_00ebc770(0xa3);
  sub_00ebc770(0xa0);
  sub_00ebc770(0xa1);
  sub_00ebc770(0xa4);
  sub_00ebc770(0xa5);
  if (*(int *)(param_1 + 0x4d0) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  return;
}

struct C_00ebd090 {
    int sub_00ebd090(undefined4, undefined4);
    int sub_00ebcaf0(int, int);
};

// @baa 0x00ebd090
int C_00ebd090::sub_00ebd090(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00ebd090 *)(this))->sub_00ebcaf0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00ebd0b0 {
    int sub_00ebd0b0(undefined4, undefined4);
    int sub_00ebcb60(int, int);
};

// @baa 0x00ebd0b0
int C_00ebd0b0::sub_00ebd0b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00ebd0b0 *)(this))->sub_00ebcb60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00ebd0d0
int UWindowsClient::sub_00ebd0d0(void)
{
    int param_1 = (int)this;

  sub_00eb9f20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ebd0f0
int UWindowsClient::sub_00ebd0f0(void)
{
    int param_1 = (int)this;

  sub_00eb9f80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00ebcdf0();
// @baa 0x00ebd110
void sub_00ebd110(void) { sub_00ebcdf0(); }

void sub_00ebce60();
// @baa 0x00ebd120
void sub_00ebd120(void) { sub_00ebce60(); }

// @baa 0x00ebe960
int UWindowsClient::sub_00ebe960(void)
{
    int param_1 = (int)this;

  sub_00eb9f20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ebe980
int UWindowsClient::sub_00ebe980(void)
{
    int param_1 = (int)this;

  sub_00eb9f80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ebe9a0
void sub_00ebe9a0(void) { sub_00ebcdf0(); }

// @baa 0x00ebe9b0
void sub_00ebe9b0(void) { sub_00ebce60(); }

// @baa 0x00ebebd0
int UWindowsClient::sub_00ebebd0(void)
{
    int param_1 = (int)this;

  sub_00eb9f20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ebebf0
int UWindowsClient::sub_00ebebf0(void)
{
    int param_1 = (int)this;

  sub_00eb9f80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ebec10
void sub_00ebec10(void) { sub_00ebcdf0(); }

// @baa 0x00ebec20
void sub_00ebec20(void) { sub_00ebce60(); }

// @baa 0x00ebf9e0
void UWindowsClient::AllowMessageProcessing(int a0) { *(int*)((char*)this + 384) = a0; }

// @baa 0x00ebf9f0
UINT UWindowsClient::GetAudioDevice() { return *(int*)((char*)this + 400); }

// @baa 0x00ec0200
int sub_005c7a70(...);
int sub_00ec0160(void);
// @baa 0x00ec0210
undefined4 UWindowsClient::sub_00ec0210(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ec0160();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1d0);
  }
  return param_1;
}

// @baa 0x00ec0240

struct C_00eb5350
{
	INT   A;
	INT   B;
	BYTE  C;

	C_00eb5350* sub_00eb5350(const C_00eb5350* Src);
};

// @baa 0x00eb5350
C_00eb5350* C_00eb5350::sub_00eb5350(const C_00eb5350* Src)
{
	A = Src->A;
	B = Src->B;
	C = Src->C;
	return this;
}

void ForceSub_00eb5350()
{
	C_00eb5350 Dst, Src;
	Dst.sub_00eb5350(&Src);
}
