// UnrealEd_1360000.cpp (part 1 of 3): 116 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_0135f000(); void sub_01361340(int); };

// @baa 0x01361340
void C::sub_01361340(int) { sub_0135f000(); }

struct C_01361350 { void sub_0135eab0(); void sub_01361350(int); };

// @baa 0x01361350
void C_01361350::sub_01361350(int) { sub_0135eab0(); }

int sub_0053dfa0(...);
int sub_0061e940(void);
// @baa 0x01365320
undefined4 UPackageMap::sub_01365320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0061e940();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_025e8f0c[];
// @baa 0x013676d0
int sub_013676d0(void) { return (int)g_025e8f0c; }

extern char g_026d81d8[];
// @baa 0x013676e0
int sub_013676e0(void) { return (int)g_026d81d8; }

extern char g_02259050[];
// @baa 0x013677e0
int sub_013677e0(void) { return (int)g_02259050; }

extern char g_026d8218[];
// @baa 0x013677f0
int sub_013677f0(void) { return (int)g_026d8218; }

struct C_01367820 { int a; C_01367820(int); };

// @baa 0x01367820
C_01367820::C_01367820(int x) : a(x) {}

// @baa 0x01367a80
float UUnrealEdEngine::sub_01367a80(void) { return *(float*)((char*)this + 8); }

// @baa 0x01367a90
void UUnrealEdEngine::sub_01367a90(int a0) { *(int*)((char*)this + 12) = a0; }

// @baa 0x01367aa0
int UUnrealEdEngine::sub_01367aa0(void) { return *(int*)((char*)this + 12); }

// @baa 0x01367ab0
int UUnrealEdEngine::sub_01367ab0(void) { return *(int*)((char*)this + 20); }

// @baa 0x01367ac0
void UUnrealEdEngine::sub_01367ac0(int a0) { *(int*)((char*)this + 20) = a0; }

extern undefined4 g_025e8f08;
// @baa 0x01367ad0
void sub_01367ad0(undefined4 param_1)
{
  g_025e8f08 = param_1;
  return;
}

extern undefined4 g_026d81cc;
// @baa 0x01367af0
void sub_01367af0(undefined4 param_1)
{
  g_026d81cc = param_1;
  return;
}

// @baa 0x01367b00
void UUnrealEdEngine::sub_01367b00(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  return;
}

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01367b10
void UUnrealEdEngine::sub_01367b10(void)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x1b4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    sub_006311e0("SuppressUpdateMutex>=0","UnrealEd/Inc\\GenericBrowser.h",0x27b,&g_01e3f3dc);
  }
  return;
}

// @baa 0x01367b40
int UUnrealEdEngine::sub_01367b40(void) { return *(int*)((char*)this + 528); }

// @baa 0x01367b70
int UUnrealEdEngine::sub_01367b70(void) { return *(int*)((char*)this + 536); }

extern char g_026d82d0[];
// @baa 0x01367b80
int sub_01367b80(void) { return (int)g_026d82d0; }

extern char g_026d82e8[];
// @baa 0x01367b90
int sub_01367b90(void) { return (int)g_026d82e8; }

extern char g_026d8300[];
// @baa 0x01367ba0
int sub_01367ba0(void) { return (int)g_026d8300; }

extern char g_026d8318[];
// @baa 0x01367bb0
int sub_01367bb0(void) { return (int)g_026d8318; }

extern char g_026d8330[];
// @baa 0x01367bc0
int sub_01367bc0(void) { return (int)g_026d8330; }

extern char g_026d8348[];
// @baa 0x01367bd0
int sub_01367bd0(void) { return (int)g_026d8348; }

extern char g_026d8360[];
// @baa 0x01367be0
int sub_01367be0(void) { return (int)g_026d8360; }

extern char g_026d8378[];
// @baa 0x01367bf0
int sub_01367bf0(void) { return (int)g_026d8378; }

extern char g_026d8390[];
// @baa 0x01367c00
int sub_01367c00(void) { return (int)g_026d8390; }

extern char g_026d83a8[];
// @baa 0x01367c10
int sub_01367c10(void) { return (int)g_026d83a8; }

