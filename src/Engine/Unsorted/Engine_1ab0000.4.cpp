// Engine_1ab0000.cpp (part 4 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01abac80();
};

int sub_01ab3290(...);
int sub_01aba730(...);
// @baa 0x01abac80
void C::sub_01abac80(void)
{
    int * param_1 = (int *)this;

  sub_01aba730(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01abb320 {
    void sub_01abb320();
};

// @baa 0x01abb320
void C_01abb320::sub_01abb320(void)
{
    int * param_1 = (int *)this;

  sub_01aba730(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}
