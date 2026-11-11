// Unknown_1ba0000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01ba32e0();
};

int sub_01ab3290(...);
int sub_01ba2ee0(...);
// @baa 0x01ba32e0
void C::sub_01ba32e0(void)
{
    int * param_1 = (int *)this;

  sub_01ba2ee0(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ba3730 {
    void sub_01ba3730();
};

// @baa 0x01ba3730
void C_01ba3730::sub_01ba3730(void)
{
    int * param_1 = (int *)this;

  sub_01ba2ee0(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}
