// GFx_1950000.cpp (part 3 of 3): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int __stdcall sub_018d7170(int);
// @baa 0x0195ccf0
void sub_0195ccf0(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C
{
    INT pad_00;
    INT pad_04;
    INT pad_08;
    INT Value;

    INT* sub_0195b160(INT* Out);
};

// @baa 0x0195b160
INT* C::sub_0195b160(INT* Out)
{
    *Out = Value;
    return Out;
}

struct C_0195b000
{
    INT Value_00;
    INT Value_04;
    BYTE Flag_08;

    C_0195b000* sub_0195b000();
};

// @baa 0x0195b000
C_0195b000* C_0195b000::sub_0195b000()
{
    Value_00 = 0;
    Value_04 = 0;
    Flag_08 = 0;
    return this;
}

struct C_0195b060
{
    BYTE Value;

    C_0195b060* sub_0195b060(BYTE* Source);
};

// @baa 0x0195b060
C_0195b060* C_0195b060::sub_0195b060(BYTE* Source)
{
    Value = *Source;
    return this;
}

struct C_0195b600
{
    char pad_00[0x9b8];
    UINT Value;

    INT sub_0195b600();
};

// @baa 0x0195b600
INT C_0195b600::sub_0195b600()
{
    return Value > 0;
}
