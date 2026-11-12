// UnrealEd_0520000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// 0052fa10 (UnrealEd/Unsorted/UnrealEd_0520000.cpp)
//
// A small setter that records a value on the widget and forwards it to the
// browser list member that lives just after it in the layout.  It stores the
// value, then tail-calls the list's routine on the sub-object at +0x168.
#include "ue3/Win32.h"

// The list sub-object whose routine is jumped to; it operates on its own
// internal head/entry fields (0x10, 0x38, 0x114, 0x118, 0xd8).
struct sub_0052e0e0_
{
    void sub_0052e0e0(int NewValue);
};

struct sub_0052fa10_
{
    unsigned char pad[0x160];
    int           Value;              // 0x160
    int           Field_164;          // 0x164
    sub_0052e0e0_ List;               // 0x168

    void sub_0052fa10(int NewValue);
};

// @baa 0x0052fa10
void sub_0052fa10_::sub_0052fa10(int NewValue)
{
    Value = NewValue;
    List.sub_0052e0e0(NewValue);
}
