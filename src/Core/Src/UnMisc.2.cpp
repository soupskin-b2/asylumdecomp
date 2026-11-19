// UnMisc.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00642e60
/* 0x00642e60 is ~USystem (DECLARE_CLASS's inline destructor): defining the constructor here makes this file emit it. */
USystem::USystem()
{
}

int sub_0053dfa0(...);
int sub_00639e10(void);
// @baa 0x00642fe0
undefined4 UObject::sub_00642fe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00639e10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0062d990
UBOOL USystem::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0062d9a0
UBOOL USystem::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
