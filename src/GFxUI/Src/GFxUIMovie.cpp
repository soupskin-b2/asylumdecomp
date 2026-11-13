// GFxUIMovie.cpp (part 1 of 3): 144 functions
// Placed here by: neighbours 120, class 18, callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern "C" int g_026caf84;
extern "C" int g_026caf88;
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
    void sub_00e42030();
};

// @baa 0x00e42030
void UObjectThunk::sub_00e42030()
{
    this->ProcessEvent(this->sub_005d7d10(g_026caf84, g_026caf88, 0), 0, 0);
}

// @baa 0x00e420c0
int sub_00e420c0(int a0, int a1) { return a1; }

// @baa 0x00e420d0
int sub_00e420d0(int a0, int a1) { return a1; }

// @baa 0x00e42160
int sub_00e42160(int a0, int a1) { return a1; }

// @baa 0x00e42190
IMPLEMENT_CLASS_AT(UGFxInteraction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 36);

// @baa 0x00e42200
// @baa 0x00e42220
undefined4 sub_00e42220(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00e42230
int sub_00e42230(int a0, int a1) { return a1; }

// @baa 0x00e42240
int sub_00e42240(int a0, int a1) { return a1; }

// @baa 0x00e42250
int sub_00e42250(int a0, int a1) { return a1; }

// @baa 0x00e42260
int sub_00e42260(int a0, int a1) { return a1; }

// @baa 0x00e42270
int sub_00e42270(int a0, int a1) { return a1; }

// @baa 0x00e42280
int sub_00e42280(int a0, int a1) { return a1; }

// @baa 0x00e42290
int sub_00e42290(int a0, int a1) { return a1; }

// @baa 0x00e422a0
int sub_00e422a0(int a0, int a1) { return a1; }

extern char g_02106094[];
struct C { void sub_00e422b0(void); };

// @baa 0x00e422b0
void C::sub_00e422b0(void) { *(int*)((char*)this + 0) = (int)g_02106094; }

struct C_00e422c0 { C_00e422c0* sub_00e422c0(void); };

// @baa 0x00e422c0
C_00e422c0* C_00e422c0::sub_00e422c0(void) { *(int*)((char*)this + 0) = (int)g_02106094; return this; }

int sub_0053dfa0(...);
// @baa 0x00e422d0
undefined4 * UGFxFSCmdHandler::sub_00e422d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02106094);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e422f0 { void sub_00e422f0(void); };

// @baa 0x00e422f0
void C_00e422f0::sub_00e422f0(void) { *(int*)((char*)this + 0) = (int)g_02106094; }

extern char g_021060b4[];
struct C_00e42300 { C_00e42300* sub_00e42300(void); };

// @baa 0x00e42300
C_00e42300* C_00e42300::sub_00e42300(void) { *(int*)((char*)this + 0) = (int)g_021060b4; return this; }

struct C_00e42310 {
    undefined4 * sub_00e42310(byte);
};

// @baa 0x00e42310
undefined4 * C_00e42310::sub_00e42310(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02106094);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e42540
int sub_00e42540(int a0, int a1) { return a1; }

// @baa 0x00e42570
IMPLEMENT_CLASS_AT(UGFxDataStoreSubscriber, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIDataStore.cpp", 35);

// @baa 0x00e425e0
void* UGFxDataStoreSubscriber::vf_110() { return this; }

// @baa 0x00e425f0
int UGFxDataStoreSubscriber::sub_00e425f0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x30;
}

// @baa 0x00e42600
struct C_00e42830 {
    void sub_00e42830();
};

extern undefined4 g_023f4d60;
// @baa 0x00e42830
void C_00e42830::sub_00e42830(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4d60));
  return;
}

// @baa 0x00e42840
int sub_00e42840(void) { return 0; }

struct C_00e42850 {
    undefined4 * sub_00e42850(byte);
};

// @baa 0x00e42850
undefined4 * C_00e42850::sub_00e42850(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f4d60));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e42870
void sub_00e42870(void) {  }

int __stdcall sub_018d7150(int);
// @baa 0x00e42880
void sub_00e42880(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

int __stdcall sub_018d7170(int);
// @baa 0x00e42890
void sub_00e42890(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

// @baa 0x00e42900
int sub_00e42900(float param_1)
{
  return (int)param_1;
}

// @baa 0x00e42910
float10 sub_00e42910(float param_1, float param_2, float param_3)
{
  return ((float10)param_2 - (float10)param_1) * (float10)param_3 + (float10)param_1;
}

struct C_00e42950 { C_00e42950* sub_00e42950(void); };

// @baa 0x00e42950
C_00e42950* C_00e42950::sub_00e42950(void) { return this; }

struct C_00e42960 { C_00e42960* sub_00e42960(void); };

// @baa 0x00e42960
C_00e42960* C_00e42960::sub_00e42960(void) { return this; }

struct C_00e42970 { C_00e42970* sub_00e42970(void); };

// @baa 0x00e42970
C_00e42970* C_00e42970::sub_00e42970(void) { return this; }

struct Inner { void sub_018da960(); };

struct Outer { Inner *field; void sub_00e429e0(); };

// @baa 0x00e429e0
void Outer::sub_00e429e0() { field->sub_018da960(); }

struct C_00e429f0 {
    int sub_00e429f0();
};

// @baa 0x00e429f0
int C_00e429f0::sub_00e429f0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0xc;
}

struct C_00e42a00 {
    uint sub_00e42a00();
};

// @baa 0x00e42a00
uint C_00e42a00::sub_00e42a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(uint *)*param_1 & 0x7fffffff;
}

