// Launch_1500000.cpp (part 1 of 4): 117 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

// @baa 0x015015e0
void sub_015015e0(void)
{
  return;
}

// @baa 0x015015f0
float10 sub_015015f0(double param_1)
{
  return (float10)param_1;
}

extern char g_025ea260[];
// @baa 0x01501600
int sub_01501600(void) { return (int)g_025ea260; }

// @baa 0x01501610
int sub_01501610(void) { return 0; }

int sub_00bf7970(void);
int sub_00a333b0(void);
// @baa 0x01501620
void sub_01501620(void)
{
  sub_00a333b0();
  sub_00bf7970();
  return;
}

// @baa 0x01501630
void sub_01501630(void) {  }

int sub_0062c580(...);
// @baa 0x01501640
void sub_01501640(undefined4 param_1, undefined4 param_2)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)sub_0062c580(param_1,param_2);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}

struct D { void sub_01506640(); };

extern D g_026dfc70;
// @baa 0x01501660
void sub_01501660() { g_026dfc70.sub_01506640(); }

int sub_00630f20(...);
extern undefined4 g_026667a8;
// @baa 0x01501670
void sub_01501670(void)
{
  sub_00630f20(g_026667a8,L"SECURE CRT: Invalid parameter detected.");
  return;
}

// @baa 0x015016f0
void sub_015016f0(void) {  }

class wxApp;
class wxApp {
    public:
    public: __declspec(dllimport) wxApp();
    friend struct C;
};

struct C {
    wxApp * sub_01501720();
};

extern undefined * g_022cefe8;
// @baa 0x01501720
wxApp * C::sub_01501720(void)
{
    wxApp * param_1 = (wxApp *)this;

  ((wxApp *)(param_1))->wxApp::wxApp();
  *(undefined ***)param_1 = &g_022cefe8;
  return param_1;
}

extern undefined4 ms_appInstance_exref;
// @baa 0x01501770
undefined4 sub_01501770(void)
{
  return *(undefined4 *)ms_appInstance_exref;
}

struct C_01501780 { int sub_01501780(void); };

// @baa 0x01501780
int C_01501780::sub_01501780(void) { return *(int*)((char*)this + 20); }

struct C_01501810 {
    int sub_01501810();
};

// @baa 0x01501810
int C_01501810::sub_01501810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_015019c0 {
    int sub_015019c0();
};

// @baa 0x015019c0
int C_015019c0::sub_015019c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01501a50 { int a, b, c; C_01501a50(); };

// @baa 0x01501a50
C_01501a50::C_01501a50() : a(0), b(0), c(0) {}

void sub_00765d90();
// @baa 0x01501a60
void sub_01501a60(void) { sub_00765d90(); }

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_01501d00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01501d00& operator++();
};

