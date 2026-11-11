// Engine_1ac0000.cpp (part 3 of 4): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01ac13a0();
};

int sub_01ab3290(...);
int sub_01ac0e20(...);
// @baa 0x01ac13a0
void C::sub_01ac13a0(void)
{
    int * param_1 = (int *)this;

  sub_01ac0e20(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ac1670 {
    void sub_01ac1670();
};

int sub_01ac0fb0(...);
// @baa 0x01ac1670
void C_01ac1670::sub_01ac1670(void)
{
    int * param_1 = (int *)this;

  sub_01ac0fb0(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ac18b0 {
    void sub_01ac18b0();
};

// @baa 0x01ac18b0
void C_01ac18b0::sub_01ac18b0(void)
{
    int * param_1 = (int *)this;

  sub_01ac0e20(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ac1ee0 {
    void sub_01ac1ee0();
};

// @baa 0x01ac1ee0
void C_01ac1ee0::sub_01ac1ee0(void)
{
    int * param_1 = (int *)this;

  sub_01ac0fb0(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}