struct C_00e42a10 {
    bool sub_00e42a10();
};

// @baa 0x00e42a10
bool C_00e42a10::sub_00e42a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return (*(uint *)*param_1 & 0x7fffffff) == 0;
}

struct C_00e42a30 {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    uint sub_00e42a30();
};

// @baa 0x00e42a30
uint C_00e42a30::sub_00e42a30()
{
    return (f2() >> 8) & 0xFF;
}

struct C_00e42a90 {
    void sub_00e42a90(undefined1);
};

// @baa 0x00e42a90
void C_00e42a90::sub_00e42a90(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x30) = param_2;
  return;
}

struct C_00e42b70 {
    void sub_00e42b70(undefined4 *);
};

// @baa 0x00e42b70
void C_00e42b70::sub_00e42b70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  return;
}

struct C_00e42b80 { void sub_00e42b80(int a0); };

// @baa 0x00e42b80
void C_00e42b80::sub_00e42b80(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_00e42b90 {
    undefined1 sub_00e42b90();
};

// @baa 0x00e42b90
undefined1 C_00e42b90::sub_00e42b90(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 3);
}

struct C_00e42ba0 {
    undefined1 sub_00e42ba0();
};

// @baa 0x00e42ba0
undefined1 C_00e42ba0::sub_00e42ba0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 2);
}

struct C_00e42bb0 {
    undefined1 sub_00e42bb0();
};

// @baa 0x00e42bb0
undefined1 C_00e42bb0::sub_00e42bb0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 1);
}

struct C_00e42bc0 {
    undefined1 sub_00e42bc0();
};

// @baa 0x00e42bc0
undefined1 C_00e42bc0::sub_00e42bc0(void)
{
    undefined1 * param_1 = (undefined1 *)this;

  return *param_1;
}

struct C_00e42c90 {
    undefined4 sub_00e42c90();
};

int sub_018daa80(void);
// @baa 0x00e42c90
undefined4 C_00e42c90::sub_00e42c90(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_018daa80();
  return param_1;
}

void sub_018dae10();
// @baa 0x00e42d00
void sub_00e42d00(void) { sub_018dae10(); }

struct C_00e42d10 {
    void sub_00e42d10();
};

int __stdcall sub_018d7530(int);
// @baa 0x00e42d10
void C_00e42d10::sub_00e42d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_018d7530(*param_1);
  return;
}

extern char g_02106218[];
struct C_00e42de0 { void sub_00e42de0(void); };

// @baa 0x00e42de0
void C_00e42de0::sub_00e42de0(void) { *(int*)((char*)this + 0) = (int)g_02106218; }

struct C_00e42e10 {
    void sub_00e42e10();
};

// @baa 0x00e42e10
void C_00e42e10::sub_00e42e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

struct C_00e42e20 { int sub_00e42e20(void); };

// @baa 0x00e42e20
int C_00e42e20::sub_00e42e20(void) { return *(int*)((char*)this + 4); }

struct C_00e42e30 { void sub_00e42e30(int a0); };

// @baa 0x00e42e30
void C_00e42e30::sub_00e42e30(int a0) { *(int*)((char*)this + 4) = a0; }

void sub_018d3de0();
// @baa 0x00e42e40
void sub_00e42e40(void) { sub_018d3de0(); }

struct C_00e42e50 {
    void sub_00e42e50();
};

// @baa 0x00e42e50
void C_00e42e50::sub_00e42e50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  return;
}

struct C_00e42e60 {
    int * sub_00e42e60(int);
};

