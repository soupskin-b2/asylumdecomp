// SceneRendering.cpp (part 2 of 2): 2 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_007249d0();
// @baa 0x00b03760
void sub_00b03760(void) { sub_007249d0(); }

extern int g_01fe2cf4;
struct S {
    int Object; int F4; int F8; int FC; volatile int Flags; int F14;
    int sub_00b03390();
};

// @baa 0x00b03390
int S::sub_00b03390()
{
    int T = (int)this;
    F8 = 0;
    FC = 0;
    Flags &= 0xfffffffe;
    Object = (int)&g_01fe2cf4;
    F14 = 0;
    return T;
}
