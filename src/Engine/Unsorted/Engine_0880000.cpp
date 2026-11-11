// Engine_0880000.cpp (part 1 of 6): 86 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x008871f0
IMPLEMENT_CLASS_AT(APathBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPath.cpp", 15);

// @baa 0x00887250
// @baa 0x00887330
IMPLEMENT_CLASS_AT(ARoute, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPath.cpp", 16);

// @baa 0x00888340
void sub_00888340(void) {  }

// @baa 0x00888350
void sub_00888350(void) {  }

// @baa 0x00888360
float10 sub_00888360(double param_1)
{
  return (float10)param_1;
}

struct C { C* sub_00888390(void); };

// @baa 0x00888390
C* C::sub_00888390(void) { return this; }

struct C_008883a0 { C_008883a0* sub_008883a0(void); };

// @baa 0x008883a0
C_008883a0* C_008883a0::sub_008883a0(void) { return this; }

// @baa 0x00888500
undefined2 sub_00888500(void)
{
  return 0x73;
}

struct C_00888520 { float sub_00888520(void); };

// @baa 0x00888520
float C_00888520::sub_00888520(void) { return *(float*)((char*)this + 4); }

struct S88530 {
  char pad[0x14];
  INT f14;
  INT f18;
  S88530();
};

// @baa 0x00888530
S88530::S88530() {
  f14 = 0;
  f18 = 0;
}

struct C_00888540 {
    bool sub_00888540();
};

// @baa 0x00888540
bool C_00888540::sub_00888540(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 0;
}

// @baa 0x00888550
int sub_00888550(int a0, int a1) { return a1; }

int sub_00756210(void);
int sub_0075cfd0(...);
extern undefined4 g_026b3b54;
// @baa 0x00888560
int sub_00888560(void)
{
  if (g_026b3b54 == 0) {
    g_026b3b54 = sub_0075cfd0(L"Engine");
    sub_00756210();
  }
  return g_026b3b54;
}

// @baa 0x00888590
int sub_00888590(int a0, int a1) { return a1; }

struct C_008885a0 { C_008885a0* sub_008885a0(int a0); };

// @baa 0x008885a0
C_008885a0* C_008885a0::sub_008885a0(int a0) { return this; }

struct C_00888600 { C_00888600* sub_00888600(int a0); };

// @baa 0x00888600
C_00888600* C_00888600::sub_00888600(int a0) { return this; }

struct C_00888610 { C_00888610* sub_00888610(int a0); };

// @baa 0x00888610
C_00888610* C_00888610::sub_00888610(int a0) { return this; }

struct C_00888620 { C_00888620* sub_00888620(int a0); };

// @baa 0x00888620
C_00888620* C_00888620::sub_00888620(int a0) { return this; }

extern "C" int g_026c42c4;
extern "C" int g_026c42c8;
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
    void sub_00888630();
};

// @baa 0x00888630
void UObjectThunk::sub_00888630()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c42c4, g_026c42c8, 0), 0, 0);
}

struct C_00888820 { C_00888820* sub_00888820(void); };

// @baa 0x00888820
C_00888820* C_00888820::sub_00888820(void) { return this; }

struct C_00888830 { C_00888830* sub_00888830(int a0); };

// @baa 0x00888830
C_00888830* C_00888830::sub_00888830(int a0) { return this; }

struct C_00888840 { C_00888840* sub_00888840(int a0); };

// @baa 0x00888840
C_00888840* C_00888840::sub_00888840(int a0) { return this; }

struct C_00888850 { C_00888850* sub_00888850(int a0); };

// @baa 0x00888850
C_00888850* C_00888850::sub_00888850(int a0) { return this; }

struct C_00888860 { C_00888860* sub_00888860(int a0); };

// @baa 0x00888860
C_00888860* C_00888860::sub_00888860(int a0) { return this; }

struct C_00888870 { C_00888870* sub_00888870(int a0); };

// @baa 0x00888870
C_00888870* C_00888870::sub_00888870(int a0) { return this; }

int sub_00d6bce0(void);
int sub_00d70650(...);
extern undefined4 g_026c59b0;
// @baa 0x00888e80
int sub_00888e80(void)
{
  if (g_026c59b0 == 0) {
    g_026c59b0 = sub_00d70650(L"Engine");
    sub_00d6bce0();
  }
  return g_026c59b0;
}

struct C_00888f10 { C_00888f10* sub_00888f10(int a0); };

// @baa 0x00888f10
C_00888f10* C_00888f10::sub_00888f10(int a0) { return this; }

// @baa 0x00888fe0
int UInteraction::vf_114(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

// @baa 0x00888ff0
int UInteraction::vf_118(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

// @baa 0x00889000
int UInteraction::vf_11c(int a0, int a1) { return 0; }

int sub_00888eb0(void);
int sub_005c7a70(...);
// @baa 0x00889010
undefined4 UInteraction::sub_00889010(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00888eb0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x60);
  }
  return param_1;
}

