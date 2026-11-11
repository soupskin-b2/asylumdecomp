// RRopePhysics.cpp (part 3 of 3): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

char* sub_0165cf60();
// @baa 0x0165d140
int sub_0165d140(void)
{
    char* p = sub_0165cf60() + 0x22c;
    return ((int*)p)[1];
}

// @baa 0x0165d1d0
int sub_0165d1d0(void)
{
    char* p = sub_0165cf60() + 0x238;
    return ((int*)p)[1];
}
