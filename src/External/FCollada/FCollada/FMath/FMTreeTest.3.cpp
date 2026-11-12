// FMTreeTest.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    INT Value;

    C* sub_01869fa0(INT* Source);
};

// @baa 0x01869fa0
C* C::sub_01869fa0(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_01869fb0
{
    INT Value;

    C_01869fb0* sub_01869fb0(INT* Source);
};

// @baa 0x01869fb0
C_01869fb0* C_01869fb0::sub_01869fb0(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_0186a090
{
    INT Value;

    C_0186a090* sub_0186a090(INT* Source);
};

// @baa 0x0186a090
C_0186a090* C_0186a090::sub_0186a090(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_0186a140
{
    INT Value;

    C_0186a140* sub_0186a140(INT* Source);
};

// @baa 0x0186a140
C_0186a140* C_0186a140::sub_0186a140(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_0186a470
{
    INT Value_00;
    BYTE Flag_04;

    C_0186a470* sub_0186a470();
};

// @baa 0x0186a470
C_0186a470* C_0186a470::sub_0186a470()
{
    Value_00 = 0;
    Flag_04 = 0;
    return this;
}

struct C_0186a480
{
    INT Value_00;
    BYTE Flag_04;

    C_0186a480* sub_0186a480();
};

// @baa 0x0186a480
C_0186a480* C_0186a480::sub_0186a480()
{
    Value_00 = 0;
    Flag_04 = 0;
    return this;
}
