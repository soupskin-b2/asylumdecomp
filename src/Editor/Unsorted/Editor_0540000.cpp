// Editor_0540000.cpp: 41 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

extern char g_01e72e1c[];
struct C { C* sub_00540430(void); };

// @baa 0x00540430
C* C::sub_00540430(void) { *(int*)((char*)this + 0) = (int)g_01e72e1c; return this; }

int sub_0059c990(void);
int sub_005adee0(...);
extern undefined4 g_0268d084;
// @baa 0x00540440
int sub_00540440(void)
{
  if (g_0268d084 == 0) {
    g_0268d084 = sub_005adee0(L"Core");
    sub_0059c990();
  }
  return g_0268d084;
}

struct C_00540470 {
    uint sub_00540470();
};

// @baa 0x00540470
uint C_00540470::sub_00540470(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x74) >> 0x11 & 1;
}

struct C_00540480 { char* sub_00540480(void); };

// @baa 0x00540480
char* C_00540480::sub_00540480(void) { return (char*)this + 96; }

int sub_00568010(void);
int sub_00588ac0(...);
extern undefined4 g_02688438;
// @baa 0x005404a0
int sub_005404a0(void)
{
  if (g_02688438 == 0) {
    g_02688438 = sub_00588ac0(L"Core");
    sub_00568010();
  }
  return g_02688438;
}

int sub_00588b80(...);
int sub_00589090(void);
extern undefined4 g_0268843c;
// @baa 0x005404d0
int sub_005404d0(void)
{
  if (g_0268843c == 0) {
    g_0268843c = sub_00588b80(L"Core");
    sub_00589090();
  }
  return g_0268843c;
}

int sub_006322b0(...);
int sub_00633b40(void);
extern undefined4 g_026acbf4;
// @baa 0x00540850
int sub_00540850(void)
{
  if (g_026acbf4 == 0) {
    g_026acbf4 = sub_006322b0(L"Core");
    sub_00633b40();
  }
  return g_026acbf4;
}

int sub_00632370(...);
int sub_00633c90(void);
extern undefined4 g_026acbf8;
// @baa 0x00540880
int sub_00540880(void)
{
  if (g_026acbf8 == 0) {
    g_026acbf8 = sub_00632370(L"Core");
    sub_00633c90();
  }
  return g_026acbf8;
}

int sub_00632430(...);
int sub_00633de0(void);
extern undefined4 g_026acbfc;
// @baa 0x005408b0
int sub_005408b0(void)
{
  if (g_026acbfc == 0) {
    g_026acbfc = sub_00632430(L"Core");
    sub_00633de0();
  }
  return g_026acbfc;
}

int sub_00632550(...);
int sub_00634160(void);
extern undefined4 g_026acc00;
// @baa 0x005408e0
int sub_005408e0(void)
{
  if (g_026acc00 == 0) {
    g_026acc00 = sub_00632550(L"Core");
    sub_00634160();
  }
  return g_026acc00;
}

int sub_00632610(...);
int sub_006342b0(void);
extern undefined4 g_026acc04;
// @baa 0x00540910
int sub_00540910(void)
{
  if (g_026acc04 == 0) {
    g_026acc04 = sub_00632610(L"Core");
    sub_006342b0();
  }
  return g_026acc04;
}

int sub_006326d0(...);
int sub_00634470(void);
extern undefined4 g_026acc08;
// @baa 0x00540940
int sub_00540940(void)
{
  if (g_026acc08 == 0) {
    g_026acc08 = sub_006326d0(L"Core");
    sub_00634470();
  }
  return g_026acc08;
}

int sub_00631b80(...);
int sub_00633600(void);
extern undefined4 g_026acbdc;
// @baa 0x00540970
int sub_00540970(void)
{
  if (g_026acbdc == 0) {
    g_026acbdc = sub_00631b80(L"Core");
    sub_00633600();
  }
  return g_026acbdc;
}

int sub_0062daa0(void);
int sub_00631830(...);
extern undefined4 g_026acbb4;
// @baa 0x005409d0
int sub_005409d0(void)
{
  if (g_026acbb4 == 0) {
    g_026acbb4 = sub_00631830(L"Core");
    sub_0062daa0();
  }
  return g_026acbb4;
}

