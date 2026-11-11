// UnrealEd_1050000.cpp: 27 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0105ddf0(INT Index);
};

// @baa 0x0105ddf0
DWORD* S::sub_0105ddf0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[16]; };

struct S_0105dea0 {
    TArray<E> Items; // 0x00
    E* sub_0105dea0(INT Index);
};

// @baa 0x0105dea0
E* S_0105dea0::sub_0105dea0(INT Index)
{
    return &Items(Index);
}

struct C { int sub_0105def0(void); };

// @baa 0x0105def0
int C::sub_0105def0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0105df00 { int sub_0105df00(void); };

// @baa 0x0105df00
int C_0105df00::sub_0105df00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0105df10 {
    int sub_0105df10(int);
};

// @baa 0x0105df10
int C_0105df10::sub_0105df10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0105df30 { int sub_0105df30(void); };

// @baa 0x0105df30
int C_0105df30::sub_0105df30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0105df40
void __stdcall sub_0105df40(int a0, int a1) {  }

// @baa 0x0105df50
void __stdcall sub_0105df50(int a0, int a1) {  }

struct C_0105df60 {
    int sub_0105df60(int);
};

// @baa 0x0105df60
int C_0105df60::sub_0105df60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0105df70
void __stdcall sub_0105df70(int a0, int a1) {  }

struct C_0105df80 {
    int sub_0105df80(int);
};

// @baa 0x0105df80
int C_0105df80::sub_0105df80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_0105df90 { int sub_00544d40(int); };

// @baa 0x0105df90
int sub_0105df90(S_0105df90 *s, int a) { return s->sub_00544d40(a); }

struct C_0105dfa0 {
    int sub_0105dfa0(int);
};

// @baa 0x0105dfa0
int C_0105dfa0::sub_0105dfa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0105dfb0 {
    int sub_0105dfb0();
};

// @baa 0x0105dfb0
int C_0105dfb0::sub_0105dfb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0105dfd0 {
    int sub_0105dfd0();
};

// @baa 0x0105dfd0
int C_0105dfd0::sub_0105dfd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct S_0105dfe0 { int sub_00544d40(int); };

// @baa 0x0105dfe0
int sub_0105dfe0(S_0105dfe0 *s, int a) { return s->sub_00544d40(a); }

struct S_0105dff0 { int sub_00544d40(int); };

// @baa 0x0105dff0
int sub_0105dff0(S_0105dff0 *s, int a) { return s->sub_00544d40(a); }

struct C_0105e000 {
    int sub_0105e000();
};

// @baa 0x0105e000
int C_0105e000::sub_0105e000(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0105e020 {
    int sub_0105e020();
};

// @baa 0x0105e020
int C_0105e020::sub_0105e020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0105e040 {
    int sub_0105e040();
};

// @baa 0x0105e040
int C_0105e040::sub_0105e040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0105e060 {
    int sub_0105e060(int);
};

// @baa 0x0105e060
int C_0105e060::sub_0105e060(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0105e070 {
    int sub_0105e070(int);
};

// @baa 0x0105e070
int C_0105e070::sub_0105e070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0105e080 {
    int sub_0105e080();
};

// @baa 0x0105e080
int C_0105e080::sub_0105e080(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0105e0a0 {
    int sub_0105e0a0();
};

// @baa 0x0105e0a0
int C_0105e0a0::sub_0105e0a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0105e130 {
    int sub_0105e130(int);
};

// @baa 0x0105e130
int C_0105e130::sub_0105e130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0105e140 {
    int sub_0105e140();
};

// @baa 0x0105e140
int C_0105e140::sub_0105e140(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0105e1d0 {
    int sub_0105e1d0(int);
};

// @baa 0x0105e1d0
int C_0105e1d0::sub_0105e1d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}
