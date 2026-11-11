// CurveEd.cpp: 11 functions
// Placed here by: neighbours 6, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 * sub_01115f50(undefined4);
    int sub_00f9d3e0(int);
};

extern undefined4 g_021bc5cc;
extern undefined * g_021bc5d0;
// @baa 0x01115f50
undefined4 * C::sub_01115f50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_00f9d3e0(0);
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd4] = 0;
  param_1[0xca] = param_2;
  *param_1 = (undefined4)(&g_021bc5d0);
  param_1[1] = (undefined4)(&g_021bc5cc);
  param_1[0xb] = 0xffffffff;
  return param_1;
}

struct C_01115fe0 {
    void sub_01115fe0();
};

int sub_00f80980(void);
// @baa 0x01115fe0
void C_01115fe0::sub_01115fe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021bc5d0);
  param_1[1] = (undefined4)(&g_021bc5cc);
  sub_00f80980();
  return;
}

extern char g_025e85e0[];
// @baa 0x01116000
int sub_01116000(void) { return (int)g_025e85e0; }

extern char g_026ced58[];
// @baa 0x01116010
int sub_01116010(void) { return (int)g_026ced58; }

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01116050;
};

struct C_01116050 {
    void sub_01116050(wxUpdateUIEvent *);
};

// @baa 0x01116050
void C_01116050::sub_01116050(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x250) != 0);
  return;
}

// @baa 0x01116070
void __stdcall sub_01116070(int a0) {  }

struct C_0111a010 { int a, b, c; C_0111a010(); };

// @baa 0x0111a010
C_0111a010::C_0111a010() : a(0), b(0), c(0) {}

// @baa 0x0111d620
IMPLEMENT_CLASS_AT(UCurveEdOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEd.cpp", 33);

// @baa 0x0111d910
// @baa 0x01126710
IMPLEMENT_CLASS_AT(UCurveEdPreset_Nothing, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 11);

struct Item { char d[0x2c]; };

struct Inner { char p[0xc]; TArray<Item> Items; char q[0x28-0x18]; };

struct Obj { char pad[0x30]; TArray<Inner> Groups; int Index; };

struct E { int A; int B; int C_01135350; int D; int F; };

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
  virtual BYTE v6(int);
  virtual void v7(int,int,float*,float*);
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
  virtual void v15(int,int);
  virtual void v16(int,int,float,float);
};

V* sub_00d06e20(Item*);
struct W { int sub_00cc65f0(); };

struct X { char p[8]; W* w; };

struct C_01135350 {
  char pad[0x144]; X* x; Obj* O; char pad2[0x1f4-0x14c]; TArray<E> L;
  void sub_01123af0();
  void sub_01135350(int);
};

// @baa 0x01135350
void C_01135350::sub_01135350(int) {
  for (int i = 0; i < L.Num(); i++) {
    E& e = L(i);
    Item* it = &O->Groups(O->Index).Items(e.A);
    V* v = sub_00d06e20(it);
    int r = (int)(UINT)v->v6(e.C_01135350);
    if (r == 1 || r == 5) v->v15(e.C_01135350, 3);
    float a, b;
    v->v7(e.B, e.C_01135350, &a, &b);
    float m = (a + b) * 0.5f;
    v->v16(e.B, e.C_01135350, m, m);
  }
  sub_01123af0();
  ((W*)x->w)->sub_00cc65f0();
}
