// SpeedTree.cpp (part 5 of 8): 2 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01a69040();
// @baa 0x01a69c20
void sub_01a69c20(void) { sub_01a69040(); }

extern char g_0240ceb0[];
extern char g_026053c0[];
// @baa 0x01e28420
void sub_01e28420(void)
{
    *(void**)g_026053c0 = g_0240ceb0;
}
