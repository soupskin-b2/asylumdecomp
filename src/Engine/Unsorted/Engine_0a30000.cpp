// Engine_0a30000.cpp (part 1 of 3): 239 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_008f10c0(...);
int sub_008f9330(void);
extern undefined4 g_026b5b6c;
// @baa 0x00a32dc0
int sub_00a32dc0(void)
{
  if (g_026b5b6c == 0) {
    g_026b5b6c = sub_008f10c0(L"Engine");
    sub_008f9330();
  }
  return g_026b5b6c;
}

struct V_00a32df0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g(int a0);
};

struct O_00a32df0 { char pad[4]; V_00a32df0* p; void sub_00a32df0(int a0); };

// @baa 0x00a32df0
void O_00a32df0::sub_00a32df0(int a0) { p->g(a0); }

struct V_00a32e00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void g(int a0);
};

struct O_00a32e00 { char pad[4]; V_00a32e00* p; void sub_00a32e00(int a0); };

// @baa 0x00a32e00
void O_00a32e00::sub_00a32e00(int a0) { p->g(a0); }

extern char g_01fc0808[];
struct C { C* sub_00a32e10(void); };

// @baa 0x00a32e10
C* C::sub_00a32e10(void) { *(int*)((char*)this + 0) = (int)g_01fc0808; return this; }

struct C_00a32e20 { void sub_00a32e20(void); };

// @baa 0x00a32e20
void C_00a32e20::sub_00a32e20(void) { *(int*)((char*)this + 0) = (int)g_01fc0808; }

struct C_00a32e30 {
    undefined4 * sub_00a32e30(byte);
};

int sub_0053dfa0(...);
// @baa 0x00a32e30
undefined4 * C_00a32e30::sub_00a32e30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc0808);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct V_00a32e50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void g(int a0);
};

struct O_00a32e50 { char pad[4]; V_00a32e50* p; void sub_00a32e50(int a0); };

// @baa 0x00a32e50
void O_00a32e50::sub_00a32e50(int a0) { p->g(a0); }

struct V_00a32e60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void g(int a0);
};

struct O_00a32e60 { char pad[4]; V_00a32e60* p; void sub_00a32e60(int a0); };

// @baa 0x00a32e60
void O_00a32e60::sub_00a32e60(int a0) { p->g(a0); }

struct V_00a32e70 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void g(int a0);
};

struct O_00a32e70 { char pad[4]; V_00a32e70* p; void sub_00a32e70(int a0); };

// @baa 0x00a32e70
void O_00a32e70::sub_00a32e70(int a0) { p->g(a0); }

struct V_00a32e80 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void g(int a0);
};

struct O_00a32e80 { char pad[4]; V_00a32e80* p; void sub_00a32e80(int a0); };

// @baa 0x00a32e80
void O_00a32e80::sub_00a32e80(int a0) { p->g(a0); }

struct V_00a32e90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void g(int a0);
};

struct O_00a32e90 { char pad[4]; V_00a32e90* p; void sub_00a32e90(int a0); };

// @baa 0x00a32e90
void O_00a32e90::sub_00a32e90(int a0) { p->g(a0); }

struct V_00a32ea0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void g(int a0);
};

struct O_00a32ea0 { char pad[4]; V_00a32ea0* p; void sub_00a32ea0(int a0); };

// @baa 0x00a32ea0
void O_00a32ea0::sub_00a32ea0(int a0) { p->g(a0); }

struct V_00a32eb0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void g(int a0);
};

struct O_00a32eb0 { char pad[4]; V_00a32eb0* p; void sub_00a32eb0(int a0); };

// @baa 0x00a32eb0
void O_00a32eb0::sub_00a32eb0(int a0) { p->g(a0); }

struct V_00a32ec0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void g(int a0);
};

struct O_00a32ec0 { char pad[4]; V_00a32ec0* p; void sub_00a32ec0(int a0); };

// @baa 0x00a32ec0
void O_00a32ec0::sub_00a32ec0(int a0) { p->g(a0); }

// @baa 0x00a32ef0
undefined4 sub_00a32ef0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

extern char g_01fc080c[];
struct C_00a32f30 { C_00a32f30* sub_00a32f30(void); };

// @baa 0x00a32f30
C_00a32f30* C_00a32f30::sub_00a32f30(void) { *(int*)((char*)this + 0) = (int)g_01fc080c; return this; }

extern char g_01fc081c[];
struct C_00a32f40 { C_00a32f40* sub_00a32f40(void); };

// @baa 0x00a32f40
C_00a32f40* C_00a32f40::sub_00a32f40(void) { *(int*)((char*)this + 0) = (int)g_01fc081c; return this; }

extern char g_02405df8[];
struct C_00a32f50 { void sub_00a32f50(void); };

// @baa 0x00a32f50
void C_00a32f50::sub_00a32f50(void) { *(int*)((char*)this + 0) = (int)g_02405df8; }

struct C_00a32f60 {
    undefined4 * sub_00a32f60(byte);
};

// @baa 0x00a32f60
undefined4 * C_00a32f60::sub_00a32f60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405df8));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc0824[];
struct C_00a32f80 { C_00a32f80* sub_00a32f80(void); };

// @baa 0x00a32f80
C_00a32f80* C_00a32f80::sub_00a32f80(void) { *(int*)((char*)this + 0) = (int)g_01fc0824; return this; }

// @baa 0x00a32f90
void __stdcall sub_00a32f90(int a0, int a1) {  }

// @baa 0x00a32fa0
void __stdcall sub_00a32fa0(int a0, int a1) {  }

extern char g_02405de4[];
struct C_00a32fb0 { void sub_00a32fb0(void); };

