// UnrealEd_0b30000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00b318c0
int sub_00b318c0(int a0, int a1) { return a1; }

// @baa 0x00b318d0
int sub_00b318d0(int a0, int a1) { return a1; }

int sub_00b50b80(void);
int sub_00b69d00(...);
extern undefined4 g_026bf584;
// @baa 0x00b31910
int sub_00b31910(void)
{
  if (g_026bf584 == 0) {
    g_026bf584 = sub_00b69d00(L"Engine");
    sub_00b50b80();
  }
  return g_026bf584;
}

struct C { C* sub_00b31940(void); };

// @baa 0x00b31940
C* C::sub_00b31940(void) { return this; }

// @baa 0x00b31950
int sub_00b31950(int a0, int a1) { return a1; }

// @baa 0x00b31960
int sub_00b31960(int a0, int a1) { return a1; }

int sub_00ba1b00(...);
int sub_00ba56b0(void);
extern undefined4 g_026bf7e8;
// @baa 0x00b31970
int sub_00b31970(void)
{
  if (g_026bf7e8 == 0) {
    g_026bf7e8 = sub_00ba1b00(L"Engine");
    sub_00ba56b0();
  }
  return g_026bf7e8;
}
