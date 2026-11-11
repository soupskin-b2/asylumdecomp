// fmod_pluginfactory.cpp (part 2 of 3): 4 functions
// Placed here by: neighbours 3, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01781e8f();
};

int sub_017819d4(void);
extern undefined4 g_023db95c;
// @baa 0x01781e8f
undefined4 * C::sub_01781e8f(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017819d4();
  *param_1 = (undefined4)((&g_023db95c));
  return param_1;
}

struct C_01781ea1 {
    undefined4 * sub_01781ea1();
};

extern undefined4 g_023db964;
// @baa 0x01781ea1
undefined4 * C_01781ea1::sub_01781ea1(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017819d4();
  *param_1 = (undefined4)((&g_023db964));
  return param_1;
}

struct C_01781eb3 {
    undefined4 * sub_01781eb3();
};

extern undefined4 g_023db96c;
// @baa 0x01781eb3
undefined4 * C_01781eb3::sub_01781eb3(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017819d4();
  *param_1 = (undefined4)((&g_023db96c));
  return param_1;
}

struct C_017aca52 {
    undefined4 * sub_017aca52();
};

int sub_01796fef(void);
extern undefined4 g_023ddfe0;
// @baa 0x017aca52
undefined4 * C_017aca52::sub_017aca52(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01796fef();
  *(undefined1 *)((int)param_1 + 0x21e) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x21d) = 0;
  param_1[0x8a] = 0;
  *param_1 = (undefined4)((&g_023ddfe0));
  return param_1;
}
