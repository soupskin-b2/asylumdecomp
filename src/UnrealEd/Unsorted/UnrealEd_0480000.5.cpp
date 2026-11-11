// UnrealEd_0480000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct Sub00488cb0_Obj
{
    unsigned char sub_00488cb0_field[0x60];
    float sub_00488cb0_value;
};

extern Sub00488cb0_Obj* g_02663d88;
// @baa 0x00488cb0
unsigned char sub_00488cb0(float* OutValue)
{
    Sub00488cb0_Obj* const Obj = g_02663d88;
    if (Obj != 0)
    {
        *OutValue = Obj->sub_00488cb0_value;
        return 1;
    }
    return 0;
}
