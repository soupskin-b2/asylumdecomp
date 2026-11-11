// fmod_pluginfactory.cpp (part 1 of 3): 4 functions
// Placed here by: neighbours 3, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01780f4c();
    int sub_017a6142();
    int sub_01768493();
};

extern undefined4 g_023db80c;
// @baa 0x01780f4c
undefined4 * C::sub_01780f4c(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_017a6142();
  *param_1 = (undefined4)((&g_023db80c));
  ((C *)(((char *)this + 0x1d0)))->sub_01768493();
  return param_1;
}

struct C_01781ec5 {
    undefined4 * sub_01781ec5();
    int sub_01780f4c();
    int sub_017819d4();
};

extern undefined4 g_023db95c;
extern undefined4 g_023db974;
// @baa 0x01781ec5
undefined4 * C_01781ec5::sub_01781ec5(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01781ec5 *)(this))->sub_01780f4c();
  *param_1 = (undefined4)((&g_023db974));
  ((C_01781ec5 *)(((char *)this + 0x294c)))->sub_017819d4();
  param_1[0xa53] = (undefined4)((&g_023db95c));
  return param_1;
}

struct C_01781eec {
    undefined4 * sub_01781eec();
    int sub_01780f4c();
    int sub_017819d4();
};

extern undefined4 g_023db964;
extern undefined4 g_023db9d4;
// @baa 0x01781eec
undefined4 * C_01781eec::sub_01781eec(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01781eec *)(this))->sub_01780f4c();
  *param_1 = (undefined4)((&g_023db9d4));
  ((C_01781eec *)(((char *)this + 0x74c)))->sub_017819d4();
  param_1[0x1d3] = (undefined4)((&g_023db964));
  return param_1;
}

struct C_01781f13 {
    undefined4 * sub_01781f13();
    int sub_01780f4c();
    int sub_017819d4();
};

extern undefined4 g_023db96c;
extern undefined4 g_023dba34;
// @baa 0x01781f13
undefined4 * C_01781f13::sub_01781f13(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01781f13 *)(this))->sub_01780f4c();
  *param_1 = (undefined4)((&g_023dba34));
  ((C_01781f13 *)(((char *)this + 0x48cc)))->sub_017819d4();
  param_1[0x1233] = (undefined4)((&g_023db96c));
  return param_1;
}
