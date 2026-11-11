// Engine_0750000.cpp (part 3 of 4): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_0075d4f0(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x0075d4f0
undefined4 C::sub_0075d4f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656490(void);
// @baa 0x0075f760
undefined4 ULensFlare::sub_0075f760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0075fa30 {
    undefined4 sub_0075fa30(byte);
};

// @baa 0x0075fa30
undefined4 C_0075fa30::sub_0075fa30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0075fa50 {
    undefined4 sub_0075fa50(byte);
};

// @baa 0x0075fa50
undefined4 C_0075fa50::sub_0075fa50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00758890
/* APhysicsVolume handles one trace type itself (0x8000, not named in the headers) and leaves the
 * rest to AVolume. */
UBOOL APhysicsVolume::ShouldTrace( UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags )
{
	if( ( TraceFlags & 0x8000 ) == 0 && !Super::ShouldTrace( Primitive, SourceActor, TraceFlags ) )
	{
		return FALSE;
	}
	return TRUE;
}