// @baa 0x01501d00
FSparseArrayConstIt_01501d00& FSparseArrayConstIt_01501d00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01501d20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01501d20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01501d20
FSparseArrayConstIt_01501d20::FSparseArrayConstIt_01501d20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01501d70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01501d70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01501d70
FSparseArrayConstIt_01501d70::FSparseArrayConstIt_01501d70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_01501dc0(void);
// @baa 0x01501f30
int UTexture2D::sub_01501f30(void)
{
    int param_1 = (int)this;

  sub_01501dc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01501fc0
int UTexture2D::sub_01501fc0(void)
{
    int param_1 = (int)this;

  sub_01501dc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01501f50();
// @baa 0x01501fe0
void sub_01501fe0(void) { sub_01501f50(); }

// @baa 0x01501ff0
int UTexture2D::sub_01501ff0(void)
{
    int param_1 = (int)this;

  sub_01501dc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01502010
void sub_01502010(void) { sub_01501f50(); }

// @baa 0x01502020
int UTexture2D::sub_01502020(void)
{
    int param_1 = (int)this;

  sub_01501dc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01502040
void sub_01502040(void) { sub_01501f50(); }

struct A_01502120 { virtual void sub_015021f0(); char pad[80]; };

struct B_01502120 { virtual void sub_015021f0(); };

struct C_01502120 : A_01502120, B_01502120 { virtual void sub_015021f0(); C_01502120(); };

C_01502120::C_01502120() {}

// @baa 0x01502120
void C_01502120::sub_015021f0() {}

struct C_015021f0 {
    undefined4 sub_015021f0(byte);
};

int sub_0053dfa0(...);
int sub_01502130(void);
// @baa 0x015021f0
undefined4 C_015021f0::sub_015021f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01502130();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01502d70
float10 sub_01502d70(double param_1)
{
  return (float10)param_1;
}

extern char g_01e9f688[];
struct C_01502db0 { C_01502db0* sub_01502db0(void); };

// @baa 0x01502db0
C_01502db0* C_01502db0::sub_01502db0(void) { *(int*)((char*)this + 0) = (int)g_01e9f688; return this; }

extern char g_022d3378[];
struct C_01502dc0 { C_01502dc0* sub_01502dc0(void); };

// @baa 0x01502dc0
C_01502dc0* C_01502dc0::sub_01502dc0(void) { *(int*)((char*)this + 0) = (int)g_022d3378; return this; }

struct C_01502dd0 { void sub_01502dd0(void); };

// @baa 0x01502dd0
void C_01502dd0::sub_01502dd0(void) { *(int*)((char*)this + 0) = (int)g_022d3378; }

// @baa 0x01502de0
int __stdcall sub_01502de0(int a0, int a1) { return 0; }

// @baa 0x01502df0
int __stdcall sub_01502df0(int a0, int a1) { return 0; }

// @baa 0x01502e00
int __stdcall sub_01502e00(int a0) { return 0; }

struct C_01502e10 {
    undefined4 * sub_01502e10(byte);
};

// @baa 0x01502e10
undefined4 * C_01502e10::sub_01502e10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022d3378);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_025e9cfc;
// @baa 0x01502e30
void sub_01502e30(void)
{
  g_025e9cfc = 1;
  return;
}

struct C_01503070 {
    void sub_01503070(int *);
};

// @baa 0x01503070
void C_01503070::sub_01503070(int * param_2)
{
    int param_1 = (int)this;

  if (*param_2 != 0) {
    *(int *)(*param_2 + 0x1c) = param_1 + 0x18;
  }
  *(int *)(param_1 + 0x18) = *param_2;
  *(int **)(param_1 + 0x1c) = param_2;
  *param_2 = param_1;
  return;
}

struct C_01503090 {
    void sub_01503090();
};

// @baa 0x01503090
void C_01503090::sub_01503090(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  **(undefined4 **)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  return;
}

struct C_015032f0 {
    void sub_015032f0(undefined4 *, undefined4 *);
};

// @baa 0x015032f0
void C_015032f0::sub_015032f0(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x2028c);
  *param_3 = 0;
  return;
}

struct C_01503410 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_01503410* sub_01503410();
};

extern INT g_022d3510;
// @baa 0x01503410
C_01503410* C_01503410::sub_01503410()
{
    Value04 = 0;
    Unk00 = &g_022d3510;
    return this;
}

extern char g_022d35a4[];
struct C_01503420 { C_01503420* sub_01503420(void); };

// @baa 0x01503420
C_01503420* C_01503420::sub_01503420(void) { *(int*)((char*)this + 0) = (int)g_022d35a4; return this; }

struct C_01503430 { void sub_01503430(void); };

// @baa 0x01503430
void C_01503430::sub_01503430(void) { *(int*)((char*)this + 0) = (int)g_022d3378; }

struct C_01503440 {
    undefined4 * sub_01503440(byte);
};

// @baa 0x01503440
undefined4 * C_01503440::sub_01503440(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022d3378);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_022d35b4[];
struct C_01503460 { C_01503460* sub_01503460(void); };

// @baa 0x01503460
C_01503460* C_01503460::sub_01503460(void) { *(int*)((char*)this + 0) = (int)g_022d35b4; return this; }

struct C_01503ab0 { int a, b, c; C_01503ab0(); };

// @baa 0x01503ab0
C_01503ab0::C_01503ab0() : a(0), b(0), c(0) {}

struct C_01503ac0 { int a, b, c; C_01503ac0(); };

// @baa 0x01503ac0
C_01503ac0::C_01503ac0() : a(0), b(0), c(0) {}

struct C_01503ad0 { int a, b, c; C_01503ad0(); };

// @baa 0x01503ad0
C_01503ad0::C_01503ad0() : a(0), b(0), c(0) {}

struct C_01503ae0 { int a, b, c; C_01503ae0(); };

// @baa 0x01503ae0
C_01503ae0::C_01503ae0() : a(0), b(0), c(0) {}

struct C_01503af0 { int a, b, c; C_01503af0(); };

// @baa 0x01503af0
C_01503af0::C_01503af0() : a(0), b(0), c(0) {}

struct C_01503b70 { int sub_01503b70(void); };

// @baa 0x01503b70
int C_01503b70::sub_01503b70(void) { return *(int*)((char*)this + 0); }

struct C_01503b80 { int sub_01503b80(void); };

// @baa 0x01503b80
int C_01503b80::sub_01503b80(void) { return *(int*)((char*)this + 0); }

struct C_01503b90 { int sub_01503b90(void); };

// @baa 0x01503b90
int C_01503b90::sub_01503b90(void) { return *(int*)((char*)this + 0); }

int sub_0059c990(void);
int sub_005adee0(...);
int sub_005d8a20(...);
extern undefined4 g_0268d084;
// @baa 0x01503ba0
void sub_01503ba0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_0268d084 == 0) {
    g_0268d084 = sub_005adee0(L"Core");
    sub_0059c990();
  }
  sub_005d8a20(g_0268d084,param_1,param_2,param_3);
  return;
}