// @baa 0x00889030
undefined4 sub_00889030(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

int sub_00d6bfd0(void);
extern undefined * g_01f4d490;
// @baa 0x00889040
undefined4 * UInteraction::sub_00889040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d6bfd0();
  *param_1 = (undefined4)(&g_01f4d490);
  return param_1;
}

// @baa 0x00889060
IMPLEMENT_CLASS_AT(UPlayerManagerInteraction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPlayer.cpp", 98);

// @baa 0x00889390
bool UPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00889be0
void UPlayer::vf_10c(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x330) = 0;
  }
  *(int *)(param_2 + 0x330) = param_1;
  *(int *)(param_1 + 0x34) = param_2;
  return;
}

struct M_00889c10 { void sub_00ab3130(); };

struct C_00889c10 { char pad[136]; M_00889c10 m; void sub_00889c10(); };

// @baa 0x00889c10
void C_00889c10::sub_00889c10() { m.sub_00ab3130(); }

// @baa 0x00889c20
void sub_00889c20(byte * param_1, byte * param_2, undefined1 * param_3, float param_4)
{
  param_3[2] = (char)(int)(((float)param_2[2] - (float)param_1[2]) * param_4 + (float)param_1[2]);
  param_3[1] = (char)(int)(((float)param_2[1] - (float)param_1[1]) * param_4 + (float)param_1[1]);
  *param_3 = (char)(int)(((float)*param_2 - (float)*param_1) * param_4 + (float)*param_1);
  param_3[3] = (char)(int)(((float)param_2[3] - (float)param_1[3]) * param_4 + (float)param_1[3]);
  return;
}

// @baa 0x00889cc0
void sub_00889cc0(void) {  }

// @baa 0x00889cd0
int sub_00889cd0(int a0, int a1, int a2, int a3) { return a3; }

// @baa 0x00889ce0
int sub_00889ce0(int a0, int a1, int a2, int a3) { return a3; }

// @baa 0x0088a740
int ULadderReachSpec::vf_10c(int param_2)
{
    int param_1 = (int)this;

  if ((((*(uint *)(param_2 + 0x1c8) & 0x4000) == 0) && (*(char *)(param_2 + 0x90) != '\x04')) &&
     (*(char *)(param_2 + 0x90) != '\n')) {
    return 10000000;
  }
  return *(int *)(*(int *)(param_1 + 0x48) + 0x228) + *(int *)(param_1 + 0x34);
}

// @baa 0x0088a780
int UProscribedReachSpec::vf_10c(int a0) { return 10000000; }

// @baa 0x0088a830
undefined4 USlotToSlotReachSpec::vf_138(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_2 + 0x1b4) != 0) && (*(int *)(*(int *)(param_2 + 0x1b4) + 0x28c) == param_1))
  {
    return 0;
  }
  return 1;
}

struct C_view {
    int sub_0088a360(int);
};

// @baa 0x0088a860
INT USwatTurnReachSpec::vf_10c(INT param_2) {
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_0088a360(param_2);
  if (iVar1 != 0) {
    return 10000000;
  }
  return *(int *)(*(int *)(param_1 + 0x48) + 0x228) + *(int *)(param_1 + 0x34);
}

// @baa 0x0088a920
int UFloorToCeilingReachSpec::vf_114(int a0, int a1, int a2, int a3) { return a3; }

struct C_0088af90 {
    undefined4 sub_0088af90(byte);
};

int sub_0053dfa0(...);
int sub_00880dc0(void);
// @baa 0x0088af90
undefined4 C_0088af90::sub_0088af90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00880dc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0088b080 { int sub_0088b080(void); };

// @baa 0x0088b080
int C_0088b080::sub_0088b080(void) { return *(int*)((char*)this + 12); }

struct C_0088b090 { int sub_0088b090(void); };

// @baa 0x0088b090
int C_0088b090::sub_0088b090(void) { return *(int*)((char*)this + 36); }

extern undefined4 g_026c3cdc;
// @baa 0x0088d880
float10 sub_0088d880(void)
{
  return (float10)*(float *)(*(int *)(g_026c3cdc + 800) + 0x38);
}

struct C_0088d970 { int sub_0088d970(void); };

// @baa 0x0088d970
int C_0088d970::sub_0088d970(void) { return *(int*)((char*)this + 4); }

struct C_0088d980 { int a, b, c; C_0088d980(); };

// @baa 0x0088d980
C_0088d980::C_0088d980() : a(0), b(0), c(0) {}

struct C_0088d990 { int sub_0088d990(void); };

// @baa 0x0088d990
int C_0088d990::sub_0088d990(void) { return *(int*)((char*)this + 4); }

struct C_0088dd80 { int sub_0088dd80(void); };

// @baa 0x0088dd80
int C_0088dd80::sub_0088dd80(void) { return *(int*)((char*)this + 0); }

struct C_0088dd90 { int sub_0088dd90(void); };

// @baa 0x0088dd90
int C_0088dd90::sub_0088dd90(void) { return *(int*)((char*)this + 0); }

struct C_0088dda0 { int sub_0088dda0(void); };

