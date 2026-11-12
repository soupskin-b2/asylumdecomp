// FCollada_1850000.cpp (part 19 of 19): 20 functions
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

struct C_01851820
{
    INT Value_00;
    float Value_04;

    C_01851820* sub_01851820();
};

// @baa 0x01851820
C_01851820* C_01851820::sub_01851820()
{
    Value_04 = 0.0f;
    Value_00 = -1;
    return this;
}

struct C_0185b040
{
    char pad_00[0x18];
    volatile INT Flags;
    char pad_1c[0x48];
    float Value;

    void sub_0185b040(float In);
};

// @baa 0x0185b040
void C_0185b040::sub_0185b040(float In)
{
    Flags |= 1;
    Value = In;
}

struct C_0185b050
{
    char pad_00[0x18];
    volatile INT Flags;
    char pad_1c[0x4c];
    float Value;

    void sub_0185b050(float In);
};

// @baa 0x0185b050
void C_0185b050::sub_0185b050(float In)
{
    Flags |= 1;
    Value = In;
}

struct C_0185b060
{
    char pad_00[0x18];
    volatile INT Flags;
    char pad_1c[0x50];
    float Value;

    void sub_0185b060(float In);
};

// @baa 0x0185b060
void C_0185b060::sub_0185b060(float In)
{
    Flags |= 1;
    Value = In;
}

class FUTestSuiteFUBoundingTest
{
public:
    FUTestSuiteFUBoundingTest();

    virtual void vf_0();
};

extern FUTestSuiteFUBoundingTest* g_027b8024;
// @baa 0x0185e600
FUTestSuiteFUBoundingTest::FUTestSuiteFUBoundingTest()
{
    g_027b8024 = this;
}

class FUTestSuiteFUFileManager
{
public:
    FUTestSuiteFUFileManager();

    virtual void vf_0();
};

extern FUTestSuiteFUFileManager* g_027b8028;
// @baa 0x0185f940
FUTestSuiteFUFileManager::FUTestSuiteFUFileManager()
{
    g_027b8028 = this;
}

struct C_0185a590
{
    float Value_00;
    float Value_04;

    C_0185a590* sub_0185a590(float* Source);
};

// @baa 0x0185a590
C_0185a590* C_0185a590::sub_0185a590(float* Source)
{
    Value_04 = Source[1];
    return this;
}

struct C_0185a640
{
    float Value_00;
    float Value_04;

    C_0185a640* sub_0185a640(float* Source);
};

// @baa 0x0185a640
C_0185a640* C_0185a640::sub_0185a640(float* Source)
{
    Value_04 = Source[1];
    return this;
}

struct C_0185a650
{
    float Value_00;
    float Value_04;

    C_0185a650* sub_0185a650(float* Source);
};

// @baa 0x0185a650
C_0185a650* C_0185a650::sub_0185a650(float* Source)
{
    Value_04 = Source[1];
    return this;
}

struct C_0185aed0
{
    INT Value_00;
    INT Value_04;

    C_0185aed0* sub_0185aed0(INT* Source);
};

// @baa 0x0185aed0
C_0185aed0* C_0185aed0::sub_0185aed0(INT* Source)
{
    Value_04 = Source[1];
    return this;
}

struct C_0185aee0
{
    INT Value_00;
    INT Value_04;

    C_0185aee0* sub_0185aee0(INT* Source);
};

// @baa 0x0185aee0
C_0185aee0* C_0185aee0::sub_0185aee0(INT* Source)
{
    Value_04 = Source[1];
    return this;
}

struct C_0185aef0
{
    INT Value_00;
    INT Value_04;

    C_0185aef0* sub_0185aef0(INT* Source);
};

// @baa 0x0185aef0
C_0185aef0* C_0185aef0::sub_0185aef0(INT* Source)
{
    Value_04 = Source[1];
    return this;
}
