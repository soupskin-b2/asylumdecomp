// Launch_0ca0000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00dfd290(void);
int sub_00e0ba80(...);
extern undefined4 g_026c5eb0;
// @baa 0x00ca7e10
int sub_00ca7e10(void)
{
  if (g_026c5eb0 == 0) {
    g_026c5eb0 = sub_00e0ba80(L"Engine");
    sub_00dfd290();
  }
  return g_026c5eb0;
}

int sub_00df9990(...);
int sub_00dfd3e0(void);
extern undefined4 g_026c5eb4;
// @baa 0x00ca7e40
int sub_00ca7e40(void)
{
  if (g_026c5eb4 == 0) {
    g_026c5eb4 = sub_00df9990(L"Engine");
    sub_00dfd3e0();
  }
  return g_026c5eb4;
}

int sub_00dfd530(void);
int sub_00e071c0(...);
extern undefined4 g_026c5eb8;
// @baa 0x00ca7e70
int sub_00ca7e70(void)
{
  if (g_026c5eb8 == 0) {
    g_026c5eb8 = sub_00e071c0(L"Engine");
    sub_00dfd530();
  }
  return g_026c5eb8;
}
