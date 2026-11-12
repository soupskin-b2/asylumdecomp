// FCollada_1840000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

void* sub_00402650(unsigned int Size);
struct FColladaEntry
{
    int Data[6];
    FColladaEntry* sub_0184f180();
};

// @baa 0x0184f1a0
void* sub_0184f1a0()
{
    FColladaEntry* Entry = (FColladaEntry*)sub_00402650(sizeof(FColladaEntry));
    if (Entry)
        return Entry->sub_0184f180();
    return 0;
}

extern double g_01e729a8;
// @baa 0x0184d040
double sub_0184d040(double* InValue)
{
    return (*InValue >= 0.0) ? 1.0 : g_01e729a8;
}
