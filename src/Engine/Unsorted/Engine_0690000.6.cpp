// Engine_0690000.cpp (part 6 of 8): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 * sub_006975d0();
};

int sub_005c7a20(void);
extern undefined * g_01ec0c78;
// @baa 0x006975d0
undefined4 * C::sub_006975d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *param_1 = (undefined4)(&g_01ec0c78);
  return param_1;
}

struct UDecalComponent_ : public UDecalComponent
{
    void sub_0069ba80();
    void sub_006f3bf0(UINT Param);
    void sub_0069bb90(UINT Param)
    {
        sub_0069ba80();
        sub_006f3bf0(Param);
    }
};

typedef void (UDecalComponent_::*Method)(UINT);

// @baa 0x0069bb90
static Method g_0069bb90 = &UDecalComponent_::sub_0069bb90;

struct F3_0069be30 { float X; float Y; float Z; };

struct C_0069be30
{
    char Pad_00[0x28];
    float Field_28;
    char Pad_2C[12];
    float Field_38;
    char Pad_3C[12];
    float Field_48;

    F3_0069be30 sub_0069be30();
};

// @baa 0x0069be30
F3_0069be30 C_0069be30::sub_0069be30()
{
    F3_0069be30 R;
    R.X = Field_28;
    R.Y = Field_38;
    R.Z = Field_48;
    return R;
}

void Use_0069be30(C_0069be30* This)
{
    This->sub_0069be30();
}

// @baa 0x0069be00
void __stdcall sub_0069be00(INT* Out, INT B)
{
    *Out = 0;
}

int sub_0053d240(INT, INT, INT);
// @baa 0x00699200
 // 0053d240
void __stdcall sub_00699200(INT A, INT B, INT C)
{
	sub_0053d240(A, B, C);
}
