// UnrealEd_0ca0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_007a5cc0(void);
int sub_007c99b0(...);
extern undefined4 g_026b5334;
// @baa 0x00ca05e0
int sub_00ca05e0(void)
{
  if (g_026b5334 == 0) {
    g_026b5334 = sub_007c99b0(L"Engine");
    sub_007a5cc0();
  }
  return g_026b5334;
}

int sub_00c65970(void);
int sub_00c757c0(...);
extern undefined4 g_026c2b00;
// @baa 0x00ca0610
int sub_00ca0610(void)
{
  if (g_026c2b00 == 0) {
    g_026c2b00 = sub_00c757c0(L"Engine");
    sub_00c65970();
  }
  return g_026c2b00;
}