// @baa 0x00e42e60
int * C_00e42e60::sub_00e42e60(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  int *piVar1;
  
  if ((param_2 == 0) || (piVar1 = (int *)*param_1, param_2 != *piVar1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

struct C_00e42ea0 {
    C_00e42ea0* sub_00e42ea0();
};

// @baa 0x00e42ea0
C_00e42ea0* C_00e42ea0::sub_00e42ea0()
{
    ((BYTE*)this)[0] = 0;
    return this;
}

struct C_00e42f50 { C_00e42f50* sub_00e42f50(void); };

// @baa 0x00e42f50
C_00e42f50* C_00e42f50::sub_00e42f50(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e42fc0 { int sub_00e42fc0(void); };

// @baa 0x00e42fc0
int C_00e42fc0::sub_00e42fc0(void) { return *(int*)((char*)this + 0); }

struct C_00e42fd0 {
    undefined1 sub_00e42fd0();
};

// @baa 0x00e42fd0
undefined1 C_00e42fd0::sub_00e42fd0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

struct C_00e42fe0 {
    float10 sub_00e42fe0();
};

// @baa 0x00e42fe0
float10 C_00e42fe0::sub_00e42fe0(void)
{
    int param_1 = (int)this;

  return (float10)*(double *)(param_1 + 8);
}

struct C_00e42ff0 { int sub_00e42ff0(void); };

// @baa 0x00e42ff0
int C_00e42ff0::sub_00e42ff0(void) { return *(int*)((char*)this + 8); }

struct C_00e43000 { int sub_00e43000(void); };

// @baa 0x00e43000
int C_00e43000::sub_00e43000(void) { return *(int*)((char*)this + 8); }

struct C_00e43010 { void sub_00e43010(void); };

// @baa 0x00e43010
void C_00e43010::sub_00e43010(void) { *(int*)((char*)this + 0) = 0; }

struct C_00e43020 { void sub_00e43020(void); };

// @baa 0x00e43020
void C_00e43020::sub_00e43020(void) { *(int*)((char*)this + 0) = 1; }

struct C_00e43030 {
    void sub_00e43030(undefined1);
};

// @baa 0x00e43030
void C_00e43030::sub_00e43030(undefined1 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}

struct C_00e43050 {
    void sub_00e43050(undefined4);
};

// @baa 0x00e43050
void C_00e43050::sub_00e43050(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 5;
  param_1[2] = param_2;
  return;
}

// @baa 0x00e43100
// @baa 0x00e43210
int UGFxDataStoreSubscriber::vf_000(void) { return 1; }

// @baa 0x00e43220
bool UGFxDataStoreSubscriber::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44b40
UGFxMovie::UGFxMovie()
{
    pMovie.Dummy = 0;
}

IMPLEMENT_CLASS_AT(UGFxMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIMovie.cpp", 40);
// @baa 0x00e44c50
int UGFxMovie::vf_000(void) { return 1; }

// @baa 0x00e44c60
bool UGFxMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44ca0
IMPLEMENT_CLASS_AT(UGFxFSCmdHandler, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIMovie.cpp", 41);

// @baa 0x00e44db0
int UGFxFSCmdHandler::vf_000(void) { return 1; }

// @baa 0x00e44dc0
bool UGFxFSCmdHandler::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44e00
IMPLEMENT_CLASS_AT(UGFxMovieInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIMovie.cpp", 42);

// @baa 0x00e44f10
int UGFxMovieInfo::vf_000(void) { return 1; }

// @baa 0x00e44f20
bool UGFxMovieInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44fc0
void UGFxMovie::Pause(UBOOL param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x3c) != 0) {
    *(uint *)(*(int *)(param_1 + 0x3c) + 0x44) = (uint)(param_2 == 0);
  }
  return;
}

extern undefined4 g_026c3cdc;
// @baa 0x00e45040
undefined4 sub_00e45040(void)
{
  if (g_026c3cdc != 0) {
    return *(undefined4 *)(g_026c3cdc + 0x330);
  }
  return 0;
}

// @baa 0x00e488c0
// @baa 0x00e49c80
// @baa 0x00e5d090
// @baa 0x00e5d880
struct C_view {
    int sub_00e64310(int);
};

extern undefined4 g_026caed4;
// @baa 0x00e66030
void UGFxMovie::vf_16c(void)
{
    int param_1 = (int)this;
  if ((g_026caed4 != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    ((C_view *)(this))->sub_00e64310(1);
  }
  return;
}

// @baa 0x00e66050
// @baa 0x00e66070
// @baa 0x00e66100
// @baa 0x00e679c0
void sub_00e66c90();
// @baa 0x00e679e0
void sub_00e679e0(void) { sub_00e66c90(); }

// @baa 0x00e679f0
int sub_00693af0(void);
// @baa 0x00e67ab0
undefined4 UGFxMovie::sub_00e67ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00693af0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e44b40(void);
int sub_00e679f0(...);
extern undefined4 g_026caf18;
// @baa 0x00e67f10
int sub_00e67f10(void)
{
  if (g_026caf18 == 0) {
    g_026caf18 = sub_00e679f0(L"GFxUI");
    sub_00e44b40();
  }
  return g_026caf18;
}

int sub_005c7a20(void);
extern undefined * g_021076f8;
// @baa 0x00e67f40
undefined4 * UObject::sub_00e67f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021076f8);
  return param_1;
}

// @baa 0x00e67f60
IMPLEMENT_CLASS_AT(UGFxAction_CloseMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 28);

// @baa 0x00e67fc0
extern undefined * g_02107898;
// @baa 0x00e67ff0
undefined4 * UObject::sub_00e67ff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02107898);
  return param_1;
}

// @baa 0x00e68010
IMPLEMENT_CLASS_AT(UGFxAction_GetVariable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 29);

// @baa 0x00e68080
extern undefined * g_02107a38;
// @baa 0x00e680b0
undefined4 * UObject::sub_00e680b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02107a38);
  return param_1;
}