extern char g_01e72a60[];
struct C_00540a00 { void sub_00540a00(void); };

// @baa 0x00540a00
void C_00540a00::sub_00540a00(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_00540a10 { void sub_00540a10(void); };

// @baa 0x00540a10
void C_00540a10::sub_00540a10(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

int sub_005b6a40(...);
int sub_005b7f70(void);
extern undefined4 g_0268d0b8;
// @baa 0x00540a40
int sub_00540a40(void)
{
  if (g_0268d0b8 == 0) {
    g_0268d0b8 = sub_005b6a40(L"Core");
    sub_005b7f70();
  }
  return g_0268d0b8;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x00540a70
void sub_00540a70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_0268d0b8 == 0) {
    g_0268d0b8 = sub_005b6a40(L"Core");
    sub_005b7f70();
  }
  sub_005e1960(g_0268d0b8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00540ad0
undefined2 sub_00540ad0(void)
{
  return 0x69;
}

// @baa 0x00540ae0
undefined2 sub_00540ae0(void)
{
  return 0x73;
}

struct C_00540af0 { int a, b; C_00540af0(int, int); };

// @baa 0x00540af0
C_00540af0::C_00540af0(int x, int y) : a(x), b(y) {}

struct C_00540b10 { int a, b, c; C_00540b10(); };

// @baa 0x00540b10
C_00540b10::C_00540b10() : a(0), b(0), c(0) {}

struct C_00540b20 { int sub_00540b20(void); };

// @baa 0x00540b20
int C_00540b20::sub_00540b20(void) { return *(int*)((char*)this + 0); }

struct T_00540b30 { BYTE b[2]; };

// @baa 0x00540b30
template INT TArray<T_00540b30>::Add(INT);

struct C_00540bc0 { int a, b, c; C_00540bc0(); };

// @baa 0x00540bc0
C_00540bc0::C_00540bc0() : a(0), b(0), c(0) {}

struct C_00545300 { int sub_00545300(void); };

// @baa 0x00545300
int C_00545300::sub_00545300(void) { return *(int*)((char*)this + 20); }

struct C_00545310 { int sub_00545310(void); };

// @baa 0x00545310
int C_00545310::sub_00545310(void) { return *(int*)((char*)this + 20); }

struct C_00545320 { int sub_00545320(void); };

// @baa 0x00545320
int C_00545320::sub_00545320(void) { return *(int*)((char*)this + 20); }

struct C_00545330 { int sub_00545330(void); };

// @baa 0x00545330
int C_00545330::sub_00545330(void) { return *(int*)((char*)this + 20); }

struct C_00545340 { int sub_00545340(void); };

// @baa 0x00545340
int C_00545340::sub_00545340(void) { return *(int*)((char*)this + 20); }

struct C_00545350 { int sub_00545350(void); };

// @baa 0x00545350
int C_00545350::sub_00545350(void) { return *(int*)((char*)this + 20); }

struct C_00545360 { int sub_00545360(void); };

// @baa 0x00545360
int C_00545360::sub_00545360(void) { return *(int*)((char*)this + 20); }

struct C_00545370 { int sub_00545370(void); };

// @baa 0x00545370
int C_00545370::sub_00545370(void) { return *(int*)((char*)this + 20); }

struct C_00545380 { int sub_00545380(void); };

// @baa 0x00545380
int C_00545380::sub_00545380(void) { return *(int*)((char*)this + 20); }

struct C_00545390 { int sub_00545390(void); };

// @baa 0x00545390
int C_00545390::sub_00545390(void) { return *(int*)((char*)this + 20); }

struct C_005453a0 {
    void sub_005453a0(undefined4 *);
};

// @baa 0x005453a0
void C_005453a0::sub_005453a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_005453c0 {
    int sub_005453c0(int);
};

// @baa 0x005453c0
int C_005453c0::sub_005453c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005457f0
void sub_005457f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00545810
void sub_00545810(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00545830
void sub_00545830(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00545880(INT Index) const;
};

// @baa 0x00545880
const E* S::sub_00545880(INT Index) const
{
    return &Items(Index);
}
