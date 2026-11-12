// Launch_1ac0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01acef90
{
    INT sub_01acef90(INT Value);
};

// @baa 0x01acff70
INT sub_01acff70(INT Value, S_01acef90* Object)
{
    return Object->sub_01acef90(Value);
}
