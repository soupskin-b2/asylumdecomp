// Launch_1ad0000.cpp (part 4 of 4): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01ad4d30();
};

int sub_01ab3290(...);
int sub_01ad4c70(...);
// @baa 0x01ad4d30
void C::sub_01ad4d30(void)
{
    int * param_1 = (int *)this;

  sub_01ad4c70(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ad4f50 {
    void sub_01ad4f50();
};

int sub_01ad4ce0(...);
// @baa 0x01ad4f50
void C_01ad4f50::sub_01ad4f50(void)
{
    int * param_1 = (int *)this;

  sub_01ad4ce0(*param_1,*param_1 + param_1[2] * 0x14);
  sub_01ab3290(*param_1,param_1[1] * 0x14);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ad5370 {
    void sub_01ad5370();
};

// @baa 0x01ad5370
void C_01ad5370::sub_01ad5370(void)
{
    int * param_1 = (int *)this;

  sub_01ad4c70(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ad5610 {
    void sub_01ad5610();
};

// @baa 0x01ad5610
void C_01ad5610::sub_01ad5610(void)
{
    int * param_1 = (int *)this;

  sub_01ad4ce0(*param_1,*param_1 + param_1[2] * 0x14);
  sub_01ab3290(*param_1,param_1[1] * 0x14);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}