// @baa 0x00e680d0
IMPLEMENT_CLASS_AT(UGFxAction_Invoke, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 30);

// @baa 0x00e68150
extern undefined * g_02107bd8;
// @baa 0x00e68180
undefined4 * UObject::sub_00e68180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02107bd8);
  return param_1;
}

// @baa 0x00e681a0
IMPLEMENT_CLASS_AT(UGFxAction_OpenMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 31);

// @baa 0x00e68200
extern undefined * g_02107d78;
// @baa 0x00e68230
undefined4 * UObject::sub_00e68230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02107d78);
  return param_1;
}

// @baa 0x00e68250
IMPLEMENT_CLASS_AT(UGFxAction_SetCaptureKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 32);

// @baa 0x00e682c0
extern undefined * g_02107f18;
// @baa 0x00e682f0
undefined4 * UObject::sub_00e682f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02107f18);
  return param_1;
}

// @baa 0x00e68310
IMPLEMENT_CLASS_AT(UGFxAction_SetFocus, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 33);

// @baa 0x00e68370
extern undefined * g_021080b8;
// @baa 0x00e683a0
undefined4 * UObject::sub_00e683a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021080b8);
  return param_1;
}

// @baa 0x00e683c0
IMPLEMENT_CLASS_AT(UGFxAction_SetVariable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 34);

// @baa 0x00e68430
extern undefined * g_02108258;
// @baa 0x00e68460
undefined4 * UObject::sub_00e68460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02108258);
  return param_1;
}

// @baa 0x00e68480
IMPLEMENT_CLASS_AT(UGFxEvent_FsCommand, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 37);

// @baa 0x00e684f0
// @baa 0x00e68520
void sub_00e68520(void) { sub_00e66c90(); }

// @baa 0x016e1710
IMPLEMENT_CLASS_AT(URGFxMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 39);

int sub_00e66050(void);
extern undefined * g_023a5270;
// @baa 0x016e1790
undefined4 * UGFxMovie::sub_016e1790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a5270);
  return param_1;
}

// @baa 0x016e17b0
extern undefined * g_023a53f0;
// @baa 0x016e17e0
undefined4 * UGFxMovie::sub_016e17e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a53f0);
  return param_1;
}

// @baa 0x016e1800
IMPLEMENT_CLASS_AT(URGFxMovieBio, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 45);

// @baa 0x016e1860
extern undefined * g_023a5570;
// @baa 0x016e1890
undefined4 * UGFxMovie::sub_016e1890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a5570);
  return param_1;
}

// @baa 0x016e18b0
IMPLEMENT_CLASS_AT(URGFxMovieFrontend, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 40);

// @baa 0x016e1910
extern undefined * g_023a56f8;
// @baa 0x016e1940
undefined4 * UGFxMovie::sub_016e1940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a56f8);
  return param_1;
}

// @baa 0x016e1960
IMPLEMENT_CLASS_AT(URGFxMovieHUD, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 73);

// @baa 0x016e19d0
extern undefined * g_023a5878;
// @baa 0x016e1a00
undefined4 * UGFxMovie::sub_016e1a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a5878);
  return param_1;
}

// @baa 0x016e1a20
IMPLEMENT_CLASS_AT(URGFxMovieInvestigate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 42);

// @baa 0x016e1a80
extern undefined * g_023a59f8;
// @baa 0x016e1ab0
undefined4 * UGFxMovie::sub_016e1ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a59f8);
  return param_1;
}

// @baa 0x016e1ad0
IMPLEMENT_CLASS_AT(URGFxMovieMap, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 41);

// @baa 0x016e1b30
extern undefined * g_023a5b78;
// @baa 0x016e1b60
undefined4 * UGFxMovie::sub_016e1b60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a5b78);
  return param_1;
}

// @baa 0x016e1b80
IMPLEMENT_CLASS_AT(URGFxMovieRiddler, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 44);

// @baa 0x016e1be0
extern undefined * g_023a5cf8;
// @baa 0x016e1c10
undefined4 * UGFxMovie::sub_016e1c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e66050();
  *param_1 = (undefined4)(&g_023a5cf8);
  return param_1;
}