extern char g_026d83c0[];
// @baa 0x01367c20
int sub_01367c20(void) { return (int)g_026d83c0; }

extern char g_026d83d8[];
// @baa 0x01367c30
int sub_01367c30(void) { return (int)g_026d83d8; }

// @baa 0x01367c40
char* UUnrealEdEngine::sub_01367c40(void) { return (char*)this + 416; }

// @baa 0x01367c50
char* UUnrealEdEngine::sub_01367c50(void) { return (char*)this + 428; }

// @baa 0x01367c60
int UUnrealEdEngine::sub_01367c60(void) { return *(int*)((char*)this + 452); }

// @baa 0x01367c70
int UUnrealEdEngine::sub_01367c70(void) { return *(int*)((char*)this + 460); }

// @baa 0x01367c80
int UUnrealEdEngine::sub_01367c80(void) { return *(int*)((char*)this + 464); }

// @baa 0x01367c90
int UUnrealEdEngine::sub_01367c90(void) { return *(int*)((char*)this + 468); }

extern char g_026d8d94[];
// @baa 0x01367ca0
int sub_01367ca0(void) { return (int)g_026d8d94; }

// @baa 0x01367cb0
char* UUnrealEdEngine::sub_01367cb0(void) { return (char*)this + 428; }

// @baa 0x01367cc0
char* UUnrealEdEngine::sub_01367cc0(void) { return (char*)this + 440; }

extern char g_025e8f14[];
// @baa 0x01367d00
int sub_01367d00(void) { return (int)g_025e8f14; }

extern char g_026d8400[];
// @baa 0x01367d10
int sub_01367d10(void) { return (int)g_026d8400; }

extern char g_025e8f1c[];
// @baa 0x01367d20
int sub_01367d20(void) { return (int)g_025e8f1c; }

extern char g_026d8440[];
// @baa 0x01367d30
int sub_01367d30(void) { return (int)g_026d8440; }

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01368930;
};

struct C_01368930 {
    void sub_01368930(wxUpdateUIEvent *);
};

// @baa 0x01368930
void C_01368930::sub_01368930(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x208) == 1);
  return;
}

struct C_013689f0 { int sub_013689f0(void); };

// @baa 0x013689f0
int C_013689f0::sub_013689f0(void) { return *(int*)((char*)this + 4); }

struct C_01368a00 { int sub_01368a00(void); };

// @baa 0x01368a00
int C_01368a00::sub_01368a00(void) { return *(int*)((char*)this + 4); }

struct C_01368a10 { int sub_01368a10(void); };

// @baa 0x01368a10
int C_01368a10::sub_01368a10(void) { return *(int*)((char*)this + 4); }

struct C_01368a20 { int sub_01368a20(void); };

// @baa 0x01368a20
int C_01368a20::sub_01368a20(void) { return *(int*)((char*)this + 4); }

struct C_01368a60 { int a, b; C_01368a60(int, int); };

// @baa 0x01368a60
C_01368a60::C_01368a60(int x, int y) : a(x), b(y) {}

struct C_01368a80 { int a, b; C_01368a80(int, int); };

// @baa 0x01368a80
C_01368a80::C_01368a80(int x, int y) : a(x), b(y) {}

struct C_01368aa0 { int a, b; C_01368aa0(int, int); };

// @baa 0x01368aa0
C_01368aa0::C_01368aa0(int x, int y) : a(x), b(y) {}

struct C_01368ac0 { int a, b; C_01368ac0(int, int); };

// @baa 0x01368ac0
C_01368ac0::C_01368ac0(int x, int y) : a(x), b(y) {}

struct C_01368ae0 { int a, b; C_01368ae0(int, int); };

// @baa 0x01368ae0
C_01368ae0::C_01368ae0(int x, int y) : a(x), b(y) {}

// @baa 0x01368b00
int sub_01368b00(int a0) { return *(int*)a0; }

