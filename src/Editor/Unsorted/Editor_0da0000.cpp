// Editor_0da0000.cpp (part 1 of 2): 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00dabcc0
int sub_00dabcc0(int a0) { return *(int*)a0; }

// @baa 0x00dabcd0
bool sub_00dabcd0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00dabce0 { int a, b; C_00dabce0(const C_00dabce0 &); };

// @baa 0x00dabce0
C_00dabce0::C_00dabce0(const C_00dabce0 &o) : a(o.a), b(o.b) {}

struct C { int sub_00dabd40(void); };

// @baa 0x00dabd40
int C::sub_00dabd40(void) { return *(int*)((char*)this + 0); }

// @baa 0x00dabd50
int sub_00dabd50(int a0) { return *(int*)a0; }

// @baa 0x00dabd60
bool sub_00dabd60(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00dabd70 {
    void sub_00dabd70(undefined4 *);
};

// @baa 0x00dabd70
void C_00dabd70::sub_00dabd70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00dabd90 { int sub_00dabd90(void); };

// @baa 0x00dabd90
int C_00dabd90::sub_00dabd90(void) { return *(int*)((char*)this + 0); }

// @baa 0x00dabe10
int sub_00dabe10(int a0) { return *(int*)a0; }

struct C_00dabeb0 {
    void sub_00dabeb0(int *);
};

// @baa 0x00dabeb0
void C_00dabeb0::sub_00dabeb0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

struct C_00dabef0 { int sub_00dabef0(void); };

// @baa 0x00dabef0
int C_00dabef0::sub_00dabef0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00dabf00
int sub_00dabf00(int a0) { return *(int*)a0; }

struct C_00dabf30 { int sub_00dabf30(void); };

// @baa 0x00dabf30
int C_00dabf30::sub_00dabf30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00dabf70
int sub_00dabf70(int a0) { return *(int*)a0; }

// @baa 0x00dabf80
bool sub_00dabf80(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00dabf90
undefined4 sub_00dabf90(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00dabfb0 {
    void sub_00dabfb0(int *);
};

// @baa 0x00dabfb0
void C_00dabfb0::sub_00dabfb0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

// @baa 0x00dabfe0
undefined4 sub_00dabfe0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00dac020 {
    void sub_00dac020(int *);
};

// @baa 0x00dac020
void C_00dac020::sub_00dac020(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00dac070 {
    int sub_00dac070(int);
};

// @baa 0x00dac070
int C_00dac070::sub_00dac070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dac080 {
    int sub_00dac080(int);
};

// @baa 0x00dac080
int C_00dac080::sub_00dac080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dac090 {
    int sub_00dac090(int);
};

// @baa 0x00dac090
int C_00dac090::sub_00dac090(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dac0a0 { int a, b; C_00dac0a0(int, int); };

// @baa 0x00dac0a0
C_00dac0a0::C_00dac0a0(int x, int y) : a(x), b(y) {}

struct C_00dac0c0 { int sub_00dac0c0(void); };

// @baa 0x00dac0c0
int C_00dac0c0::sub_00dac0c0(void) { return *(int*)((char*)this + 20); }

struct C_00dac0d0 { int sub_00dac0d0(void); };

// @baa 0x00dac0d0
int C_00dac0d0::sub_00dac0d0(void) { return *(int*)((char*)this + 20); }

struct C_00dac0e0 { int sub_00dac0e0(void); };

// @baa 0x00dac0e0
int C_00dac0e0::sub_00dac0e0(void) { return *(int*)((char*)this + 20); }

struct C_00dac0f0 { int sub_00dac0f0(void); };

// @baa 0x00dac0f0
int C_00dac0f0::sub_00dac0f0(void) { return *(int*)((char*)this + 20); }

struct C_00dac100 { int sub_00dac100(void); };

// @baa 0x00dac100
int C_00dac100::sub_00dac100(void) { return *(int*)((char*)this + 20); }

struct C_00dac110 { int sub_00dac110(void); };

// @baa 0x00dac110
int C_00dac110::sub_00dac110(void) { return *(int*)((char*)this + 20); }

struct C_00dac120 { int sub_00dac120(void); };

// @baa 0x00dac120
int C_00dac120::sub_00dac120(void) { return *(int*)((char*)this + 20); }

struct C_00dac130 { int sub_00dac130(void); };

// @baa 0x00dac130
int C_00dac130::sub_00dac130(void) { return *(int*)((char*)this + 20); }

struct C_00dac140 { int sub_00dac140(void); };

// @baa 0x00dac140
int C_00dac140::sub_00dac140(void) { return *(int*)((char*)this + 20); }

// @baa 0x00dac150
int sub_00dac150(int a0) { return *(int*)a0; }

struct C_00dac180 {
    int sub_00dac180(int);
};

// @baa 0x00dac180
int C_00dac180::sub_00dac180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dac190 { int a, b; C_00dac190(int, int); };

// @baa 0x00dac190
C_00dac190::C_00dac190(int x, int y) : a(x), b(y) {}

void sub_00572b30();
// @baa 0x00dac2b0
void sub_00dac2b0(void) { sub_00572b30(); }

// @baa 0x00dac2c0
void sub_00dac2c0(void) { sub_00572b30(); }

// @baa 0x00dac2d0
void sub_00dac2d0(void) { sub_00572b30(); }

int sub_00627f00(...);
// @baa 0x00dac360
void sub_00dac360(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00dac380(INT Index) const;
};

// @baa 0x00dac380
const DWORD* S::sub_00dac380(INT Index) const
{
    return &Items(Index);
}

struct C_00dac3f0 { int a, b; C_00dac3f0(const C_00dac3f0 &); };

// @baa 0x00dac3f0
C_00dac3f0::C_00dac3f0(const C_00dac3f0 &o) : a(o.a), b(o.b) {}

struct C_00dac4a0 {
    int x;
    int y;
    int z;
    C_00dac4a0& sub_00dac4a0(const C_00dac4a0&);
};

// @baa 0x00dac4a0
C_00dac4a0& C_00dac4a0::sub_00dac4a0(const C_00dac4a0& Other)
{
    x = Other.x;
    y = Other.y;
    z = Other.z;
    return *this;
}

static C_00dac4a0& Keep(C_00dac4a0& A, const C_00dac4a0& B)
{
    return A.sub_00dac4a0(B);
}

struct S00dac3d0Record {
    INT First;
    BYTE Second;
    INT Third;
    S00dac3d0Record* sub_00dac3d0(S00dac3d0Record* In);
};

// @baa 0x00dac3d0
S00dac3d0Record* S00dac3d0Record::sub_00dac3d0(S00dac3d0Record* In)
{
    First = In->First;
    Second = In->Second;
    Third = In->Third;
    return this;
}

static void sub_00dac3d0_caller()
{
    S00dac3d0Record A;
    S00dac3d0Record B;
    A.sub_00dac3d0(&B);
}
