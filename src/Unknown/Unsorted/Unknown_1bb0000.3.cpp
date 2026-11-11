// Unknown_1bb0000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01bb32d0();
};

int sub_01ab3290(...);
int sub_01bb3280(...);
// @baa 0x01bb32d0
void C::sub_01bb32d0(void)
{
    int * param_1 = (int *)this;

  sub_01bb3280(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01bb36c0 {
    void sub_01bb36c0();
};

// @baa 0x01bb36c0
void C_01bb36c0::sub_01bb36c0(void)
{
    int * param_1 = (int *)this;

  sub_01bb3280(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}
