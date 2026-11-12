// GFxUI_1900000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// 0x1976050: switch on a one-byte state (>= 5 handled here); member of the sub-object at +0xc
// 0x19722d0: destroys/clears the two member sub-objects and their flags; member of this
struct FGfxSub_ {
    BYTE State;
    void* Object;
    void sub_01976050();
};

struct FGfxOwner_ {
    void* First;
    void* Last;
    BYTE Flags;
    FGfxSub_ Sub;
    void sub_019722d0();
    void sub_01905e50();
};

// @baa 0x01905e50
void FGfxOwner_::sub_01905e50()
{
    if ((unsigned)Sub.State >= 5) {
        Sub.sub_01976050();
    }
    sub_019722d0();
}
