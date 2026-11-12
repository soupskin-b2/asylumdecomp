// UnBsp.cpp (part 4 of 5): 3 functions
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
