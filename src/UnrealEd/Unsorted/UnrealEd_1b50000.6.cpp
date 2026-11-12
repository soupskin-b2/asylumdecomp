// UnrealEd_1b50000.cpp (part 6 of 6): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01b57880(float *);
};

// @baa 0x01b57880
void C::sub_01b57880(float * param_2)
{
    float * param_1 = (float *)this;

  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  return;
}

void sub_00402660(INT Value);
// @baa 0x01b500e0
void __stdcall sub_01b500e0(INT A, INT B)
{
    sub_00402660(A);
}

struct C_01b517a0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b517a0* sub_01b517a0();
};

// @baa 0x01b517a0
C_01b517a0* C_01b517a0::sub_01b517a0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b517b0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b517b0* sub_01b517b0();
};

// @baa 0x01b517b0
C_01b517b0* C_01b517b0::sub_01b517b0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
