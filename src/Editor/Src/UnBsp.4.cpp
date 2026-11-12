// UnBsp.cpp (part 4 of 5): 9 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray-like container: count + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Unk04;   // 0x04
    INT Count;   // 0x08
    INT* Data;   // 0x0c
    INT sub_00ec7c30(UINT Index);
};

// @baa 0x00ec7c30
INT FMArray::sub_00ec7c30(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506);
    return Data[Index];
}

struct C
{
    INT pad_00[6];
    volatile DWORD Flags_18;
    INT pad_1c[21];
    INT field_70;

    void sub_00ec6d10();
};

// @baa 0x00ec6d10
void C::sub_00ec6d10()
{
    field_70 = 0;
    Flags_18 |= 1;
}

struct C_00ec6d00
{
    INT Value_00;
    INT Value_04;

    C_00ec6d00* sub_00ec6d00(INT* Source);
};

// @baa 0x00ec6d00
C_00ec6d00* C_00ec6d00::sub_00ec6d00(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_00ec6d20
{
    INT Value_00;
    INT Value_04;

    C_00ec6d20* sub_00ec6d20(INT* Source);
};

// @baa 0x00ec6d20
C_00ec6d20* C_00ec6d20::sub_00ec6d20(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_00ec6d30
{
    char pad_00[0x18];
    volatile INT Flags;
    char pad_1c[0x2c];
    INT Value;

    void sub_00ec6d30(INT In);
};

// @baa 0x00ec6d30
void C_00ec6d30::sub_00ec6d30(INT In)
{
    Value = In;
    Flags |= 1;
}

struct C_00ec6d80
{
    INT Value_00;
    INT Value_04;

    C_00ec6d80* sub_00ec6d80(INT* Source);
};

// @baa 0x00ec6d80
C_00ec6d80* C_00ec6d80::sub_00ec6d80(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_00ec6dc0
{
    char pad_00[0x18];
    volatile INT Flags;
    char pad_1c[0x54];
    INT Value;

    void sub_00ec6dc0(INT In);
};

// @baa 0x00ec6dc0
void C_00ec6dc0::sub_00ec6dc0(INT In)
{
    Value = In;
    Flags |= 1;
}

struct C_00ec6dd0
{
    INT Value_00;
    INT Value_04;

    C_00ec6dd0* sub_00ec6dd0(INT* Source);
};

// @baa 0x00ec6dd0
C_00ec6dd0* C_00ec6dd0::sub_00ec6dd0(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_00ec76c0
{
    char pad_0[0xc];
    INT Value_c;
    INT Value_10;
    INT Value_14;

    C_00ec76c0* sub_00ec76c0();
};

// @baa 0x00ec76c0
C_00ec76c0* C_00ec76c0::sub_00ec76c0()
{
    Value_c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}
