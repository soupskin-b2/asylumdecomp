// Engine_0f90000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00f962b0(byte);
};

int sub_0053dfa0(...);
int sub_00f961d0(void);
// @baa 0x00f962b0
undefined4 C::sub_00f962b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f961d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f962d0 { void sub_00f91d90(int); C_00f962d0 *sub_00f962d0(int); };

// @baa 0x00f962d0
C_00f962d0 *C_00f962d0::sub_00f962d0(int a) { sub_00f91d90(a); return this; }

// @baa 0x00f96310
IMPLEMENT_CLASS_AT(UEditorViewportInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdViewport.cpp", 4666);

// @baa 0x00f96370
