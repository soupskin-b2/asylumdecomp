// Engine_0d60000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_006efb40(void);
// @baa 0x00d6ed10
undefined4 ULensFlare::sub_00d6ed10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct ANxCylindricalForceFieldCapsule_ : public ANxCylindricalForceFieldCapsule {
	void sub_00d6b740();
};

// @baa 0x00d6b740
void ANxCylindricalForceFieldCapsule_::sub_00d6b740()
{
	Kernel.Dummy = 0;
	ForceField.Dummy = 0;
	vf_238();
}

// @baa 0x00d6b7d0
void ANxGenericForceFieldBox::vf_354()
{
	ForceField.Dummy = 0;
	LinearKernel.Dummy = 0;
	vf_238();
}
