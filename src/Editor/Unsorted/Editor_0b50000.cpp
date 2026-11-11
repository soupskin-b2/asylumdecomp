// Editor_0b50000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00b50080
int sub_00b50080(int a0, int a1) { return a1; }

int sub_00baacb0(void);
int sub_00bcdc20(...);
extern undefined4 g_026bf890;
// @baa 0x00b50090
int sub_00b50090(void)
{
  if (g_026bf890 == 0) {
    g_026bf890 = sub_00bcdc20(L"Engine");
    sub_00baacb0();
  }
  return g_026bf890;
}

int sub_00b9e100(...);
int sub_00ba5560(void);
extern undefined4 g_026bf7e4;
// @baa 0x00b500c0
int sub_00b500c0(void)
{
  if (g_026bf7e4 == 0) {
    g_026bf7e4 = sub_00b9e100(L"Engine");
    sub_00ba5560();
  }
  return g_026bf7e4;
}

int sub_00ba1d40(...);
int sub_00ba5aa0(void);
extern undefined4 g_026bf7f4;
// @baa 0x00b500f0
int sub_00b500f0(void)
{
  if (g_026bf7f4 == 0) {
    g_026bf7f4 = sub_00ba1d40(L"Engine");
    sub_00ba5aa0();
  }
  return g_026bf7f4;
}

struct C { C* sub_00b50120(void); };

// @baa 0x00b50120
C* C::sub_00b50120(void) { return this; }
