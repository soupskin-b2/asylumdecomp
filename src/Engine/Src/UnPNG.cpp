// UnPNG.cpp (part 1 of 2): 10 functions
// Placed here by: neighbours 6, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00d1f8f0
void sub_00d1f8f0(void) {  }

extern char g_0240e0f0[];
// @baa 0x01adb6d0
int sub_01adb6d0(void) { return (int)g_0240e0f0; }

extern char g_0240e1b4[];
// @baa 0x01adb6e0
int sub_01adb6e0(void) { return (int)g_0240e1b4; }

// @baa 0x01adb6f0
int sub_01adb6f0(void) { return (int)g_0240e1b4; }

extern char g_0240e1bc[];
// @baa 0x01adb700
int sub_01adb700(void) { return (int)g_0240e1bc; }

// @baa 0x01adb7a0
undefined4 sub_01adb7a0(void)
{
  return 0xffffffff;
}

int sub_01adb860(...);
// @baa 0x01adcc10
void sub_01adcc10(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01adb860(param_1,param_2,param_3,param_4,0,0,0);
  return;
}

extern "C" __declspec(dllimport) int free(...);
// @baa 0x01add070
void sub_01add070(void * param_1)
{
  if (param_1 != (void *)0x0) {
                    
                    
    free(param_1);
    return;
  }
  return;
}

int sub_01ae06f0(...);
// @baa 0x01ae0b70
void sub_01ae0b70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01ae06f0(param_1,param_2,param_3,param_4,0,0,0);
  return;
}

// @baa 0x01ae5630
void sub_01ae5630(int param_1)
{
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x1000;
  return;
}
