// FMOD_17a0000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017ab88e();
};

int sub_017c4988(void);
extern undefined4 g_023ddd4c;
// @baa 0x017ab88e
undefined4 * C::sub_017ab88e(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017c4988();
  *param_1 = (undefined4)((&g_023ddd4c));
  return param_1;
}

struct C_017ab8a0 {
    void sub_017ab8a0();
};

extern undefined4 g_023dd674;
// @baa 0x017ab8a0
void C_017ab8a0::sub_017ab8a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  return;
}
