// Engine_1aa0000.cpp (part 2 of 3): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct E_01aa8c20 {};

// @baa 0x01aa8c20
E_01aa8c20 sub_01aa8c20() { E_01aa8c20 e; return e; }

struct C {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C* sub_01aaf5e0(INT value);
};

// @baa 0x01aaf5e0
C* C::sub_01aaf5e0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct E_01aafb20 {};

// @baa 0x01aafb20
E_01aafb20 sub_01aafb20() { E_01aafb20 e; return e; }

struct C_01aafcf0 {
    int * sub_01aafcf0(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01aafcf0
int * C_01aafcf0::sub_01aafcf0(int * param_2)
{
    int * param_1 = (int *)this;
  *param_1 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if (*param_2 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_2;
  return param_1;
}

// @baa 0x01aafd20
undefined4 sub_01aafd20(void)
{
  return 0x1fffffff;
}

struct C_01aafde0 {
    int * sub_01aafde0(int *);
};

// @baa 0x01aafde0
int * C_01aafde0::sub_01aafde0(int * param_2)
{
    int * param_1 = (int *)this;
  *param_1 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if (*param_2 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_2;
  return param_1;
}
