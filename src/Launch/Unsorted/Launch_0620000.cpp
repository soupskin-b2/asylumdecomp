// Launch_0620000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_00621d80(int); C *sub_006261f0(int); };

// @baa 0x006261f0
C *C::sub_006261f0(int a) { sub_00621d80(a); return this; }

struct C_00626210 { void sub_006220b0(int); C_00626210 *sub_00626210(int); };

// @baa 0x00626210
C_00626210 *C_00626210::sub_00626210(int a) { sub_006220b0(a); return this; }

struct C_00626690 { void sub_006220b0(int); C_00626690 *sub_00626690(int); };

// @baa 0x00626690
C_00626690 *C_00626690::sub_00626690(int a) { sub_006220b0(a); return this; }

extern char g_01e729c0[];
struct C_0062d850 { void sub_0062d850(void); };

// @baa 0x0062d850
void C_0062d850::sub_0062d850(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

int sub_0053dfa0(...);
int sub_00626000(void);
// @baa 0x0062d860
undefined4 UPackageMap::sub_0062d860(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00626000();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0062d880
IMPLEMENT_CLASS_AT(USystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnMisc.cpp", 5222);
