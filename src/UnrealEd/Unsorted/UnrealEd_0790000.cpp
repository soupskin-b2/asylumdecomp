// UnrealEd_0790000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_0079f5d0(int a0); };

// @baa 0x0079f5d0
C* C::sub_0079f5d0(int a0) { return this; }

int sub_0077b6b0(...);
int sub_007804f0(void);
extern undefined4 g_026b3c70;
// @baa 0x0079f630
int sub_0079f630(void)
{
  if (g_026b3c70 == 0) {
    g_026b3c70 = sub_0077b6b0(L"Engine");
    sub_007804f0();
  }
  return g_026b3c70;
}

int sub_0077b770(...);
int sub_00780640(void);
extern undefined4 g_026b3c74;
// @baa 0x0079f660
int sub_0079f660(void)
{
  if (g_026b3c74 == 0) {
    g_026b3c74 = sub_0077b770(L"Engine");
    sub_00780640();
  }
  return g_026b3c74;
}
