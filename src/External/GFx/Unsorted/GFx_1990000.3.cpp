// GFx_1990000.cpp (part 3 of 3): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct GASObjectInterface { BYTE sub_01990460(INT a, INT b); };

// @baa 0x01990460
BYTE GASObjectInterface::sub_01990460(INT a, INT b)
{
    return 0;
}

// GFx: tests bit 7 of a 16-bit flags field.
struct GFxFlagsOwner
{
    char           Header[0x28];
    unsigned short Flags;

    bool sub_01994080() const;
};

// @baa 0x01994080
bool GFxFlagsOwner::sub_01994080() const
{
    return (Flags & 0x80) != 0;
}

// @baa 0x019906c0
INT __stdcall sub_019906c0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x019906e0
INT __stdcall sub_019906e0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x019906f0
INT __stdcall sub_019906f0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x019999f0
INT __stdcall sub_019999f0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999a00
INT __stdcall sub_01999a00(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999c00
INT __stdcall sub_01999c00(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999c20
INT __stdcall sub_01999c20(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999c30
INT __stdcall sub_01999c30(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}