// @baa 0x00a32fb0
void C_00a32fb0::sub_00a32fb0(void) { *(int*)((char*)this + 0) = (int)g_02405de4; }

struct C_00a32fc0 {
    undefined4 * sub_00a32fc0(byte);
};

// @baa 0x00a32fc0
undefined4 * C_00a32fc0::sub_00a32fc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405de4));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc0834[];
struct C_00a32fe0 { C_00a32fe0* sub_00a32fe0(void); };

// @baa 0x00a32fe0
C_00a32fe0* C_00a32fe0::sub_00a32fe0(void) { *(int*)((char*)this + 0) = (int)g_01fc0834; return this; }

extern char g_02405e10[];
struct C_00a32ff0 { void sub_00a32ff0(void); };

// @baa 0x00a32ff0
void C_00a32ff0::sub_00a32ff0(void) { *(int*)((char*)this + 0) = (int)g_02405e10; }

struct C_00a33000 {
    undefined4 * sub_00a33000(byte);
};

// @baa 0x00a33000
undefined4 * C_00a33000::sub_00a33000(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405e10));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005ec700(...);
int sub_005f5500(...);
// @baa 0x00a33230
void sub_00a33230(void)
{
  sub_005f5500(0,
               L"Failed to initialise NVIDIA PhysX.  Please install the latest NVIDIA PhysX system software."
              );
  sub_005ec700(1);
  return;
}

// @baa 0x00a33290
void sub_00a33290(void) {  }

extern char g_01fc0774[];
struct C_00a332f0 { C_00a332f0* sub_00a332f0(void); };

// @baa 0x00a332f0
C_00a332f0* C_00a332f0::sub_00a332f0(void) { *(int*)((char*)this + 0) = (int)g_01fc0774; return this; }

extern char g_01fc07f4[];
struct C_00a33300 { C_00a33300* sub_00a33300(void); };

// @baa 0x00a33300
C_00a33300* C_00a33300::sub_00a33300(void) { *(int*)((char*)this + 0) = (int)g_01fc07f4; return this; }

extern char g_01fc0794[];
struct C_00a334d0 { C_00a334d0* sub_00a334d0(void); };

// @baa 0x00a334d0
C_00a334d0* C_00a334d0::sub_00a334d0(void) { *(int*)((char*)this + 0) = (int)g_01fc0794; return this; }

// @baa 0x00a334e0
void sub_00a334e0(void) {  }

struct C_00a334f0 {
    undefined4 sub_00a334f0(byte);
};

int sub_00e0cce0(void);
// @baa 0x00a334f0
undefined4 C_00a334f0::sub_00a334f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e0cce0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a344b0
int ANxForceFieldGeneric::vf_000(void) { return 1; }

// @baa 0x00a344c0
bool ANxForceFieldGeneric::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00a34540 { C_00a34540* sub_00a34540(void); };

// @baa 0x00a34540
C_00a34540* C_00a34540::sub_00a34540(void) { return this; }

struct C_00a34550 {
    C_00a34550* sub_00a34550(BYTE b);
};

// @baa 0x00a34550
C_00a34550* C_00a34550::sub_00a34550(BYTE b)
{
    *(BYTE*)this = b;
    return this;
}

struct C_00a34560 { C_00a34560* sub_00a34560(void); };

// @baa 0x00a34560
C_00a34560* C_00a34560::sub_00a34560(void) { return this; }

struct C_00a345c0 { C_00a345c0* sub_00a345c0(void); };

// @baa 0x00a345c0
C_00a345c0* C_00a345c0::sub_00a345c0(void) { return this; }

