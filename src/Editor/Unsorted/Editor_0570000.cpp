// Editor_0570000.cpp: 16 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_00573260(void); };

// @baa 0x00573260
int C::sub_00573260(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00573270 { int sub_00573270(void); };

// @baa 0x00573270
int C_00573270::sub_00573270(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00573280 { int sub_00573280(void); };

// @baa 0x00573280
int C_00573280::sub_00573280(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00573330 {
    int sub_00573330();
};

// @baa 0x00573330
int C_00573330::sub_00573330(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00573340 { void* Data; int Num; int Max; void sub_00573340(); };

// @baa 0x00573340
void C_00573340::sub_00573340() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005733a0 {
    int sub_005733a0(int);
};

// @baa 0x005733a0
int C_005733a0::sub_005733a0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

struct C_005733b0 {
    int sub_005733b0();
};

// @baa 0x005733b0
int C_005733b0::sub_005733b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005733d0 {
    int sub_005733d0();
};

// @baa 0x005733d0
int C_005733d0::sub_005733d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

struct C_005733e0 {
    int sub_005733e0();
};

// @baa 0x005733e0
int C_005733e0::sub_005733e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00573400 { void* Data; int Num; int Max; void sub_00573400(); };

// @baa 0x00573400
void C_00573400::sub_00573400() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005744a0 {
    int sub_005744a0(int);
};

// @baa 0x005744a0
int C_005744a0::sub_005744a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_005744b0 {
    int sub_005744b0();
};

// @baa 0x005744b0
int C_005744b0::sub_005744b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_005744c0 {
    int sub_005744c0();
};

// @baa 0x005744c0
int C_005744c0::sub_005744c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00574540
void __stdcall sub_00574540(int a0, int a1) {  }

struct C_00574550 {
    int sub_00574550();
};

// @baa 0x00574550
int C_00574550::sub_00574550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_00574560 {
    int sub_00574560();
};

// @baa 0x00574560
int C_00574560::sub_00574560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}
