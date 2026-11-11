// Editor_0b40000.cpp: 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00b4fdf0
int sub_00b4fdf0(int a0, int a1) { return a1; }

// @baa 0x00b4fe00
int sub_00b4fe00(int a0, int a1) { return a1; }

// @baa 0x00b4fe10
int sub_00b4fe10(int a0, int a1) { return a1; }

// @baa 0x00b4fe20
int sub_00b4fe20(int a0, int a1) { return a1; }

// @baa 0x00b4fe30
int sub_00b4fe30(int a0, int a1) { return a1; }

// @baa 0x00b4fe40
int sub_00b4fe40(int a0, int a1) { return a1; }

struct C { C* sub_00b4fe50(void); };

// @baa 0x00b4fe50
C* C::sub_00b4fe50(void) { return this; }

// @baa 0x00b4fe60
int sub_00b4fe60(int a0, int a1) { return a1; }

// @baa 0x00b4fe70
int sub_00b4fe70(int a0, int a1) { return a1; }

// @baa 0x00b4fe80
int sub_00b4fe80(int a0, int a1) { return a1; }

// @baa 0x00b4fe90
int sub_00b4fe90(int a0, int a1) { return a1; }

int sub_00ba0930(...);
int sub_00ba09f0(void);
extern undefined4 g_026bf788;
// @baa 0x00b4ff90
int sub_00b4ff90(void)
{
  if (g_026bf788 == 0) {
    g_026bf788 = sub_00ba0930(L"Engine");
    sub_00ba09f0();
  }
  return g_026bf788;
}

int sub_00ba0fc0(...);
int sub_00ba4060(void);
extern undefined4 g_026bf7a4;
// @baa 0x00b4ffc0
int sub_00b4ffc0(void)
{
  if (g_026bf7a4 == 0) {
    g_026bf7a4 = sub_00ba0fc0(L"Engine");
    sub_00ba4060();
  }
  return g_026bf7a4;
}
