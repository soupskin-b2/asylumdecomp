// UnWorld.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_009b45b0_struct {
    INT field_0x00;
    INT field_0x04;
    INT field_0x08;
    INT field_0x0c;
    INT field_0x10;
    INT field_0x14;
    sub_009b45b0_struct* sub_009b45b0(INT InValue);
};

// @baa 0x009b45b0
// Zeroes six dwords of this, returns this.
sub_009b45b0_struct* sub_009b45b0_struct::sub_009b45b0(INT InValue)
{
    field_0x14 = field_0x10 = field_0x0c = field_0x08 = field_0x04 = field_0x00 = 0;
    return this;
}
