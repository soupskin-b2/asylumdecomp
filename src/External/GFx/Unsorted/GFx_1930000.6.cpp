// GFx_1930000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/GFx.h"

// Cross-links two pointer fields at +0x14 and +0x18 of a doubly-linked node.
struct FPinnedLink
{
    char Head[0x14];
    FPinnedLink* Front;  // +0x14
    FPinnedLink* Rear;   // +0x18
};

// @baa 0x01933390
void __stdcall sub_01933390(FPinnedLink* Pair)
{
    Pair->Front->Rear = Pair->Rear;
    Pair->Rear->Front = Pair->Front;
}
