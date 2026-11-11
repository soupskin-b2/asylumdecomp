// Engine_1aa0000.cpp (part 1 of 3): 36 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01aa3020();
// @baa 0x01aa52f0
void sub_01aa52f0(void) { sub_01aa3020(); }

void sub_01aa30b0();
// @baa 0x01aa5300
void sub_01aa5300(void) { sub_01aa30b0(); }

struct C { C* sub_01aa8ad0(void); };

// @baa 0x01aa8ad0
C* C::sub_01aa8ad0(void) { return this; }

struct C_01aa8ae0 { C_01aa8ae0* sub_01aa8ae0(int a0); };

// @baa 0x01aa8ae0
C_01aa8ae0* C_01aa8ae0::sub_01aa8ae0(int a0) { return this; }

void sub_01aa9180();
// @baa 0x01aa9270
void sub_01aa9270(void) { sub_01aa9180(); }

// @baa 0x01aaa1a0
void sub_01aaa1a0(void) {  }

struct C_01aaaf60 { C_01aaaf60* sub_01aaaf60(int a0); };

// @baa 0x01aaaf60
C_01aaaf60* C_01aaaf60::sub_01aaaf60(int a0) { return this; }

void sub_01aaaa20();
// @baa 0x01aab050
void sub_01aab050(void) { sub_01aaaa20(); }

void sub_01aab1d0();
// @baa 0x01aab290
void sub_01aab290(void) { sub_01aab1d0(); }

struct C_01aae710 {
    void sub_01aae710(undefined4 *);
};

// @baa 0x01aae710
void C_01aae710::sub_01aae710(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xa4) = *param_2;
  *(undefined4 *)(param_1 + 0xa8) = param_2[1];
  *(undefined4 *)(param_1 + 0xac) = param_2[2];
  return;
}

struct C_01aaf5d0 {
    byte sub_01aaf5d0();
};

// @baa 0x01aaf5d0
byte C_01aaf5d0::sub_01aaf5d0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xb0) >> 1;
}

struct C_01aaf600 {
    int sub_01aaf600();
};

// @baa 0x01aaf600
int C_01aaf600::sub_01aaf600(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
}

struct C_01aaf650 {
    int sub_01aaf650();
};

// @baa 0x01aaf650
int C_01aaf650::sub_01aaf650(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3;
}

struct C_01aaf670 { C_01aaf670* sub_01aaf670(void); };

// @baa 0x01aaf670
C_01aaf670* C_01aaf670::sub_01aaf670(void) { return this; }

// @baa 0x01aaf6e0
uint sub_01aaf6e0(int param_1)
{
  return param_1 + 0x1fU >> 5;
}

struct C_01aaf700 { C_01aaf700* sub_01aaf700(void); };

// @baa 0x01aaf700
C_01aaf700* C_01aaf700::sub_01aaf700(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01aaf8a0 { C_01aaf8a0* sub_01aaf8a0(void); };

// @baa 0x01aaf8a0
C_01aaf8a0* C_01aaf8a0::sub_01aaf8a0(void) { return this; }

struct C_01aaf8b0 { C_01aaf8b0* sub_01aaf8b0(void); };

// @baa 0x01aaf8b0
C_01aaf8b0* C_01aaf8b0::sub_01aaf8b0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01aaf8c0
int sub_01aaf8c0(void) { return 536870911; }

struct C_01aaf8d0 {
    int sub_01aaf8d0(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01aaf8d0
int C_01aaf8d0::sub_01aaf8d0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}

struct C_01aaf900 { C_01aaf900* sub_01aaf900(int a0); };

// @baa 0x01aaf900
C_01aaf900* C_01aaf900::sub_01aaf900(int a0) { return this; }

struct C_01aaf950 {
    int * sub_01aaf950(int, int);
};

// @baa 0x01aaf950
int * C_01aaf950::sub_01aaf950(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  return param_1;
}

// @baa 0x01aafa60
int sub_01aafa60(void) { return 1073741823; }

// @baa 0x01aafae0
void sub_01aafae0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

// @baa 0x01aafb10
int sub_01aafb10(int a0) { return a0; }

// @baa 0x01aafb70
void sub_01aafb70(void) {  }

struct C_01aafb80 {
    undefined4 sub_01aafb80(int);
};

// @baa 0x01aafb80
undefined4 C_01aafb80::sub_01aafb80(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
     (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    return 1;
  }
  return 0;
}

// @baa 0x01aafbb0
int sub_01aafbb0(int a0) { return *(int*)a0; }

// @baa 0x01aafbc0
void sub_01aafbc0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_01aafcb0 { C_01aafcb0* sub_01aafcb0(int a0); };

// @baa 0x01aafcb0
C_01aafcb0* C_01aafcb0::sub_01aafcb0(int a0) { return this; }

struct C_01aafd30 {
    int sub_01aafd30(int *);
};

// @baa 0x01aafd30
int C_01aafd30::sub_01aafd30(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}

struct C_01aafda0 { C_01aafda0* sub_01aafda0(int a0); };

// @baa 0x01aafda0
C_01aafda0* C_01aafda0::sub_01aafda0(int a0) { return this; }

struct C_01aafdb0 {
    int * sub_01aafdb0(int, int);
};

// @baa 0x01aafdb0
int * C_01aafdb0::sub_01aafdb0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  return param_1;
}

// @baa 0x01aafe50
int sub_01aafe50(void) { return 1073741823; }

// @baa 0x01aaff60
void sub_01aaff60(void) {  }

// @baa 0x01aaff70
int sub_01aaff70(int a0) { return *(int*)a0; }
