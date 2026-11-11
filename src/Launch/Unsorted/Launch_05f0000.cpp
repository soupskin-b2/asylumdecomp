// Launch_05f0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct Sub
{
    void sub_005f5d30(INT Value);
};

extern Sub g_026861a8;
// @baa 0x005f8860
void sub_005f8860()
{
    g_026861a8.sub_005f5d30(0);
}
