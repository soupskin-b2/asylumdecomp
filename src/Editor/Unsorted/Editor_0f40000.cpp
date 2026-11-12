// Editor_0f40000.cpp (part 1 of 2): 17 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f4c900
int sub_00f4c900(int a0, int a1) { return a1; }

int sub_005e1960(...);
int sub_00f1c0e0(void);
int sub_00f36290(...);
extern undefined4 g_026667a8;
extern undefined4 g_026cccfc;
// @baa 0x00f4c910
void sub_00f4c910(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026cccfc == 0) {
    g_026cccfc = sub_00f36290(L"Editor");
    sub_00f1c0e0();
  }
  sub_005e1960(g_026cccfc,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00f9f720(void);
int sub_00fbb880(...);
extern undefined4 g_026cdbc8;
// @baa 0x00f4c970
void sub_00f4c970(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026cdbc8 == 0) {
    g_026cdbc8 = sub_00fbb880(L"Editor");
    sub_00f9f720();
  }
  sub_005e1960(g_026cdbc8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f4c9d0
int sub_00f4c9d0(int a0, int a1) { return a1; }

// @baa 0x00f4c9e0
int sub_00f4c9e0(int a0, int a1) { return a1; }

// @baa 0x00f4c9f0
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1489);

// @baa 0x00f4ca50
// @baa 0x00f4ca70
undefined4 sub_00f4ca70(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00f4ca90
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactoryG16BMP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1813);

// @baa 0x00f4caf0
// @baa 0x00f4cb10
undefined4 sub_00f4cb10(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern char g_026cce54[];
// @baa 0x00f4cd70
int sub_00f4cd70(void) { return (int)g_026cce54; }

extern char g_026cce58[];
// @baa 0x00f4cd80
int sub_00f4cd80(void) { return (int)g_026cce58; }

// @baa 0x00f4cd90
void sub_00f4cd90(void) {  }

// @baa 0x00f4cdc0
void sub_00f4cdc0(void) {  }

// @baa 0x00f4cdd0
int sub_00f4cdd0(int param_1, int param_2)
{
  return *(int *)(param_2 + 0x40) - *(int *)(param_1 + 0x40);
}

extern char g_02153690[];
// @baa 0x00f4cde0
int sub_00f4cde0(void) { return (int)g_02153690; }

