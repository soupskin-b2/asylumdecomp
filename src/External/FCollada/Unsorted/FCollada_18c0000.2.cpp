// FCollada_18c0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    float Value_00;
    float Value_04;

    C* sub_018c15d0(float* Source);
};

// @baa 0x018c15d0
C* C::sub_018c15d0(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018c15e0
{
    float Value_00;
    float Value_04;

    C_018c15e0* sub_018c15e0(float* Source);
};

// @baa 0x018c15e0
C_018c15e0* C_018c15e0::sub_018c15e0(float* Source)
{
    Value_04 = *Source;
    return this;
}
