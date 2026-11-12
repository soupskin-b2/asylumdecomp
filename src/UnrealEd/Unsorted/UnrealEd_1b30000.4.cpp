// UnrealEd_1b30000.cpp (part 4 of 4): 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b3f0c0
void sub_01b3f0c0(int * param_1, int * param_2, int * param_3)
{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(double *)(iVar1 + 0x30) < *(double *)(*param_1 + 0x30)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  if (*(double *)(iVar1 + 0x30) < *(double *)(*param_2 + 0x30)) {
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  if (*(double *)(iVar1 + 0x30) < *(double *)(*param_1 + 0x30)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}

void sub_00402660(INT Value);
// @baa 0x01b34fd0
void __stdcall sub_01b34fd0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b34ff0
void __stdcall sub_01b34ff0(INT A, INT B)
{
    sub_00402660(A);
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01b36b80();
};

// @baa 0x01b36b80
C* C::sub_01b36b80()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b36ba0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b36ba0* sub_01b36ba0();
};

// @baa 0x01b36ba0
C_01b36ba0* C_01b36ba0::sub_01b36ba0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b36c10
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b36c10* sub_01b36c10();
};

// @baa 0x01b36c10
C_01b36c10* C_01b36c10::sub_01b36c10()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

// @baa 0x01b3df50
void __stdcall sub_01b3df50(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b3e160
void __stdcall sub_01b3e160(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b3e1e0
void __stdcall sub_01b3e1e0(INT A, INT B)
{
    sub_00402660(A);
}

struct C_01b3f720
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b3f720* sub_01b3f720();
};

// @baa 0x01b3f720
C_01b3f720* C_01b3f720::sub_01b3f720()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b3f760
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b3f760* sub_01b3f760();
};

// @baa 0x01b3f760
C_01b3f760* C_01b3f760::sub_01b3f760()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b3f770
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b3f770* sub_01b3f770();
};

// @baa 0x01b3f770
C_01b3f770* C_01b3f770::sub_01b3f770()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
