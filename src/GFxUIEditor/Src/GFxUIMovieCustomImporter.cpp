// GFxUIMovieCustomImporter.cpp: 4 functions
// Placed here by: file 2, callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_014fa3d0();
};

int sub_006311e0(...);
int sub_018077f0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x014fa3d0
void C::sub_014fa3d0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  if (*param_1 == 0) {
    param_1[3] = 0;
    param_1[5] = 1;
    return;
  }
  param_1[9] = param_1[1];
  param_1[10] = param_1[2];
  iVar1 = sub_018077f0(param_1 + 6,2);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    sub_006311e0("ret == Z_OK || ret == Z_STREAM_END",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIMovieCustomImporter.cpp"
                 ,0x191,&g_01e3f3dc);
  }
  param_1[3] = 0;
  param_1[4] = param_1[2] - param_1[10];
  if (param_1[2] - param_1[10] == 0) {
    param_1[5] = 1;
  }
  return;
}

// @baa 0x014ff250
IMPLEMENT_CLASS_AT(UGFxReimportCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIMovieCustomImporter.cpp", 504);

int sub_014f9e60(void);
int sub_014ff190(...);
extern undefined4 g_026def94;
// @baa 0x014ff270
int sub_014ff270(void)
{
  if (g_026def94 == 0) {
    g_026def94 = sub_014ff190(L"GFxUIEditor");
    sub_014f9e60();
  }
  return g_026def94;
}

// @baa 0x014ff2a0
