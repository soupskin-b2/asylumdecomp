// FCollada_1880000.cpp (part 35 of 35): 3 functions
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
