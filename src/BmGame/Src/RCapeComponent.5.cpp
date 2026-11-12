// RCapeComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

const TCHAR* sub_016ad8c0();
const TCHAR* sub_0053f6c0();
// @baa 0x016ade70
INT URCapeComponent::vf_000()
{
    return sub_016ad8c0 == sub_0053f6c0;
}

struct URCapeComponent_ : public URCapeComponent
{
    void sub_016aee80();
    void sub_016b1f80(FLOAT F);
};

// @baa 0x016b1f80
void URCapeComponent_::sub_016b1f80(FLOAT F)
{
    MaterialSpeedVariableOverride = F;
    sub_016aee80();
}
