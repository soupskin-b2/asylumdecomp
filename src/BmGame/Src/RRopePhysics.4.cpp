// RRopePhysics.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// sub_0165d110 — a helper in BmGame/Src/RRopePhysics.cpp, called with `this` in ecx.
// Returns the rope component owner's virtual slot 0x254 value (a FLOAT in x87)
// scaled by g_0234cf68 (0.02f).
struct C_0165d110 {
    FLOAT sub_0165d110();
};

URRopeComponent* sub_0165cf60();
extern FLOAT g_0234cf68;
// @baa 0x0165d110
FLOAT C_0165d110::sub_0165d110()
{
    URRopeComponent* Owner = sub_0165cf60();
    return Owner->GetMinRopeLength() * g_0234cf68;
}
