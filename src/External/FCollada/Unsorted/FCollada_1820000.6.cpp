// FCollada_1820000.cpp (part 6 of 6): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_01829c80(); // 0x04
    void sub_01854290();
};

// @baa 0x01829c80
void FCDocument::sub_01829c80()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

// FUTracker - returns whether the passed tracker contains `this`.
// (slot 2 of FUTracker's vtable)
struct FUTracker
{
    unsigned char sub_01821810(FUTracker* Other);
    // sub_01854400: searches its own array of entries for Other, returns 1/0.
    unsigned char sub_01854400(FUTracker* Other);
};

// @baa 0x01821810
unsigned char FUTracker::sub_01821810(FUTracker* Other)
{
    if (Other)
        return Other->sub_01854400(this);
    return 0;
}

struct C
{
    INT Value;

    C* sub_01824fc0(INT* Source);
};

// @baa 0x01824fc0
C* C::sub_01824fc0(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_018250e0
{
    INT Value_00;
    INT Value_04;

    C_018250e0* sub_018250e0(INT* Source);
};

// @baa 0x018250e0
C_018250e0* C_018250e0::sub_018250e0(INT* Source)
{
    Value_04 = *Source;
    return this;
}

INT sub_0182a7f0(INT* Value);
// @baa 0x0182ad20
INT sub_0182ad20(INT Value)
{
    return sub_0182a7f0(&Value);
}

INT sub_0182a8b0(INT* Value);
// @baa 0x0182ad30
INT sub_0182ad30(INT Value)
{
    return sub_0182a8b0(&Value);
}

INT sub_0182a660(INT* Value);
// @baa 0x0182b400
INT sub_0182b400(INT Value)
{
    return sub_0182a660(&Value);
}

struct C_0182a000
{
    INT Value_00;
    INT Value_04;

    C_0182a000* sub_0182a000(INT* Source);
};

// @baa 0x0182a000
C_0182a000* C_0182a000::sub_0182a000(INT* Source)
{
    Value_04 = Source[1];
    return this;
}

struct C_0182a0f0
{
    INT Value_00;
    INT Value_04;

    C_0182a0f0* sub_0182a0f0(INT* Source);
};

// @baa 0x0182a0f0
C_0182a0f0* C_0182a0f0::sub_0182a0f0(INT* Source)
{
    Value_04 = Source[1];
    return this;
}

struct C_0182a100
{
    INT Value_00;
    INT Value_04;

    C_0182a100* sub_0182a100(INT* Source);
};

// @baa 0x0182a100
C_0182a100* C_0182a100::sub_0182a100(INT* Source)
{
    Value_04 = Source[1];
    return this;
}
