// InterpEditorDraw.cpp: 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00cea5d0(void);
int sub_00d13150(...);
extern undefined4 g_026c5654;
// @baa 0x0079f5a0
int sub_0079f5a0(void)
{
  if (g_026c5654 == 0) {
    g_026c5654 = sub_00d13150(L"Engine");
    sub_00cea5d0();
  }
  return g_026c5654;
}

int sub_006d90d0(void);
int sub_006fedd0(...);
extern undefined4 g_026b129c;
// @baa 0x00c8a5b0
int sub_00c8a5b0(void)
{
  if (g_026b129c == 0) {
    g_026b129c = sub_006fedd0(L"Engine");
    sub_006d90d0();
  }
  return g_026b129c;
}