int sub_01506ce0(void);
// @baa 0x01509570
int UTexture2D::sub_01509570(void)
{
    int param_1 = (int)this;

  sub_01506ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01509600
void __stdcall sub_01509600(int a0, int a1) {  }

// @baa 0x01509610
int __stdcall sub_01509610(int a0, int a1, int a2) { return 1; }

void sub_01508450();
// @baa 0x01509680
void sub_01509680(void) { sub_01508450(); }

struct C_01509690 {
    undefined4 * sub_01509690();
};

int sub_01509590(void);
extern undefined * g_022d3ab4;
// @baa 0x01509690
undefined4 * C_01509690::sub_01509690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01509590();
  *param_1 = (undefined4)(&g_022d3ab4);
  return param_1;
}

// @baa 0x01509770
int sub_01509770(void) { return 0; }

// @baa 0x01509780
void __stdcall sub_01509780(int a0) {  }

struct A_01509790 { virtual void sub_01509850(); };

struct B_01509790 { virtual void sub_01509850(); };

struct C_01509790 : A_01509790, B_01509790 { virtual void sub_01509850(); C_01509790(); };

C_01509790::C_01509790() {}

// @baa 0x01509790
void C_01509790::sub_01509850() {}

struct C_01509850 {
    undefined4 sub_01509850(byte);
};

int sub_015097a0(void);
// @baa 0x01509850
undefined4 C_01509850::sub_01509850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_015097a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01509870 {
    undefined4 * sub_01509870();
};

int sub_015096b0(void);
extern undefined * g_022d3b2c;
extern undefined * g_022d3b40;
// @baa 0x01509870
undefined4 * C_01509870::sub_01509870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_015096b0();
  *param_1 = (undefined4)(&g_022d3b40);
  param_1[1] = (undefined4)(&g_022d3b2c);
  return param_1;
}

struct A_01509890 { virtual void sub_015098b0(); };

struct B_01509890 { virtual void sub_015098b0(); };

struct C_01509890 : A_01509890, B_01509890 { virtual void sub_015098b0(); C_01509890(); };

C_01509890::C_01509890() {}

// @baa 0x01509890
void C_01509890::sub_015098b0() {}

int sub_0153b490(void);
int sub_0154a8a0(...);
extern undefined4 g_026e1034;
// @baa 0x0150d0f0
int sub_0150d0f0(void)
{
  if (g_026e1034 == 0) {
    g_026e1034 = sub_0154a8a0(L"CommonGame");
    sub_0153b490();
  }
  return g_026e1034;
}

struct C_0150dae0 { int a, b, c; C_0150dae0(); };

// @baa 0x0150dae0
C_0150dae0::C_0150dae0() : a(0), b(0), c(0) {}

// @baa 0x0150daf0
int sub_0150daf0(int param_1, int param_2)
{
  return *(int *)(param_2 + 8) - *(int *)(param_1 + 8);
}

