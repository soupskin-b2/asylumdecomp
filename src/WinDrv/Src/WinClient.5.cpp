// WinClient.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

namespace {
// The receiver: its vtable holds the virtual called below at slot 2
// (vtable offset 0x8).
struct sub_T_00eb4600 {
    virtual void sub_00eb4600_f0();
    virtual void sub_00eb4600_f1();
    virtual void sub_00eb4600_f2();
};

struct sub_00eb4600_ {
    sub_00eb4600_();
    void sub_00eb4600(int);
    char _pad[1156];
    int _field_484;
    char _rest[28];
};
}

// @baa 0x00eb4600
void sub_00eb4600_::sub_00eb4600(int InValue)
{
    _field_484 = InValue;
    ((sub_T_00eb4600*)((char*)this - 4))->sub_00eb4600_f2();
}
