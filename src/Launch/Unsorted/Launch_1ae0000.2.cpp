// Launch_1ae0000.cpp (part 2 of 3): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_01aeea90 { int a, b, c; C_01aeea90(); };

// @baa 0x01aeea90
C_01aeea90::C_01aeea90() : a(0), b(0), c(0) {}

struct C_01aeeb10 { int a, b, c; C_01aeeb10(); };

// @baa 0x01aeeb10
C_01aeeb10::C_01aeeb10() : a(0), b(0), c(0) {}

struct C_01aeeba0 { int a, b, c; C_01aeeba0(); };

// @baa 0x01aeeba0
C_01aeeba0::C_01aeeba0() : a(0), b(0), c(0) {}

struct C_01aeed20 { int a, b, c; C_01aeed20(); };

// @baa 0x01aeed20
C_01aeed20::C_01aeed20() : a(0), b(0), c(0) {}

struct C {
    void sub_01aef120(int, int);
    int sub_01aeefd0(int);
};

// @baa 0x01aef120
void C::sub_01aef120(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C *)(((char *)this + 8)))->sub_01aeefd0(param_2 * param_3);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

struct C_01aef240 { void sub_01aef150(int); void sub_01aef240(); };

// @baa 0x01aef240
void C_01aef240::sub_01aef240() { sub_01aef150(0); }

struct C_01aefed0 {
    void sub_01aefed0();
    int sub_01aef150(int);
};

extern "C" __declspec(dllimport) void __cdecl free(void *);
// @baa 0x01aefed0
void C_01aefed0::sub_01aefed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01aefed0 *)(this))->sub_01aef150(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01aeff20 {
    undefined4 * sub_01aeff20(byte);
    int sub_01aef150(int);
};

int sub_00402660(...);
// @baa 0x01aeff20
undefined4 * C_01aeff20::sub_01aeff20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01aeff20 *)(this))->sub_01aef150(0);
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

struct C_01aeffb0 { int a, b, c; C_01aeffb0(); };

// @baa 0x01aeffb0
C_01aeffb0::C_01aeffb0() : a(0), b(0), c(0) {}

struct C_01aeeb50
{
    INT Value_00;
    INT Value_04;
    INT Value_08;

    C_01aeeb50* sub_01aeeb50();
};

// @baa 0x01aeeb50
C_01aeeb50* C_01aeeb50::sub_01aeeb50()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_00 = 0;
    return this;
}
