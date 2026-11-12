// UnDebuggerCore.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <new.h>

struct FNetPendingLevelInfo
{
    UObject* Level;
    int Index;
    BYTE Flag;
    FNetPendingLevelInfo(UObject* L, BYTE B, int I);
};

FNetPendingLevelInfo::FNetPendingLevelInfo(UObject* L, BYTE B, int I)
{
    Level = L;
    Index = I;
    Flag = B;
}

// @baa 0x00e17760
static void sub_caller(void* Mem, UObject* L, int I, BYTE B)
{
    new (Mem) FNetPendingLevelInfo(L, B, I);
}
