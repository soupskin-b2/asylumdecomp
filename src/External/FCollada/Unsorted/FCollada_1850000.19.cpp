// FCollada_1850000.cpp (part 19 of 19): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_0185c9a0(); // 0x04
    void sub_01876700();
};

// @baa 0x0185c9a0
void FCDocument::sub_0185c9a0()
{
    sub_01876700();
    if (this != NULL)
        vf_0(1);
}

struct Sub0185e670Obj
{
    char _pad[0x10];
    float x;
    float y;
    float z;

    void sub_0185e670(const float *v);
};

// @baa 0x0185e670
void Sub0185e670Obj::sub_0185e670(const float *v)
{
    x = v[0];
    y = v[1];
    z = v[2];
}

struct C
{
    INT Value;

    C* sub_018584e0(INT* Source);
};

// @baa 0x018584e0
C* C::sub_018584e0(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_01858540
{
    INT Value;

    C_01858540* sub_01858540(INT* Source);
};

// @baa 0x01858540
C_01858540* C_01858540::sub_01858540(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_018585d0
{
    INT Value;

    C_018585d0* sub_018585d0(INT* Source);
};

// @baa 0x018585d0
C_018585d0* C_018585d0::sub_018585d0(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_01858880
{
    INT Value;

    C_01858880* sub_01858880(INT* Source);
};

// @baa 0x01858880
C_01858880* C_01858880::sub_01858880(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_018588b0
{
    INT Value;

    C_018588b0* sub_018588b0(INT* Source);
};

// @baa 0x018588b0
C_018588b0* C_018588b0::sub_018588b0(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_018588e0
{
    INT Value;

    C_018588e0* sub_018588e0(INT* Source);
};

// @baa 0x018588e0
C_018588e0* C_018588e0::sub_018588e0(INT* Source)
{
    Value = *Source;
    return this;
}