// @baa 0x0088dda0
int C_0088dda0::sub_0088dda0(void) { return *(int*)((char*)this + 0); }

struct C_0088ddb0 { int sub_0088ddb0(void); };

// @baa 0x0088ddb0
int C_0088ddb0::sub_0088ddb0(void) { return *(int*)((char*)this + 0); }

struct C_0088ddc0 { int sub_0088ddc0(void); };

// @baa 0x0088ddc0
int C_0088ddc0::sub_0088ddc0(void) { return *(int*)((char*)this + 0); }

struct C_0088ddd0 { int sub_0088ddd0(void); };

// @baa 0x0088ddd0
int C_0088ddd0::sub_0088ddd0(void) { return *(int*)((char*)this + 0); }

// @baa 0x0088dde0
int sub_0088dde0(int a0) { return *(int*)a0; }

// @baa 0x0088ddf0
bool sub_0088ddf0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0088de00 { int a, b; C_0088de00(const C_0088de00 &); };

// @baa 0x0088de00
C_0088de00::C_0088de00(const C_0088de00 &o) : a(o.a), b(o.b) {}

// @baa 0x0088de60
int sub_0088de60(int a0) { return *(int*)a0; }

// @baa 0x0088de70
bool sub_0088de70(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0088de80 { int a, b; C_0088de80(const C_0088de80 &); };

// @baa 0x0088de80
C_0088de80::C_0088de80(const C_0088de80 &o) : a(o.a), b(o.b) {}

struct C_0088dee0 { int sub_0088dee0(void); };

// @baa 0x0088dee0
int C_0088dee0::sub_0088dee0(void) { return *(int*)((char*)this + 0); }

struct C_0088def0 { int sub_0088def0(void); };

// @baa 0x0088def0
int C_0088def0::sub_0088def0(void) { return *(int*)((char*)this + 0); }

struct C_0088df00 { int sub_0088df00(void); };

// @baa 0x0088df00
int C_0088df00::sub_0088df00(void) { return *(int*)((char*)this + 0); }

struct C_0088df10 {
    uint sub_0088df10();
};

// @baa 0x0088df10
uint C_0088df10::sub_0088df10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

// @baa 0x0088df20
int sub_0088df20(int a0) { return a0; }

struct C_0088df30 { unsigned sub_0088df30(void); };

// @baa 0x0088df30
unsigned C_0088df30::sub_0088df30(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0088df40 { unsigned sub_0088df40(void); };

// @baa 0x0088df40
unsigned C_0088df40::sub_0088df40(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0088df50 {
    uint sub_0088df50();
};

// @baa 0x0088df50
uint C_0088df50::sub_0088df50(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0088df60 {
    void sub_0088df60(uint);
};

// @baa 0x0088df60
void C_0088df60::sub_0088df60(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_0088df80 {
    int sub_0088df80(int);
};

// @baa 0x0088df80
int C_0088df80::sub_0088df80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0088df90 { int sub_0088df90(void); };

// @baa 0x0088df90
int C_0088df90::sub_0088df90(void) { return *(int*)((char*)this + 20); }

struct C_0088dfa0 { int sub_0088dfa0(void); };

// @baa 0x0088dfa0
int C_0088dfa0::sub_0088dfa0(void) { return *(int*)((char*)this + 20); }

struct C_0088dfb0 { int sub_0088dfb0(void); };

// @baa 0x0088dfb0
int C_0088dfb0::sub_0088dfb0(void) { return *(int*)((char*)this + 20); }

struct C_0088dfc0 { int sub_0088dfc0(void); };

// @baa 0x0088dfc0
int C_0088dfc0::sub_0088dfc0(void) { return *(int*)((char*)this + 20); }

int sub_005d88c0(...);
int sub_00a57be0(void);
int sub_00a64ff0(...);
extern undefined4 g_026b6a08;
// @baa 0x0088e050
void sub_0088e050(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b6a08 == 0) {
    g_026b6a08 = sub_00a64ff0(L"Engine");
    sub_00a57be0();
  }
  sub_005d88c0(g_026b6a08,param_1,param_2,param_3);
  return;
}

int sub_005eb8e0(...);
int sub_0077fb90(...);
int sub_0077fc50(void);
extern undefined4 g_026b3c20;
// @baa 0x0088e1b0
void sub_0088e1b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b3c20 == 0) {
    g_026b3c20 = sub_0077fb90(L"Engine");
    sub_0077fc50();
  }
  sub_005eb8e0(g_026b3c20,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00627f00(...);
// @baa 0x0088e200
void sub_0088e200(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x0088e220
int sub_0088e220(int a0) { return a0; }

struct C_0088e230 { int a, b; C_0088e230(const C_0088e230 &); };

// @baa 0x0088e230
C_0088e230::C_0088e230(const C_0088e230 &o) : a(o.a), b(o.b) {}

struct C_0088e250 { int a, b; C_0088e250(const C_0088e250 &); };

// @baa 0x0088e250
C_0088e250::C_0088e250(const C_0088e250 &o) : a(o.a), b(o.b) {}
