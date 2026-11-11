// GFxUI_18d0000.cpp (part 2 of 3): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018db6c0(float *);
};

// @baa 0x018db6c0
void C::sub_018db6c0(float * param_2)
{
    float * param_1 = (float *)this;

  param_1[1] = param_2[1] * *param_1 + param_1[1];
  param_1[3] = param_2[3] * param_1[2] + param_1[3];
  param_1[5] = param_2[5] * param_1[4] + param_1[5];
  param_1[7] = param_2[7] * param_1[6] + param_1[7];
  *param_1 = *param_2 * *param_1;
  param_1[2] = param_2[2] * param_1[2];
  param_1[4] = param_2[4] * param_1[4];
  param_1[6] = param_2[6] * param_1[6];
  return;
}

struct C_018dbb30 {
    UINT sub_018dbb30();
};

// @baa 0x018dbb30
UINT C_018dbb30::sub_018dbb30()
{
    return *(WORD *)this;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_018dbb50();
};

// @baa 0x018dbb50
S *S::sub_018dbb50()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_018dcc10 { C_018dcc10* sub_018dcc10(void); };

// @baa 0x018dcc10
C_018dcc10* C_018dcc10::sub_018dcc10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018ded40 {
    undefined4 * sub_018ded40();
    int sub_018e4150();
};

// @baa 0x018ded40
undefined4 * C_018ded40::sub_018ded40(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018ded40 *)(((char *)this + 0x14)))->sub_018e4150();
  ((C_018ded40 *)(((char *)this + 0x18)))->sub_018e4150();
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return param_1;
}