// @baa 0x01368b10
bool sub_01368b10(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01368b40 {
    void sub_01368b40(undefined4 *);
};

// @baa 0x01368b40
void C_01368b40::sub_01368b40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x01368b60
int sub_01368b60(int a0) { return *(int*)a0; }

// @baa 0x01368b70
bool sub_01368b70(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01368b80 { int a, b; C_01368b80(const C_01368b80 &); };

// @baa 0x01368b80
C_01368b80::C_01368b80(const C_01368b80 &o) : a(o.a), b(o.b) {}

// @baa 0x01368bc0
int sub_01368bc0(int a0) { return *(int*)a0; }

// @baa 0x01368bd0
bool sub_01368bd0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01368be0 { int a, b; C_01368be0(const C_01368be0 &); };

// @baa 0x01368be0
C_01368be0::C_01368be0(const C_01368be0 &o) : a(o.a), b(o.b) {}

// @baa 0x01368c20
int sub_01368c20(int a0) { return *(int*)a0; }

// @baa 0x01368c30
bool sub_01368c30(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01368c40 { int a, b; C_01368c40(const C_01368c40 &); };

// @baa 0x01368c40
C_01368c40::C_01368c40(const C_01368c40 &o) : a(o.a), b(o.b) {}

// @baa 0x01368c80
int sub_01368c80(int a0) { return *(int*)a0; }

struct C_01368c90 {
    void sub_01368c90(int *);
};

// @baa 0x01368c90
void C_01368c90::sub_01368c90(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct S {
    int sub_00572b30(int a1);
    int sub_01368cb0(int a1);
};

// @baa 0x01368cb0
int S::sub_01368cb0(int a1) {
    return sub_00572b30(a1);
}

struct C_01368cf0 { int a, b; C_01368cf0(const C_01368cf0 &); };

// @baa 0x01368cf0
C_01368cf0::C_01368cf0(const C_01368cf0 &o) : a(o.a), b(o.b) {}

struct C_01368d10 { int a, b; C_01368d10(const C_01368d10 &); };

// @baa 0x01368d10
C_01368d10::C_01368d10(const C_01368d10 &o) : a(o.a), b(o.b) {}

struct C_01368d30 { int a, b; C_01368d30(const C_01368d30 &); };

// @baa 0x01368d30
C_01368d30::C_01368d30(const C_01368d30 &o) : a(o.a), b(o.b) {}

struct C_01368d50 { int a, b; C_01368d50(const C_01368d50 &); };

// @baa 0x01368d50
C_01368d50::C_01368d50(const C_01368d50 &o) : a(o.a), b(o.b) {}

struct C_01368d70 { int a, b; C_01368d70(int, int); };

// @baa 0x01368d70
C_01368d70::C_01368d70(int x, int y) : a(x), b(y) {}

// @baa 0x01368d90
int sub_01368d90(int a0) { return *(int*)a0; }

struct C_01368da0 {
    void sub_01368da0(int *);
};

// @baa 0x01368da0
void C_01368da0::sub_01368da0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01368db0
void sub_01368db0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01368dd0
void sub_01368dd0(void) {  }

// @baa 0x01368de0
void sub_01368de0(void) {  }

// @baa 0x01368df0
float10 sub_01368df0(double param_1)
{
  return (float10)param_1;
}

struct C_01368e10 {
    undefined4 sub_01368e10();
};

// @baa 0x01368e10
undefined4 C_01368e10::sub_01368e10(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x50) != 1) && (*(int *)(param_1 + 0x50) != 6)) {
    return 0;
  }
  return 1;
}

extern undefined4 g_025d6acc;
// @baa 0x01368e30
void sub_01368e30(void)
{
  g_025d6acc = 0xffffffff;
  return;
}

// @baa 0x01368e40
undefined2 sub_01368e40(void)
{
  return 0x75;
}

// @baa 0x01368e50
undefined2 sub_01368e50(void)
{
  return 0x69;
}

// @baa 0x01368e60
undefined2 sub_01368e60(void)
{
  return 0x73;
}

struct C_01368e70 { int sub_01368e70(void); };

// @baa 0x01368e70
int C_01368e70::sub_01368e70(void) { return *(int*)((char*)this + 408); }

struct C_01368e80 { void sub_01368e80(void); };

// @baa 0x01368e80
void C_01368e80::sub_01368e80(void) { *(int*)((char*)this + 352) = 0; }

struct C_01368e90 { void sub_01368e90(void); };

// @baa 0x01368e90
void C_01368e90::sub_01368e90(void) { *(int*)((char*)this + 352) = 1; }

struct C_01368ea0 { void sub_01368ea0(int a0); };

// @baa 0x01368ea0
void C_01368ea0::sub_01368ea0(int a0) { *(int*)((char*)this + 356) = a0; }

struct C_01368eb0 { int sub_01368eb0(void); };

// @baa 0x01368eb0
int C_01368eb0::sub_01368eb0(void) { return *(int*)((char*)this + 356); }

struct C_01368ec0 { int sub_01368ec0(void); };

// @baa 0x01368ec0
int C_01368ec0::sub_01368ec0(void) { return *(int*)((char*)this + 428); }

// @baa 0x01368ed0
int sub_01368ed0(int a0, int a1) { return a1; }

struct S_01368f70 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x01368f70
void sub_01368f70(S_01368f70* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01368f90 { char* sub_01368f90(void); };

// @baa 0x01368f90
char* C_01368f90::sub_01368f90(void) { return (char*)this + 48; }

struct S_01368fa0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x01368fa0
void sub_01368fa0(S_01368fa0* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x01368fd0
void sub_01368fd0(void)
{
  return;
}

struct C_01368fe0 { int a, b, c; C_01368fe0(); };

// @baa 0x01368fe0
C_01368fe0::C_01368fe0() : a(0), b(0), c(0) {}

struct C_01368ff0 { C_01368ff0* sub_01368ff0(int a0); };

// @baa 0x01368ff0
C_01368ff0* C_01368ff0::sub_01368ff0(int a0) { return this; }

struct C_01369000 { int sub_01369000(void); };

// @baa 0x01369000
int C_01369000::sub_01369000(void) { return *(int*)((char*)this + 0); }

struct C_01369010 { int sub_01369010(void); };

// @baa 0x01369010
int C_01369010::sub_01369010(void) { return *(int*)((char*)this + 0); }

int sub_013676f0(void);
// @baa 0x013690f0
undefined4 UUnrealEdEngine::sub_013690f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013676f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01369240
void __stdcall sub_01369240(int a0) {  }

// @baa 0x01369250
void __stdcall sub_01369250(int a0) {  }

int sub_00ccdba0(void);
int sub_00cdc050(...);
extern undefined4 g_026c3c6c;
// @baa 0x0136a560
int sub_0136a560(int param_1)
{
  int iVar1;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026c3c6c == 0) {
      g_026c3c6c = sub_00cdc050(L"Engine");
      sub_00ccdba0();
    }
    if (iVar1 == g_026c3c6c) {
      return param_1;
    }
  }
  return 0;
}

// @baa 0x0136a5b0
void sub_0136a5b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0136a5d0
void sub_0136a5d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0136a5f0
void sub_0136a5f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0136a610
void sub_0136a610(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_0136a6b0 {
    int sub_0136a6b0();
};

// @baa 0x0136a6b0
int C_0136a6b0::sub_0136a6b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0136a6c0 { int sub_0136a6c0(void); };

// @baa 0x0136a6c0
int C_0136a6c0::sub_0136a6c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0136a6d0
void sub_0136a6d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct M_0136a730 { void sub_00544ab0(); };

struct C_0136a730 { char pad[360]; M_0136a730 m; void sub_0136a730(); };

// @baa 0x0136a730
void C_0136a730::sub_0136a730() { m.sub_00544ab0(); }

struct E { BYTE Bytes[40]; };

struct S_0136a780 {
    TArray<E> Items; // 0x00
    E* sub_0136a780(INT Index);
};

// @baa 0x0136a780
E* S_0136a780::sub_0136a780(INT Index)
{
    return &Items(Index);
}

struct C_0136a7d0 {
    int sub_0136a7d0(int);
};

// @baa 0x0136a7d0
int C_0136a7d0::sub_0136a7d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0136e730 {
    undefined4 sub_0136e730(byte);
};

int sub_0136e670(void);
// @baa 0x0136e730
undefined4 C_0136e730::sub_0136e730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0136e670();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0136f450 {
    undefined4 sub_0136f450(byte);
};

int sub_0136f3d0(void);
// @baa 0x0136f450
undefined4 C_0136f450::sub_0136f450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0136f3d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
