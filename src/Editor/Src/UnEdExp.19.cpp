// UnEdExp.cpp (part 19 of 19): 3 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray: size + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Count;   // 0x04
    INT* Data;   // 0x08
    INT& sub_00eedac0(UINT Index);
};

// @baa 0x00eedac0
INT& FMArray::sub_00eedac0(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 509);
    return Data[Index];
}

struct C
{
    INT Value_00;
    INT Value_04;

    C* sub_00eece30(INT* Source);
};

// @baa 0x00eece30
C* C::sub_00eece30(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_00eee270
{
    INT Value_00;
    INT Value_04;

    C_00eee270* sub_00eee270(INT* Source);
};

// @baa 0x00eee270
C_00eee270* C_00eee270::sub_00eee270(INT* Source)
{
    Value_04 = *Source;
    return this;
}