// @baa 0x00a345d0
IMPLEMENT_CLASS_AT(ANxForceFieldRadial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldRadial.cpp", 15);

// @baa 0x00a346e0
int ANxForceFieldRadial::vf_000(void) { return 1; }

// @baa 0x00a346f0
bool ANxForceFieldRadial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00a347e0 { C_00a347e0* sub_00a347e0(void); };

// @baa 0x00a347e0
C_00a347e0* C_00a347e0::sub_00a347e0(void) { return this; }

// @baa 0x00a347f0
IMPLEMENT_CLASS_AT(ANxForceFieldTornado, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldTornado.cpp", 14);

// @baa 0x00a34900
int ANxForceFieldTornado::vf_000(void) { return 1; }

// @baa 0x00a34910
bool ANxForceFieldTornado::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a34bd0
IMPLEMENT_CLASS_AT(ANxRadialCustomForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxRadialCustomForceField.cpp", 15);

// @baa 0x00a34ce0
int ANxRadialCustomForceField::vf_000(void) { return 1; }

// @baa 0x00a34cf0
bool ANxRadialCustomForceField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a34d60
IMPLEMENT_CLASS_AT(ANxTornadoAngularForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxTornadoAngularForceField.cpp", 14);

// @baa 0x00a34e70
int ANxTornadoAngularForceField::vf_000(void) { return 1; }

// @baa 0x00a34e80
bool ANxTornadoAngularForceField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a34ef0
int ANxTornadoForceFieldCapsule::vf_000(void) { return 1; }

struct C_00a34f50 { C_00a34f50* sub_00a34f50(void); };

// @baa 0x00a34f50
C_00a34f50* C_00a34f50::sub_00a34f50(void) { return this; }

// @baa 0x00a34f60
IMPLEMENT_CLASS_AT(ANxTornadoForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxTornadoForceField.cpp", 14);

// @baa 0x00a35070
int ANxTornadoForceField::vf_000(void) { return 1; }

// @baa 0x00a35080
bool ANxTornadoForceField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a350f0
int ANxTornadoAngularForceFieldCapsule::vf_000(void) { return 1; }

struct C_00a35150 { char* sub_00a35150(void); };

// @baa 0x00a35150
char* C_00a35150::sub_00a35150(void) { return (char*)this + 104; }

struct C_00a351b0 {
    DWORD sub_00a351b0();
};

// @baa 0x00a351b0
DWORD C_00a351b0::sub_00a351b0(void)
{
    DWORD p = (DWORD)this;
    *(WORD *)(p + 12) = 0;
    return p;
}

struct C_00a351c0 {
    C_00a351c0 *sub_00a351c0();
};

// @baa 0x00a351c0
C_00a351c0 *C_00a351c0::sub_00a351c0()
{
    C_00a351c0 *c = this;
    *(WORD *)((char *)c + 10) = 0;
    return c;
}

struct C_00a35280 { int sub_00a35280(void); };

// @baa 0x00a35280
int C_00a35280::sub_00a35280(void) { return *(int*)((char*)this + 4); }

struct C_00a35290 { int sub_00a35290(void); };

// @baa 0x00a35290
int C_00a35290::sub_00a35290(void) { return *(int*)((char*)this + 4); }

struct T_00a352a0 { int x; };

// @baa 0x00a352a0
template T_00a352a0& TIndirectArray<T_00a352a0>::operator()(INT);

struct T_00a352f0 { int x; };

// @baa 0x00a352f0
template const T_00a352f0& TIndirectArray<T_00a352f0>::operator()(INT) const;

struct C_00a35360 { int sub_00a35360(void); };

// @baa 0x00a35360
int C_00a35360::sub_00a35360(void) { return *(int*)((char*)this + 4); }

struct C_00a35370 { void sub_00a35370(int a0); };

// @baa 0x00a35370
void C_00a35370::sub_00a35370(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_00a35380 { int a; C_00a35380(int); };

// @baa 0x00a35380
C_00a35380::C_00a35380(int x) : a(x) {}

struct C_00a353a0 {
    C_00a353a0 *sub_00a353a0();
};

// @baa 0x00a353a0
C_00a353a0 *C_00a353a0::sub_00a353a0()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_00a353b0 { int sub_00a353b0(void); };

// @baa 0x00a353b0
int C_00a353b0::sub_00a353b0(void) { return *(int*)((char*)this + 0); }

struct C_00a353c0 { int a, b, c; C_00a353c0(); };

// @baa 0x00a353c0
C_00a353c0::C_00a353c0() : a(0), b(0), c(0) {}

struct C_00a353d0 { int sub_00a353d0(void); };

// @baa 0x00a353d0
int C_00a353d0::sub_00a353d0(void) { return *(int*)((char*)this + 4); }

struct C_00a353e0 { int a, b, c; C_00a353e0(); };

// @baa 0x00a353e0
C_00a353e0::C_00a353e0() : a(0), b(0), c(0) {}

struct C_00a353f0 { int sub_00a353f0(void); };

// @baa 0x00a353f0
int C_00a353f0::sub_00a353f0(void) { return *(int*)((char*)this + 4); }

struct C_00a35400 { int sub_00a35400(void); };

// @baa 0x00a35400
int C_00a35400::sub_00a35400(void) { return *(int*)((char*)this + 4); }

struct C_00a35410 { int sub_00a35410(void); };

// @baa 0x00a35410
int C_00a35410::sub_00a35410(void) { return *(int*)((char*)this + 4); }

struct C_00a35420 { int sub_00a35420(void); };

// @baa 0x00a35420
int C_00a35420::sub_00a35420(void) { return *(int*)((char*)this + 4); }

struct C_00a35430 { int sub_00a35430(void); };

// @baa 0x00a35430
int C_00a35430::sub_00a35430(void) { return *(int*)((char*)this + 4); }

struct C_00a35440 { int sub_00a35440(void); };

// @baa 0x00a35440
int C_00a35440::sub_00a35440(void) { return *(int*)((char*)this + 4); }

struct C_00a35450 { int sub_00a35450(void); };

// @baa 0x00a35450
int C_00a35450::sub_00a35450(void) { return *(int*)((char*)this + 4); }

struct C_00a35460 { int sub_00a35460(void); };

// @baa 0x00a35460
int C_00a35460::sub_00a35460(void) { return *(int*)((char*)this + 4); }

struct C_00a35470 { int sub_00a35470(void); };

// @baa 0x00a35470
int C_00a35470::sub_00a35470(void) { return *(int*)((char*)this + 4); }

struct C_00a35480 { int sub_00a35480(void); };

// @baa 0x00a35480
int C_00a35480::sub_00a35480(void) { return *(int*)((char*)this + 4); }

struct C_00a35490 { int sub_00a35490(void); };

// @baa 0x00a35490
int C_00a35490::sub_00a35490(void) { return *(int*)((char*)this + 4); }

struct C_00a354a0 { int sub_00a354a0(void); };

// @baa 0x00a354a0
int C_00a354a0::sub_00a354a0(void) { return *(int*)((char*)this + 4); }

struct C_00a354b0 { int sub_00a354b0(void); };

// @baa 0x00a354b0
int C_00a354b0::sub_00a354b0(void) { return *(int*)((char*)this + 4); }

struct C_00a354c0 { int sub_00a354c0(void); };

// @baa 0x00a354c0
int C_00a354c0::sub_00a354c0(void) { return *(int*)((char*)this + 4); }

struct C_00a354d0 { int a, b, c; C_00a354d0(); };

// @baa 0x00a354d0
C_00a354d0::C_00a354d0() : a(0), b(0), c(0) {}

struct C_00a354e0 { int sub_00a354e0(void); };

// @baa 0x00a354e0
int C_00a354e0::sub_00a354e0(void) { return *(int*)((char*)this + 0); }

struct C_00a354f0 { int sub_00a354f0(void); };

// @baa 0x00a354f0
int C_00a354f0::sub_00a354f0(void) { return *(int*)((char*)this + 4); }

struct C_00a35500 { int a, b, c; C_00a35500(); };

// @baa 0x00a35500
C_00a35500::C_00a35500() : a(0), b(0), c(0) {}

struct C_00a35510 { int sub_00a35510(void); };

// @baa 0x00a35510
int C_00a35510::sub_00a35510(void) { return *(int*)((char*)this + 4); }

struct C_00a35520 { int a, b, c; C_00a35520(); };

// @baa 0x00a35520
C_00a35520::C_00a35520() : a(0), b(0), c(0) {}

struct C_00a35530 { int sub_00a35530(void); };

// @baa 0x00a35530
int C_00a35530::sub_00a35530(void) { return *(int*)((char*)this + 4); }

struct C_00a355c0 {
    void sub_00a355c0(undefined1);
};

// @baa 0x00a355c0
void C_00a355c0::sub_00a355c0(undefined1 param_2)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  *(undefined1 *)(param_1 + 5) = param_2;
  return;
}

struct C_00a35690 {
    void sub_00a35690(undefined1);
};

// @baa 0x00a35690
void C_00a35690::sub_00a35690(undefined1 param_2)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  *(undefined1 *)(param_1 + 7) = param_2;
  return;
}

struct C_00a357c0 {
    void sub_00a357c0(undefined1);
};

// @baa 0x00a357c0
void C_00a357c0::sub_00a357c0(undefined1 param_2)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  *(undefined1 *)(param_1 + 7) = param_2;
  return;
}

struct C_00a35810 { int sub_00a35810(void); };

// @baa 0x00a35810
int C_00a35810::sub_00a35810(void) { return *(int*)((char*)this + 0); }

struct C_00a35840 {
    undefined4 sub_00a35840();
};

// @baa 0x00a35840
undefined4 C_00a35840::sub_00a35840(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_00a358c0 { int sub_00a358c0(void); };

// @baa 0x00a358c0
int C_00a358c0::sub_00a358c0(void) { return *(int*)((char*)this + 12); }

struct C_00a358f0 { C_00a358f0* sub_00a358f0(void); };

// @baa 0x00a358f0
C_00a358f0* C_00a358f0::sub_00a358f0(void) { return this; }

struct C_00a35970 { int sub_00a35970(void); };

// @baa 0x00a35970
int C_00a35970::sub_00a35970(void) { return *(int*)((char*)this + 0); }

struct C_00a359f0 { int sub_00a359f0(void); };

// @baa 0x00a359f0
int C_00a359f0::sub_00a359f0(void) { return *(int*)((char*)this + 0); }

struct C_00a35a00 { int sub_00a35a00(void); };

// @baa 0x00a35a00
int C_00a35a00::sub_00a35a00(void) { return *(int*)((char*)this + 0); }

struct C_00a35a90 {
    int sub_00a35a90();
};

// @baa 0x00a35a90
int C_00a35a90::sub_00a35a90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a35aa0 { int a, b; C_00a35aa0(int, int); };

// @baa 0x00a35aa0
C_00a35aa0::C_00a35aa0(int x, int y) : a(x), b(y) {}

struct C_00a35ac0 {
    int sub_00a35ac0();
};

// @baa 0x00a35ac0
int C_00a35ac0::sub_00a35ac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a35ad0 { int a, b; C_00a35ad0(int, int); };

// @baa 0x00a35ad0
C_00a35ad0::C_00a35ad0(int x, int y) : a(x), b(y) {}

struct C_00a35af0 {
    int sub_00a35af0();
};

// @baa 0x00a35af0
int C_00a35af0::sub_00a35af0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a35b00 { int a, b; C_00a35b00(int, int); };

// @baa 0x00a35b00
C_00a35b00::C_00a35b00(int x, int y) : a(x), b(y) {}

struct C_00a35b20 {
    int sub_00a35b20();
};

// @baa 0x00a35b20
int C_00a35b20::sub_00a35b20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a35b30 {
    int sub_00a35b30();
};

// @baa 0x00a35b30
int C_00a35b30::sub_00a35b30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a35b40 {
    int sub_00a35b40();
};

// @baa 0x00a35b40
int C_00a35b40::sub_00a35b40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a35b50 {
    int sub_00a35b50();
};

// @baa 0x00a35b50
int C_00a35b50::sub_00a35b50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a35b60 { int a, b; C_00a35b60(int, int); };

// @baa 0x00a35b60
C_00a35b60::C_00a35b60(int x, int y) : a(x), b(y) {}

// @baa 0x00a35b80
int sub_00a35b80(int a0) { return *(int*)a0; }

// @baa 0x00a35b90
bool sub_00a35b90(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00a35ba0 { int a, b; C_00a35ba0(const C_00a35ba0 &); };

// @baa 0x00a35ba0
C_00a35ba0::C_00a35ba0(const C_00a35ba0 &o) : a(o.a), b(o.b) {}

// @baa 0x00a35c00
int sub_00a35c00(int a0) { return *(int*)a0; }

// @baa 0x00a35c10
undefined4 sub_00a35c10(int * param_1)
{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}

struct C_00a35c20 {
    void sub_00a35c20(int *);
};

// @baa 0x00a35c20
void C_00a35c20::sub_00a35c20(int * param_2)
{
    int param_1 = (int)this;
  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0x1c);
  return;
}

// @baa 0x00a35c30
int sub_00a35c30(int a0) { return *(int*)a0; }

// @baa 0x00a35c40
undefined4 sub_00a35c40(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00a35ca0 {
    void sub_00a35ca0(int *);
};

// @baa 0x00a35ca0
void C_00a35ca0::sub_00a35ca0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00a35cb0 { int sub_00a35cb0(void); };

// @baa 0x00a35cb0
int C_00a35cb0::sub_00a35cb0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a35cf0 { int sub_00a35cf0(void); };

// @baa 0x00a35cf0
int C_00a35cf0::sub_00a35cf0(void) { return *(int*)((char*)this + 0); }

struct C_00a35d00 { int sub_00a35d00(void); };

// @baa 0x00a35d00
int C_00a35d00::sub_00a35d00(void) { return *(int*)((char*)this + 0); }

// @baa 0x00a35d60
int sub_00a35d60(int a0) { return *(int*)a0; }

// @baa 0x00a35d70
bool sub_00a35d70(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00a35d80 { int a, b; C_00a35d80(const C_00a35d80 &); };

// @baa 0x00a35d80
C_00a35d80::C_00a35d80(const C_00a35d80 &o) : a(o.a), b(o.b) {}

struct C_00a35de0 { int sub_00a35de0(void); };

// @baa 0x00a35de0
int C_00a35de0::sub_00a35de0(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00a35df0(INT Index);
};

// @baa 0x00a35df0
E* S::sub_00a35df0(INT Index)
{
    return &Items(Index);
}

struct C_00a35e40 { int sub_00a35e40(void); };

// @baa 0x00a35e40
int C_00a35e40::sub_00a35e40(void) { return *(int*)((char*)this + 0); }

struct C_00a35e50 { int sub_00a35e50(void); };

// @baa 0x00a35e50
int C_00a35e50::sub_00a35e50(void) { return *(int*)((char*)this + 0); }

// @baa 0x00a35e60
int sub_00a35e60(int a0) { return a0; }

// @baa 0x00a35e70
int sub_00a35e70(int a0) { return a0; }

struct C_00a35e80 {
    int sub_00a35e80(int);
};

// @baa 0x00a35e80
int C_00a35e80::sub_00a35e80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a35e90 { int sub_00a35e90(void); };

// @baa 0x00a35e90
int C_00a35e90::sub_00a35e90(void) { return *(int*)((char*)this + 20); }

struct C_00a35ea0 { int sub_00a35ea0(void); };

// @baa 0x00a35ea0
int C_00a35ea0::sub_00a35ea0(void) { return *(int*)((char*)this + 20); }

struct C_00a35eb0 { int sub_00a35eb0(void); };

// @baa 0x00a35eb0
int C_00a35eb0::sub_00a35eb0(void) { return *(int*)((char*)this + 20); }

struct C_00a35ec0 { int sub_00a35ec0(void); };

// @baa 0x00a35ec0
int C_00a35ec0::sub_00a35ec0(void) { return *(int*)((char*)this + 20); }

struct C_00a35ed0 { int sub_00a35ed0(void); };

// @baa 0x00a35ed0
int C_00a35ed0::sub_00a35ed0(void) { return *(int*)((char*)this + 20); }

struct C_00a35ee0 { int sub_00a35ee0(void); };

// @baa 0x00a35ee0
int C_00a35ee0::sub_00a35ee0(void) { return *(int*)((char*)this + 20); }

struct C_00a35fe0 {
    void sub_00a35fe0(undefined4, float, float, float);
};

int sub_00630f20(...);
// @baa 0x00a35fe0
void C_00a35fe0::sub_00a35fe0(undefined4 param_2, float param_3, float param_4, float param_5)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,(double)param_3,(double)param_4,(double)param_5);
  return;
}

int sub_00627f00(...);
// @baa 0x00a36010
void sub_00a36010(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x00a36030
void sub_00a36030(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_00a36130 { int a, b; C_00a36130(const C_00a36130 &); };

// @baa 0x00a36130
C_00a36130::C_00a36130(const C_00a36130 &o) : a(o.a), b(o.b) {}

struct C_00a36190 { int a, b; C_00a36190(const C_00a36190 &); };

// @baa 0x00a36190
C_00a36190::C_00a36190(const C_00a36190 &o) : a(o.a), b(o.b) {}

extern char g_01fc0ca8[];
struct C_00a3b240 { C_00a3b240* sub_00a3b240(void); };

// @baa 0x00a3b240
C_00a3b240* C_00a3b240::sub_00a3b240(void) { *(int*)((char*)this + 0) = (int)g_01fc0ca8; return this; }

// @baa 0x00a3b9a0
int sub_00a3b9a0(int param_1, int param_2)
{
  return *(int *)(*(int *)(param_2 + 0x80) + 0x9c) * *(int *)(*(int *)(param_2 + 0x80) + 100) -
         *(int *)(*(int *)(param_1 + 0x80) + 0x9c) * *(int *)(*(int *)(param_1 + 0x80) + 100);
}

extern char g_01fc0e94[];
struct C_00a3c5f0 { C_00a3c5f0* sub_00a3c5f0(void); };

// @baa 0x00a3c5f0
C_00a3c5f0* C_00a3c5f0::sub_00a3c5f0(void) { *(int*)((char*)this + 0) = (int)g_01fc0e94; return this; }

struct C_00a3c6b0 {
    FLOAT f;
    void sub_00a3c6b0(FLOAT *out);
};

// @baa 0x00a3c6b0
void C_00a3c6b0::sub_00a3c6b0(FLOAT *out)
{
    *out = f;
}

struct S_00a3c6f0 {
    FLOAT f;
    void sub_00a3c6f0(const FLOAT *p);
};

// @baa 0x00a3c6f0
void S_00a3c6f0::sub_00a3c6f0(const FLOAT *p) { f = *p; }

// @baa 0x00a3c720
undefined1 sub_00a3c720(undefined1 param_1)
{
  return param_1;
}

// @baa 0x00a3c750
void sub_00a3c750(void) {  }

// @baa 0x00a3c760
int sub_00a3c760(void) { return 1; }

extern char g_01fc07a8[];
struct C_00a3c7a0 { void sub_00a3c7a0(void); };

// @baa 0x00a3c7a0
void C_00a3c7a0::sub_00a3c7a0(void) { *(int*)((char*)this + 0) = (int)g_01fc07a8; }

extern char g_01fc0eb0[];
struct C_00a3ca80 { C_00a3ca80* sub_00a3ca80(void); };

// @baa 0x00a3ca80
C_00a3ca80* C_00a3ca80::sub_00a3ca80(void) { *(int*)((char*)this + 0) = (int)g_01fc0eb0; return this; }

struct C_00a3cb70 {
    void sub_00a3cb70(float *, float *);
};

// @baa 0x00a3cb70
void C_00a3cb70::sub_00a3cb70(float * param_2, float * param_3)
{
    float * param_1 = (float *)this;
  *param_2 = param_3[2] * param_1[2] + param_3[1] * param_1[1] + *param_3 * *param_1;
  return;
}

// @baa 0x00a3cbb0
void sub_00a3cbb0(void) {  }

// @baa 0x00a3cbc0
int sub_00a3cbc0(void) { return 1; }

struct C_00a3cc10 {
    void sub_00a3cc10();
};

// @baa 0x00a3cc10
void C_00a3cc10::sub_00a3cc10(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01fc07a8);
  return;
}

extern char g_01fc0ecc[];
struct C_00a3d990 { C_00a3d990* sub_00a3d990(void); };

// @baa 0x00a3d990
C_00a3d990* C_00a3d990::sub_00a3d990(void) { *(int*)((char*)this + 0) = (int)g_01fc0ecc; return this; }

struct C_00a3d9a0 { C_00a3d9a0* sub_00a3d9a0(void); };

// @baa 0x00a3d9a0
C_00a3d9a0* C_00a3d9a0::sub_00a3d9a0(void) { return this; }

// @baa 0x00a3d9d0
void sub_00a3d9d0(void) {  }

// @baa 0x00a3d9e0
int sub_00a3d9e0(void) { return 1; }

struct C_00a3da30 {
    void sub_00a3da30();
};

// @baa 0x00a3da30
void C_00a3da30::sub_00a3da30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01fc07a8);
  return;
}

struct E_00a3e410 { BYTE Bytes[16]; };

struct S_00a3e410 {
    TArray<E_00a3e410> Items; // 0x00
    const E_00a3e410* sub_00a3e410(INT Index) const;
};

// @baa 0x00a3e410
const E_00a3e410* S_00a3e410::sub_00a3e410(INT Index) const
{
    return &Items(Index);
}

struct E_00a3e460 { BYTE Bytes[16]; };

struct S_00a3e460 {
    TArray<E_00a3e460> Items; // 0x00
    const E_00a3e460* sub_00a3e460(INT Index) const;
};

// @baa 0x00a3e460
const E_00a3e460* S_00a3e460::sub_00a3e460(INT Index) const
{
    return &Items(Index);
}

struct C_00a3e4b0 {
    void sub_00a3e4b0();
};

int sub_00a35870(void);
extern undefined * g_01fc0c88;
// @baa 0x00a3e4b0
void C_00a3e4b0::sub_00a3e4b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc0c88);
  sub_00a35870();
  return;
}

struct C_00a3e590 { int sub_00a3e590(void); };

// @baa 0x00a3e590
int C_00a3e590::sub_00a3e590(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_00a3e5a0 {
    int sub_00a3e5a0(int);
    int sub_00a02990(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00a3e5a0
int C_00a3e5a0::sub_00a3e5a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a3e5a0 *)(this))->sub_00a02990(param_2);
  sub_01a37612((void *)(iVar1 * 100 + *param_1),0,param_2 * 100);
  return iVar1;
}

struct E_00a3e5d0 { BYTE Bytes[24]; };

struct S_00a3e5d0 {
    TArray<E_00a3e5d0> Items; // 0x00
    const E_00a3e5d0* sub_00a3e5d0(INT Index) const;
};

// @baa 0x00a3e5d0
const E_00a3e5d0* S_00a3e5d0::sub_00a3e5d0(INT Index) const
{
    return &Items(Index);
}

struct C_00a3e620{
int sub_00a3e620(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00a3e620
int C_00a3e620::sub_00a3e620(undefined4*param_2)
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

struct E_00a3e6f0 { BYTE Bytes[16]; };

struct S_00a3e6f0 {
    TArray<E_00a3e6f0> Items; // 0x00
    E_00a3e6f0* sub_00a3e6f0(INT Index);
};

// @baa 0x00a3e6f0
E_00a3e6f0* S_00a3e6f0::sub_00a3e6f0(INT Index)
{
    return &Items(Index);
}

struct E_00a3e740 { BYTE Bytes[16]; };

struct S_00a3e740 {
    TArray<E_00a3e740> Items; // 0x00
    E_00a3e740* sub_00a3e740(INT Index);
};

// @baa 0x00a3e740
E_00a3e740* S_00a3e740::sub_00a3e740(INT Index)
{
    return &Items(Index);
}

struct C_00a3e790 {
    undefined4 * sub_00a3e790(byte);
};

// @baa 0x00a3e790
undefined4 * C_00a3e790::sub_00a3e790(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fc0c88);
  sub_00a35870();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a3e7f0 {
    int sub_00a3e7f0(int);
};

// @baa 0x00a3e7f0
int C_00a3e7f0::sub_00a3e7f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00a3e800 {
    int sub_00a3e800(int);
};

// @baa 0x00a3e800
int C_00a3e800::sub_00a3e800(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00a3e870 {
    int sub_00a3e870(int);
};

// @baa 0x00a3e870
int C_00a3e870::sub_00a3e870(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

// @baa 0x00a3e880
void __stdcall sub_00a3e880(int a0, int a1) {  }

struct C_00a3e890 {
    int sub_00a3e890(int);
};

// @baa 0x00a3e890
int C_00a3e890::sub_00a3e890(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00a3e8a0
void __stdcall sub_00a3e8a0(int a0, int a1) {  }

struct C_00a3e8b0 {
    int sub_00a3e8b0(int);
};

// @baa 0x00a3e8b0
int C_00a3e8b0::sub_00a3e8b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00a3e8c0
void __stdcall sub_00a3e8c0(int a0, int a1) {  }

struct C_00a3e8d0 { int sub_00a3e8d0(void); };

// @baa 0x00a3e8d0
int C_00a3e8d0::sub_00a3e8d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a3e970 { int sub_00a3e970(void); };

// @baa 0x00a3e970
int C_00a3e970::sub_00a3e970(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a3ea20 { int sub_00a3ea20(void); };

// @baa 0x00a3ea20
int C_00a3ea20::sub_00a3ea20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a3ead0 { int sub_00a3ead0(void); };

// @baa 0x00a3ead0
int C_00a3ead0::sub_00a3ead0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a3eae0 {
    int sub_00a3eae0(int);
};

// @baa 0x00a3eae0
int C_00a3eae0::sub_00a3eae0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a3eaf0 {
    int sub_00a3eaf0(int);
};

// @baa 0x00a3eaf0
int C_00a3eaf0::sub_00a3eaf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00a3eb00 {
    int sub_00a3eb00(int);
};

// @baa 0x00a3eb00
int C_00a3eb00::sub_00a3eb00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00a3eb10 {
    int sub_00a3eb10(int);
};

// @baa 0x00a3eb10
int C_00a3eb10::sub_00a3eb10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a3eb50 {
    int sub_00a3eb50(int);
};

// @baa 0x00a3eb50
int C_00a3eb50::sub_00a3eb50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a3eb60 {
    int sub_00a3eb60(int);
};

// @baa 0x00a3eb60
int C_00a3eb60::sub_00a3eb60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a3eb70 { int sub_00a3eb70(void); };

// @baa 0x00a3eb70
int C_00a3eb70::sub_00a3eb70(void) { return *(int*)((char*)this + 20); }

struct C_00a3eb80 {
    int sub_00a3eb80();
};

// @baa 0x00a3eb80
int C_00a3eb80::sub_00a3eb80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a3eba0 {
    int sub_00a3eba0();
};

// @baa 0x00a3eba0
int C_00a3eba0::sub_00a3eba0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a3ebc0 {
    int sub_00a3ebc0(int);
};

// @baa 0x00a3ebc0
int C_00a3ebc0::sub_00a3ebc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a3ebd0 {
    int sub_00a3ebd0();
};

// @baa 0x00a3ebd0
int C_00a3ebd0::sub_00a3ebd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a3ebf0 {
    int sub_00a3ebf0();
};

// @baa 0x00a3ebf0
int C_00a3ebf0::sub_00a3ebf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a3ec10 {
    int sub_00a3ec10();
};

// @baa 0x00a3ec10
int C_00a3ec10::sub_00a3ec10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a3ec30 {
    int sub_00a3ec30();
};

// @baa 0x00a3ec30
int C_00a3ec30::sub_00a3ec30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a3ec50 {
    int sub_00a3ec50();
};

// @baa 0x00a3ec50
int C_00a3ec50::sub_00a3ec50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00a3ec60 {
    int sub_00a3ec60();
};

// @baa 0x00a3ec60
int C_00a3ec60::sub_00a3ec60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00a3ef10
void sub_00a3ef10(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00a3ef30
void sub_00a3ef30(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00a3ef80
void sub_00a3ef80(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00a3f300
IMPLEMENT_CLASS_AT(URB_BSJointSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 16);

// @baa 0x00a3f410
bool URB_BSJointSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a3f450
IMPLEMENT_CLASS_AT(URB_HingeSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 17);

// @baa 0x00a3f560
bool URB_HingeSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a3f5a0
IMPLEMENT_CLASS_AT(URB_PrismaticSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 18);

// @baa 0x00a3f6b0
bool URB_PrismaticSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a3f6f0
IMPLEMENT_CLASS_AT(URB_SkelJointSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 19);

// @baa 0x00a3f800
bool URB_SkelJointSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a3f840
IMPLEMENT_CLASS_AT(URB_PulleyJointSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 20);

// @baa 0x00a3f950
bool URB_PulleyJointSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a3f990
IMPLEMENT_CLASS_AT(URB_StayUprightSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 21);

// @baa 0x00a3faa0
bool URB_StayUprightSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a3fae0
IMPLEMENT_CLASS_AT(URB_DistanceJointSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 22);

// @baa 0x00a3fbf0
bool URB_DistanceJointSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a34500
void ANxForceFieldGeneric::vf_354()
{
	LinearKernel.Dummy = 0;
	ForceField.Dummy = 0;
	vf_238();
}

// @baa 0x00a34750
void ANxForceFieldRadial::vf_354()
{
	Kernel.Dummy = 0;
	ForceField.Dummy = 0;
	vf_238();
}

struct F00A355D0
{
    INT Counter;
    INT Value;

    void sub_00a355d0(FLOAT NewValue);
};

// @baa 0x00a355d0
void F00A355D0::sub_00a355d0(FLOAT NewValue)
{
    ++Counter;
    FLOAT F = NewValue;
    Value = *(INT*)&F;
}

static void g_00a355d0caller(F00A355D0* Obj, FLOAT NewValue)
{
    Obj->sub_00a355d0(NewValue);
}

struct F00A35630
{
    INT Counter;
    INT First;
    INT Second;
    INT Third;
    INT Value;

    void sub_00a35630(FLOAT NewValue);
};

// @baa 0x00a35630
void F00A35630::sub_00a35630(FLOAT NewValue)
{
    ++Counter;
    FLOAT F = NewValue;
    Value = *(INT*)&F;
}

static void g_00a35630caller(F00A35630* Obj, FLOAT NewValue)
{
    Obj->sub_00a35630(NewValue);
}

struct F00a356c0Obj
{
    INT Counter;
    INT First;
    INT Second;
    INT Third;
    INT Fourth;
    INT Fifth;
    INT Sixth;
    INT Seventh;
    INT Eighth;
    INT Value;

    void sub_00a356c0(FLOAT InValue);
};

// @baa 0x00a356c0
void F00a356c0Obj::sub_00a356c0(FLOAT InValue)
{
    FLOAT Sample = InValue;
    Counter++;
    Value = *(INT*)&Sample;
}

static F00a356c0Obj g_test00a356c0;
static void sub_00a356c0_test()
{
    g_test00a356c0.sub_00a356c0(1.0f);
}

struct S_00a356a0
{
    int Count;
    int Pad[7];
    int Value;
    void sub_00a356a0(float f);
};

// @baa 0x00a356a0
void S_00a356a0::sub_00a356a0(float f)
{
    float v = f;
    Count++;
    Value = *(int*)&v;
}

struct F00a35700Obj
{
    INT Counter;
    INT Value;

    void sub_00a35700(FLOAT Param);
};

// @baa 0x00a35700
void F00a35700Obj::sub_00a35700(FLOAT Param)
{
    FLOAT F = Param;
    Counter++;
    Value = *(INT*)&F;
}

static F00a35700Obj g_00a35700Obj;
static void sub_00a35700Caller(FLOAT F)
{
    g_00a35700Obj.sub_00a35700(F);
}

struct F00a356e0
{
	int Count;
	char Pad[0x24];
	int Value;

	void sub_00a356e0(float Value);
};

// @baa 0x00a356e0
void F00a356e0::sub_00a356e0(float Value)
{
	float f = Value;
	++Count;
	this->Value = *(int*)&f;
}

struct F00A35780Counter {
    INT Counter;
    INT First;
    INT Second;
    INT Third;
    INT Fourth;
    INT Value;
    void sub_00a35780(FLOAT Param);
};

// @baa 0x00a35780
void F00A35780Counter::sub_00a35780(FLOAT Param)
{
    FLOAT F = Param;
    Counter++;
    Value = *(INT*)&F;
}

static void Caller(F00A35780Counter* C, FLOAT V)
{
    C->sub_00a35780(V);
}

struct C_00a35760
{
    int Counter0;
    int Field4;
    int Field8;
    int FieldC;
    int Field10;

    void sub_00a35760(float Value);
};

// @baa 0x00a35760
void C_00a35760::sub_00a35760(float Value)
{
    union { float F; int I; } V;
    V.F = Value;
    ++Counter0;
    Field10 = V.I;
}

struct F00a35560 {
	INT Count;
	INT Index;
	INT Value;

	void sub_00a35560(FLOAT InValue);
};

// @baa 0x00a35560
void F00a35560::sub_00a35560(FLOAT InValue)
{
	FLOAT tmp = InValue;
	Count++;
	Value = *(INT*)&tmp;
}

struct C00a355f0
{
	INT		Count;
	INT		sub_00a355f0_mid;
	INT		Value;
	void	sub_00a355f0(float f);
};

// @baa 0x00a355f0
void C00a355f0::sub_00a355f0(float f)
{
	float x = f;
	Count += 1;
	Value = *(INT*)&x;
}

struct F00a35650
{
	INT Count;
	INT f4;
	INT f8;
	INT fc;
	INT f10;
	INT LastValue;

	void sub_00a35650(FLOAT Value);
};

// @baa 0x00a35650
void F00a35650::sub_00a35650(FLOAT Value)
{
	FLOAT v;
	v = Value;
	++Count;
	LastValue = *(INT*)&v;
}

struct FPoint3
{
    INT A;
    INT B;
    INT C;

    FPoint3& sub_00a36150(FPoint3* In)
    {
        A = In->A;
        B = In->B;
        C = In->C;
        return *this;
    }
};

// @baa 0x00a36150
FPoint3& Call_00a36150(FPoint3* Out, FPoint3* In)
{
    return Out->sub_00a36150(In);
}

struct S00a357d0
{
    int Count;
    char _pad[0x1c];
    int Bits;

    void sub_00a357d0(float f);
};

// @baa 0x00a357d0
void S00a357d0::sub_00a357d0(float f)
{
    ++Count;
    float x = f;
    Bits = *(int*)&x;
}

struct A35670State
{
	INT Count;		// 0x00
	INT Unknown1;	// 0x04
	INT Unknown2;	// 0x08
	INT Unknown3;	// 0x0c
	INT Unknown4;	// 0x10
	INT Unknown5;	// 0x14
	INT LastBits;	// 0x18

	// Records the raw bits of Value and bumps the count, returning the bits.
	INT __declspec(noinline) sub_00a35670(FLOAT Value)
	{
		FLOAT Last = Value;
		Count++;
		LastBits = *(INT*)&Last;
		return *(INT*)&Last;
	}
};

// @baa 0x00a35670
void ProbeA35670(A35670State* State, FLOAT Value)
{
	State->sub_00a35670(Value);
}
