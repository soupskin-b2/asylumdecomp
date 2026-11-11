// UnUIDataStores.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S_00d92b80
{
    INT Unk00;
    INT Unk04;
    INT Unk08;
    INT Unk0c;
    INT Unk10;
    INT Unk14;
    S_00d92b80* sub_00d92b80(INT In);
};

// @baa 0x00d92b80
S_00d92b80* S_00d92b80::sub_00d92b80(INT In)
{
    S_00d92b80* Self = this;
    Self->Unk00 = 0;
    Self->Unk04 = 0;
    Self->Unk08 = 0;
    Self->Unk0c = 0;
    Self->Unk10 = 0;
    Self->Unk14 = 0;
    return Self;
}
