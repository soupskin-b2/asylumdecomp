// FCollada_18a0000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_01828fd0_018a9d20 {
    void sub_01828fd0(float Value);
    sub_01828fd0_018a9d20* sub_018a9d20(const float& Value);
};

// @baa 0x018a9d20
sub_01828fd0_018a9d20* sub_01828fd0_018a9d20::sub_018a9d20(const float& Value)
{
    sub_01828fd0(Value);
    return this;
}

INT sub_0182b6d0(INT* Value);
// @baa 0x018ab210
INT sub_018ab210(INT Value)
{
    return sub_0182b6d0(&Value);
}

struct C
{
    char pad_00[0x18];
    volatile INT Flags;
    char pad_1c[0x58];
    float Value;

    void sub_018ae670(float In);
};

// @baa 0x018ae670
void C::sub_018ae670(float In)
{
    Flags |= 1;
    Value = In;
}

struct C_018aec70
{
    float Value_00;
    float Value_04;

    C_018aec70* sub_018aec70(float* Source);
};

// @baa 0x018aec70
C_018aec70* C_018aec70::sub_018aec70(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018aec80
{
    float Value_00;
    float Value_04;

    C_018aec80* sub_018aec80(float* Source);
};

// @baa 0x018aec80
C_018aec80* C_018aec80::sub_018aec80(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018aec90
{
    float Value_00;
    float Value_04;

    C_018aec90* sub_018aec90(float* Source);
};

// @baa 0x018aec90
C_018aec90* C_018aec90::sub_018aec90(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018aeca0
{
    float Value_00;
    float Value_04;

    C_018aeca0* sub_018aeca0(float* Source);
};

// @baa 0x018aeca0
C_018aeca0* C_018aeca0::sub_018aeca0(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018aecb0
{
    float Value_00;
    float Value_04;

    C_018aecb0* sub_018aecb0(float* Source);
};

// @baa 0x018aecb0
C_018aecb0* C_018aecb0::sub_018aecb0(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018aecc0
{
    float Value_00;
    float Value_04;

    C_018aecc0* sub_018aecc0(float* Source);
};

// @baa 0x018aecc0
C_018aecc0* C_018aecc0::sub_018aecc0(float* Source)
{
    Value_04 = *Source;
    return this;
}
