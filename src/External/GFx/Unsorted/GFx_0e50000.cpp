// GFx_0e50000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00e43100(void);
int sub_00e48f10(...);
extern undefined4 g_026caed0;
// @baa 0x00e51ff0
int sub_00e51ff0(void)
{
  if (g_026caed0 == 0) {
    g_026caed0 = sub_00e48f10(L"GFxUI");
    sub_00e43100();
  }
  return g_026caed0;
}

struct C {
    undefined4 * sub_00e52110();
    int sub_00e48990(int);
};

extern undefined4 g_02106ea4;
extern undefined4 g_027b897c;
// @baa 0x00e52110
undefined4 * C::sub_00e52110(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_00e48990(10);
  g_027b897c = 0;
  *param_1 = (undefined4)(&g_02106ea4);
  return param_1;
}
