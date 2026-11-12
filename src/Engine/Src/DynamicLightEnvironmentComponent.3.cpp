// DynamicLightEnvironmentComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    char pad_0[0x40];
    INT Value_40;
    char pad_44[0xc];
    INT Value_50;
    INT Value_54;

    C* sub_006b7ab0();
};

// @baa 0x006b7ab0
C* C::sub_006b7ab0()
{
    Value_40 = 0;
    Value_50 = 0;
    Value_54 = 0;
    return this;
}
