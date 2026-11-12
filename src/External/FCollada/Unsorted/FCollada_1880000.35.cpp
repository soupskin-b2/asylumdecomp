// FCollada_1880000.cpp (part 35 of 35): 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_0188ebb0(); // 0x04
    void sub_01854290();
};

// @baa 0x0188ebb0
void FCDocument::sub_0188ebb0()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

struct C
{
    char pad_00[0x18];
    volatile DWORD Flags;
    char pad_1c[0xc];
    INT State;

    void sub_01885340();
};

// @baa 0x01885340
void C::sub_01885340()
{
    State = 0;
    Flags |= 1;
}

struct C_01889120
{
    char pad_00[0x18];
    volatile DWORD Flags;
    char pad_1c[0x5c];
    BYTE State;

    void sub_01889120();
};

// @baa 0x01889120
void C_01889120::sub_01889120()
{
    State = 1;
    Flags |= 1;
}

INT sub_0188e790(void* Object);
struct C_0188c090
{
    char pad_00[0x64];
    INT Object;

    INT sub_0188c090();
};

// @baa 0x0188c090
INT C_0188c090::sub_0188c090()
{
    return sub_0188e790(&Object);
}

struct C_018810c0
{
    BYTE Value_00;
    char pad_01[3];
    BYTE Value_04;

    C_018810c0* sub_018810c0(BYTE* Source);
};

// @baa 0x018810c0
C_018810c0* C_018810c0::sub_018810c0(BYTE* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_01881150
{
    INT Value_00;
    INT Value_04;

    C_01881150* sub_01881150(INT* Source);
};

// @baa 0x01881150
C_01881150* C_01881150::sub_01881150(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_01881500
{
    INT Value_00;
    INT Value_04;

    C_01881500* sub_01881500(INT* Source);
};

// @baa 0x01881500
C_01881500* C_01881500::sub_01881500(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_01881520
{
    BYTE Value_00;
    char pad_01[3];
    BYTE Value_04;

    C_01881520* sub_01881520(BYTE* Source);
};

// @baa 0x01881520
C_01881520* C_01881520::sub_01881520(BYTE* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018861c0
{
    float Value_00;
    float Value_04;

    C_018861c0* sub_018861c0(float* Source);
};

// @baa 0x018861c0
C_018861c0* C_018861c0::sub_018861c0(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_01886280
{
    float Value_00;
    float Value_04;

    C_01886280* sub_01886280(float* Source);
};

// @baa 0x01886280
C_01886280* C_01886280::sub_01886280(float* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_01886290
{
    BYTE Value_00;
    char pad_01[3];
    BYTE Value_04;

    C_01886290* sub_01886290(BYTE* Source);
};

// @baa 0x01886290
C_01886290* C_01886290::sub_01886290(BYTE* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018862a0
{
    BYTE Value_00;
    char pad_01[3];
    BYTE Value_04;

    C_018862a0* sub_018862a0(BYTE* Source);
};

// @baa 0x018862a0
C_018862a0* C_018862a0::sub_018862a0(BYTE* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_01889100
{
    BYTE Value_00;
    char pad_01[3];
    BYTE Value_04;

    C_01889100* sub_01889100(BYTE* Source);
};

// @baa 0x01889100
C_01889100* C_01889100::sub_01889100(BYTE* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_0188e730
{
    INT Value_00;
    INT Value_04;

    C_0188e730* sub_0188e730(INT* Source);
};

// @baa 0x0188e730
C_0188e730* C_0188e730::sub_0188e730(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_0188ea10
{
    INT Value_00;
    float Value_04;

    C_0188ea10* sub_0188ea10();
};

// @baa 0x0188ea10
C_0188ea10* C_0188ea10::sub_0188ea10()
{
    Value_04 = 0.0f;
    Value_00 = 0;
    return this;
}
