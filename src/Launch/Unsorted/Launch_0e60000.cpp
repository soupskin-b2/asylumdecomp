// Launch_0e60000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00e53710(void);
int sub_00e6bed0(...);
extern undefined4 g_026caf0c;
// @baa 0x00e6c8f0
int sub_00e6c8f0(void)
{
  if (g_026caf0c == 0) {
    g_026caf0c = sub_00e6bed0(L"GFxUI");
    sub_00e53710();
  }
  return g_026caf0c;
}
