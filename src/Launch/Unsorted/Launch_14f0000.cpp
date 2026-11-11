// Launch_14f0000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x014f9b40
void sub_014f9b40(void) {  }

// @baa 0x014f9b50
void sub_014f9b50(void) {  }

// @baa 0x014f9b70
undefined2 sub_014f9b70(void)
{
  return 0x75;
}

// @baa 0x014f9b80
undefined2 sub_014f9b80(void)
{
  return 0x69;
}

// @baa 0x014f9b90
int sub_014f9b90(int a0, int a1) { return a1; }

// @baa 0x014f9ba0
int sub_014f9ba0(int a0, int a1) { return a1; }

// @baa 0x014f9bb0
int sub_014f9bb0(int a0, int a1) { return a1; }

// @baa 0x014f9bc0
int sub_014f9bc0(int a0, int a1) { return a1; }

// @baa 0x014f9bd0
int sub_014f9bd0(int a0, int a1) { return a1; }

// @baa 0x014f9be0
int sub_014f9be0(int a0, int a1) { return a1; }

// @baa 0x014f9c60
IMPLEMENT_CLASS_AT(UGFxEditor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIEditor.cpp", 73);

int sub_014fa5c0(void);
int sub_014ff2a0(...);
extern undefined4 g_026defa8;
// @baa 0x014ff3c0
int sub_014ff3c0(void)
{
  if (g_026defa8 == 0) {
    g_026defa8 = sub_014ff2a0(L"GFxUIEditor");
    sub_014fa5c0();
  }
  return g_026defa8;
}
