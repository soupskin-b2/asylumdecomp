// UnrealEd_1b40000.cpp (part 5 of 5): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b49d70
float10 sub_01b49d70(double * param_1, double * param_2)
{
  if (*param_1 < *param_2) {
    return (float10)*param_1;
  }
  return (float10)*param_2;
}

struct C
{
    DWORD Flags;

    BYTE sub_01b453f0(INT Mask);
};

// @baa 0x01b453f0
BYTE C::sub_01b453f0(INT Mask)
{
    return (Flags & Mask) != 0;
}

struct C_01b45440
{
    double First;
    double Second;
    double Third;

    C_01b45440* sub_01b45440();
};

// @baa 0x01b45440
C_01b45440* C_01b45440::sub_01b45440()
{
    First = 0.0;
    Second = 0.0;
    Third = 0.0;
    return this;
}

void sub_00402660(INT Value);
// @baa 0x01b433c0
void __stdcall sub_01b433c0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b43460
void __stdcall sub_01b43460(INT A, INT B)
{
    sub_00402660(A);
}

struct C_01b44250
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b44250* sub_01b44250();
};

// @baa 0x01b44250
C_01b44250* C_01b44250::sub_01b44250()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

// @baa 0x01b4ffb0
void __stdcall sub_01b4ffb0(INT A, INT B)
{
    sub_00402660(A);
}
