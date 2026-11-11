// LevelTransitionSceneProxy.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x0175cd00
int sub_0175cd00(void) { return 1690; }

struct C {
    int sub_0175cd10();
};

// @baa 0x0175cd10
int C::sub_0175cd10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_0175cdb0 {
    int sub_0175cdb0();
};

// @baa 0x0175cdb0
int C_0175cdb0::sub_0175cdb0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xe0;
}

void sub_006837e0();
// @baa 0x0175cdc0
void sub_0175cdc0(void) { sub_006837e0(); }