// @baa 0x0150db00
int sub_0150db00(int param_1, int param_2)
{
  return *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0xc);
}

struct C_0150db10 {
    void sub_0150db10();
};

// @baa 0x0150db10
void C_0150db10::sub_0150db10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0053dfa0(*param_1);
  *param_1 = 0;
  return;
}

struct C_0150db30 {
    int sub_0150db30();
};

// @baa 0x0150db30
int C_0150db30::sub_0150db30(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return param_1[1];
  }
  return 0;
}

struct C_0150db40 { int sub_0150db40(void); };

// @baa 0x0150db40
int C_0150db40::sub_0150db40(void) { return *(int*)((char*)this + 696); }

// @baa 0x0150db50
IMPLEMENT_CLASS_AT(ARGameInfoBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 21);

// @baa 0x0150dc60
UBOOL ARGameInfoBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150dc70
UBOOL ARGameInfoBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150dcb0
IMPLEMENT_CLASS_AT(ARHUDBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 22);

// @baa 0x0150ddc0
UBOOL ARHUDBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150ddd0
UBOOL ARHUDBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150de10
IMPLEMENT_CLASS_AT(ARDynamicMenu, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 23);

// @baa 0x0150df20
UBOOL ARDynamicMenu::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150df30
UBOOL ARDynamicMenu::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150df90
IMPLEMENT_CLASS_AT(URPlayerInputBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 25);

// @baa 0x0150e0a0
UBOOL URPlayerInputBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150e0b0
UBOOL URPlayerInputBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150e0f0
IMPLEMENT_CLASS_AT(ARPlayerControllerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 26);

// @baa 0x0150e200
UBOOL ARPlayerControllerBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150e210
UBOOL ARPlayerControllerBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150e250
IMPLEMENT_CLASS_AT(AREmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 27);

// @baa 0x0150e360
UBOOL AREmitter::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150e370
UBOOL AREmitter::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150e3b0
IMPLEMENT_CLASS_AT(ARGameReplicationInfoBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 28);

// @baa 0x0150e4c0
UBOOL ARGameReplicationInfoBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150e4d0
UBOOL ARGameReplicationInfoBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150e510
IMPLEMENT_CLASS_AT(ARAutoJezNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 29);

// @baa 0x0150e620
UBOOL ARAutoJezNode::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150e630
UBOOL ARAutoJezNode::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150e670
IMPLEMENT_CLASS_AT(URSeqAct_ChangeRain_None, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 30);

// @baa 0x0150e780
UBOOL URSeqAct_ChangeRain_None::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150e790
UBOOL URSeqAct_ChangeRain_None::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150e7d0
IMPLEMENT_CLASS_AT(ARPointSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 31);

// @baa 0x0150e8e0
UBOOL ARPointSource::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150e8f0
UBOOL ARPointSource::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150e930
IMPLEMENT_CLASS_AT(ARRandomTimedSoundEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 32);

// @baa 0x0150ea40
UBOOL ARRandomTimedSoundEmitter::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150ea50
UBOOL ARRandomTimedSoundEmitter::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150ea90
IMPLEMENT_CLASS_AT(URScriptConversation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 34);

// @baa 0x0150eba0
UBOOL URScriptConversation::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150ebb0
UBOOL URScriptConversation::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150ebf0
IMPLEMENT_CLASS_AT(URBarkFlagBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 35);

// @baa 0x0150ed00
UBOOL URBarkFlagBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150ed10
UBOOL URBarkFlagBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150ed50
IMPLEMENT_CLASS_AT(URBarkSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 36);

// @baa 0x0150ee60
UBOOL URBarkSet::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0150ee70
UBOOL URBarkSet::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150eeb0
IMPLEMENT_CLASS_AT(URObjectPool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 38);

extern int g_022d3674;
struct S_01503930 {
    int* Pointer_0000;
    int Field_0004;
    float Field_0008;
    S_01503930* sub_01503930();
};

// @baa 0x01503930
S_01503930* S_01503930::sub_01503930() {
    Pointer_0000 = (int*)&g_022d3674;
    Field_0004 = 0;
    Field_0008 = 0.0f;
    return this;
}
