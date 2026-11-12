// UnrealEd_11e0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_011ead70(UBOOL bFlag);
// @baa 0x011eb350
void sub_011eb350(UBOOL bFlag)
{
    sub_011ead70(TRUE);
}

// @baa 0x011eb360
void sub_011eb360(UBOOL bFlag)
{
    sub_011ead70(FALSE);
}
