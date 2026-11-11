// Launch_1af0000.cpp (part 1 of 5): 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_01af0fd0(int); void sub_01af10a0(); };

// @baa 0x01af10a0
void C::sub_01af10a0() { sub_01af0fd0(0); }

struct C_01af10b0 {
    void sub_01af10b0();
    int sub_01af0090(int);
};

extern "C" __declspec(dllimport) void __cdecl free(void *);
// @baa 0x01af10b0
void C_01af10b0::sub_01af10b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01af10b0 *)(this))->sub_01af0090(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01af11d0 {
    void sub_01af11d0();
    int sub_01af0090(int);
};

// @baa 0x01af11d0
void C_01af11d0::sub_01af11d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01af11d0 *)(this))->sub_01af0090(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01af1a70 {
    void sub_01af1a70();
    int sub_01af0fd0(int);
};

// @baa 0x01af1a70
void C_01af1a70::sub_01af1a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01af1a70 *)(this))->sub_01af0fd0(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01af1aa0 {
    undefined4 * sub_01af1aa0(undefined4, undefined4, undefined4);
    int sub_01af10e0(int, int, int);
};

// @baa 0x01af1aa0
undefined4 * C_01af1aa0::sub_01af1aa0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_01af1aa0 *)(this))->sub_01af10e0(param_2, param_3, param_4);
  return param_1;
}

struct C_01af1ad0 {
    void sub_01af1ad0();
    int sub_01af0fd0(int);
};

// @baa 0x01af1ad0
void C_01af1ad0::sub_01af1ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01af1ad0 *)(this))->sub_01af0fd0(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01af3e10 {
    int sub_01af3e10(int *, int *);
};

// @baa 0x01af3e10
int C_01af3e10::sub_01af3e10(int * param_2, int * param_3)
{
    int * param_1 = (int *)this;

  return param_1[2] + (*param_2 * *param_1 + *param_3) * 4;
}

struct C_01af46c0 {
    undefined4 * sub_01af46c0(byte);
    int sub_01af0fd0(int);
};

int sub_00402660(...);
// @baa 0x01af46c0
undefined4 * C_01af46c0::sub_01af46c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01af46c0 *)(this))->sub_01af0fd0(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01af4c00 {
    unsigned char sub_01af4c00(unsigned, unsigned);
};

// @baa 0x01af4c00
unsigned char C_01af4c00::sub_01af4c00(unsigned a0, unsigned a1)
{
    return 0;
}

struct M_01af5300 { void sub_00eb4e60(); };

struct C_01af5300 { char pad[24]; M_01af5300 m; void sub_01af5300(); };

// @baa 0x01af5300
void C_01af5300::sub_01af5300() { m.sub_00eb4e60(); }

// @baa 0x01af8620
void sub_01af8620(double param_1, double param_2, double * param_3)
{
  double dVar1;
  
  *param_3 = (6.0 - (param_1 + param_1)) / 6.0;
  dVar1 = param_2 * 6.0;
  param_3[1] = ((param_1 * 12.0 - 18.0) + dVar1) / 6.0;
  param_3[2] = ((12.0 - param_1 * 9.0) - dVar1) / 6.0;
  param_3[3] = (param_2 * 24.0 + param_1 * 8.0) / 6.0;
  param_3[4] = (param_1 * -12.0 - param_2 * 48.0) / 6.0;
  param_3[5] = (param_2 * 30.0 + param_1 * 6.0) / 6.0;
  param_3[6] = (-param_1 - dVar1) / 6.0;
  return;
}

struct C_01afa780 { int a, b, c; C_01afa780(); };

// @baa 0x01afa780
C_01afa780::C_01afa780() : a(0), b(0), c(0) {}

struct S {
    void sub_01aef150(UINT param_2);
    void sub_01afde70(UINT param_2);
};

// @baa 0x01afde70
void S::sub_01afde70(UINT param_2)
{
    sub_01aef150(param_2);
}
